/*to print factoial of a number n.*/
#include<iostream>
using namespace std;
int fac(int n){
    int fact;
    fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int ans;
    ans=fac(n);
    cout<<ans;

}