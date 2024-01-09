#include<iostream>
using namespace std;
#define phi 3.14
int main()
{
char lagi;
int pilih;
float a,t,r,p,l,s,luas;
menu:
           
            cout<< "**********Menu Menghitung Luas********* \n";
            cout<< "    1. Menghitung Luas Bujur Sangkar  	\n";
            cout<< "    2. Menghitung Luas Persegi Panjang 	\n";
            cout<< "    3. Menghitung Luas Segitiga        	\n";
            cout<< "    4. Menghitung Luas Lingkaran        \n";
            cout<< "Masukkan pilihan anda [1..4]: ";
            cin>>pilih;
            cout<< "\n";
switch(pilih)
{
	case 1:
            cout<< "***Menghitung Luas Bujur Sangkar*** \n";
            cout<< "====================\n";
            cout<< "Masukkan sisi    : ";
            cin>>s;
            luas = (s*4);
            cout<< "Luas Bujur Sangkar adalah : "<<luas;
            cout<<"\n\n";
            if (lagi == 'y')
            goto menu;
            
break;
case 2:
            cout<< "***Menghitung Luas Persegi Panjang*** \n";
            cout<< "=====================\n";
            cout<< "Masukkan panjang   : ";
            cin>>p;
            cout<< "Masukkan lebar     : ";
            cin>>l;
            luas = p*l;
            cout<< "Luas Persegi Panjang adalah : "<<luas;
            cout<<"\n\n";
            if (lagi == 'y')
            goto menu;
           
break;
case 3:
            cout<< "***Menghitung Luas Segitiga*** \n";
            cout<< "===========================\n";
            cout<< "Masukkan alas        : ";
            cin>>a;
            cout<< "Masukkan tinggi      : ";
            cin>>t;
            luas = (a*t)/2;
            cout<< "Luas Segitiga adalah : "<<luas;
            cout<< "\n\n";
            if (lagi == 'y')
            goto menu;
            
break;
case 4:
            cout<< "***Menghitung Luas Lingkaran*** \n";
            cout<< "=====================\n";
            cout<< "Masukkan jari-jari    : ";
            cin>>r;
            luas = phi*(r*r);
            cout<< "Luas lingkaran adalah : "<<luas;
            cout<<"\n\n";
            if (lagi == 'y')
            goto menu;
                   

break;
default:
            cout<< "Maaf pilihan yang anda masukkan salah, coba sekali lagi!!! \n\n";

break;
}
return 0;          
}

