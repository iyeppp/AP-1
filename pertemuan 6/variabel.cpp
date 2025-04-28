#include <iostream>
using namespace std;

string namaglobal = "ilmu";


void namavariabel(){
    string namalokal = "komputer";

    cout << namaglobal << endl;//bisa karena global
    cout << namalokal << endl; //bisa karena variabel dibuat difungsi ini (lokal)
}

int main(){
    namavariabel();

    //vglobal
    cout << namaglobal << endl;

    //vlokal
    //cout << namalokal <, endl; (tidak bisa di run)
}