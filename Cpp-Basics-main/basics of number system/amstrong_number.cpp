/*an amstrong number is number whose sum of cubes of indivisual digit 
of a number is equal to the number itself*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int m;
    m=n;
    int sum; 
    sum=0;

    while (n>0){
        int last_digit=n%10;
        sum+=pow(last_digit,3);
        n=n/10;
    }
    if(m==sum){
        cout<<"the number is amrstrong";
    }
     else{
         cout<<"not an armstrong number";
    }   
    return 0;
}