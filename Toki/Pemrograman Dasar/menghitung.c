
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Prototipe fungsi:
void Kata(char *kata);

int main(){
	//Kamus
    FILE *file_target;
    static char CC; // karakter yang sedang dibaca.
    static char FILE_NAME[37]="pitakar.txt";//simpan nama file disini
    int i=0,retval;
    char kata[10000];
    int hasil;
   
    //Algo
   
    system("pitakar.txt"); //menampilkan isi dari file kita
    file_target = fopen("pitakar.txt", "r");//membaca isi file
   
    FILE *fileku;
    fileku = fopen(FILE_NAME, "r");
    retval = fscanf(fileku, "%c", &CC);
    while (retval != EOF){
             kata[i]=CC;
             retval = fscanf(fileku, "%c", &CC);
             i++;
    }
    Kata(kata); 
getch();
fclose(fileku);
return 0;
}

void Kata(char *kata){
    int i=0;
    int j=0;
    int k=0;
    int temp=0;
    int bol = 0;
    while (kata[k]!= EOF){ // jika ditemukan EOF maka program stop
          if (kata[k] != ' ')
          {
            k++;
          }
    }
  printf("%d\n", k); 
}
