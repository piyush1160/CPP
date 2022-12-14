// First negative integer in every window of size k 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
     
          deque<long long int> dq;
          vector<long long> ans;
                                
         //process for first window 
         for(int i=0 ; i<K ; i++){
             if(A[i]<0){
                 dq.push_back(i);
             }
         }
         
         // store ans for first K size 
         if (dq.size() >0 ){
             ans.push_back( A[ dq.front() ]);
         }
         else{
             ans.push_back(0);
         }
         
         //process for remaining windows 
         for(int i= K ; i<N ; i++){
             
             //removal 
              if(!dq.empty( ) && i-dq.front( )>= K){
                  dq.pop_front( );
              }
              //addition
              if(A[i]<0){
                  dq.push_back(i);
              }
             
             //ans store
             
             if(dq.size()>0){
                 ans.push_back(A[dq.front( ) ]);
             }
             else{
                 ans.push_back(0);
             }
         }
     return ans;     
 }

/*

 //  TEST CASE........ 

 Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

*/