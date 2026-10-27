#include<iostream>
using namespace std;
int main(){
    int a,b = 0;
    cout<<"Enter the number: ";
    cin >> a;
    for(int i = 0;i <= a;i++){
         b =  b + i;
    }
    cout << "Sum is: "<< b;
    return 0;
} 