#include <iostream> 
#include <cmath>

using namespace std; 

int main () 
{ 
    long long c=0, m = 0, n; 
    cin >> n; 
while (n > c)
{
    if (c==0)
    {
        c++;
    }
    else
        c*=2;
    m++;
}
    cout << m;
    return 0;
}