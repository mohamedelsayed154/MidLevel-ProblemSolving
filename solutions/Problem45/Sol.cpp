/*
Problem#45
  */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ClientData {
	string Accnum;
	int PinCode;
	string name;
	long long phone;
	float AccBalance;
};


int main() {
	ClientData Client1;
	cout << "Entre Client Data : " << endl << endl;

	cout << "Entre Account Number : ";
	cin >> Client1.Accnum;

	cout << "Entre Pin Code : ";
	cin >> Client1.PinCode;

	cin.ignore();
	cout << "Entre  Name : ";
	getline(cin, Client1.name);

	cout << "Entre Phone Number : ";
	cin >> Client1.phone;

	cout << "Entre Account Balance : ";
	cin >> Client1.AccBalance;

	// --------------------------------------------------------------------------------------

	// Print

	vector <string> Data(5);

	Data[0] = Client1.Accnum;
	Data[1] = to_string(Client1.PinCode);
	Data[2] = Client1.name;
	Data[3] = to_string(Client1.phone);
	Data[4] = to_string(Client1.AccBalance);

	for (int i = 0; i < Data.size(); i++) {
		if (i == Data.size() - 1) {
			cout << Data[i];
			break;
		}
		cout << Data[i] << "//#";
	}
	cout << endl;

}
