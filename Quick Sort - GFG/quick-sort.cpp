//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// } Driver Code Ends
class Solution
{
    public:
     
    void swap (int input[],int i ,int j)
    {
    int temp=input[i];
    input[i]=input[j];
    input[j]=temp;
    }
    
    int partition (int arr[], int low, int high)
    {
       // Your code here
//   int pivot, index, i;
//   index = low;
//   pivot = high;
//   for(i = low; i < high; i++) {
//       if(arr[i] < arr[pivot]) {
//          swap(arr,i,index);
//          index++;
//       }
//   }
//   swap(arr,pivot,index);
//   return index;
       
      int pivot=arr[high];
      int i=low-1;
      
      for(int j=low;j<high ;j++)
      {
          if(arr[j]<=pivot)
          {
              i++;
              swap(arr,i,j);
          }
      }
       
      swap(arr,i+1,high);
      return i+1;
    
    }
    
    
    public:
  
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high)
        return;
        
        int c=partition(arr,low,high);
        
        quickSort(arr,low,c-1);
        quickSort(arr,c+1,high);
        
    }
    
    
    
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends