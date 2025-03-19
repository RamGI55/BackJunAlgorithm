#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <numeric> 

using namespace std;
int main (int argc, char* argv [])
{ 
  int n, c; 
  cin >> n >> c ;
  vector <int> time(c); 
  for (int i = 0; i < c ; i ++ )
  { 
    cin >> time [i];
  }
  vector<int>cashier(c, 0);
  vector<int>ans(c);

  for (int i = 0 ; i < c ; i ++)
  { 
    int min_time = cashier [0];
    int min_index = 0; 
    for (int j = 0 ; j < n ; j ++ )
    { 
        if (cashier [j] < min_time)
        {
            min_time=cashier[j];
            min_index = j;  

        } 
            
    }
    ans[i] = min_index + 1; 
    cashier[min_index] += time[i];
  }
 

  for (int a : ans)
  {
    cout << a << " "; 
  }
  return 0; 
}