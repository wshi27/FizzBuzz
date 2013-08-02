#include <iostream> 

using namespace std;

int main ()
{
    int x;
    cout<<"Welcome to FizzBuzz. Press CTRL-Z to exit the program."<<endl;
    cout<<"please enter an integer: "<<endl;
    
    while (!cin.eof())
    {
    cin>>x;
    
    if (x!=0)
    {
       if (x%3==0 && x%5==0)
       {
            cout<<"FIZZBUZZ!!"<<endl;      
       }     
       else if (x%3 == 0)
       {
            cout<<"Fizz"<<endl;
       }
       else if (x%5 == 0)
       {
            cout<<"Buzz"<<endl;
       }
       else
       {
           cout<<"sorry, try another number: "<<endl;
       }
    }
    }
    cout<<"Thank you for using this program."<<endl;
    system("pause");
    return 0;
}
