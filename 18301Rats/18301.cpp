#include <iostream> 

using namespace std; 
int main () 
{ 
    int a, b, c; 
    cin >> a >> b >> c; 
    if (a < 0 || b < 0 || c <0)
    { 
        return 0; 
    }
    int r =  floor( ((a+1)*(b+1)/(c+1)) -1 );
    cout << r ; 

}