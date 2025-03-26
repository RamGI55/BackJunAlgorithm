#include <iostream> 
#include <vector> 

using namespace std; 
int main(){ 
    vector<int> c; 
    int n;
    int a; 
    vector<int>cnt; 
    int pcnt; 

    for (int i =0 ; i < n ; i ++)
    { 
        cin >> a;
        c.push_back(a); 
    }

    for (int j = 0; j < n; j++)
    { 
        if (c[j] <= 1)
        {
           cnt[j] = 0; 
        }
        else 
        { 
            for (int k = 0; k <= c[j]; k++)
            { 
                if ( c[j]%k ==0)
                {
                    cnt[j]++;
                }
            }
            if (cnt[j] <=2)
            { 
            pcnt++; 
            }
        }
    cout<< pcnt << endl; 
    return 0; 
    }

}