#include <iostream>
using namespace std;
 
void menghitung_GaTor()
{
 int gapok,tunj;

 cout << "Gaji Pokok: "; cin >> gapok;
 cout << "Tunjangan: "; cin >> tunj;

 cout<<"Gaji Kotor: " << gapok+tunj;
}

int main()
{
 menghitung_GaTor();
 return 0;
}
