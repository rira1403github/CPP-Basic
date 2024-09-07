#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int j;
        for(j=n-i;j>=1;j--){
            cout<<" ";
        }
        if(i==1){
            for(j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else if(i==n){
            for(j=1;j<=2*n-1;j++)//in order to execute last row            {
                cout<<"*";
            }

        }    
        else {
            cout<<"*";
            for(j=1;j<=2*i-3;j++)//in order to star with spacing in middle{
                cout<<" ";
            }
            cout<<"*";
        }    
    cout<<endl;
    }
    return 0;
}

