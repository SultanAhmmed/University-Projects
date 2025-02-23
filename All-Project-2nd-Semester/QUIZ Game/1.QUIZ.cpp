#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include<fstream>
#include<windows.h>
using namespace std;

struct quizQuestions
{
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int ansNo;
};
struct sportsQuestions
{
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int ansNo;
};

struct sciencQuestions
{
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int ansNo;
};

int main() {
    string myname;
    ofstream myfile("Participant.txt");

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 5);
    cout << "\n\n\n\n\n\n\n";
    cout << "\t\t\t------------------------------------------------------------\n";
    cout << "\n\t\t\t\t\t **WELCOME TO QUIZ GAME**" << endl;
    cout << "\n\t\t\t-----------------------------------------------------------\n";

    Sleep(2000);
    for(int i = 3; i >=1; i--){
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\tGame will Start in " << i << " seconds!" << endl;
        Sleep(1000);

    }
    system("cls");
    cout << endl;

    string Name;
    int ID;

    cout << " What is your Name?" << endl << endl;;
    cout << " => ";
    getline(cin, Name);

    cout << "\n Enter your Student ID?" << endl <<endl;
    cout << " => ";
    cin >> ID;

    quiz:
    system("cls");

    string Respond;
    cout << "\n\n\n\n\tDo you want to participate in the Quiz Game, " << Name << "? (yes/no)" << endl;
    cout << endl;
    cout << " => ";
    cin >> Respond;

    if (Respond == "yes") {
        system("cls");
        cout << "\n\t\t\t\t\t ** How to Play **" << endl;
        string myText;
        ifstream MyReadFile("Rules for Quiz game.txt");
        while (getline(MyReadFile, myText)) {
            cout << "\n" << myText;
        }
        MyReadFile.close();
        cout << endl;
        cout << "\n\n\t\t\t\t ***Wish you Best of Luck![press any key]***" << endl;
        system("pause > nul");
        goto game;
    } else {
        system("cls");
        cout << endl << endl;
        cout << " Okay Good Bye!" << endl << endl;
        cout << " Enter any key to exit....";
        system("pause > null");
        cout <<endl << endl << endl;
        return 0;
    }

    game:
    system("cls");
    int chooseAnsNo;
    int rightAns = 0;
    int wrongAns = 0;
    int chooseQuiz;
    quizQuestions question[10];

    cout<<"\n\nChoose your segment which you want to play : "<<endl;
    cout<<"\t\t    -------------------------------------\n";
    cout<<"\t\t\tPress 1 for Technology "<<endl;
    cout<<"\t\t    -------------------------------------\n";
    cout<<"\t\t\tPress 2 for General Knowledge "<<endl;
    cout<<"\t\t    -------------------------------------\n";
    cout<<"\t\t\tPress 3 for Sports "<<endl;
    cout<<"\t\t    -------------------------------------\n";

    cout <<"     => ";
    cin>>chooseQuiz;

    if (chooseQuiz == 1)
    {
        system("cls");

        question[0].question = "When was Computer invented ?";
        question[0].option1 = "1822";
        question[0].option2 = "1823";
        question[0].option3 = "1856";
        question[0].option4 = "1834";
        question[0].ansNo = 1;

        question[1].question = "When was Telephone invented";
        question[1].option1 = "1844";
        question[1].option2 = "1783";
        question[1].option3 = "1876";
        question[1].option4 = "1900";
        question[1].ansNo = 3;

        question[2].question = "In which decade was the American Institute of Electrical Engineers (AIEE) founded?";
        question[2].option1 = "1850s";
        question[2].option2 = "1860s";
        question[2].option3 = "1870s";
        question[2].option4 = "1876s";
        question[2].ansNo = 4;

        question[3].question = "What is part of a database that holds only one type of information?";
        question[3].option1 = "Report";
        question[3].option2 = "Field";
        question[3].option3 = "Record";
        question[3].option4 = "File";
        question[3].ansNo = 2;

        question[4].question = "When was the frist Robot invented?";
        question[4].option1 = "1950";
        question[4].option2 = "1978";
        question[4].option3 = "1800";
        question[4].option4 = "1958";
        question[4].ansNo = 1;


        for (int i = 0; i < 5; i++)
        {
            system("cls");

            cout<<"\n\t*That's Great You have selected Tecnology's questions segment.*\n"<<endl;
            cout<<" Answer the following questions: \n"<<endl;

            cout<<"\n Questions: \n" << endl <<" "<<question[i].question <<endl << endl;

            cout<<" 1. "<<question[i].option1 <<"     "<<"2. "<<question[i].option2 <<endl;
            cout<<" 3. "<<question[i].option3 <<"     "<<"4. "<<question[i].option4 <<endl;

            cout << endl;
            cout << "=> ";
            cin>>chooseAnsNo;

            if(chooseAnsNo == question[i].ansNo)
            {
                rightAns ++;
            }
            else
            {
                wrongAns ++;
            }
        }

        system("cls");
        cout <<endl << endl;
        cout<<"=> Right Answer: "<<rightAns <<endl<<"=> Wrong Answer: "<<wrongAns<<endl;

        myfile <<"Name: "<<Name << endl
        <<"ID: "<< ID<<endl
        <<"Chosen Segment: 1(Tecnology)"<<endl
        << "Right Answer: "<<rightAns <<endl
        <<"Wrong Answer: "<<wrongAns<<endl;

        cout << endl;
        cout << " Enter any key to back Main menu.....";
        system("pause > nul");
        goto quiz;
    }


