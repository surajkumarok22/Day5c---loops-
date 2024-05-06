#include<iostream>
using namespace std;

int main()
{
    int number;

      cout<<"enter the number ";
      cin>>number;

    for(int i = 1; i<=number ; i++){
        cout<<i<<endl;
    }
cout<<" ----------using while loo---------------"<<endl;
// using while loop 
int i = 1;
while(i<=number){
    cout<<i<<endl;
    i++;
}

    return 0;
}