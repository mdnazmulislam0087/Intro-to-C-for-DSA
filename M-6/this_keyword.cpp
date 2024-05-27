#include <bits/stdc++.h>

using namespace std;

class Person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string name, int age, int marks1, int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
        
    }
    void hello()
    {
        cout << this->name << " "<< this->age<< endl;
    }
    int total_marks()
    {
        return this->marks1+this->marks2;
    }
};

int main()
{
    Person Nazmul("Nazmul", 35,33,3);
    // cout << Nazmul.name << " " << Nazmul.age;
    Nazmul.hello();
    cout << Nazmul.total_marks() <<endl;
    return 0;
}