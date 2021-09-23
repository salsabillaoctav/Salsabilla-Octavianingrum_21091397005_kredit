#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float harga_motor, lama_kredit, harga_pokok, bunga_kredit, cicilan, total_harga_motor;
	cout<< " program menghitung kredit motor"<<endl;
	cout<<"\n";

	cout << " harga motor : ";
	cin >> harga_motor;
	cout << " lama kredit (bulan) : ";
	cin >> lama_kredit;

	cout << " harga pokok = " <<harga_motor/lama_kredit<<endl;
	cout<<"\n";
	cout << " harga pokok : ";
	cin >> harga_pokok;

	cout << " bunga kredit = " <<harga_pokok*0.1<<endl;
	cout<<"\n";
	cout << " bunga kredit : ";
	cin >> bunga_kredit;

	cout << " cicilan = " <<harga_pokok+bunga_kredit<<endl;
	cout<<"\n";
	cout << " cicilan : ";
	cin >> cicilan;

	cout << " total harga motor = " <<cicilan*lama_kredit<<endl;
	cout<<"\n";
	cout << " total harga motor : ";
	cin >> total_harga_motor;

	cout << " keuntungan
    dealer = " <<total_harga_motor-harga_motor<<endl;

	return 0;
}
