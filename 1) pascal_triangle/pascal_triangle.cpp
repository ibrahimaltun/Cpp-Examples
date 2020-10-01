// C++ Program to Print Pascal Triangle
// C++ dili ile pascal ücgenini yazdirma

//giris cikis birimlerini iceren iostream kütüphanesini koda dahil etme.
#include <iostream>

//her cout kullanýmýnda std::cout bicimini kullanmamak icin kullanýlan yontem.
using namespace std; 

//ana fonksiyon baclangici
int main() {
	
	//row : satir
	int rows,coef = 1;
	
	cout << "Satir sayisi giriniz : ";
	cin >> rows;
	
	for(int i = 0; i < rows; i++)
	{
		for(int space = 1; space <= rows - i ; space++)
			cout << "   ";
		
		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || i == 0)
				coef = 1;
			else
				coef = coef * (i - j+1)/j;
			cout << "    " << coef;
		}
		cout << endl;
	 } 
}
