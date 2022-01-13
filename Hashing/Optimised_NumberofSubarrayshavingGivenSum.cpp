// Number of Subarrays having given sum 
// This is a O(logn) solution

#include <iostream>
#include <map>
#define ll long long
using namespace std;

ll int countSubarrays(ll int arr[], ll int n, ll int sum)
{
    ll int count=0, currSum=0;
    map<ll int,ll int> order;
    for(ll int i=0; i<n; i++)
    {
        currSum+=arr[i];

        if(currSum==sum)
        count++;

        if(order.find(currSum-sum)!=order.end())
            count+=order[currSum-sum];

        order[currSum]++;
    }
    return count;
}

int main()
{
    ll int n,x;
    cin>>n>>x;
    ll int arr[n];
    for(ll int i=0; i<n; i++)
        cin>>arr[i];

    ll int answer=countSubarrays(arr,n,x);
    cout << answer;

    return 0;
}