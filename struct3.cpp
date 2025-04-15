#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct mahasiswa{
    string nim;
    string nama; 
    detailAlamat alamat;
    };
    
   
    
        cout << endl;
        cout << "Data Mahasiswa" << endl;
    
        cout << "NIM = " << mhs.nim << endl;
        cout << "Nama = "  << mhs.nama << endl;
        cout << "Alamat Desa = "  << mhs.alamat.desa << endl;
        cout << "Alamat Kota = "  << mhs.alamat.kota << endl;
    }
        