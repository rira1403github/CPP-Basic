#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=i;j++){
            cout<<"*";
            }
        int space;
        space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<' ';
            }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        int j;
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*n-2*i;
        for(j=1;j<=space;j++){
            cout<<' ';
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}