#include <iostream>
using namespace std;

void penjumlahan(int a, int b){
    cout << a + b << endl;
}

void penjumlahan_pointer(int *a, int*b){
    *a += *b;
    cout << *a << endl;
}

void double_value(int *a){
    *a *= 2;
    cout << *a << endl;
}

int main(){
    //Deklarasi Pointer
    int number = 55;
    int *pn = &number;

    // cout << "Isi variabel number : " << number << endl;
    // cout << "Alamat memori dari number : " << &number << endl;
    // cout << "Isi variabel pointer number(pn) : " << pn << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer number(pn) : " << *pn << endl;
    // cout << "Alamat memori variabel pointer number(pn) :" << &pn << endl;
    // cout << endl;

    //Pointer operation
    // *pn = 25;
    // cout << "Isi variabel number : " << number << endl;
    // cout << "Alamat memori dari number : " << &number << endl;
    // cout << "Isi variabel pointer number(pn) : " << pn << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer number(pn) : " << *pn << endl;
    // cout << "Alamat memori variabel pointer number(pn) :" << &pn << endl;
    // cout << endl;

    //Pointer in array
    int num[] = {1,2,3,4,5};
    int *pointer_num = num;
    // cout << "Isi variabel num : " << num[0] << endl;
    // cout << "Alamat memori dari num : " << &num[3] << endl;
    // cout << "Isi variabel pointer num : " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer num : " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer num :" << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5; // 1 + 5 = 6
    // cout << "Isi variabel num : " << num[0] << endl;0000.00..
    // cout << "Alamat memori dari num : " << &num[0] << endl;
    // cout << "Isi variabel pointer num : " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer num : " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer num :" << &pointer_num << endl;
    // cout << endl;

    //Pointer in Paramater
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1 , num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahan_pointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    //Pointer in Pointer
    // int score = 4;
    // int *pscore = &score;
    // int **ppscore = &pscore;

    // cout << "Isi variabel score : " << score << " dan alamat memori nya : " << &score << endl;
    // cout << "Isi variabel pscore : " << pscore << " dan isi variabel yang ditunjuk oleh pscore : "<< *pscore << " alamat memori pscore adalah : "<< &pscore << endl;
    // cout << "Isi variabel ppscore : " << pscore << " dan isi variabel yang ditunjuk oleh ppscore : "<< **ppscore << " alamat memori ppscore adalah : "<< &ppscore << endl;
    
    //Dynamic Pointer
    // int *p = new int;
    // *p = 30;
    // cout << "Isi variabel p : " << *p << " alamat variabel p : " << &p << endl;
    // delete p; //deallocation
    // cout << "Isi variabel p : " << *p << " alamat variabel p : " << &p << endl;

    //Contoh
    // int i;
    // cin >> i;
    // double_value(&i);
    // cout << "i setelah dikali 2 : " << i << endl;
}