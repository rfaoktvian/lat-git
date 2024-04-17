#include <iostream>
using namespace std;

struct hewan
{
    string nama_hewan;
    char jenis_kelamin;
    string cara_berkembangbiak;
    string alat_pernafasan;
    string tempat_hidup;
    bool karnivora;
};

struct hewanDarat
{
    int jumlah_kaki;
    bool menyusui;
    string suara;
    hewan darat;
};

struct hewanLaut
{
    string bentuk_sirip;
    string bentuk_pertahanan_diri;
    hewan laut;
};


int main(){

    hewanLaut kuda_laut;
    kuda_laut.laut.nama_hewan = "Sea Horses";
    kuda_laut.bentuk_pertahanan_diri = "Renang";

    hewanDarat kuda_nil;
    kuda_nil.suara = "Hoooaam";
    kuda_nil.darat.karnivora = false;









    return 0;
}