#include <iostream>
using namespace std;

enum COLOR
{
    RED,
    GREEN,
    YELLOW,
    SAFFRON
};

int main()
{
    COLOR color = RED;

    cout << color << endl;

    if (color == RED)
    {
        cout << "true" << endl;
    }

    return 0;
}