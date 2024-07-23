/*

iven an 2D character array, Letters[][], of size r*c.
You have to construct the word W, using the given array.

Rules to construct the word are as follows:
	- All the letters of the word W, should be adjacent to each other 
	in the array Letters(either horizontal or vertical).
	- You can use each charcater in Letters[][] only once.

If you are able to construct the word W, return 'true'
Otherwise 'false'.

Input Format:
-------------
Line-1 -> two integers R and C, array size.
R lines -> C space separated characters.
Last line -> a string, word W

Output Format:
--------------
print the boolean result.


Sample Input-1:
---------------
3 3
a b c
d e f
g h i
bad

Sample Output-1:
----------------
true


Sample Input-2:
---------------
3 3
a b c
d e f
g h i
ace

Sample Output-2:
----------------
false


Sample Input-3:
---------------
3 3
a b c
d e f
g h i
add

Sample Output-3:
----------------
false

   */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool dfs(vector<vector<char>>& letters, vector<vector<bool>>& visited, string& word, int index, int x, int y, int r, int c) {
    if (index == word.length()) {
        return true;
    }
    if (x < 0 || x >= r || y < 0 || y >= c || letters[x][y] != word[index] || visited[x][y]) {
        return false;
    }

    visited[x][y] = true;

    // Explore all 4 possible directions (up, down, left, right)
    if (dfs(letters, visited, word, index + 1, x + 1, y, r, c) ||
        dfs(letters, visited, word, index + 1, x - 1, y, r, c) ||
        dfs(letters, visited, word, index + 1, x, y + 1, r, c) ||
        dfs(letters, visited, word, index + 1, x, y - 1, r, c)) {
        return true;
        }

    visited[x][y] = false;
    return false;
}

bool isWordPresent(int r, int c, vector<vector<char>>& letters, string& word) {
    vector<vector<bool>> visited(r, vector<bool>(c, false));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (letters[i][j] == word[0] && dfs(letters, visited, word, 0, i, j, r, c)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> letters(r, vector<char>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> letters[i][j];
        }
    }

    string word;
    cin >> word;

    if (isWordPresent(r, c, letters, word)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
