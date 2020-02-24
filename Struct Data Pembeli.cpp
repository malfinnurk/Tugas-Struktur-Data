#include<iostream>
using namespace std;

struct Pembayaran;{
       int Kuantitas;
       int Harga_Bayar;
       int Harga_Total;

 };

struct pembeli;{
	int kode_pbl;
	int status;
	int nama;

	char nama_pembeli;
 };

struct Data_Barang;
{
int kode_barang;
int harga_barang;
int jumlah_harga_barang;
int diskon;

char nama_barang;

struct pembayaran;
}

Data_Barang DB;
int Harga_total, x;

int main()
{

 cout<<"TOKO INDO APRIL"<<endl;
 cout<<"Jl. DI Panjaitan 128 Purwokerto"<<endl;

    cout<<"Masukkan jumlah barang yang ingin dibeli : ";

    cin>>x;

 for (int i=0; i<x; i++)

  { cout<<"Masukkan data barang ke-"<<i+1<<endl;

    cout<<"Kode Barang : ";

    cin>>DB[i].Kode_Barang;



    if(DB[i].Kode_Barang==001)

  {DB[i].Nama_Barang="pensil"; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=2000; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=0; cout<<"diskon : "<<DB[i].Diskon<<endl;}



  else if(DB[i].Kode_Barang==002)

  {DB[i].Nama_Barang="Buku tulis"; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=3500; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=0; cout<<"diskon : "<<DB[i].Diskon<<endl;}



   else if(DB[i].Kode_Barang==003)

  {DB[i].Nama_Barang="Penghapus"; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=1000; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=0; cout<<"diskon : "<<DB[i].Diskon<<endl;;}


     else if(DB[i].Kode_Barang==004)

  {DB[i].Nama_Barang="Penggaris"; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=1500; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=0; cout<<"diskon : "<<DB[i].Diskon<<endl;;}


     else if(DB[i].Kode_Barang==005)

  {DB[i].Nama_Barang="Ballpoint"; cout<<"Nama Barang : "<<DB[i].Nama_Barang<<endl;

  DB[i].Harga_Barang=2500; cout<<"harga : "<<DB[i].Harga_Barang<<endl;

  DB[i].Diskon=0; cout<<"diskon : "<<DB[i].Diskon<<endl;;}



  else {cout<<"data tidak ada"<<endl;

    ("pause");

  return 0;}


    cout<<"Kuantitas : ";

    cin>>DB[i].Bayar.Kuantitas;

    DB[i].Jumlah_Harga_Barang=DB[i].Bayar.Kuantitas*(DB[i].Harga_Barang-(DB[i].Harga_Barang*DB[i].Diskon/100));

    Harga_Total=Harga_Total+DB[i].Jumlah_Harga_Barang;

    cout<<"Harga Bayar :"<<DB[i].Jumlah_Harga_Barang<<endl;

    cout<<"Total Harga :"<<Harga_Total<<endl;

    cout<<endl<<endl;

    { cout<<"Masukkan data pembeli"<<endl;

    cout<<"Kode Barang : ";

    cin>>DP[a].Kode_pbl;



    if(DP[a].Kode_pbl==P001)

  {DP[a].Nama_pbl="Diana"; cout<<"Nama pembeli : "<<DP[a].Nama_pbl<<endl;

  DP[a].status=M; cout<<"status : "<<endl;}


    else if(DP[a].Kode_pbl==P002)

  {DP[a].Nama_pbl="Rina"; cout<<"Nama pembeli : "<<DP[a].Nama_pbl<<endl;

  DP[a].status=M; cout<<"status : "<<endl;}


    else if(DP[a].Kode_pbl==P003)

  {DP[a].Nama_pbl="Lina"; cout<<"Nama pembeli : "<<DP[a].Nama_pbl<<endl;

  DP[a].status=BM; cout<<"status : "<<endl;}


    else if(DP[a].Kode_pbl==P004)

  {DP[a].Nama_pbl="Doni"; cout<<"Nama pembeli : "<<DP[a].Nama_pbl<<endl;

  DP[a].status=BM; cout<<"status : "<<endl;}


    else if(DP[a].Kode_pbl==P005)

  {DP[a].Nama_pbl="Dodi"; cout<<"Nama pembeli : "<<DP[a].Nama_pbl<<endl;

  DP[a].status=M; cout<<"status : "<<endl;}




}

}
