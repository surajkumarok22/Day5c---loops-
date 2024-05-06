#include<iostream>
using namespace std;

int main()
{
    int number, sum = 0;

      cout<<"enter the number"<<endl;
      cin>>number;

    for(int i = 1; i<=number ; i++){
      sum = sum+i;
    }
      cout<<"sum of first "<<number<<" number is: "<<sum<<endl;


      cout<<" ----------using while loo---------------"<<endl;
// using while loop 
     int i = 1, sum2 = 0;
    while(i<=number){
    sum2 = sum2+i;
    i++;
    }
     cout<<"sum of first "<<number<<" number is: "<<sum2<<endl;
    return 0;
}