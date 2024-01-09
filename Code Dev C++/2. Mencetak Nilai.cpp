#include<conio.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int absen, tugas, uts, uas, total;
	char nim[12];
	char nama[20];
	char matakuliah[25];
	
cout<<"Masukkan NIM anda : "; gets(nim);
cout<<"Masukkan Nama anda: "; gets(nama);
cout<<"Masukkan Mata Kuliah anda: "; gets(matakuliah);
cout<<"Masukkan Nilai Absen: ";cin>>absen;
cout<<"Masukkan Nilai Tugas: ";cin>>tugas;
cout<<"Masukkan Nilai UTS: ";cin>>uts;
cout<<"Masukkam Nilai UAS: ";cin>>uas;
cout<<"=================================="<<endl;
cout<<"NIM             :  " <<nim<<endl;
cout<<"Nama            :  " <<nama<<endl;
cout<<"Mata Kuliah     :  " <<matakuliah<<endl;
cout<<"Absen           :  " <<absen<<endl;
cout<<"Tugas           :  " <<tugas<<endl;
cout<<"UTS             :  " <<uts<<endl;
cout<<"UAS             :  " <<uas<<endl;
total = (0.0*absen) + (0.2*tugas) + (0.3*uts) + (0.4*uas);
cout<<"Total Nilai : "<<total;
cout<<endl<<endl<<endl;
if ( total >= 80){
	cout<<"A";
}
else if (total >= 74 ){
cout<<"B+";	
}
else if (total >= 68){
cout<<"B";	
}
else if (total >= 62) {
cout<<"C+";
}
else if (total >= 56){
cout<<"C";
}
else if (total >= 45){
cout<<"D";
}
else {
cout<<"E";	
}
}
