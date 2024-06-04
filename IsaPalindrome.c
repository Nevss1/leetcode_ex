#include <stdio.h>
#include <stdbool.h>

#define bool _Bool

bool isPalindrome(int x) {
    if (x < 0){ // caso seja negativo
        return false;
    }
    
    long long num = x;
    long long reversed_num = 0; // long long usado para não ter problema com overflow caso tenham números grandes

    while (num!=0)
    {
        int digit = num % 10;
        num = num/10;
        reversed_num = reversed_num*10 + digit;
        printf("\n%lld / %lld / %d", num, reversed_num, digit); // verificação
    }
    return (reversed_num == x);
}


int main(int argc, char const *argv[])
{
    int oi = isPalindrome(231787132);
    printf("\n %d", oi);
    printf("\n");
}