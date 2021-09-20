/*The problem statement is , we have to find the large sum of subarray of a given array.
 Here Kadanes algorithm is used. The following code works fine whether the given array has entirely negative number or mixed or entirely positive number. */

#include<bits/stdc++.h>

using namespace std;

long long LargeSumSubarray(int a[], int n)                    //defining the function
{
    long long cur_sum=0, max_sum=a[0];                         //initializing two variable cur_sum (current sum of the subarray) max_sum (maximum sum of the subarray)  as 0 and a[0] respectively
    
    for(int i=0;i<n;i++)
    {
        cur_sum=cur_sum+a[i];
        
        if(cur_sum>max_sum)                                   //checking if the cur_sum at the current index is greater than max_sum or not...
         max_sum=cur_sum;                                     //if it's true then update the max_sum to cur_sum and if it's false then need not to update max_sum... 
                                                              //the max_sum will have its old value.
        if(cur_sum<0)                                          //If cur_sum at current index is negative, we do not need to add it to result.
         cur_sum=0;                                            //updating it to 0.
    }
    
    return max_sum;
}

int main()
{
     int n;                         
     cin>>n;                                               //taking the size of the array
     int arr[n];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];                                         //storing the array element as input
     }
        
    cout<<LargeSumSubarray(arr,n)<<endl;                   //calling LargeSumSubarray() function in cout statement
    
    
  return 0;
}
