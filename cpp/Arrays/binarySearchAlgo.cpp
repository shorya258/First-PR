#include <bits/stdc++.h>//binary search algorithm with recursions
using namespace std;
    int binary_search(int a[],int left,int right, int x){
      if(right>=left){
          int mid= left+(right-left)/2;

          if(a[mid]==x)// in case required number is at the middle position
              return mid;
          if(a[mid]>x) //in case required number is smaller than the middle number
              binary_search(a,left,mid-1,x);

          return  binary_search(a,mid+1,right,x); //in case required number is larger than the middle number
      }
      return -1;// in case the required number doesn't exist in the array
    }
    int main()
{
       int arr[]={2,5,12,39,45,56,62};//array sorted in ascending order is declared
       int num = 39;//number to be found
       int n=(sizeof(arr)/sizeof(arr[0]));//length of th array
       int result= binary_search(arr,0,n-1,num);
       if(result==-1)
          cout<<"not found";
       else
           cout<<"found at index "<<result;
    }

