#include <stdio.h>
#include <conio.h>

void prak_pbd(int matkul); // Praktikum Basis Data
void prak_algo(int matkul); // Praktikum Algoritma dan Pemrograman 


char nama[256];
int week;
int tipe;
int matkul;
int nim = 2010511102;

int main()
{
	// --- Greetings --- //
	printf("----- SELAMAT DATANG -----\n\n");
	printf("Program ini dibuat oleh: @AqsaKA\n\n");
	
	printf("Mata Kuliah yang tersedia:\n\n");
	printf("(1) Praktikum Pengantar Basis Data\n");
	printf("(2) Praktikum Algoritma dan Pemrograman\n\n");
	
	// --- Input nama, pertemuan ke-, dan tipe file(pdf, doc.) --- //
	
	printf("Masukkan nama anda: "); fgets(nama, sizeof(nama), stdin); // read string
	printf("Masukkan NIM anda: 2010511102");
	
	printf("\nPertemuan ke: "); scanf("%d", &week);
	
	printf("\nPilih tipe file (Tekan 1 -> PDF Tekan 2 -> Docs): "); 
	scanf("%d", &tipe);
	
	printf("\nPilih mata kuliahnya:");
	printf("\nTekan 1 untuk Praktikum Pengantar Basis Data");
	printf("\nTekan 2 untuk Praktikum Algoritma dan Pemrograman");
	printf("\nMata kuliah: "); scanf("%d", &matkul);
		
	
	if(matkul == 1){
		prak_pbd(matkul);
		
	}
	if(matkul == 2)
	{ 
		prak_algo(matkul);
	}
	
	printf("\n\n\n--- Terima kasih telah menggunakan program ini - aqsa");
	
	getch();
	return 0;
}

void prak_pbd(int matkul){
	if(tipe == 1)
	{
		printf("\nSelamat!\nFormat file telah ditulis!\n\n");
		printf("PPBD-IF20_TP%d_C_%d_%s.pdf", week, nim, nama);
	}
	if(tipe == 2)
	{
		printf("Selamat!\nFormat file telah ditulis!\n\n");
		printf("PPBD-IF20_TP%d_C_%d_%s.doc", week, nim, nama);
	}
}

void prak_algo(int matkul){
	if(tipe == 1){
		printf("\nSelamat!\nFormat file telah ditulis!\n\n");
		printf("PrakAlpro_P%d_IF20-C_%d_%s.pdf", week, nim, nama);
	}
	if(tipe ==2){
		printf("\nSelamat!\nFormat file telah ditulis!\n\n");
		printf("PrakAlpro_P%d_IF20-C_%d_%s.doc", week, nim, nama);
	}
}