// general knowlege question

    else if (chooseQuiz == 2)
    {
        system("cls");

        question[0].question = "The 'Black flag' signifies?";
        question[0].option1 = "Revolution";
        question[0].option2 = "Peace";
        question[0].option3 = "Protest";
        question[0].option4 = "Truce";
        question[0].ansNo = 1;

        question[1].question = "Oscar Awards were instituted in?";
        question[1].option1 = "1968";
        question[1].option2 = "1929";
        question[1].option3 = "1901";
        question[1].option4 = "1953";
        question[1].ansNo = 4;

        question[2].question = "Prince Charles and Princess Diana of Britain announce their separation in?";
        question[2].option1 = "1990";
        question[2].option2 = "1992";
        question[2].option3 = "1996";
        question[2].option4 = "1997";
        question[2].ansNo = 2;

        question[3].question = "Sheikh Mujibur Rahman is a well known freedom fighter of?";
        question[3].option1 = "Bangladesh";
        question[3].option2 = "Myanmar";
        question[3].option3 = "Pakistan";
        question[3].option4 = "Afghanistan";
        question[3].ansNo = 1;

        question[4].question = "When did Bangladesh join UNICEF?";
        question[4].option1 = "1945";
        question[4].option2 = "1953";
        question[4].option3 = "1952";
        question[4].option4 = "1972";
        question[4].ansNo = 3;


        for (int i = 0; i < 5; i++)
        {
            system("cls");

            cout<<"\n\t*That's Great You have selected General Knowledge's questions segment.*\n"<<endl;
            cout<<" Answer the following questions: \n"<<endl;

            cout<<"\n Questions: \n" << endl <<" "<<question[i].question <<endl << endl;

            cout<<" 1. "<<question[i].option1 <<"     "<<"2. "<<question[i].option2 <<endl;
            cout<<" 3. "<<question[i].option3 <<"     "<<"4. "<<question[i].option4 <<endl;

            cout << endl;
            cout << "=> ";
            cin>>chooseAnsNo;

            if(chooseAnsNo == question[i].ansNo)
            {
                rightAns ++;
            }
            else
            {
                wrongAns ++;
            }
        }


        system("cls");
        cout <<endl << endl;
        cout<<"=> Right Answer: "<<rightAns <<endl<<"=> Wrong Answer: "<<wrongAns<<endl;

        myfile <<"Name: "<<Name << endl<<
        "ID: "<< ID<<endl<<
        "Chosen Segment: 2(General Knowledge)"<<endl <<
        "Right Answer: "<<rightAns <<endl <<
        "Wrong Answer: "<<wrongAns<<endl;

        cout << endl;
        cout << " Enter any key to back Main menu.....";
        system("pause > nul");
        goto quiz;
    }

// sports question

    else if (chooseQuiz == 3)
    {
        system("cls");
        question[0].question = "Who has the most number of Ballon d Or?";
        question[0].option1 = "Lionel Messi";
        question[0].option2 = "Cristiano Ronaldo";
        question[0].option3 = "Neymar";
        question[0].option4 = "Luka Modric";
        question[0].ansNo = 1;

        question[1].question = "Who is the highest goal scorer in football history?";
        question[1].option1 = "Maradona";
        question[1].option2 = "Pele";
        question[1].option3 = "Messi";
        question[1].option4 = "Ronaldo";
        question[1].ansNo = 4;

        question[2].question = "Who won FIFA World Cup 2010 final";
        question[2].option1 = "Argentina";
        question[2].option2 = "Spain";
        question[2].option3 = "Germany";
        question[2].option4 = "Brazil";
        question[2].ansNo = 2;

        question[3].question = "Who has the most 100 in cricket?";
        question[3].option1 = "Sachin Tendulkar";
        question[3].option2 = "Virat Kohli";
        question[3].option3 = "Babar Azam";
        question[3].option4 = "Rohit Sharma";
        question[3].ansNo = 1;

        question[4].question = "Who has the most wickets in cricket history?";
        question[4].option1 = "Starc";
        question[4].option2 = "Shakib Al Hasan";
        question[4].option3 = "Murali Dharan";
        question[4].option4 = "Breet Lee";
        question[4].ansNo = 3;

        for (int i = 0; i < 5; i++)
        {
            system("cls");
            cout<<"\n\t*That's Great You have selected Sports questions segment.*\n"<<endl;
            cout<<"\n Answer the following questions: \n"<<endl;

            cout<<"\n Questions: \n" << endl <<" "<<question[i].question <<endl << endl;

            cout<<" 1. "<<question[i].option1 <<"     "<<"2. "<<question[i].option2 <<endl;
            cout<<" 3. "<<question[i].option3 <<"     "<<"4. "<<question[i].option4 <<endl;
            cout << endl;
            cout << "=> ";
            cin>>chooseAnsNo;

            if(chooseAnsNo == question[i].ansNo)
            {
                rightAns ++;
            }
            else
            {
                wrongAns ++;
            }
        }
        system("cls");
        cout<<endl <<endl;
        cout<<"=> Right Answer: "<<rightAns <<endl << endl<<"=> Wrong Answer: "<<wrongAns<<endl;

        myfile <<"Name: "<<Name << endl<<
        "ID: "<< ID<<endl<<
        "Chosen Segment: 3(Sports)"<<endl <<
        "Right Answer: "<<rightAns <<endl <<
        "Wrong Answer: "<<wrongAns<<endl;
        cout << endl;
        cout << "Enter any key to back Main menu.....";
        system("pause > nul");
        goto quiz;

    }

    return 0;

}

