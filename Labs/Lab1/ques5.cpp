# include <bits/stdc++.h>

int decimal_to_binary(int8_t integer){
    int i = sizeof(integer);
    int arr[i];
    while(i--){
        arr[sizeof(integer)-i+1]=integer%2;
        integer=integer/2;
    }
    return arr[i];
}

int main(){
    int8_t x;
    scanf("%d",x);
    decimal_to_binary(x);
    for(int a=0;a<=8;a++){
        putchar(arr[i])
    }
    return 0;
}