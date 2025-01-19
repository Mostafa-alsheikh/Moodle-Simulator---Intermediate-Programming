# Moodle Simulator

This project simulates a basic Moodle learning management system (LMS) with a focus on handling users, courses, and assignments. The goal of this simulator is to model the functionality of a Moodle system, demonstrating key concepts of object-oriented programming and creating a system for managing courses, users, and assignments in an educational context.

## Features

### Mandatory Features
1. **User Management**  
   Users can be added, removed, and updated. Users can be assigned different roles (e.g., student, teacher, admin) that affect their access and permissions within the system.

2. **Course Management**  
   The system allows the creation, modification, and deletion of courses. Each course includes a title, description, and list of enrolled students. Teachers can manage the content and assignments of the courses.

3. **Assignment Management**  
   Teachers can create, edit, and delete assignments. Students can submit their assignments, and their submissions are stored and available for grading.

4. **Gradebook**  
   The system stores grades for assignments and provides an interface for both students and teachers to view grades. Teachers can assign grades for each assignment submitted by students.

5. **Login System**  
   Users can log in using their credentials (username and password). Different user roles will determine access to various parts of the system.

### Optional Features
1. **Role-based Access Control**  
   Users' access to courses and assignments is based on their role (admin, teacher, or student). Admins can manage users and courses, while teachers can manage assignments, and students can submit assignments and view grades.

2. **Course Enrollment**  
   Students can enroll in available courses. The system ensures that only valid users can enroll in courses, and they are automatically added to the course roster.

3. **Assignment Submission**  
   Students can submit assignments in various formats, such as text files or PDFs. The system supports checking for late submissions.

4. **Database Integration**  
   The system stores data persistently using a file or database, allowing for data retrieval after the program is closed and restarted.

## Technologies Used
- **Python 3.x**: The programming language used for the simulation.
- **Object-Oriented Programming (OOP)**: Classes and objects to model users, courses, and assignments.
- **File Handling or SQLite**: For storing and retrieving user, course, and assignment data.

## Getting Started

### Prerequisites
Make sure you have Python 3.x installed on your machine.

### Running the Application

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/moodle-simulator.git
