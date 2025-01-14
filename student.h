#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class CCourse
{
    private:
        string course_name;
        string course_code;
        float course_cost;
    public:
        CCourse(); // Constructor

        setCourseName(string cn1);

        setCourseCode(string cc1);

        setCourseCost(float ccc1);

        AddCourse(string cn2, string cc2, float ccc2);

        string getCourseName();

        string getCourseCode();

        float getCourseCost();

        void getCourseInfo(int i);
};

class CStudent
{
    private:
        string student_name;
        int student_id;
        string student_email_username;
        string student_major;
        float student_grades[5];
        float student_score;
        string student_email_password;
    public:
        CStudent();  // Constructor

        setStudentName(string sn1);

        setStudentId(int id1);

        setStudentEU(string user1);

        setStudentM(string major1);

        setStudentEP(string password1);

        setStudentG();

        registerStudent(string sn2, int id2, string user2, string major2, string password2);

        string getStudentName();

        int getStudentId();

        string getStudentEU();

        string getStudentM();

        string getStudentEP();

        float getStudentG(int i);

        void getStudentInfo(int i);

        float claculateGPA();
};

class CPG_Student : public CStudent
{
    private:
        string pg_student_job_title;
    public:
        setPostStudent(string JT);

        string getPostStudent();
};

#endif
