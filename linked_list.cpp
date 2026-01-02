#include<bits/stdc++.h>
using namespace std;            
int main()
{

    int a[5] = {10,20,30,40,50};  
    vector<int> v = {10,20,30,40,50};   
    v.push_back(60);    
    cout << (int)&v[4] << " " << (int)&v[5];  


}