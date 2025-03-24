#include <iostream>
using namespace std;
class account{
    public:
    string accountHolderName;
    int accountNumber;
    int current=0;
    int total=0;
    private:
    float balance;
public:account(string accountHolderName,int accountNumber,float balance){
this->accountHolderName=accountHolderName;
this->accountNumber=accountNumber;
this->balance=balance;
}
public:
float getbalance(){
    return balance;
}
void displayAccountInfo(){
    cout<<"Name:"<<accountHolderName<<endl;
    cout<<"Account Number:"<<accountNumber<<endl;
    cout<<"Balance:"<<getbalance()<<endl;
}
int deposit(int amount){
    // current=getbalance();

    balance=balance+amount;
    cout<<"Your current Balance is:"<<balance<<endl;
    return balance;
}
int withdraw(int amount){
    
    if (amount>balance)
    {       
        cout<<"You dont have enough balance"<<endl;
        return 0;
    }
    else{
        balance=balance-amount;

         return balance;
    }
    
}
protected:
void setBalance(float newBalance){
    newBalance=balance;
    // return balance;
}

    
};
class savingsAccount:public account
{
    float newBalance;
    private:
    float intrest;
   public: savingsAccount(string accountHolderName,int accountNumber,float balance,float intrest):account(accountHolderName,accountNumber,balance){
        this->intrest=intrest;
    }
    float addIntrest(){
        float newBalance=getbalance();
        float intrestAmount=newBalance*intrest;
        newBalance=intrestAmount+newBalance;
        setBalance(newBalance);
        cout<<"your intrest rate is:"<<intrest<<"Current balance is:"<<newBalance;
        return total + total*intrest;
    }
    void displayAccountInfo(){
        account::displayAccountInfo();
        cout<<"Intrest Rate:"<<intrest<<endl;
    }

};
int main() {
   savingsAccount Tejas("Tejas",20220,1000,0.12);
   Tejas.withdraw(10000);
   Tejas.deposit(1000);
   Tejas.addIntrest();
   Tejas.displayAccountInfo();

   
    return 0;
}