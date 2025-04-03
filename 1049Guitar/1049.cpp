#include <iostream>
#include <algorithm>

using namespace std; 
int main(int argc, char* argv[])
{
    unsigned int n;
    unsigned int m;
    unsigned int p;
    unsigned int q; 

    cin >> n >> m;
    unsigned int pmin = 9999;
    unsigned int qmin = 9999; 
    for (unsigned int i = 0 ; i < m ; i ++ )
    {
        if (n < 1 || n >100 || m < 1 || m > 50 )
        {
            break; 
        }
        cin >> p >> q;
        pmin = min(pmin, p);
        qmin = min(qmin, q );
    }
    unsigned int b = pmin * (n/6);
    unsigned int temp = min ((n%6 == 0) ? b : b + pmin, b+(n%6) *qmin);
    cout << min(qmin*n, temp); 
    
    return 0;
}
