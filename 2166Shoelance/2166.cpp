
// Shoelance Formula problem 
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;
// Gaussian


int main ()
{
    
 int a;
    long double result =0 ; 
 cin >> a;
 vector <pair<long double, long double>> p(a); 
 for (int i = 0 ; i < a ; i ++)
 {
        cin >> p[i].first >> p[i].second;
        
 }
    // print the value of the Area4
    for (int i=0 ; i < a ; i ++)
    {
        int j = (i + 1) % a; 
        result += (p[i].first*p[j].second) - (p[j].first*p[i].second);
        // sum of  p[i].first*p[i].second  - sum of p[i].second*p[i].first. * 1/2
    }
    result = abs(result) / 2;
    
    cout << fixed << setprecision(1) << result << endl;
    
    return 0;
        
    
}