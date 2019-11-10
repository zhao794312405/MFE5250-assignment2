// Created by 赵文锴 on 2019/11/9.
#include <iostream>

using namespace std;

class student
{
public:
    student(string,string,double);
    string getNum() {return number;}
    string getName() {return name;}
    double getGrade() {return grade;}
    void display();

private:
    string number;
    string name;
    double grade;
};

student::student(string number, string name, double grade) {
    this->number=number;
    this->name=name;
    this->grade=grade;
}

void student::display()
{
    cout << "student number: " << number << endl << "student name: " << name << endl << "student grade: " << grade
         << endl;
}

class teacher
{
public:
    teacher(){}
    teacher(student &);
    teacher(string,string,string);
    void display();

private:
    string number;
    string name;
    string department;
};

teacher::teacher(string number,string name,string department)
    {
        this->number=number;
        this->name=name;
        this->department=department;
    }

void teacher::display()
{
    cout << "teacher number: " << number << endl << "teacher name: " << name << endl << "teacher department: "
         << department << endl;
}

teacher::teacher(student &student)
{
    this->number=student.getNum();
    this->name=student.getName();
    this->department="1";

}


int main()
{
    student student1("1111","Wang",50);
    teacher teacher1("1001","Li","A"),teacher2;

    cout<<"teacher1=\n";
    teacher1.display();

    cout<<endl;
    cout<<"student1=\n";
    student1.display();

    cout<<endl;
    teacher2=teacher(student1);
    cout<<"teacher2=\n";
    teacher2.display();

    return 0;
}

