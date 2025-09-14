/*
Problem#46
  */



#include <iostream>
using namespace std;


string NumberToText(int num);

int main() {
	int num;
	cout << "Entre the Number : ";
	cin >> num;

	cout << NumberToText(num);
}

string NumberToText(int num) {
	if (num <= 0) {
        cout << "";
	}

	if (num >= 1 && num <= 19) {
		string arr[] = { "" , "One" , "Two", "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" , "Ten" , "Eleven" , "Twelve" , "Thirteen" , "Fourteen" , "Fifteen" , "Sixteen" , "Seventeen" , "Eighteen" , "Nineteen" };
		return arr[num];
	}
	else if (num >= 20 && num <= 99) {
		string arr[] = { "" , "" , "Twenty" , "Thirty" , "Forty" , "Fifty" , "Sixty" , "Seventy" , "Eighty" , "Ninety" };
		return arr[num / 10] + " " + NumberToText(num % 10);
	}
	else if (num >= 100 && num <= 199) {
		return "One Hundred " +  NumberToText(num % 100);
	}
	else if (num >= 200 && num <= 999) {
		return NumberToText(num / 100) + " Hundred " + NumberToText(num % 100);
	}
	else if (num >= 1000 && num <= 1999) {
        return "One Thousand "   +   NumberToText(num % 1000);
	}
	else if (num >= 2000 && num <= 9999) {
		return NumberToText(num / 1000) + " Thousands " + NumberToText(num % 1000);
	}
	else if (num >= 1000000 && num <= 1999999) {
		return "One Million " +  NumberToText(num % 1000000);
	}
	else if (num >= 2000000 && num <= 9999999) {
		return NumberToText(num / 1000000) + " Millions " + NumberToText(num % 1000000);
	}
	else if (num >= 1000000000 && num <= 1999999999) {
		return "One Billion " + NumberToText(num % 1000000000);
	}
	else if (num >= 2000000000 && num <= 9999999999) {
		return NumberToText(num / 1000000000) + " Billions " + NumberToText(num % 1000000000);
	}
	
} 
