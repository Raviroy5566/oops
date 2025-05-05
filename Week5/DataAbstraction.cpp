#include<iostream>
using namespace std;
class BankAccount{
    private:
    string AccountNumber;
    double balance;

    public:
  BankAccount(string AccNumber,double initialbalance){
    AccountNumber = AccNumber;
    balance = initialbalance;
  }
  void checkBalance(){
    cout<<"your current balance : $ "<<balance<<endl;
  }
  void withdrawMoney(double amount ){
    if(amount<=balance){
        balance -=amount ;
        cout<<"withdrawal Successful ! your new balance is : $ "<<balance<<endl;
    }else{
        cout<<"Insufficient funds !"<<endl;
    }
  }

  void depositMoney(double amount){
    balance+=amount;
    cout<<"Deposit successful !Your new balance is: $ "<<balance<<endl;
  }
};
int main()
{
    BankAccount myaccount("23456",500.0);
    myaccount.checkBalance();

    myaccount.depositMoney(100.00);
    myaccount.withdrawMoney(50.00);
    return 0;
}