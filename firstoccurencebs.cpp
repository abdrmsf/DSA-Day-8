#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
vector<int>v{1,3,4,4,4,4,4,6,7,9};
int key=4;
int start=0;
int end=v.size()-1;
int ans=-1;
while(start<=end)
{
    int mid=start+(end-start)/2;
    if(v[mid]==key)
    {
        ans=mid;
        end=mid-1;
    }
    else if(v[mid]>key)
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
}
cout<<"Found at "<<ans<<" index"<<endl;
return 0;
}