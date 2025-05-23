#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{ //contoh bentuk dari struct
    string nama, nim;
    int umur;
    float ipk;
};


int main(){
    Mahasiswa mhs1;

    mhs1.nama = "Iyep";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;
    
    //Akses struct menggunakan tanda titik (.)
    // cout << "akses dengan . : " << endl;
    // cout << "nama : " << mhs1.nama << endl;
    // cout << "umur : " << mhs1.umur << endl;
    // cout << "ipk  : " << mhs1.ipk << endl;

    //Akses struct menggunakan tanda panah (->)
    Mahasiswa *ptrmhs = &mhs1;
    cout << "akses dengan -> : " << endl;
    cout << "nama : " << ptrmhs->nama << endl; //jika ingin akses struct selalu ingat tanda ->
    cout << "umur : " << ptrmhs->umur << endl;
    cout << "ipk  : " << ptrmhs->ipk << endl;

}
