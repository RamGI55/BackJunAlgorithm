#include <stdio.h> 

int main (void) 
{ 
    int c = 0; 
    int n; 
    int s = 0; 

    scanf_s("%d", &n);
    
    if (n == 0)
    { 
        s = 0;
    }
    while(n> c)
    { 
        if (s==0)
        {
           c++; 
        }
        else
        { 
            c*=2;
        }
        s++;
    }
    printf("%d" , s); 
 
}