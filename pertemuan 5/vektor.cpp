#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Vector Declaration & Initialization
    vector<string> nama = {"iyep", "paler", "akip"};
    // for(string n : nama){
    //     cout << n << endl;
    // }

    //Add data to vector
    nama.push_back("toriq"); //menambahkan data baru ke index paling belakang dari sebuah vector
    for(string n : nama){
        cout << n << endl;
    }

    //Delete data in vector
    nama.pop_back(); //menghapus data paling belakang
    nama.erase(nama.begin() + 3); //menghapus data yang terletak di indeks ke-3
    for(string n : nama){
        cout << n << endl;
    }
}
