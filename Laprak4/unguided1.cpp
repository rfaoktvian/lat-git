#include<iostream>

using namespace std;

struct buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    int harga_buku;
};buku data1[5];

int main(){

    data1[0].judul_buku = "Lionel";
    data1[1].judul_buku = "Andreas Messi";
    data1[2].judul_buku = "The Best";
    data1[3].judul_buku = "Captain in The World";
    data1[4].judul_buku = "WC 2022";

    data1[0].pengarang = "Raffa";
    data1[1].pengarang = "Yanto";
    data1[2].pengarang = "Abas";
    data1[3].pengarang = "Tiez";
    data1[4].pengarang = "Arbani";

    data1[0].penerbit = "Racing Hell";
    data1[1].penerbit = "Surya";
    data1[2].penerbit = "Yudha";
    data1[3].penerbit = "Surti";
    data1[4].penerbit = "Arjuna";

    data1[0].tebal_halaman = 210;
    data1[1].tebal_halaman = 212;
    data1[2].tebal_halaman = 211;
    data1[3].tebal_halaman = 213;
    data1[4].tebal_halaman = 214;

    data1[0].harga_buku = 55000;
    data1[1].harga_buku = 57000;
    data1[2].harga_buku = 51000;
    data1[3].harga_buku = 65000;
    data1[4].harga_buku = 80000;
    

    
    for(int i=0; i<5; i++){
    cout<<"Data Buku ke-"<<i+1<<endl;
    cout<<"Judul: "<<data1[i].judul_buku<<endl;
    cout<<"Pengarang: "<<data1[i].pengarang<<endl;
    cout<<"Penerbit: "<<data1[i].penerbit<<endl;
    cout<<"Tebal Halaman: "<<data1[i].tebal_halaman<<endl;
    cout<<"Harga: "<<data1[i].harga_buku<<endl;
    cout<<endl;
    cout<<endl;
    }
    

    



    return 0;
}