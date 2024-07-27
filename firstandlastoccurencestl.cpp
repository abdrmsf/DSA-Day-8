#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
vector <int> v{1,2,3,4,4,4,4,7,9};
auto ans2=lower_bound(v.begin(),v.end(),4);
cout<<"Found at "<<ans2-v.begin()<<" Index"<<endl;
auto ans1=upper_bound(v.begin(),v.end(),4);
cout<<"Found at "<<ans1-v.begin()<<" Index";
return 0;
}