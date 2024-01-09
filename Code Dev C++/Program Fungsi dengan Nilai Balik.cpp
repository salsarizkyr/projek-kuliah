#include<iostream>
using namespace std;

int hitung_luas (int panjang, int lebar){
	int luas = panjang*lebar;
	return luas;
}

int main(){
	int a,b,hasil;
	cout<<"Program Hitung Luas Persegi Panjang"<<endl;
	cout<<"==================================="<<endl;
	cout<<"Masukkan nilai panjang : "; cin>>a;
	cout<<"Masukkan nilai lebar : "; cin>>b;
	hasil = hitung_luas(a,b);
	cout<<"Luas Persegi Panjang adalah : "<<hasil<<endl;
	
	return 0;
}
