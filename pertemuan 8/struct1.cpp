#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alamat{
    string jalan, kota;
    int kodepos;
};

struct Mahasiswa{
    string nama, nim;
    int umur;
    float ipk;
    alamat alamat0; //nested struct
};

int main(){
    Mahasiswa mhs1;

    // mhs1.alamat0.jalan = "Jalan Karya Jaya";
    // mhs1.alamat0.kota = "Medan";
    // mhs1.alamat0.kodepos = 20151;

    // cout << "Alamat : " << mhs1.alamat0.kota;
    // cout << " " << mhs1.alamat0.jalan;
    // cout << " " << mhs1.alamat0.kodepos << endl;

    vector<Mahasiswa>mahasiswa;
    int n;
    cout << "masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cin.get();
        cout << "Masukkan nama : "; getline(cin, mhs1.nama);
        cout << "Masukkan umur : "; cin >> mhs1.umur;
        cout << "Masukkan ipk : "; cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }
    
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }


}