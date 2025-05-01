# 🧠 AI Automated Face Attendance System

An AI-powered facial recognition-based attendance management system for educational institutions. This system enables teachers to manage student data, automate attendance via webcam, and review attendance history with filtering options.

---

## 🚀 Features

- 🎯 Automated face recognition for student attendance
- 🧑‍🏫 Teacher panel:
  - Add new or transferred students
  - View, update, or delete student information (CRUD)
  - Filter student records easily
- 📅 Attendance history view with filter by **month** and **date**
- 🗃️ MySQL-based local database integration
- 💻 User-friendly desktop UI using CustomTkinter

---

## 🛠️ Technologies Used

- Python 3.x
- OpenCV
- `face_recognition` library
- CustomTkinter (for GUI)
- MySQL (XAMPP or standalone server)

---

## 📦 Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/face-attendance-ai.git

# Navigate to the project directory
cd face-attendance-ai

# Install Python dependencies
pip install -r requirements.txt

# Make sure your MySQL server is running

# Run the application
python main.py
