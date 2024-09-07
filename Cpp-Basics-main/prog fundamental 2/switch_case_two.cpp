#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"enter a charecter:";
    cin>>button;

    switch(button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"namaste"<<endl;
        break;
    case 'c':
        cout<<"hola"<<endl;
        break;
    case 'd':
        cout<<"caio"<<endl;
        break;
    
    default:
    cout<<"sorry no data found"<<endl;
    }
    return 0;
}