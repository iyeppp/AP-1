#include <iostream>
using namespace std;

class contohakses{ //private merupakan kasta tertinggi di class
    private:
        int privatevar;
    protected:
        int procvar;
    public:
        int pubvar;

    //Constructor
    contohakses(){
        privatevar = 1;
        procvar = 2;
        pubvar = 3;
    }

    void tampilkansemua(){
        cout << "Akses dari dalam class : " << endl;
        cout << privatevar << endl;
        cout << procvar << endl;
        cout << pubvar << endl;
    }
};

class Turunan : public contohakses{
    public:
    void aksesproc(){
        // cout << privatevar << endl; // error karena diluar dari class utama
        cout << procvar << endl;
        cout << pubvar << endl;
    }
};

int main(){
    contohakses obj;
    obj.tampilkansemua();

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privatevar << endl; // error
    // cout << obj.procvar << endl; // error
    cout << obj.pubvar << endl;

    cout << "\nAkses dari kelas turunan : " << endl;
    Turunan tur;
    tur.aksesproc();
}
