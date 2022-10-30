#include <stdio.h>
#include <windows.h>
int main() {
    int a = 0100;
    int b = 100;
    int c = 0X100;
    printf("十进制为：" "a=%d, b=%d, c=%d\n", a, b, c);
    printf("各自进制为：" "a=%#o, b=%d, c=%#X", a, b, c);
    return 0;
}
