#ifndef IBU_H
#define IBU_H
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class anak; 

class ibu {
public:
    string nama;
    vector<anak*> daftar_anak; 

    ibu(string pNama) : nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }

    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }

    void tambahAnak(anak*);
    void cetakAnak();
}; 


void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}

void ibu::cetakAnak() {
    cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
    for (int i = 0; i < daftar_anak.size(); i++) {
        // Pastikan pakai [i] ya, jangan angka 1
        cout << daftar_anak[i]->nama << endl; 
    }
}

#endif