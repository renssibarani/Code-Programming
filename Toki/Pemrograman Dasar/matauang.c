#include <stdio.h>

float US(float RP);

float AS(float RP);

float Yen(float RP);

float Euro(float RP);

int main()
{
	int menu;
	float RP, hasil;

	printf("Maukkan Jumlah rupiah : ");
	scanf("%f", &RP);

	printf("Mata uang yang tersedia : \n");
	printf("1. US$  (1$ = Rp.13.757)\n");
	printf("2. AU$  (1$ = Rp.10.457)\n");
	printf("3. Yen  (1 Yen = Rp.107)\n");
	printf("4. Euro (1 Euro = Rp.15.125)\n");

	printf("Pilih mata uang yang akan di gunakan (1/2/3/4): ");
	scanf("%d", &menu);
	printf("\n\n\n");

	switch (menu){
		case 1:
		printf("Mata uang yang dipilih : US$  (1$ = Rp.13.757)\n");
		printf("Uang setelah di tukar  : %f\n", US(RP));
		break;

		case 2:
		printf("Mata uang yang dipilih : AU$  (1$ = Rp.10.457)\n");
		printf("Uang setelah di tukar  : %f\n", AS(RP));
		break;

		case 3:
		printf("Mata uang yang dipilih : Yen  (1 Yen = Rp.107)\n");
		printf("Uang setelah di tukar  : %f\n", Yen(RP));
		break;

		case 4:
		printf("Mata uang yang dipilih : Euro (1 Euro = Rp.15.125)\n");
		printf("Uang setelah di tukar  : %f\n", Euro(RP));
		break;
		
		default:
		printf("maaf pilihan anda tidak ada");
		break;	
	}
	return 0;
}

float US(float RP){
	float hasil;
	hasil = RP / 13757;

	return hasil;
}

float AS(float RP){
	float hasil;
	hasil = RP / 10457;

	return hasil;
}

float Yen(float RP){
	float hasil;
	hasil = RP / 107;

	return hasil;
}

float Euro(float RP){
	float hasil;
	hasil = RP / 15125;

	return hasil;
}
