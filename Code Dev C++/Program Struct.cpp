#include<iostream>
#include<conio.h>
using namespace std;

struct mahasiswa {
	char nim [20];
	char nama [25];
	float ntgs;
	float nuts;
	float nuas;
	float na;
};
mahasiswa fasilkom;

void garis()
{
	int i;
	cout<<"\t";
	for(i=0; i<=40; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int main () {
	system("cls");
	cout<<"\n\t NILAI MAHASISWA"<<endl;
	
	garis();
	cout<<"\t Masukan NIM               = "; cin>>fasilkom.nim;
	cout<<"\t Masukan Nama              = "; cin>>fasilkom.nama;
	cout<<"\t Masukan Nilai Tugas       = "; cin>>fasilkom.ntgs;
	cout<<"\t Masukan UTS               = "; cin>>fasilkom.nuts;
	cout<<"\t Masukan UAS               = "; cin>>fasilkom.nuas;
	garis();
	
	fasilkom.na = (fasilkom.ntgs + fasilkom.nuts + fasilkom.nuas)/3;
	
	system("cls");
	cout<<" NILAI MAHASISWA" <<endl;
	garis();
	cout<<"\t NIM            = "<<fasilkom.nim<<endl;
	cout<<"\t Nama           = "<<fasilkom.nama<<endl;
	cout<<"\t Nilai Tugas    = "<<fasilkom.ntgs<<endl;
	cout<<"\t Nilai UTS      = "<<fasilkom.nuts<<endl;
	cout<<"\t Nilai UAS      = "<<fasilkom.nuas<<endl;
	garis();
	cout<<"\t Nilai Akhir = "<<fasilkom.na<<endl;
	garis();	
	
	getch();

}
