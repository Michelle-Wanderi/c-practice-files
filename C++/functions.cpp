class account
{
    private:
    int accNo;
    string accountName
    float accountBalance;
    
} acc1;

struct account
{
    int accNo;
    string accountName
    float accountBalance;
    
}acc2;

#include<iostream>
using namespace std;
/*class account
{
    int accNo;
    string accountName
    float accountBalance;

} acc1;*/

struct account
{
    int accNo;
    string accountName;
    float accountBalance;

};

main()
{
    struct account acc2;
    acc2.accNo=11222;
    acc2.accountName="Johnstone Makau";
    acc2.accountBalance=4500.50;
    cout<<"Account Details"<<endl;
    cout<<"---------------"<<endl;
    cout<<"Account Number: "<<acc2.accNo<<endl;;
    cout<<"Account Name: "<<acc2.accountName<<endl;
    cout<<"Account Balance: Kshs. "<<acc2.accountBalance<<endl;

}