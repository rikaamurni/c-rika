#include<stdio.h>
#include<conio.h>

int pilihan,jam;
float gaji_tetap,upah_lembur,upah_tambahan,gaji;

void main()
{

do{
printf("\nMenu Perhitungan gaji karyawan berdasarkan golongan : ");
printf("\n1. Golongan 1");
printf("\n2. Golongan 2");
printf("\n3. Golongan 3");
printf("\n4. Golongan 4");
printf("\n5. Keluar");
printf("\nMasukkan nomor pilihan menu golongan karyawan = ");
scanf("%i",&pilihan);

switch(pilihan)
{
case 1:
printf("Masukkan Lama Jam Lembur = ");
scanf("%i", &jam);
gaji_tetap=2500000;
upah_lembur= 15000*jam;
if(jam>15) {
upah_tambahan=10*upah_lembur/100;
}
else upah_tambahan=0;
gaji=gaji_tetap+upah_lembur+upah_tambahan;
printf("Total Gaji Karyawan = Gaji tetap + Total Upah Lembur + Upah Tambahan\n");
printf("Total Gaji Karyawan = %.2f + %.2f + %.2f = %.2f\n", gaji_tetap,upah_lembur,upah_tambahan,gaji);
break;

case 2:
printf("Masukkan Lama Jam Lembur = ");
scanf("%i", &jam);
gaji_tetap=2000000;
upah_lembur= 12500*jam;
if(jam>15) {
upah_tambahan=10*upah_lembur/100;
}
else upah_tambahan=0;
gaji=gaji_tetap+upah_lembur+upah_tambahan;
printf("Total Gaji Karyawan = Gaji tetap + Total Upah Lembur + Upah Tambahan\n");
printf("Total Gaji Karyawan = %.2f + %.2f + %.2f = %.2f\n", gaji_tetap,upah_lembur,upah_tambahan,gaji);
break;

case 3:
printf("Masukkan Lama Jam Lembur = ");
scanf("%i", &jam);
gaji_tetap=1500000;
upah_lembur= 10000*jam;
if(jam>15) {
upah_tambahan=10*upah_lembur/100;
}
else upah_tambahan=0;
gaji=gaji_tetap+upah_lembur+upah_tambahan;
printf("Total Gaji Karyawan = Gaji tetap + Total Upah Lembur + Upah Tambahan\n");
printf("Total Gaji Karyawan = %.2f + %.2f + %.2f = %.2f\n", gaji_tetap,upah_lembur,upah_tambahan,gaji);
break;

case 4:
printf("Masukkan Lama Jam Lembur = ");
scanf("%i", &jam);
gaji_tetap=1000000;
upah_lembur= 7500*jam;
if(jam>15) {
upah_tambahan=10*upah_lembur/100;
}
else upah_tambahan=0;
gaji=gaji_tetap+upah_lembur+upah_tambahan;
printf("\nTotal Gaji Karyawan = Gaji tetap + Total Upah Lembur + Upah Tambahan");
printf("\nTotal Gaji Karyawan = %.2f + %.2f + %.2f = %.2f", gaji_tetap,upah_lembur,upah_tambahan,gaji);
break;
}
getch();
}
while(pilihan!=5);

getch();
}


