#include<iostream>
using namespace std;

int main(){
    int rollno;

    cout << "enter your roll no. ";
    cin >> rollno;

    if(rollno<0){
        cout << "invalid roll no.\n";
    } else {
        cout << "valid roll no.";
    }

    return 0;
}