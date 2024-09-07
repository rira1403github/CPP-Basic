#include <iostream>
using namespace std;

int main(){
    int i;
    int n;
    cin>>n;
    for( i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"number is prime"<<endl;                                
    return 0;
    }
}