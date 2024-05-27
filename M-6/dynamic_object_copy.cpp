#include <bits/stdc++.h>

using namespace std;

class Person
{
    public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }


};

int main()
{
    Person *Rakib = new Person("Rakib ahsan", 35);
    Person *Sakib = new Person ("Sakib", 45);
    // Rakib = Sakib; dont do this
    // 1
    // Rakib->age = Sakib->age;
    // Rakib->name = Sakib->name;
    //2
    *Rakib = *Sakib;
    
    delete Sakib;
    cout << Rakib->age << " " << Rakib->name;
    

    return 0;
}