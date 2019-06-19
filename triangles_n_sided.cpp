
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the number of triangles 
void findTriangles(int n) 
{ 
    int num; 
    num = n * (n - 4); 
  
    // print the number of triangles 
    cout << num; 
} 
  
// Driver code 
int main() 
{ 
    // initialize the number of sides of a polygon 
    int n; 
    n = 6; 
  
    findTriangles(n); 
  
    return 0; 
} 
