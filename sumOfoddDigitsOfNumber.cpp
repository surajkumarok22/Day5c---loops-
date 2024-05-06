#include<iostream>
using namespace std;

int main(){
    int number,r,sum = 0;
    
    cout<<"enter the number";
    cin>>number;

   
    while(number!=0){
        r = number%10;
        if(r%2!=0){  sum = sum+r;
        }
        number = number/10; 
    }
     cout<<" sum of the number is: "<<sum<<endl;
    return 0;
}