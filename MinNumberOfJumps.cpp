/*Problem Statement: Given an array of N integers arr[] where each element represents the max number of steps
that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element).
If an element is 0, then you cannot move through that element. Return -1 if you can't reach the end of the array.*/


#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
 {
        
        int curpos=0,i=1,jumps=1;         //curpos= current position, jumps to calculate min no of jumps, initializing it to 1 as if the first element is not zero...
        if(arr[0]==0)                     // if it's zero then the program will execute the line 15.
        {
            return -1;
        }
        while(i<n)
        {
            curpos=curpos+i;
            
            if(arr[curpos]!=0)                       //checking if the array element at the current position is not zero, if its zero then the control will go to line 31.
            {
                if(curpos<n-1 )                      //if the curpos does not exceed n-1 then jumps is incremented by 1.
                 jumps++;
                 
                else
                 return jumps;                     // when the curpos value exceeds n-1 the program will return the value of jumps.
                 
                 
            }
            if(arr[curpos]==0)
            {
                curpos--;                     //decrementing the current position by one as the array element is zero at this index.
            }
            
            i=arr[curpos];                   //getting the actual array index of the element at current position.
        
        }
}

int main()
{

        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<minJumps(arr, n)<<endl;
    
    return 0;
}
