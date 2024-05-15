#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int number;

      cout<<"enter the number ";
      cin>>number;
    for(int i = 2; i<number ; i++){
     if(number%i == 0)
     {cout<<number<<" is not prime Number it is Divisible by "<<i<<endl;
            break;
     }
 
    }

    cout<<"---------------------second method---------------------------------"<<endl;

    for(int i = 2; i<sqrt(number) ; i++){
     if(number%i == 0)
     {cout<<number<<" is not prime Number it is Divisible by "<<i<<endl;
            break;
     }
 
    }

    
    return 0;
}