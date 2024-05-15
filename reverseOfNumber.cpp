#include<iostream>
using namespace std;

int main(){
    int number,result = 0,result2 = 0,lastDigit,lastDigit2;
    
    cout<<"enter the number";
    cin>>number;

   int number2 = number;

   while(number!=0){
        lastDigit = number%10;
        cout<<lastDigit;
        number = number/10; 
    }
    cout<<endl;
   

   cout<<"------------------second method---------------------"<<endl;


    while(number2!=0){
        lastDigit2 = number2%10;
        number2 = number2/10;
        result2 = result2*10+lastDigit;
    }
     cout<<" reverse of the number is: "<<result2<<endl;
    return 0;
}