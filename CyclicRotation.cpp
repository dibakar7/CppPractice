/*Given an array, rotate the array by one position in clockwise direction. GFG */

#include<bits/stdc++.h>
using namespace std;
void rotate(int a[], int n)            //taking two parameter int array and its length

int main()
{
  int n, a[];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];                         //storing the data as input
  }
  
  rotate(a,n);
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  
 return 0;
}

void rotate(int a[], int n)
{
  int temp,t,i;
  t=a[n-1]                           //storing the last indexed data into a variable t
  i=n-1;                             // initialising the value of i to n-1
  
  while(i>0)                         //using while loop, inside the loop. the loop will continue to execute untill the statement remains valid
  { 
    temp=a[i];
    a[i]=a[i-1];
    a[i-1]=temp;                   //swaping the value of array element consecutively in descending order
    i--;
  }
  
  a[0]=t;                         //atlast assigning the value of t to a[0]
}
    
  
