#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int x,bet,balance,y,win,loose,a;
    balance=500;
     {
         cout<<"$$$$$$$$   welcome to money store    $$$$$$$$"<<endl;
     } 
    do
        {
            {

     cout<<"                           "<<endl;
    cout<<" you have $"<<balance<<" to start play"<<endl;
    cout<<"                 "<<endl;
    cout<<" enter your bet : ";
    cin>>bet;
      }

      if(bet>balance)
      {
      cout<<" sorry ! you are not able to play because you don't have enough money "<<endl;
      return 0;
      }



    cout<<" enter 1 or 0 to play : ";
    cin>>x;


     if (x>1)
    {
        cout<<"                                               "<<endl;
        cout<<" sorry you loose your money and are out of game "<<endl;
        return 0;
    }






     else if (x==0)
    {
         win= 2*bet;
        cout<<" you win and your bet become double : "<<win<<endl;
        cout<<"                "<<endl;
        balance = balance + bet;
        cout<<" your total balance is  : "<< balance <<endl;
        
        cout <<" press '2' to countinue and '3' to quit : ";
    
        cin>>y;

    }
  else if (y==3)
  {
      cout<<endl;
  }  
    
    else if(x==1)
    { 
        cout<<" you loose your money "<<endl;
         loose = balance -  bet;
        cout<<" your balance become : "<< loose <<endl;
        balance = balance - bet;
        cout<<" press '2' to countinue and '3' to quit : ";
        cout<<endl;
        cin>>y;
    }
    else if (y==3)
    {
        cout<<endl;
    }

    else if (loose  > balance)
    {
        cout<<endl;
        }
         }
    

     while(y==2);
     while(bet>=balance||loose==balance);
      
    return 0;
} 