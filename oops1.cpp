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

    student(int _id, int _age, string _name, int _nos)
    {
        id = _id;
        age = _age;
        name = _name;
        nos = _nos;
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

    student s2(101, 18, "saim", 39);
    cout << s2.name << endl;
    cout << s2.age << endl;
}