void SearchAndPrintAccount(int account_number)
{
	Account account;
	bool found = false;
	fstream in_file;

	in_file.open("account.dat", ios::in|ios::binary);
	if (!in_file)
	{
		cout << "Khong tim thay file";
		return;
	}
	cout << "\nKet qua tim kiem:\n";
	while (in_file.read(reinterpret_cast<char *>(&account), sizeof(Account)))
	{
		if (account.GetAccountNumber() == account_number)
		{
			found = true;
			cout << "So tai khoan: ";
			cout << account.GetAccountNumber() << endl;
			cout << "Ten chu tai khoan: ";
			cout << account.GetName() << endl;
		}
	}

	in_file.close();
	if (found == false)
		cout << "\n\nKhong tim thay tai khoan";
}