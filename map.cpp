#include <iostream>
#include <map>
#include <string>
using namespace std;
int main ()
{
  //Map Declaration
  std::map<char,int> mymap;
  
  //Map Insert
  mymap.insert ( std::pair<char,int>('a',100) );
  mymap.insert ( std::pair<char,int>('z',200) );

  //Map Begin 
  std::map<char,int>::iterator it=mymap.begin();
  mymap.insert (it, std::pair<char,int>('b',300));  
  mymap.insert (it, std::pair<char,int>('c',400)); 

  //Batch Insert
  std::map<char,int> anothermap;
  anothermap.insert(mymap.begin(),mymap.find('z'));

  std::cout << "mymap contains:\n";
  for (it=mymap.begin(); it!=mymap.end(); it++)
    std::cout << it->first << " => " << it->second << '\n';

  std::cout << "anothermap contains:\n";
  for (it=anothermap.begin(); it!=anothermap.end(); it++)
    std::cout << it->first << " => " << it->second << '\n';
    
  std::cout<< mymap.count('a'); //Map Count Example
  std::cout<< mymap.empty(); //Map Empty Example
  
  //Map Erase Example Start
  mymap.erase(it=mymap.find('a'));
  it=mymap.find('a');
  mymap.erase('a'); 
  it=mymap.find ('e');
  mymap.erase (it, mymap.end());
  //Map Erase Example End
  
  for (it=mymap.begin(); it!=mymap.end(); it++)
    std::cout << it->first << " => " << it->second << '\n';
    

  //Map Swap Example Start
  std::map<char,int> foo,bar;

  foo['x']=100;
  foo['y']=200;

  bar['a']=11;
  bar['b']=22;
  bar['c']=33;
  
  foo.at('x')=102;// Map At Example
  
  foo.swap(bar);

  std::cout << "foo contains:\n";
  for (std::map<char,int>::iterator it=foo.begin(); it!=foo.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  std::cout << "bar contains:\n";
  for (std::map<char,int>::iterator it=bar.begin(); it!=bar.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';
  //Map Swap Example End
    
  //Map Clear Example Start
  mymap.clear();
  std::cout << "mymap contains:\n";
  for (it=mymap.begin(); it!=mymap.end(); it++)
    std::cout << it->first << " => " << it->second << '\n';
  //Map Clear Example Start
  
 //Map Max_Size Example Start
  int i;
  std::map<int,int> myanothermap;

  if (myanothermap.max_size()>1000)
  {
    for (i=0; i<1000; i++) myanothermap[i]=0;
    std::cout << "The map contains 1000 elements.\n";
  }
  else std::cout << "The map could not hold 1000 elements.\n";
  //Map Max_Size Example End
  int c;
  cin>>c;
  cout<<c<<endl;
  float b;
  cin>>b;
  cout<<b<<endl;
  getchar();
  string a;
  getline(cin, a);
  cout<<a<<"hi"<<"\n";
  return 0;
}
