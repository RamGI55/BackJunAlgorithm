
// ccw problem
// Check the basic concept of the CCW, validate position of the two points based on the z value. 

#include <iostream>

using namespace std; 
int main ()
{

    pair<int, int> p1, p2 ,p3;

    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;
    cin >> p3.first >> p3.second;

    int z = (p2.first - p1.first)* (p3.second - p1.second) - (p3.first- p1.first)*(p2.second- p1.second);

    if (z > 0) cout << 1;
    else if (z < 0) cout << -1;
    else cout << 0;
        
    
}