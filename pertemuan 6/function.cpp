#include <iostream>
using namespace std;

//Fungsi tanpa nilai balikan
void fungsi1(){
    cout << "==== SELAMAT DATANG DI AP-1 ====" << endl;
}

//Fungsi dengan nilai balikan
int fungsi2(int a, int b){
    return a + b;
}

//Fungsi Overload
int fungsi3(int a, int b){
    return a * b;
}

double fungsi3(double a, double b){
    return a * b;
}

//Fungsi Rekursif (menghitung nilai faktorial)
int faktorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * faktorial(n - 1);
    }
}

int main(){
    system("cls");

    //Menggunakan fungsi tanpa nilai balikan
    fungsi1();

    //Menggunakan fungsi dengan nilai balikan
    int x = 5, y = 3;
    int hasiltambah = fungsi2(x, y);
    cout << "hasil tambah : " << hasiltambah << endl;

    //menggunakan fungsi overload
    int i = 5, j = 9;
    int hasilkali = fungsi3(i,j);
    double hasilkalid = fungsi3(5.5, 2.0);
    cout << "hasil kali (int): " << hasilkali << endl;
    cout << "hasil kali (double): " << hasilkalid << endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout << "faktorial dari " << angka << " adalah : "<< faktorial(angka) << endl;
}