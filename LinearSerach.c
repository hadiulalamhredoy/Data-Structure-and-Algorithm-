#include<iostream>

using namespace std;
int main ()
{
   int key;
   cout<<"Enter a number to search in the array "<<endl;

   cin>>key;

   int n ;
   cout << "Enter a the size of the array "<<endl;

   cin >> n;
   int a[n];

   cout << "Enter the elements of the array "<<endl;

   for(int i=0; i<n; i++){
    cout<< "Enter the element"<<i<<"The element of the array"<<endl;
    cin >> a[i];
   }

   int found = 0;
   for(int i =0; i<n; i++){
    a[i]==key;
    found++;
    cout<<"The key found at"<<i<<"index";

    break;

    if (found=0){
        cout<<"The key not found";
    }
    return 0;
   }
}
