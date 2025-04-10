#include<iostream> 
#include<vector> 

using namespace std;

int main () 
{ 
    int a; 
    double score[1001];
    int max = -1; 
    double sum = 0;
    cin >> a; 
    for (int i = 0 ; i < a ; i++) 
    { 
       cin >> score[i]; 
       if (max < score [i])
        {max = score [i];
        
        }
    }

    for (int j = 0; j <a ; j ++)
    { 
        score[j] = score [j] / max * 100; 
        sum += score [j];
    }
   
    cout << sum/a; 

    return 0; 

}