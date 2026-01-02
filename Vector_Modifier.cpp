#include<bits/stdc++.h>    
using namespace std;    
int main()
{

    vector<int> v = {10,20,30,40,50};  
    vector<int> v2  = {1,2,3};  

    v.insert(v.begin()+2,100); // inserting 100 at index 2                              
    // v.erase(v.begin()+4); // erasing element at index 4                                 
    // v.push_back(500); // inserting 500 at the end of the vector         

    // replace(v.begin(),v.end(),40,500); // replacing 40 with 500                 
  
       auto it = find(v.begin(),v.end(),30);                                
  
        // if(it==v.end())                                 
        // {                                 
        //     cout<<"Not Found";                              
        // }                                 
        // else                                 
        // {                                 
        //     cout<<"Found at index: ";                                 
        // }       

    // for(auto x:v)
    // {
    //     cout<<x<<" ";
    // }       

    // cout << v[3] << endl;   
    // cout<< v.front() << endl;
    // cout << v.back();
    for(auto it = v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" "; 
        
    }

           return 0;       
}