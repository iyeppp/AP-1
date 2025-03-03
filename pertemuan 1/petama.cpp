#include <iostream>
#include <conio.h> //untuk getche dan getch
using namespace std;


int main(){
    /* ini untuk komentar*/
    char jk;
    string nama;
    int nim;
    float ip;

    cout << "Masukkan nama : ";
    getline(cin, nama); //agar karakter spasi dapat terbaca

    cout << "Masukkan nim : ";
    cin >> nim;

    cout << "Masukkan ip : ";
    cin >> ip;

    cout << "masukkan jenis kelamin : ";
    jk = getche(); //karakter langsung tampil, tanpa enter

    cout << "\n" << nama << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jk); //untuk nampilkan jk
    
    getch(); //karakter disimpan di memory, tanpa enter dan tidak akan tampil


}