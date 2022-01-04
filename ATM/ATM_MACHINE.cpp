#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int opt;
    int pin[3];
    cout<<"Please enter the amount that you want to withdraw : $ ";
    cin>>a;
    cout<<"Enter your account balance : $ ";
    cin>>b;
    if(b>a)
    {
        cout<<"Enter your 4 digit pin : ";
        cin>>pin[3];
        cout<<"Transaction Successful "<<"\n";
        cout<<"Want RECEPT ?"<<"\n";
        cin>>opt;
        if(opt==1){
            cout<<"------------------"<<"\n";
            cout<<"Your Balance before transaction is : $ "<<b<<"\n";
            cout<<"----------------------You withdraw : $ "<<a<<"\n";
            cout<<"----------------------Bank charges : $ 0.5"<<"\n";
            cout<<"--------------------------------------------"<<"\n";
            cout<<"Total available balance : $ "<<b-a-0.5<<"\n";
            cout<<"Thank you.";
        }
        else {
            cout<<"Thank you.";
        }

    }
    else{
        cout<<"You don't have sufficient balance to complete this transaction "<<"\n"<<"--------------------------------------"<<"\n"<<"Error please try again.";
        cout<<"\n"<<"Thank you.";
    }
    return 0;
}

