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
      cout<<"sum of first "<<number<<"number is: "<<sum<<endl;
    return 0;
}