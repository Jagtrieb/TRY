#include <iostream>
using namespace std;
int main() {
    int n;
    int a[100], b[100], c[200];
    cin>> n; 
    for (int i = 0; i < n; i++)
    {
      cin>> a[i];        
    }
     
     for (int i = 0; i < n; i++)
    {
      cin>> b[i];        
    }
   int d = 0;
    for (int i = 0; i < n * 2; i += 2)
    {
      c[i] = a[d];
      c[i + 1] = b[d];
      d++;        
    }

    for (int i = 0; i < n * 2; i++)
    {
      cout<< c[i] << " ";      
    }
     
   return 0;
}