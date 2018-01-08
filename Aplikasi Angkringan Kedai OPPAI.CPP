#include <conio.h>
#include <stdio.h>
#include <iostream.h>
int main() {
struct
   {
   char kobar, nabar[20];
   int harga,jumlah,total,bayar,kembali;
   }
   brng;

   char awal, ulang;

   awal:
   clrscr();
   puts("\t\t=============================================================");
   puts("\t\t*  	  -SELAMAT DATANG DI ANGKRINGAN KEDAI OPPAI-        *");
   cout<<("\t\t=============================================================")<<endl<<endl<<endl;
   puts("==============================================================");
   puts("  	 *SILAHKAN PILIH DAFTAR MENU YANG DISEDIAKAN*   ");
   puts("==============================================================");
   puts("[1] Makanan");
   puts("[2] Minuman");
   puts("[3] exit");
   cout<<"Pilih Kode Menu [1/2/3] : ";cin>>awal;

   if (awal=='1')
       goto satu;
    else
    if (awal=='2')
        goto dua;
    else
    if (awal=='3')
      goto tiga;
    else
    	goto empat;

      satu:
      clrscr();
      cout<<("\t\t================================================")<<endl;
      cout<<("\t\t                >DAFTAR MAKANAN<    ")<<endl;
      cout<<("\t\t================================================")<<endl<<endl<<endl;
      cout<<("-----------------------------------------------------")<<endl;
      cout<<("|\t\t DAFTAR HARGA MAKANAN               |")<<endl;
      cout<<("-----------------------------------------------------")<<endl;
      cout<<("|[A] \t\tNasi Kucing  \t\tRp.2000,-   |")<<endl;
      cout<<("|[B] \t\tMendoan Anget \t\tRp.1500,-   |")<<endl;
      cout<<("|[C] \t\tDaging Burung\t\tRp.2500,-   |")<<endl;
    	cout<<("|[D] \t\tNasi Uduk\t\tRp.2000,-   |")<<endl;
      cout<<("|[E] \t\tNasi Kuning\t\tRp.2000,-   |")<<endl;
      cout<<("|[F] \t\tUsus Ayam\t\tRp.1500,-   |")<<endl;
      cout<<("|[G] \t\tSosis     \t\tRp.2000,-   |")<<endl;
      cout<<("|[H] \t\tIkan Bandeng\t\tRp.4000,-   |")<<endl;
    	cout<<("|[I] \t\tIkan Lele\t\tRp.3000,-   |")<<endl;
      cout<<("|[J] \t\tKrupuk  \t\tRp.2000,-   |")<<endl;
      cout<<("|[K] \t\tNasi Bakar\t\tRp.3000,-   |")<<endl;
      cout<<("|[L] \t\tAmpela Ayam\t\tRp.3000,-   |")<<endl;
      cout<<("|[M] \t\tCeker     \t\tRp.1000,-   |")<<endl;
      cout<<("|[N] \t\tKepala ayam\t\tRp.1000,-   |")<<endl;
      cout<<("|[O] \t\tTahu Goreng\t\tRp.1000,-   |")<<endl;
      cout<<("|[P] \t\tTempe Goreng\t\tRp.4000,-   |")<<endl;
      cout<<("|[Q] \t\tPaha Ayam\t\tRp.1000,-   |")<<endl;
      cout<<("|[R] \t\tPeyek     \t\tRp.2000,-   |")<<endl;
      cout<<("|[S] \t\tGorengan\t\tRp.3000,-   |")<<endl;
      cout<<("-----------------------------------------------------")<<endl;
      cout<<"Pilih Satu Kode Makanan [A-S] :"; cin>>brng.kobar;
      if (brng.kobar=='A'||brng.kobar=='a')
              {strcpy (brng.nabar, "Nasi Kucing");
             brng.harga=2000;}
      else
      if (brng.kobar=='B'||brng.kobar=='b')
              {strcpy (brng.nabar, "Mendoan anget");
             brng.harga=1500;}
      else
      if (brng.kobar=='C'||brng.kobar=='c')
              {strcpy (brng.nabar, "Daging Burung");
              brng.harga=2500;}
      else
      if (brng.kobar=='D'||brng.kobar=='d')
              {strcpy (brng.nabar, "Nasi Uduk");
              brng.harga=2000;}
      else
      if (brng.kobar=='E'||brng.kobar=='e')
              {strcpy (brng.nabar, "Nasi Kuning");
              brng.harga=2000;}

       else
      if (brng.kobar=='F'||brng.kobar=='f')
              {strcpy (brng.nabar, "Usus ayam");
              brng.harga=1500;}
        else
      if (brng.kobar=='G'||brng.kobar=='g')
              {strcpy (brng.nabar, "Sosis");
              brng.harga=2000;}
      else
      if (brng.kobar=='H'||brng.kobar=='h')
              {strcpy (brng.nabar, "Ikan Bandeng");
              brng.harga=4000;}
      else
      if (brng.kobar=='I'||brng.kobar=='i')
              {strcpy (brng.nabar, "Ikan Lele");
              brng.harga=3000;}
      else
      if (brng.kobar=='J'||brng.kobar=='j')
              {strcpy (brng.nabar, "Krupuk");
              brng.harga=2000;}
      else
      if (brng.kobar=='K'||brng.kobar=='k')
              {strcpy (brng.nabar, "Nasi Bakar");
              brng.harga=3000;}
      else
      if (brng.kobar=='L'||brng.kobar=='l')
              {strcpy (brng.nabar, "Ampela ayam");
              brng.harga=3000;}
      else
      if (brng.kobar=='M'||brng.kobar=='m')
              {strcpy (brng.nabar, "Ceker");
              brng.harga=1000;}
      else
      if (brng.kobar=='N'||brng.kobar=='n')
              {strcpy (brng.nabar, "Kepala Ayam");
              brng.harga=1000;}
      else
      if (brng.kobar=='O'||brng.kobar=='o')
              {strcpy (brng.nabar, "Tahu Goreng");
              brng.harga=1000;}
      else
      if (brng.kobar=='P'||brng.kobar=='p')
              {strcpy (brng.nabar, "Tempe Goreng");
              brng.harga=4000;}
      else
      if (brng.kobar=='Q'||brng.kobar=='q')
              {strcpy (brng.nabar, "Paha Ayam");
              brng.harga=1000;}
      else
      if (brng.kobar=='R'||brng.kobar=='r')
              {strcpy (brng.nabar, "Peyek");
              brng.harga=2000;}
      else
      if (brng.kobar=='S'||brng.kobar=='s')
              {strcpy (brng.nabar, "Gorengan");
              brng.harga=3000;}

   cout<<("================================================")<<endl;
       cout<<"Nama Barang       : "<<brng.nabar<<endl;
      cout<<"Harga Barang       : Rp. "<<brng.harga<<endl;
      cout<<"Jumlah Beli        : ";cin>>brng.jumlah;
       brng.total=brng.harga*brng.jumlah;
      cout<<"Total bayar        : Rp. "<<brng.total<<endl;
      cout<<"Jumlah Uang Bayar  : Rp. ";cin>>brng.bayar;
      cout<<"Tambah makanan     : "<<brng.nabar<<endl;
      brng.kembali=brng.bayar-brng.total;
      cout<<"Uang kembali       : Rp. "<<brng.kembali<<endl;
   cout<<("================================================")<<endl;
       cout<<"Mau Membeli Lagi? [Y/T] : ";cin>>ulang;
      if(ulang=='Y'||ulang=='y')
       goto satu;
      else
       goto awal;

        dua:
            clrscr();
          cout<<("\t\t=============================================")<<endl;
          cout<<("\t\t               >DAFTAR MINUMAN<              ")<<endl;
          cout<<("\t\t=============================================")<<endl<<endl<<endl;
          cout<<("-----------------------------------------------------------")<<endl;
          cout<<("|  \t\tDAFTAR HARGA MINUMAN                      |")<<endl;
          cout<<("-----------------------------------------------------------")<<endl;
          cout<<("|[A] \t\tFanta \t\t\tRp.4000,-         |")<<endl;
          cout<<("|[B] \t\tEs Jeruk\t\tRp.6000,-         |")<<endl;
          cout<<("|[C] \t\tEs Teh\t\t\tRp.3000,-         |")<<endl;
          cout<<("|[D] \t\tPuply Orange\t\tRp.4000,-         |")<<endl;
          cout<<("|[E] \t\tKopi Hitam\t\tRp.3500,-         |")<<endl;
          cout<<("|[F] \t\tSusu Jahe\t\tRp.6000,-         |")<<endl;
          cout<<("|[G] \t\tSusu Anget\t\tRp.4000,-         |")<<endl;
          cout<<("|[H] \t\tKopi Susu\t\tRp.3000,-         |")<<endl;
          cout<<("|[I] \t\tTeh Tawar\t\tRp.2000,-         |")<<endl;
          cout<<("-----------------------------------------------------------")<<endl;
          cout<<"Pilih Satu Kode Minuman [A-I] : ";cin>>brng.kobar;
          if (brng.kobar=='A'||brng.kobar=='a')
          {strcpy (brng.nabar, "Fanta");
          brng.harga=4000;}
          else
          if (brng.kobar=='B'||brng.kobar=='b')
          {strcpy (brng.nabar, "Es Jeruk");
          brng.harga=6000;}
          else
          if (brng.kobar=='C'||brng.kobar=='c')
          {strcpy (brng.nabar, "Es Teh");
          brng.harga=3000;}
          else
          if (brng.kobar=='D'||brng.kobar=='d')
          {strcpy (brng.nabar, "Pulpy Orange");
          brng.harga=4000;}
          else
          if (brng.kobar=='E'||brng.kobar=='e')
          {strcpy (brng.nabar, "Kopi Hitam");
          brng.harga=3500;}
          else
          if (brng.kobar=='F'||brng.kobar=='f')
          {strcpy (brng.nabar, "Susu Jahe");
          brng.harga=6000;}
          else
          if (brng.kobar=='G'||brng.kobar=='g')
          {strcpy (brng.nabar, "Susu Anget");
          brng.harga=4000;}
          else
          if (brng.kobar=='H'||brng.kobar=='h')
          {strcpy (brng.nabar, "Kopi Susu");
          brng.harga=3000;}
          else
          if (brng.kobar=='I'||brng.kobar=='i')
          {strcpy (brng.nabar, "Teh Tawar");
          brng.harga=2000;}

          cout<<("===================================================")<<endl;
          cout<<"Nama barang  : "<<brng.nabar<<endl;
          cout<<"Harga barang : Rp.  "<<brng.harga<<endl;
          cout<<"Jumlah beli  : ";cin>>brng.jumlah;
          brng.total=brng.harga*brng.jumlah;
          cout<<"Total Bayar  : Rp. "<<brng.total<<endl;
          cout<<"Uang Bayar   : Rp. ";cin>>brng.bayar;
          brng.kembali=brng.bayar-brng.total;
          cout<<"Uang kembali : Rp. "<<brng.kembali<<endl;
          cout<<("===================================================")<<endl;
          cout<<"Mau Membeli Lagi? [Y/T] :";cin>>ulang;
          if (ulang=='Y'||ulang=='y')
          goto dua;
          else
          goto awal;

          tiga:
          cout<<endl<<endl;
          cout<<"\t\t    ****TERIMA KASIH****";
          empat:
          cout<<endl<<endl;
          cout<<"\t\t*---SAMPAI BERTEMU KEMBALI---*";
getch();
return 0;
}