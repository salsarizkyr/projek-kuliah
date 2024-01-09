#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

struct node
{
      long data;
      node* next;
      node* prev;
};

//buat variabel node
node* head;
node* tail;
node* print;
node* del;
node* entry;

void inisialisasi()
{
      head = NULL;
      tail = NULL;
}

int isEmpty()
{
      if(head == NULL)
            return 1;
      else
            return 0;
}

void input(int *dta)
{
      entry = new node;
      entry->data = *dta;
      entry->next = NULL;
      entry->prev = NULL;
      if(isEmpty()==1)
      {
            head = entry;
            head->next = NULL;
            head->prev = NULL;
            tail=head;
      }
      else
      {
            tail->next = entry;
            entry->prev = tail;
            tail = entry;
      }
}


void hapus()
{
      int simpan;
      if(head!=NULL) 
      {
            if(head->next != NULL)
            {
            del=head;
            simpan = head->data;
            cout<<"\n"<<simpan<<" telah dihapus"<<endl;
            head = head->next;
            head->prev = NULL;
            delete del;
            }
            else
            {
                  simpan = head->data;
                  cout<<"\n"<<simpan<<" telah dihapus"<<endl;
                  head = NULL;
            }

      }
      else
            cout<<"\nLinked List kosong penghapusan tidak dapat dilakukan"<<endl;
}

void menu()
{
      char pilih, ulang;
      int data;
      do
      {
            system("CLS");
menu :
      cout<<"             Menu: "<<endl;
      cout<<"-------------------------------";
      cout<<"\n1. Input Data";
      cout<<"\n2. Hapus Data";
      cout<<"\n3. Keluar";
      cout<<"\nMasukkan pilihan Anda : ";
      cin>>pilih;

      switch(pilih)
      {
      case '1' :
            cout<<"\nMasukkan Data  : ";
            cin>>data;

            input(&data);
            cout<<"\n"<<data<<" telah ditambahkan"<<endl;
            break;
      case '2' :
            hapus();
            break;
      case '3'  :
            cout<<"\nTerima kasih telah menggunakan program ini"<<endl;
            exit(0);
            break;
      default :
            cout<<"\nPilih ulang"<<endl;
            goto menu;
      }
      cout<<"\nKembali ke menu? (y/n)";
      cin>>ulang;
      }while(ulang=='y' || ulang =='Y');
}

int main()
{
      inisialisasi();
      menu();
      exit(0);
}
