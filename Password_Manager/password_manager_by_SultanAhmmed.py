'''Script writen by Sultan Ahmmed on Aug 27, 2024'''
"""Password Manager"""

from cryptography.fernet import Fernet
import getpass
import os
import time
import sys


def write_key():
    key = Fernet.generate_key()
    with open("key.key", "wb") as key_file:
        key_file.write(key)


def load_key():
    if not os.path.exists("key.key"):
        print("Key file not found. Generating a new key...")
        write_key()
    with open("key.key", "rb") as file:
        key = file.read()
    return key

key = load_key()
fer = Fernet(key)

def add():
    MASTER_PASS = getpass.getpass("Type Master password: ")
    Ac_name = input("Account Name: ")
    password = getpass.getpass("Password: ")
    data = b"|".join([fer.encrypt(item.encode()) for item in [Ac_name, MASTER_PASS, password]]) 
    with open("password.dat", "ab") as f:  
        f.write(fer.encrypt(data) + b"\n")
        print("Added Successfully !")
        input('\nPress any key...')
        

def view():
    Varify_pass = getpass.getpass("Type Master Password: ")
    try:
        with open("password.dat", "rb") as f: 
            print("Account Information: ")
            for line in f.readlines():
                decrypted_data = fer.decrypt(line.strip()) 
                ac_name, master_pass, passwd = decrypted_data.split(b"|") 
                if fer.decrypt(master_pass).decode() == Varify_pass:  
                    print("Account Name:", fer.decrypt(ac_name).decode(), "| Password:", fer.decrypt(passwd).decode())
        
        input('\nPress any key...')
    except:
        print("No data is Available now!")

def terminal_clear():
    os.system('cls' if os.name=='nt' else 'clear')


def progress_bar_animation(total_duration=5):
    bar_length = 50
    for i in range(bar_length + 1):
        time.sleep(total_duration / bar_length)
        progress = '=' * i
        remaining = ' ' * (bar_length - i)
        sys.stdout.write(f'\r[{progress}{remaining}] {i * 100 // bar_length}%')
        sys.stdout.flush()
    sys.stdout.write('\n')

progress_bar_animation()

while True:
    terminal_clear()
    print("======<Welcome to Password Manager>======\n")
    mode = input("Would you like to add, view password, or quit: ").lower()
    if mode == "add" or mode == "a":
        add()
    elif mode == "view" or mode == "v":
        view()
    elif mode == "quit" or mode == "q":
        break
    else:
        print("Invalid mode!")
        continue
