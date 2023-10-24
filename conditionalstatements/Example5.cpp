#include<iostream>
using namespace std;

int main(){

    int age;

    cout << "enter your age\n";
    cin >> age;

    if(age <= 12 || age >= 50){
        cout << "you are eligible for the offer\n";
    } else {
        cout << "you are not eligible for the offer\n";
    }

    return 0;

}