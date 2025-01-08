#include<bits/stdc++.h>

void print_bin(unsigned int integer)
{
    int i = sizeof(integer);
    while(i--) {
        putchar('0' + ((integer >> i) & 1)); 
    }
}

int main(){
    uint8_t a = 11;
    print_bin(a);
    return 0;
}