#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ClientData {
    string Accnum;
    int PinCode;
    string name;
    long long phone;
    float AccBalance;
};

void PrintClientData(const ClientData& c) {
    cout << "Account Number : " << c.Accnum << " //# "
         << "Pin Code : " << c.PinCode << " //# "
         << "Name : " << c.name << " //# "
         << "Phone : " << c.phone << " //# "
         << fixed << setprecision(2) 
         << "Balance : " << c.AccBalance << endl;
}

int main() {
    ClientData Client1;
    cout << "Enter Client Data : " << endl << endl;

    cout << "Enter Account Number : ";
    cin >> Client1.Accnum;

    cout << "Enter Pin Code : ";
    cin >> Client1.PinCode;

    cin.ignore(); 
    cout << "Enter Name : ";
    getline(cin, Client1.name);

    cout << "Enter Phone Number : ";
    cin >> Client1.phone;

    cout << "Enter Account Balance : ";
    cin >> Client1.AccBalance;

    cout << "\n--- Client Data ---" << endl;
    PrintClientData(Client1);
}
