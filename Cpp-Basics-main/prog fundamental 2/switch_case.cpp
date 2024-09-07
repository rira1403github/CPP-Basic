#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"enter a charecter:";
    cin>>button;

    if(button=='a'){
        cout<<"hello"<<endl;
    }
    else if(button=='b'){
        cout<<"namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"hola"<<endl;
    }
    else if(button=='d'){
        cout<<"caio"<<endl;
    }
    else{
        cout<<"sorry no data found"<<endl;
    }
    return 0;
}
