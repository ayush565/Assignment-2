#include<iostream>
using namespace std;
class account
{
    private:
        long balance;
    public:
        account()
        {
        balance=0;
        }
        void getbalance(long x)
        {

            balance=balance+x;
            showbalance(balance);
        }
        void debit(long y)
        {

            if(y>balance)
            {

                cout<<"\n\nDebit amount exceed the account balance"<<endl;
                 showbalance(balance);
            }
            else if(balance>0)
            {
            balance=balance-y;
            cout<<"\n\nDebit is done----\namount cut from your account is :"<<y<<endl;
             showbalance(balance);
            }
            else
            {
            cout<<"\n\nyour account is has no money"<<endl;
             showbalance(balance);
            }
        }
        void showbalance(int z)
        {

            cout<<"\n\nCurrent balance is :"<<z;
        }

};
int main()
{

    account a1,a2;
    long a,b;
    cout<<"first account tester:--";
    a1.getbalance(40000);
    a1.debit(10000);
    cout<<"\n--Second account tester:---";
    cout<<"\n\nEnter the balance you want to credit:=";
    cin>>a;
    a2.getbalance(a);
    cout<<"\n\nEnter the balance you want to debit:=";
    cin>>b;
    a2.debit(b);

}
