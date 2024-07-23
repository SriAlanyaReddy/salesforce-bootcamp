/*When a number is turned upside down (i.e., 180 degrees in clock wise 
direction), if the new number is same as original. It is called Rotating-Number

For Example: 
If you turn the digit 2 upsde down, 2 is not a valid digit.
If you turn the digit 6 upsde down, it will become 6.
Likewise, you need turn the whole number upside down

You are given a list of strings,
Your task is to findout, whether each of the given number
is Rotating-Number or Not and If yes, print 'true', Otherwise 'false'.

Input Format:
-------------
space separated numeric strings, as list num[].

Output Format:
--------------
Print a boolean value.


Sample Input-1:
---------------
69 962

Sample Output-1:
----------------
true false


*/
#include<iostream>
#include <unordered_map>
#include<algorithm>
using namespace std;
bool rot( unordered_map<char,char> &dict,string &s){
    string s2="";
    for(char c:s){
        if(dict.find(c)==dict.end()){
            return false;
        }
        s2+=dict.at(c);
        
    }
    reverse(s2.begin(),s2.end());
    return s2==s;
}
int main(){
    unordered_map<char,char> dict {{'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}
};
   
    string n;
    cin>>n;
    if(rot(dict,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
