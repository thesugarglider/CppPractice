/**
 * compound conditional statement
*/

#include<iostream>
using namespace std;

int main(){

    int hour = 10;

    if ( hour >= 9 && hour <= 18){
        cout << "working hour\n";
    } else {
        cout << "leisure hour\n";
    }

    return 0;
}       