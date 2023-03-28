#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int x=0;
    cin>>x;
    int num[3];
    for(int i=0;i<n;i++)
    {
        num[i]=i;
    }
    num[10]*=2;
    cout<<num[10]<<endl;
    return 0;
}