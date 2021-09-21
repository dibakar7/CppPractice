/*Problem Statement: Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each 
tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.GFG */


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
     
        sort(arr+0,arr+n);                       //sorting the unsorted array in ascending order
        int ans;
        ans= arr[n-1]-arr[0];                    //creating variable ans and initialize it to difference between largest and sortest element
        
        int smallest=arr[0]+k;
        int largest= arr[n-1]-k;
        int mi,ma;
        for(int i=0;i<n;i++)
        {
            mi=min(smallest,arr[i+1]-k);                //it will check the minimum value between smallest and arr[i+1]-k, and will store the value
            ma=max(largest,arr[i]+k);                    // same as before statement but it will check max between these.
            if(mi<0)
              continue;
            ans=min(ans,ma-mi);
        }
        return ans;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
