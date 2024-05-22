#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double cgpa;

    Student (int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }

};

int main()
{
    Student * karim = new Student (342,10,4.56);
    cout <<karim->cgpa << " "<< karim->cls << " "<<karim->cgpa<<endl;
    return 0;
}