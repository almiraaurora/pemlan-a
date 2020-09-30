#include <stdio.h>
#include <stdlib.h>

//membuat struct
struct buah {
	char *nama;
	char *warna;
	int harga;
};


void main() 
{
	//menggunakan struct
	struct buah apel,anggur;
	
	//insert data ke struct
	apel.nama ="apel";
	apel.warna = "merah";
	apel.harga = 20000;
	
	anggur.nama = "anggur";
	anggur.warna = "ungu";
	anggur.harga = 25000;
	
	//mencetak isi struct
	printf("jenis buah: %s\n",apel.nama);
	printf("warna: %s\n",apel.warna);
	printf("harga: %d\n\n",apel.harga);
	
	printf("jenis buah: %s\n",anggur.nama);
	printf("warna: %s\n",anggur.warna);
	printf("harga: %d",anggur.harga);
	
	
	
}
