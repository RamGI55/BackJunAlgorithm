#include <stdio.h> 
#define ll long long

int main (void) 
{     
    ll n;
    scanf_s("%lld", &n);
    
    ll c = 1; 
    ll s = 1; 
    
    while (c < n)
    { 
        c <<= 1;
        s++;
    }    
     if (n == 0)
    {
        printf ("0"); 
    }
    else
    {
        printf("%lld" , s); 
        return 0; 
    }
}