/*Nagesh has given two words to check whether the first word 'source' is a sub-series of second word 'target'.

A sub-series from a word can be formed by removing 0 or more characters without changing the relative order of other characters in the word.

For example, 'nest' is a subseries of a word 'interst' , where as 'rest' is not.

Help Nagesh to return true if source is a subseries of target, otherwise false.

Constraints:
 0 <= source.length <= 100
 0 <= target.length <= 10^4
 source and target consist only of lowercase English letters.

Input Format:
-------------
Line-1:Two space separeted strings

 
Output Format:
--------------
Print a boolean result.
 
 
Sample Input-1:
---------------
pqsv pqrstuv
 
Sample Output-1:
----------------
true

Sample Input-2:
---------------
psr pqrst

Sample Output-2:
----------------
false
*/













  #include <iostream>
#include <sstream>
using namespace std;

bool fun1(string st1,string st2) {
    int m = st1.size();
    int n = st2.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (st1[j] == st2[i]) {
            j++;
        }
        i++;
    }

    
    return j == m;
}

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    string str1, str2;
    ss >> str1 >> str2;

    bool result = fun1(str1, str2);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
