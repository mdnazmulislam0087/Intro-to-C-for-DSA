#include <bits/stdc++.h>

using namespace std;

class Person
{
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int mar1, int mar2)
    {
        name = nm;
        age = ag;
        marks1 = mar1;
        marks2 = mar2;
        
    }
    void hello()
    {
        cout << name << " "<< age<< endl;
    }
    int total_marks()
    {
        return marks1+marks2;
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