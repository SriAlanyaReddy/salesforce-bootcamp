/*Sachin wants to try his luck in share market. 
He decides to buy and sell a share. 

He is given the prices of one share for N days by his friend.
Initially, it is assumed that he has no shares.

You need to help Sachin in making the maximum profit that is possible. 
He can sell a share only after he buys a share. 

Note: He is allowed to do only one complete transaction 
		(buy a share and sell a share).
		
Input Format:
-------------
Line-1: An integer N, number of days.
Line-2: N space separated integers, price of the share for N days.

Output Format:
--------------
Print an integer, maximum profit.


Sample Input-1:
---------------
6
7 1 5 3 6 4

Sample Output-1:
----------------
5

Explanation: 
------------
Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.


Sample Input-2:
---------------
5
7 6 5 4 2

Sample Output-2:
----------------
0*/
#include <iostream>
#include <vector>

#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> prices(N);
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }

   
    int minPrice = INT_MAX;
    int maxProfit = 0;

    
    for (int i = 0; i < N; ++i) {
        minPrice=min(minPrice,prices[i]);
        int potentialProfit = prices[i] - minPrice;
       
            maxProfit =max(maxProfit,potentialProfit) ;
        
    }

  
    cout << maxProfit << endl;

    return 0;
}
