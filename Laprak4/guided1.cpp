#include<iostream>

using namespace std;

struct buku{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    int harga_buku;
};buku data1;

int main(){
    
    data1.judul_buku = "Kasur Kasar";
    data1.pengarang = "Yanto";
    data1.penerbit = "Racing Hell";
    data1.tebal_halaman = 212;
    data1.harga_buku = 55000;
    

    cout<<"Data Buku "<<endl;
    cout<<"Judul:           "<<data1.judul_buku<<endl;
    cout<<"Pengarang:       "<<data1.pengarang<<endl;
    cout<<"Penerbit:        "<<data1.penerbit<<endl;
    cout<<"Tebal Halaman:   "<<data1.tebal_halaman<<endl;
    cout<<"Harga:           "<<data1.harga_buku<<endl;

    return 0;
}