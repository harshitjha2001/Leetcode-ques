//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array



int candidate(int nums[], int n)
{
        int cand=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                cand=nums[i];
            }
            
            if(nums[i]==cand)
                count++;
            
            else
                count--;
        }   
        
        return cand;
        
}


int majorityElement(int nums[], int n)
{
    int x=candidate(nums,n);
    
    int half=n/2;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(nums[i]==x)
            count++;
        if(count>half)
            return x;
    }
    
    return -1;
}

//{ Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}

// } Driver Code Ends