#include <cstdlib>
#include <string>
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[])
 {
 int pilihan;
 char registrasi[50];
 char kata1[100],kata2[100];
 
cout<<"<<<<< Selamat datang di Dunia string >>>>> ";
 cout<<endl;
 cout<<"Registrasi Nama : ";
 cin.getline(registrasi,sizeof(registrasi));
 cout<<endl;
 system("cls");
 cout<<" # REGISTRASI BERHASIL #"<<endl<<endl;
 cout<<"Nama Anda adalah ";
 cout<<"<<<< "<<registrasi;
 cout<<" >>>>"<<endl;
 cout<<endl;
 
cout<<"Fungsi - fungsi dalam string sebagai berikut ==>"<<endl;
 cout<<endl;
 
cout<<" 1. Fungsi strlen"<<endl;
 cout<<" ==> Merupakan fungsi untuk menghitung panjang kalimat atau kata "<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" Masukkan Kalimat atau kata Anda: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Hasil: "<<strlen(kata1)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 2. Fungsi strupr"<<endl;
 cout<<" ==> Merupakan fungsi untuk mengubah dari huruf kecil kehuruf besar"<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" Masukkan Kalimat atau kata Anda: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Hasil: "<<strupr(kata1)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 3. Fungsi strlwr"<<endl;
 cout<<" ==> Merupakan fungsi untuk mengubah dari huruf kapital kehuruf kecil"<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" Masukkan Kalimat atau kata Anda dengan huruf kapital: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Hasil: "<<strlwr(kata1)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 4. Fungsi strcpy"<<endl;
 cout<<" ==> Merupakan fungsi untuk meng Copy kalimat atau kata"<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" Masukkan Kata: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Masukkan kata yang akan dicopy: ";
 cin.getline(kata2,sizeof(kata2));
 cout<<" Hasil: "<<strcpy(kata1,kata2)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 5. Fungsi strcat"<<endl;
 cout<<" ==> Merupakan fungsi penambah Kalimat atau kata"<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" Contoh masukkan Kalimat atau kata Anda: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Masukkan kata yang akan ditambahkan: ";
 cin.getline(kata2,sizeof(kata2));
 cout<<" Hasil: "<<strcat(kata1,kata2)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 6. Fungsi strcmp"<<endl;
 cout<<" ==> Merupakan fungsi untuk membandingkan"<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" inputan pertama: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" inputan kedua: ";
 cin.getline(kata2,sizeof(kata2));
 cout<<" Hasil: "<<strcmp(kata2,kata1)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 7. Fungsi strrev"<<endl;
 cout<<" ==> Merupakan fungsi pembalik"<<endl;
 cout<<" Contoh :"<<endl;
 cout<<" Masukkan Kalimat atau kata Anda: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Hasil: "<<strrev(kata1)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
cout<<" 8. Fungsi strstr"<<endl;
 cout<<" ==> Merupakan fungsi untuk mencari huruf tiap kata"<<endl;
 cout<<" Contoh:"<<endl;
 cout<<" Masukkan Kalimat atau kata Anda: ";
 cin.getline(kata1,sizeof(kata1));
 cout<<" Masukkan kata yang akan dicari: ";
 cin.getline(kata2,sizeof(kata2));
 cout<<" Hasil: "<<strstr(kata1,kata2)<<endl;
 cout<<endl;
 cout<<" ======================================================";
 cout<<endl;
 
system("PAUSE");
 return EXIT_SUCCESS;
 }
