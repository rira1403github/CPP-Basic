/*you are given with three numbers x,y,z and 
max of three number is stored in variable a and
 then we apply the codition of pythagorian triplet and 
store rmaining two variables in b,c and 
check wether a square is equal to b square and c square*/ 
#include <iostream>
#include <math.h>
using namespace std;
bool check(int x,int y,int z){
    int b,c;
    int a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=z;
    }
    if(pow(a,2)==(pow(b,2)+pow(c,2))){
        return true;
    }
    return false;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"pythagorian triplet";
    }
    else{
        cout<<"not an pythagorian triplet";
    }
    return 0;
}