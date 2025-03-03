#include <stdio.h>
#include <conio.h>

int main(){
    system("cls");
    char nama[50];
    int nim;
    char kom[1];
    float ip;

    printf("Hello world\n");
    printf("Masukkan nama : ");
    gets(nama);
    printf("Masukkan nim : ");
    scanf("%d", &nim);
    getchar();
    printf("Masukkan kom : ");
    gets(kom);
    printf("Masukkan ip : ");
    scanf("%f", &ip);

    printf("Nama : "); puts(nama);
    printf("NIM : %d\n", nim);
    printf("KOM : "); puts(kom);
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch();
}
