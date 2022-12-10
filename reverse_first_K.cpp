// Reverse First K elements of Queue

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int> s;
    //Algo
    //step 1 :  fetch first k element from queue and put into stack
    for(int i = 0 ; i<k ; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    //step 2: fetch element from stack and put into queue
    while(!s.empty( ) ){
        int val = s.top( );
        s.pop();
        q.push(val);
    }
    //Step 3: fetch ( n-k ) element and push_back
    
     int t = q.size( ) - k;
     
     while(t--){
         int val = q.front( );
         q.pop();
         q.push(val);
     }
    return q;
}



/*
   TEST CASE .....

   Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.


*/