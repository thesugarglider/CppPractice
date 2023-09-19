#include<iostream>
using namespace std;

int main(){
    char x=127;

    cout << x << endl;

    x++;
    cout << (int)x << endl;

    char y=-128;
    y--;
    cout << y << endl;
    return 0;
}