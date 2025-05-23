#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){

    //array declaration & initialization
    //2 cara membuat array

    //cara 1 : array kosong
    // string nama[5];

    // nama[0] = "Alya";
    // nama[1] = "Iyep";
    // nama[2] = "Akip";
    // nama[3] = "Paler";
    // nama[4] = "Poce";

    //cara 2 : array yang langsung diisi
    // string nama[5] = {"Alya", "Iyep", "Akip", "Paler", "Poce"};
    // string nama[] = {"Alya", "Iyep", "Akip", "Paler", "Poce"};

    //Ascending Element in Array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    //Menggunakan Looping untuk output array
    // for (int i = 0; i < 5; i++){
    //     cout << nama[i] << endl;
    // }

    //Descending Element in Array Using Looping
    // for (int i = 4; i >= 0; i--){
    //     cout << nama[i] << endl;
    // }

    //Multidimensional Array (biasanya digunakan untuk membuat sebuah matriks)

    //Array Matriks 2x3
    // int matriks[2][3] = {{1,3,5},{2,4,6}};
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << matriks[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //Array Matriks 4x6
    // int matriks[4][6] = {{1,2,3,4,5,6},{2,3,4,5,6,7},{3,4,5,6,7,8},{4,5,6,7,8,9}};
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 6; j++){
    //         cout << matriks[i][j] << "\t"; 
    //     }
    //     cout << endl;
    // }

    //String (array of char)
    // string nama = "iyeppp";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // for(int i = 0; i < nama.length(); i++){
    //     cout << nama[i] << endl;
    // }
    
    //String 1 to String 2
    // string s1 = "hello";
    // string s2 = "world";
    // s1 = s2;
    // cout << s1;

    //String 1 + String 2
    // string s1 = "hello";
    // string s2 = "world";
    // s1 = s1 + s2;
    // cout << s1;

    //string.length (untuk memberikan panjang sebuah string dalam bentuk index)
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl;
    
    //string.substring (digunakan untuk mengambil pecahan string sesuai dengan masukan index nya)
    // cout << s1.substr(2,3) << endl;
    // cout << (s1 + s2).substr(5,2) << endl;

    //Operator sizeof (digunakan untuk mengecek ukuran dari sebuah variabel)
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10,20,30,40,50};
    // cout << sizeof(nilai);

    // string nama[] = {"Alya", "Iyep", "Akip", "Paler", "Poce"};
    // int n = sizeof(nama) / sizeof (string);
    // cout << sizeof(nama) << endl;
    // cout << n; //ini untuk mengecek berapa jumlah data di dalam array

    //Array Library
    array<float, 5> nilai = {98.2, 87.4, 12.2, 98.1, 21.2};
    for(int i = 0; i < nilai.size(); i++){
        cout << nilai[i] << " " << endl;
    }

    for(float n : nilai){
        cout << n << " ";
    }
}
