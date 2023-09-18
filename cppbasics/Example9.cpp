#include<iostream>
using namespace std;

int main(){
    float area, radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.1425f * radius * radius;
    cout << area << "\n";

    area = (22/7) * radius * radius;
    cout << area << "\n";    
    return 0;

}