#include <iostream>

using namespace std;

int main () {
	
	int vize, final;
	double ortalama;
	
	cout << "Lutfen vize notunuzu giriniz : ";
	cin >> vize;
	
	cout << "Lutfen final notunuzu giriniz : ";
	cin >> final;
	
	ortalama = (vize*0.4) + (final*0.6);
	
	if(ortalama <= 39){
		cout << "Ders notunuz : "<< ortalama <<"\nHarf notunuz : "<<"FF, kaldiniz. Butte gorusuruz. :( ";
	}
	else if(ortalama > 39 && ortalama <= 59){
		cout << "Ders notunuz : "<< ortalama <<"\nHarf notunuz : "<<"CC, gectiniz. Not katkisi : 2.00";
	}
	else if(ortalama > 59 && ortalama <= 69){
		cout << "Ders notunuz : "<< ortalama <<"\nHarf notunuz : "<<"CB, gectiniz. Not katkisi : 2.50";
	}
	else if(ortalama > 69 && ortalama <= 79){
		cout << "Ders notunuz : "<< ortalama <<"\nHarf notunuz : "<<"BB, gectiniz. Not katkisi : 3.00";
	}
	else if(ortalama > 79 && ortalama <= 89){
		cout << "Ders notunuz : "<< ortalama <<"\nHarf notunuz : "<<"BA, gectiniz. Not katkisi : 3.50";
	}
	else if(ortalama > 89 && ortalama <= 100){
		cout << "Ders notunuz : "<< ortalama <<"\nHarf notunuz : "<<"AA, gectiniz. Not katkisi : 4.00";
	}
	else{
		cout << "Lutfen 0-100 arasi bir deger giriniz !";
	}	
}



