#include <stdio.h>
 
int main() {
    // Kieu so nguyen ngan (thý?ng chiem 2 byte)
    short s = -32000;

    // Kieu so nguyen thong thuong (thý?ng chiem 4 byte)
    int i = -123456;

    // Kieu so nguyen dai (thý?ng chiem 4 hoac 8 byte tuy he thong)
    long l = 123456789;

    // Kieu so nguyen rat dai (chiem 8 byte, luu duoc so rat lon)
    long long ll = 1234567890123;

    // Kieu so nguyen ngan khong dau (chiem 2 byte, chi luu so duong)
    unsigned short us = 65000;

    // Kieu so nguyen khong dau (chiem 4 byte, chi luu so duong)
    unsigned int ui = 4000000000;

    // Kieu so nguyen dai khong dau (luu duoc gia tri lon hon unsigned int)
    unsigned long ul = 3000000000;

    // Kieu so nguyen rat dai khong dau (luu duoc gia tri rat lon)
    unsigned long long ull = 100000000000000;

    // Kieu ky tu (luu 1 ky tu ASCII)
    char c = 'A';

    // In gia tri cac bien ra man hinh
    printf("short s = %d\n", s);
    printf("int i = %d\n", i);
    printf("long l = %ld\n", l);
    printf("long long ll = %lld\n", ll);
    printf("unsigned short us = %hu\n", us);
    printf("unsigned int ui = %u\n", ui);
    printf("unsigned long ul = %lu\n", ul);
    printf("unsigned long long ull = %llu\n", ull);
    printf("char c = %c\n", c);

    return 0;
}

