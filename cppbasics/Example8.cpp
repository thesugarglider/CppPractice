#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //coefficients 
    int a,b,c;

    //roots
    int r1, r2;

    cin >> a >> b >> c;

    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

    cout << r1 << "\n";
    cout << r2 << "\n";

    return 0;

}