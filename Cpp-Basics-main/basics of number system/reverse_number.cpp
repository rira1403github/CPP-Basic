#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int reverse;

    while(n>0){
        int last_digit=n%10;
        reverse=reverse*10+last_digit;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}