#include<iostream>

using namespace std;

struct Hewan{
    string nama_hewan;
    char jenis_kelamin;
    string caraBerkembangbiak;
    string alatPernapasan;
    string tempatHidup;
    bool apakahKarnivora;
};

struct hewanDarat{
    int jumlahkaki;
    bool menyusui;
    string suara;
};

struct hewanLaut{
    string bentukSirip;
    string bentukPertahanandiri;

};

int main(){

Hewan Kucing;
Kucing.nama_hewan = "Kucing";
Kucing.jenis_kelamin = 'P';
Kucing.caraBerkembangbiak = "Melahirkan";
Kucing.alatPernapasan = "Paru-Paru";
Kucing.tempatHidup = "Dimanapun";
Kucing.apakahKarnivora = true;

hewanDarat tokek;
tokek.jumlahkaki = 4;
tokek.menyusui = false;
tokek.suara = "Tokekk";

hewanLaut paus;
paus.bentukSirip = "Sirip Dorsal, Kaudal, Anal, Ventral dan Pektoral";
paus.bentukPertahanandiri = "Kulit yang tebal dan besar";

cout<<"\t\t---HEWAN---"<<endl;
cout<<"Nama Hewan:          "<<Kucing.nama_hewan<<endl;
cout<<"Jenis Kelamin:       "<<Kucing.jenis_kelamin<<endl;
cout<<"Cara Berkembangbiak: "<<Kucing.caraBerkembangbiak<<endl;
cout<<"Alat Pernafasan:     "<<Kucing.alatPernapasan<<endl;
cout<<"Tempat Hidup:        "<<Kucing.tempatHidup<<endl;
cout<<"Apakah Karnivora:    "<<Kucing.apakahKarnivora<<endl;

cout<<endl;
cout<<endl;

cout<<"\t\t---Hewan Darat---"<<endl;
cout<<"Jumlah Kaki:     "<<tokek.jumlahkaki<<endl;
cout<<"Menyusui:        "<<tokek.menyusui<<endl;
cout<<"Suara:           "<<tokek.suara<<endl;

cout<<endl;
cout<<endl;

cout<<"\t\t---Hewan Laut---"<<endl;
cout<<"Bentuk Sirip:            "<<paus.bentukSirip<<endl;
cout<<"Bentuk Pertahanan diri:  "<<paus.bentukPertahanandiri<<endl;

    return 0;
}