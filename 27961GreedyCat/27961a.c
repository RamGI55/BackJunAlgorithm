#include <stdio.h> 

#define ll long long int 
int main () 
{ 
    long long N; 
    long long cnt = 0; 

    scanf_s("%lld", &N); 

    if (N == 0){ 

        printf("%lld\n", cnt);
        return 0; 
    }
    cnt ++;
    N--;

    while (N > 0)
    { 
        N= N/2;
        cnt++;
    }

    printf("&lld\n, cnt");
    return 0;
}