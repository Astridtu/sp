#include <stdio.h>

// 定義一個函數指針類型
//using chatgpt
typedef int (*power_func)(int, int);

// 機器碼的十六進制表示
unsigned char power_code[] = {
    0x55,                               // push   %rbp
    0x48, 0x89, 0xe5,                   // mov    %rsp,%rbp
    0x89, 0x7d, 0xfc,                   // mov    %edi,-0x4(%rbp)
    0x89, 0x75, 0xf8,                   // mov    %esi,-0x8(%rbp)
    0x8b, 0x45, 0xfc,                   // mov    -0x4(%rbp),%eax
    0x3b, 0x45, 0xf8,                   // cmp    -0x8(%rbp),%eax
    0x76, 0x05,                         // jbe    0x1e
    0x8b, 0x45, 0xfc,                   // mov    -0x4(%rbp),%eax
    0xeb, 0x0e,                         // jmp    0x2c
    0x8b, 0x55, 0xfc,                   // mov    -0x4(%rbp),%edx
    0x8b, 0x45, 0xf8,                   // mov    -0x8(%rbp),%eax
    0x0f, 0xaf, 0xc2,                   // imul   %edx,%eax
    0x89, 0xc2,                         // mov    %eax,%edx
    0x83, 0xe9, 0x01,                   // sub    $0x1,%ecx
    0x75, 0xf4,                         // jne    0x1a
    0x89, 0xd0,                         // mov    %edx,%eax
    0x5d,                               // pop    %rbp
    0xc3                                // retq
};

int main() {
    // 將機器碼拷貝到可執行內存區
    power_func power = (power_func)power_code;

    // 測試 power 函數
    int a = 2;
    int n = 10;
    int result = power(a, n);
    printf("%d^%d = %d\n", a, n, result);

    return 0;
}
