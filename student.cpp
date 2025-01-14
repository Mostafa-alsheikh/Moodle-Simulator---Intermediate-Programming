#include "student.h"

CCourse :: CCourse() // Constructor
    {
        course_name = "NULL";
        course_code = "NULL";
        course_cost = 0;
    }

CCourse :: setCourseName(string cn1)
    {
        course_name = cn1;
    }

CCourse :: setCourseCode(string cc1)
    {
        course_code = cc1;
    }

CCourse :: setCourseCost(float ccc1)
    {
        course_cost = ccc1;
    }

CCourse :: AddCourse(string cn2, string cc2, float ccc2)
    {
        setCourseName(cn2);
        setCourseCode(cc2);
        setCourseCost(ccc2);
    }

string CCourse :: getCourseName()
    {
        return course_name;
    }

string CCourse :: getCourseCode()
    {
        return course_code;
    }

float CCourse :: getCourseCost()
    {
        return course_cost;
    }

void CCourse :: getCourseInfo(int i)
    {
        cout << endl << "Course " << i << " Name is: " << getCourseName() << "\n" << "Course " << i << " Code is: " << getCourseCode() << "\n" << "Course " << i << " Cost is: " << getCourseCost() << "\n";
    }

CStudent :: CStudent() // Constructor
    {
        student_name = "NULL";
        student_id = 0;
        student_email_username = "NULL";
        student_major = "NULL";
        student_score = 0;
        student_email_password = "NULL";
        for(int i = 0; i < 5; i++)
        {
            student_grades[i] = 0;
        }
    }

CStudent :: setStudentName(string sn1)
    {
        student_name = sn1;
    }

CStudent :: setStudentId(int id1)
    {
        student_id = id1;
    }

CStudent :: setStudentEU(string user1)
    {
        student_email_username = user1;
    }

CStudent :: setStudentM(string major1)
    {
        student_major = major1;
    }

CStudent :: setStudentEP(string password1)
    {
        student_email_password = password1;
    }

CStudent :: setStudentG()
    {
        for(int i = 0; i < 5;i++)
        {
            cout << "Enter Grade " << i + 1 << ": ";
            cin >> student_grades[i];
        }
    }

CStudent :: registerStudent(string sn2, int id2, string user2, string major2, string password2)
    {
        setStudentName(sn2);
        setStudentM(major2);
        setStudentId(id2);
        setStudentEU(user2);
        setStudentEP(password2);
        setStudentG();
    }

string CStudent :: getStudentName()
    {
        return student_name;
    }

int CStudent :: getStudentId()
    {
        return student_id;
    }

string CStudent :: getStudentEU()
    {
        return student_email_username;
    }

string CStudent :: getStudentM()
    {
        return student_major;
    }

string CStudent :: getStudentEP()
    {
        return student_email_password;
    }

float CStudent :: getStudentG(int i)
    {
        return student_grades[i];
    }

void CStudent :: getStudentInfo(int i)
    {
        cout << endl << "Student " << i << " Name is: " << getStudentName() << "\n" << "Student " << i << " ID is: " << getStudentId() << "\n" << "Student " << i << " User-name is: " << getStudentEU() << "\n" << "Student " << i << " Password is: " << getStudentEP() << "\n" << "Student " << i << " Major is: " << getStudentM() << "\n";
    }

float CStudent :: claculateGPA()
    {
        float sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += student_grades[i];
        }
        student_score = sum / 100;

        return student_score;
    }

CPG_Student :: setPostStudent(string JT)
    {
        pg_student_job_title = JT;
    }

string CPG_Student :: getPostStudent()
    {
        return pg_student_job_title;
    }

