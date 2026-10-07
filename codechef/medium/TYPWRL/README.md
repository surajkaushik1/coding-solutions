# TYPWRL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Typing World

Nikhil is analyzing typing ergonomics for a new custom keyboard layout. He wants to measure the continuous strain placed on a typist's individual hands.

You are given a string $S$ representing a word Nikhil wants to type. You are also given a string $L$ containing distinct characters, representing all the keys on the keyboard that must be pressed using the left hand. Any letter which is not present in $L$ must be typed with the right hand.

Calculate the maximum number of consecutive key presses made by the same hand while typing the word $S$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of three lines of input. The first line of each test case contains two integers $N$ and $M$, denoting the lengths of $S$ and $L$, respectively. The second line contains a string $S$ of length $N$, consisting of lowercase English letters, denoting the word to be typed. The third line contains a string $L$ of length $M$, consisting of distinct lowercase English letters, denoting the keys assigned to the left hand.
### Output Format

For each test case, output on a new line the maximum number of consecutive key presses made by the same hand.

### Constraints
- $1 \le T \le 1000$
- $1 \le N \le 100$
- $1 \le M \le 26$
- Strings $S$ and $L$ contain lowercase English letters only, i.e. a, b, c,..., z.
### Sample 1:
Input
Output

```
3
8 14
codechef
qwertasdfgzxcv
5 1
abcde
a
3 26
xyz
abcdefghijklmnopqrstuvwxyz

```

```
3
4
3

```

### Explanation:

 **Test case $1$:**  The left hand types the letters $\texttt{qwertasdfgzxcv}$, so the letters of $\texttt{codechef}$ are typed by the hands $\texttt{L, R, L, L, L, R, L, L}$ in order. The longest block of consecutive letters typed by the same hand is $\texttt{dec}$ (left hand), of length $3$.

 **Test case $2$:**  Only $\texttt{a}$ is typed by the left hand, so $\texttt{bcde}$ are all typed by the right hand, giving a block of length $4$.

 **Test case $3$:**  All $26$ letters are typed by the left hand, so the whole word $\texttt{xyz}$ is typed by one hand, giving length $3$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T15:13:39.491Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n , m;
	    cin>>n>>m;
	    string s , l;
	    cin>>s>>l;
	    
	    vector<char> ans(n);
	    for(int i=0;i<n;i++){
	        bool f = false;
	        for(int j=0;j<m;j++){
	            if(s[i]==l[j]){
	                f = true;
	            }
	        }
	        if(f){
	            ans[i] = 'l';
	        }
	        else{
	            ans[i] = 'r';
	        }
	    }
	    int mx = 1 , cnt =1;
	    for(int i=0;i<n;i++){
	        if(ans[i]==ans[i+1]){
	            cnt++;
	        }
	        else{
	            cnt = 1;
	        }
	        mx = max(cnt,mx);
	    }
	    cout<<mx<<endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TYPWRL)