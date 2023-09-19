#include<iostream>
#include<climits>
using namespace std;

int main(){
    char x=127;

    cout << x << endl;

    x++;
    cout << (int)x << endl;

    char y=-128;
    y--;
    cout << y << endl;

    int a=INT_MAX;
    cout << a << endl;
    a++;
    cout << a << endl;
    return 0;
}