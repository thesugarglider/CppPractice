#include<iostream>
using namespace std;

int main(){

    int a , b;

    cout << "enter two numbers ";
    cin >> a >> b;

    if(b==0){
        cout << "division by zero not possible\n";
    } else {
        cout << a/b << "\n";
    }

    return 0;

}