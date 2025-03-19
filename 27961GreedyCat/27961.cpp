#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <cmath>

using namespace std; 
// 2^n number power + greedy 
int main () 
{ 
    int c = 0; // current number of the cat
    int n; // target number of the cat 
    int s = 0 ; // number of the step 


    // + 1  generate 

    // rand(0 to c ) - duplicated. 

    cin >> n; 
    
    while ( n <= c) // set the target number of the cat; 
    {   
        if (s == 0 )
        {
            c = c+1; 
            s ++;
        }// must generate the cat in the very first time
    
        else c = 2*c; 
    // print number of the step. 
        s++;
    }
    cout << s; 
    return 0; 
}
