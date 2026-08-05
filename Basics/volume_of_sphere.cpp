#include<iostream>
using namespace std;
int main(){
    // volume of sphere
    float radius;
    cin >> radius;
    cout << "values is: ";
    int res = (4 * 3.14 * radius * radius * radius) / 3;
    cout << res;
    return 0;
} 