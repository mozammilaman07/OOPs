#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << x << endl;
    {
        int x = 4;
        // cout << x << endl;
        cout << ::x << endl;
    }
    // x = 10;
    cout << x << endl;
}