#include <iostream>
 using namespace std;
 int main(){
    for(int i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }
        //question2

    for(int i=10;i>=1;i--)
    {
        cout<<i<<endl;
    }

       //question3

    for(int i=2;i<=20;i=i+2)
    {
        cout<<i<<endl;
    }

      //question4
    for(int i=1;i<=20;i=i+2)
    {
        cout<<i<<endl;
    }

      //question5
      int num;
      cout<<"enter your number:";
      cin>>num;
      for(int i =1;i<=10;i++)
      {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
      }
    return 0;
        }