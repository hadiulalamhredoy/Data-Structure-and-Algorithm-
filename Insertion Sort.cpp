#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,key;

    cout << "How many numbers : \n";
    cin >> n;

    int arr[n];

    cout <<" please insert the element number :\n"<<endl;

    for(int i =0; i<n; i++)
    {
        key = arr[i];
        j = i - 1;
         while(j>0 && arr[j]>key)
    {
        arr[j+1] = arr[j];
        j  = j - 1;
    }
       arr[j+1] = key;

    }

      cout << "Here's the sorted array :\n";
      for(i=0;i<n;i++)
      {
          cout << arr[i] << " ";
      }


}





