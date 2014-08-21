#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector> 
using namespace std;
int mycomp(string s1,string s2)
{
	string xy=s1.append(s2);
	string yx=s2.append(s1);

	return xy.compare(yx)>0 ?1:0;
}
void printlargest(vector<string> arr)
{
	sort(arr.begin(),arr.end(),mycomp);
	for (int i=0; i < arr.size() ; i++ )
       { 
       	cout << arr[i];
       }
}
int main()
{
    vector<string> arr;
 
    //output should be 6054854654
    arr.push_back("54");
    arr.push_back("546");
    arr.push_back("548");
    arr.push_back("60");
    printlargest(arr);
 
    // output should be 777776
    /*arr.push_back("7");
    arr.push_back("776");
    arr.push_back("7");
    arr.push_back("7");*/
 
    //output should be 998764543431
    /*arr.push_back("1");
    arr.push_back("34");
    arr.push_back("3");
    arr.push_back("98");
    arr.push_back("9");
    arr.push_back("76");
    arr.push_back("45");
    arr.push_back("4");
    */
 
   return 0;
}