/*




Mr Somanath is a math teacher. He is given a problem to his students.
The students are given a number N, and the student has to perform 
following step:
   - Add each digit of the number and add the result to N
Repeat this procedure until N becomes a single digit number.

Your task is to help the students to perform the above steps and 
print the resultant single digit number N.

Input Format:
-------------
An integer, number N.

Output Format:
--------------
Print an integer result.


Sample Input-1:
---------------
95

Sample Output-1:
----------------
5

Explanation: 
------------
95 => 9 + 5 = 14
14 => 1 + 4 = 5
Answer is 5


Sample Input-2:
---------------
765

Sample Output-2:
----------------
9


*/
#include <iostream>
using namespace std;
int digitsum(int n){
    if(n<=9){
        return n;
    }
    int s=0;
    while(n!=0){
        s=s+n%10;
        n=n/10;
    }
    digitsum(s);
}
int main(){
    int n;
    cin>>n;
   
    cout<<digitsum(n);
    return 0;
}
