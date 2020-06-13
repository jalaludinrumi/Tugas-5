#include <iostream>
using namespace std;
#include <conio.h>

//pendeklarasian tipe enum berupa 'bulan'
enum bulan{Januari, Februari, Maret, April, Mei, Juni,
Juli, Agustus, September, Oktober, November, Desember};

int main()
{
      /*pendefinisian variabl bernama b1 dan b2
        yang bertipe enum 'bulan'*/
      bulan b1,b2;
      int selisih_bulan;

      //pemberian nilai pada variabel enum
      b1 = Desember;
      b2 = Februari;

      cout<<"Tipe ENUM C++"<<endl;
      cout<<"-------------"<<endl;
      cout<<"nilai b1 = Desember"<<endl; // 11
      cout<<"nilai b2 = Februari"<<endl; // 1
      cout<<"\nSelisih kedua bulan di atas adalah "<<b1-b2<<endl;

      _getche();
      return EXIT_SUCCESS;
}
