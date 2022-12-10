#include <bits/stdc++.h>
#define N 8
using namespace std;
bool checkSolutionNQ(int sol[N])   // The positions of N Queens are passed as input parameter to this function and the output of the function is ‘true’ or ‘false’, depending upon whether the positions correspond to right positions of N queens or not.
{
    int a[N+1][N+1];
    for(int i = 0;i <= N;i ++){
        for(int j = 0;j <= N;j ++){
            a[i][j] = 0;
        }
    }
    int idx = 1;
    for(int i = 0;i < N;i ++){
        a[idx ++][sol[i]+1] = 1;
    }
    for(int i = 1;i <= N;i ++){
        int cnt  = 0;
        for(int j = 1;j <= N;j ++){
            if(a[i][j] == 1){
                cnt ++;
            }
        }
        if(cnt > 1){
            return false;
        }
    }
    for(int j = 1;j <= N;j ++){
        int cnt = 0;
        for(int i = 1;i <= N;i ++){
            if(a[i][j] == 1){
                cnt ++;
            }
        }
        if(cnt > 1){
            return false;
        }
    }
    for(int i = 1;i <= N;i ++){
        
        for(int j = 1;j <= N;j ++){
            int x = i,y=  j;
            int cnt  = 0;
            while(x >= 1 && y >= 1 && x <= 8 && y <= 8){
                if(a[x][y] == 1){
                    cnt ++;
                }
                x --;
                y --;
            }
            x = i,y =j;
            while(x >= 1 && y <= 8 && x <= 8 && y >= 1){
                if(a[x][y] == 1){
                    cnt ++;
                }
                x --;
                y ++;
            }
            x = i,y = j;
            while(x <= 8 && y >= 0 && x >=1 && y <= 8){
                if(a[x][y] == 1){
                    cnt ++;
                }
                x ++;
                y --;
            }
            x = i,y = j;
            while(x <= 8 && y <= 8 && x >= 1 && y >= 1){
                if(a[x][y] == 1){
                    cnt ++;
                }
                x ++;
                y ++;
            }
            cnt -= 3;
            if(cnt > 1){
                return false;
            }
        }
    }
    return true;
                                                          
                                                          //Type your code here
}

int main()
{
    int r;
    cin >> r;
    int sol[N];
    vector<int>ans(r);
    for(int i = 0;i < r;i ++){
        for(int j = 0;j < N;j ++){
            cin >> sol[j];
        }
        ans[i] = checkSolutionNQ(sol);
    }
    for(int i = 0;i < r;i ++){
        if(ans[i]){
            cout << "true" << endl;
        }else {
            cout << "false" << endl;
        }
    }
}



/*
 Test cases :

  Input:
N = 3
M[][] = {{0 1 0},
         {0 0 0}, 
         {0 1 0}}
Output: 1
Explanation: 0th and 2nd person both
know 1. Therefore, 1 is the celebrity. 




*/
