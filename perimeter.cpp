/*Arjun wants to build a swimming pool, in the backyard of his farm-house.
The backyard has an empty land of size m*n. 
Some part of the backyard is used to build the swimming pool
You will be given the m*n grid values (0's and 1's). 
where 1 indicates swimming pool, and 0 indiactes empty land.

Your task to find the perimeter of the swimming pool.

Note: There is only one swimming pool.

Input Format:
-------------
Line-1: Two integers M and N, size of the backyard.
Next M lines: N space separated integers, either 0 or 1
0- represents empty land and 1- represents the swimming pool 

Output Format:
--------------
Print an integer, the perimeter of the swimming pool


Sample Input-1:
---------------	
4 4
0 1 0 0
1 1 1 0
0 1 0 0
1 1 0 0
 
Sample Output-1:
----------------
16


Sample Input-2:
---------------
1 2
1 0
 
Sample Output-2:
----------------
4 */
#include <vector>
#include <iostream>
using namespace std;
int perimeter(vector<vector<int>> m,int row,int col){
    int p=0;
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            if(m[i][j]==1){
                if(i==0 || m[i-1][j]==0){
                    p++;
                }
                if(i==row-1 || m[i+1][j]==0){
                    p++;
                }
                if(j==0 || m[i][j-1]==0){
                    p++;
                }
                if(j==col-1 || m[i][j+1]==0){
                    p++;
                }
            }
        }
    }
    return p;
}

int main(){
    int m,n;
    cin>>m>>n;
     vector<vector<int>> mat(m, vector<int>(n));
     for(int i=0;i<m;i++){
      for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
      }   
     }
     cout<<perimeter(mat,m,n);
     return 0;
     
    
}
