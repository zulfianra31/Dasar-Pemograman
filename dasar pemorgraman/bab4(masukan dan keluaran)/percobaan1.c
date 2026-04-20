#include <stdio.h>

int main() {
    int a, b, c;
    printf("Masukkan tiga bilangan bulat: ");
    scanf("%d %d %d", &a, &b, &c);
    //input bebas angka dari pengguna
    
    int jumlah = a + b + c;
    printf("Jumlah dari ketiga bilangan adalah: %d\n", jumlah);
    //output hasil penjumlahan

    
    
    return 0;
}
