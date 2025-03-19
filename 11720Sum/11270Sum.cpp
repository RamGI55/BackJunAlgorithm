#include <iostream> 
#include <string> 

using namespace std; 

int main () 
{ 
    int n ; 
    string str;
    int b = 0;  

    cin >> n;
    cin >> str;  

    for (int i = 0 ; i < n ; i ++ )
    { 
         b += (str[i] - 0);
    }
    cout << b << endl; 
    return 0; 

}