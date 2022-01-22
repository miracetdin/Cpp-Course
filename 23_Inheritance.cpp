#include <iostream>

using namespace std;


class Account{
public:
    double balance;
    string name;
public:
    void talk();
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};

Account::Account()
    :balance{0.0}, name{"An Account"}{
    
}

Account::~Account(){
    
}

void Account::deposit(double amount){
    cout << "Account deposit called with " << amount << endl;
}

void Account::withdraw(double amount){
    cout << "Account withdraw called with " << amount << endl;
}

void Account::talk(){
    cout << "Name: " << name << " - Balance: " << balance <<  endl;
}

//===================================================================

class Saving_Account: public Account{
    double int_rate;
public:
    void talk();
    Saving_Account();
    ~Saving_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

Saving_Account::Saving_Account()
    :int_rate{3.0}{
    
}

Saving_Account::~Saving_Account(){
    
}

void Saving_Account::deposit(double amount){
    cout << "Saving Account deposit called with " << amount << endl;
}

void Saving_Account::withdraw(double amount){
    cout << "Saving Account withdraw called with " << amount << endl;
}

void Saving_Account::talk(){
    cout << "Name: " << name << " - Balance: " << balance << " - int_rate: " << int_rate <<  endl;
}

int main(){
    cout << "========================== Account ============================ " << endl;
    Account acc;
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    acc.talk();
    
    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    
    cout << "================================================================" << endl;
    
    cout << "======================= Saving Account ========================= " << endl;
    Saving_Account s_acc;
    
    s_acc.deposit(2000.0);
    s_acc.withdraw(500.0);
    s_acc.talk();
    
    Saving_Account *p_s_acc{nullptr} ;
    p_s_acc = new Saving_Account();
    p_s_acc->deposit(1000.0);
    p_s_acc->withdraw(500.0);
    delete p_s_acc;
    
    cout << "================================================================" << endl;
    
    return 0;
}