#include <stdio.h>

int main() {
    int a = 10; // Tipe data integer
    float b = 3.14; // Tipe data float
    char c = 'A'; // Tipe data char
    char d[] = "Hello"; // Tipe data string (array of characters)
    int status = 1; // Tipe data boolean (0 untuk false, 1 untuk true)

    printf("Nilai a: %d\n", a);// Menampilkan nilai a
    printf("Nilai b: %.2f\n", b); // Menampilkan nilai b dengan 2 angka di belakang koma
    printf("Nilai c: %c\n", c);// Menampilkan nilai c
    printf("Nilai d: %s\n", d); // Menampilkan nilai d
    printf("Nilai status: %d\n", status); // Menampilkan nilai status
    return 0;
}