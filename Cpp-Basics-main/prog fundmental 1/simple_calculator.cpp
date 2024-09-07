#include <iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"input 2 numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;            

    default:
    cout<<"wrong operator"<<endl;
    }
    return 0;
}