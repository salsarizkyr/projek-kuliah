#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	
	int hg_br1,hg_br2,hg_br3,bb_br1,bb_br2,bb_br3,jml,jml_sd,jml_d,total;
	char nama[20];
	char alamat[50];
	char hp[13];
	
	cout<<"                 FORMULIR PEBELIAN BARANG          "<<endl;
	cout<<"                    TOKO SEJAHTERA                 "<<endl;
	
	cout<<"Nama Pelanggan	: ";gets(nama);
	cout<<"Alamat		: ";gets(alamat);
	cout<<"No. HP		: ";gets(hp);
	
	cout<<" "<<endl;
	
	cout<<"Harga Barang 1 : ";
	cin>>hg_br1;
	cout<<"Harga Barang 2 : ";
	cin>>hg_br2;
	cout<<"Harga Barang 3 : ";
	cin>>hg_br3;
	
	cout<<" "<<endl;
	
	cout<<"Banyak Barang 1 : ";
	cin>>bb_br1;
	cout<<"Banyak Barang 2 : ";
	cin>>bb_br2;
	cout<<"Banyak Barang 3 : ";
	cin>>bb_br3;
	
	jml = bb_br1 + bb_br2 + bb_br3;
	jml_sd = (hg_br1*bb_br1)+(hg_br2*bb_br2)+(hg_br3*bb_br3);
	if(jml_sd<=500000){
		jml_d = jml_sd*0.9;
		}else if(jml_sd<=1000000){
			jml_d = jml_sd*0.85;
		} else {
			jml_d = jml_sd*0.8;
		}
	total = jml_sd - jml_d;
	
	cout<<"==================================================" <<endl;
	
	cout<<"Nama Pelanggan	: "<<nama<<endl;
	cout<<"Alamat		: "<<alamat<<endl;
	cout<<"No.Hp		: "<<hp<<endl;
	
	cout<<" "<<endl;
	
	cout<<"Jumlah Pembelian Barang		: "<<jml<<endl;
	cout<<"Total Harga Sebelum Diskon	: "<<jml_sd<<endl;
	cout<<"Diskon				: "<<jml_d<<endl;
	cout<<"Total Bayar			: "<<total<<endl;
	
	return 0;
	
}
