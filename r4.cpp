#include <iostream>
using namespace std;

int main() {
    // update your code here
    int a,b,c;
    cin >> a >> b >> c;
    if(a == b && b == c && a == c){
        cout << "equilateral";
    }else if(a == b || a == c && b != c){
        cout << "isosceles";
    }else if(a != b && a != c && b != c){
        cout << "scalene";
    }
    return 0;
}