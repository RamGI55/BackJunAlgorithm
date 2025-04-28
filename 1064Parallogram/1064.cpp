#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>


using namespace std;
// CCW
// compare the two length of the regtangle once cleared CCW verification. 


int main ()
{
    vector <double> length;  
    pair <int, int> p1, p2 ,p3;
    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;
    cin >> p3.first >> p3.second;

    int ccw = (p2.first - p1.first) * (p3.second - p1.second) - (p3.first - p1.first) * (p2.second - p1.second);

    if (ccw == 0)
    {
        setprecision(11); // make sure to set the precision.  
        cout << -1.f; 
    }
    else
    {
        // length of 1,2/ 2,3 /1,3 find min and max.
        double onetotwo = sqrt (pow((p2.first - p1.first),2) + pow((p2.second - p1.second),2))*2;
        double twotothree = sqrt (pow((p3.first - p2.first),2) + pow((p3.second - p2.second),2))*2;
        double onetothree = sqrt (pow((p3.first - p1.first),2) + pow((p3.second - p1.second),2))*2;
        length.push_back(onetotwo);
        length.push_back(twotothree);
        length.push_back(onetothree);

        //cout << fixed << setprecision(9) << length[0] << " " << length[1] << " " << length[2] << endl;
        double max = *max_element(length.begin(), length.end());
        double min = *min_element(length.begin(), length.end());
        cout << max - min << endl; 

        
        // the length of longest line cannot be longer or same as the squre of the shortest line 
    }
        
}

// CCW logic 
/*pair<int, int> p1, p2 ,p3;

cin >> p1.first >> p1.second;
cin >> p2.first >> p2.second;
cin >> p3.first >> p3.second;

int z = (p2.first - p1.first)* (p3.second - p1.second) - (p3.first- p1.first)*(p2.second- p1.second);

if (z > 0) cout << 1;
else if (z < 0) cout << -1;
else cout << 0;*/