#include <iostream>

using namespace std;

int main(){
	int number;
	cout << "Herhangi bir sayi giriniz : ";
	cin >> number;
	
	if (number%2 == 0)
	{
		cout << "Girilen sayi cifttir.";
	}
	else
	{
		cout << "Girilen sayi tektir.";
	}
}
