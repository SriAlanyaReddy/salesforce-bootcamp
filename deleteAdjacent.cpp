/*
Arjun is playing a word game in his tab. When he start the game , It displays a
word and he has to check for any two adjacent characters which are same.If found 
he has to select those two characters by tapping, so that both characters will
be deleted from the word and the word size shrinks by 2. This process to be 
repeated until the word has no two adjacent characters are same.
You task is to help Arjun to perform the above task and Return the final word
obtained.

Input Format:
-------------
Line-1: A string represents the word.

Output Format:
--------------
Return a string or empty string.

Constraints:
------------   
    1 <= word.length <= 10^5   
    word consists only lower case letters.

Sample Input-1:
---------------
pqqprs

Sample Output-1:
----------------
rs

Explanation:
-------------
Initially , Delete two 'q's then the word will be 'pprs'. Now Delete two 'p's 
then the word will be rs.

Sample Input-2:
---------------
pqqqprrs

Sample Output-2:
----------------
pqps

Explanation:
-------------
Initially , Delete two 'q's then the word will be 'pqprrs'. Now Delete two 'r's
then the word will be pqps.




*/
#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(st.empty() || st.top()!=s[i] ){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    string r="";
    
    while(!st.empty()){
        r=st.top()+r;
        st.pop();
    }
   
    cout<<r;
    return 0;
}
