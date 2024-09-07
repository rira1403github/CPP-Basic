#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"input enter  a number"<<endl;
    cin>>n;

    if(n%2==0 && n%3==0)
    {
        cout<<"number is divisible by both 2 and 3"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"the number is divisible by 3"<<endl;

    }
    else if(n%2==0)
    {
        cout<<"the number is divisible by 2"<<endl;
    }
    else
    {
        cout<<"the number is niether divisible by 2 or 3"<<endl;
    }
    return 0;

}