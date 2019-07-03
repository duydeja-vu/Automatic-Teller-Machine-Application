#include<string>
using namespace std;

class Account
{
private:
	int account_number_; // So tai khoan
	string name_; // Ho ten chu tai khoan
	int balance_; // So du tai khoan
	string type_; // Kieu tai khoan. N: binh thuong. V: tai khoan Vip
public:
	void CreateAccount();
	void Modify();
	void Deposit(int);
	void Withdraw(int);
	void SaveAccountToFile();
	void PrintAccount() const;
	void PrintAccountInFormat() const;
	int GetAccountNumber() const;
	int GetBalance() const;
	string GetType();
	string GetName();
};
