#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int opr;
    cout<<"enter two operands";
    cin>>a>>b;
    cout <<"enter the operation to perform";
    cout<<" 1 for +"<<endl<<" 2 for -"<<endl<<" 3 for *"<<endl<<" 4 for /"<<endl<<" 5 for %"<<endl;
    cin>>opr;
    switch(opr)
    {
        case 1:
            cout<<"Result is "<<a+b;
            break;
        case 2:
            cout<<"Result is "<<a-b;
            break;
         case 3:
           cout<<"Result is "<<a*b;
            break;
         case 4:
            if(b==0)
            {
                cout<<"DIVISION BY ZERO ERROR!";
                return(0);
            }
            else
            {
                cout<<"Result is "<<a/b;
            }
            break;
         case 5:
            if(b==0)
            {
                cout<<"MODULO BY ZERO ERROR!!";
                return(0);
            }
            else
            {
                cout<<"Result is "<<a%b;
            }
            break;
            default:
                cout<<"Invalid Operation!!";
                break;
                
    }
    return 0;

}