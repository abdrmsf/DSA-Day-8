#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
vector<int>v{1,2,3,4,5,6};
if(binary_search(v.begin(),v.end(),3))
{
    cout<<"Found";
}
else
{
    cout<<"Not Found";
}
return 0;
}