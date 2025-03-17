#include <iostream>
using namespace std;

int main(){
    system("cls");
    int nilai;
    cin >> nilai;

    if (nilai % 10 == 0){
        cout << "kelipatan 10";
    }
    else if (nilai % 5 == 0){
        cout << "kelipatan 5";
    }
    else{
        cout << "bukan keduanya";
    }
}