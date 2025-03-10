#include <iostream>
using namespace std;

int main (){
    float volume, lp, r;
    const float phi = 3.14;

    cout << "Masukkan jari jari : ";
    cin >> r;

    volume = 4 / 3 * phi * r * r * r;
    lp = 4 * phi * r * r;

    cout << volume << endl;
    cout << lp;

}