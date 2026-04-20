#include <stdio.h>

typedef struct 
{
    int jam;
    int menit;
    int detik;
    //isi bungkusan

}waktu; // nama pembungkus

int main() {
    waktu sekarang;// kita panggil dulu bungkusannya lalu kita nami juga bungkusan untuk pemanggilannya
    sekarang.jam = 10; 
    sekarang.menit = 30;
    sekarang.detik = 45;
    // kita panggil isi bungkusannya dan diisi serta jangan lupa memakai nama pembungkusnya

    printf("Waktu sekarang: %d:%d:%d\n", sekarang.jam, sekarang.menit, sekarang.detik);
    return 0;
}
