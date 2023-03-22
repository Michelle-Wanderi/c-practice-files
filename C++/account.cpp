#include<iostream>
using namespace std;
class account
{
    private:
    int accNo;
    string accountName;
    float accountBalance;
    public:
     void enter_account_details();
     void display_account_details();
     account(int a,string n ,float b);//parameterized
     account();//default
     ~account();//destructor

}acc1(1,"Janet Kelly",2000.00);
account::~account()
{
   cout<<"All spaces Destroyed"<<endl;
}
account::account()
{
   accNo=1111;
   accountName="Justine Mulinge";
   accountBalance=250000; 
}

void account::enter_account_details()
{
    cout<<"Enter account number: ";
    cin>>accNo;
    cout<<"Enter the account name: ";
    getline(cin,accountName);
    cout<<"Enter the balance: Kshs. ";
    cin>>accountBalance;
}
void account::display_account_details()
{
    cout<<"Account number: "<<accNo<<endl;
    cout<<"Account name:  "<<accountName<<endl;;
    cout<<"Account balance: Kshs. " <<accountBalance<<endl;
}
account::account(int a,string n ,float b)
{
   accNo=a;
   accountName=n;
   accountBalance=b;
}
main()
{
    account acc2(2,"Mary Ann",10.00),acc3;
    cout<<"Display the details of the account 1"<<endl;
    cout<<"------------------------------------"<<endl;
    acc1.display_account_details();


    cout<<"Display the details of the account 2"<<endl;
    cout<<"------------------------------------"<<endl;
    acc2.display_account_details();
    cout<<"Display the details of the account 3"<<endl;
    cout<<"---------------------------------------"<<endl;
    acc3.display_account_details();

    cout<<"Display the details of the account 1"<<endl;
    cout<<"------------------------------------"<<endl;
    acc1.enter_account_details();
    acc1.display_account_details();
    
    cout<<"Display the details of the account 2"<<endl;
    cout<<"----------------------------------------"<<endl;
    acc2.enter_account_details();
    acc2.display_account_details();
    
    cout<<"Display the details of the account 3"<<endl;
    cout<<"----------------------------------------"<<endl;
    acc3.enter_account_details();
    acc3.display_account_details();
}