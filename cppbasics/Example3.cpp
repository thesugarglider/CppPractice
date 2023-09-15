#include<iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name please ";
    getline(cin,name);
    cout << "Welcome " << name << "\n";
    return 0; 
}