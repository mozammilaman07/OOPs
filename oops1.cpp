#include <iostream>
using namespace std;

class student
{
public:
    int id;
    int age;
    string name;
    int nos;

    void study()
    {
        cout << "studing" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }
}

int
main()
{
    student s1;
    s1.id = 4;
    cout << s1.id << endl;
}