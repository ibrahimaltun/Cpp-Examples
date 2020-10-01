#include <iostream>

using namespace std;

int fakt(int i){
	int sonuc = 1;
	while (i > 0){
		sonuc = sonuc * i;
		i = i-1;
	}
	return sonuc;
}

int main(){

	cout << "Faktoriyeli alinacak sayiyi giriniz : ";
	int n;
	cin >> n;
	
	while(n < 0){
		cout << "Lutfen faktoriyeli alinacak sayiyi giriniz : ";
		cin >> n;
	}
	cout << n << "! = " << fakt(n);
	return 0;	
}

