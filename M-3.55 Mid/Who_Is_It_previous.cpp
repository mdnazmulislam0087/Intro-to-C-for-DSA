#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id, marks;
    string name;
    char section;

    Student(int id, string name, char section, int marks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }
};

int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 0; t < test_case; t++)
    {
        int id, marks;
        string name;
        char section;
        Student best(1, "Ass", 'A', -1);
        // cout << best.id << " "<< best.name <<" "<< best.section<<" "<< best.marks<<endl;

        for (int i = 0; i < 3; i++)
        {
            cin >> id >> name >> section >> marks;
            Student now(id, name, section, marks);
            if (best.marks < now.marks)
            {
                best = now;
            }
            else if (best.marks == now.marks)
            {
                if (best.id > now.id)
                {
                    best = now;
                }
            }
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.marks<<endl;
    }
    return 0;
}
