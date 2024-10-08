#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int id;
    int age;
    string name;
    int nos;

    student()
    {
        cout << "called ctor" << endl;
    }

    void study()
    {
        cout << "studing" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
};

int main()
{
    student s1;
    s1.id = 4;
    s1.name = "Aman";
    cout << s1.id << endl;
    cout << s1.name << endl;
}