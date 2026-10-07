# POSSROLL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Possible Roll

Nikhil is playing a board game with a wizard who uses a custom, magically forged $X$-sided die.

Unlike normal dice, this die has a "base multiplier" $K$. The faces of the die are not numbered $1, 2, 3 \dots X$. Instead, they are numbered with the first $X$ positive multiples of $K$.

For example, if the die has $4$ sides and the base multiplier is $3$, the faces are numbered $3, 6, 9$, and $12$.

The wizard rolls the die behind a screen and claims the result is $Y$. Given $X$, $K$, and $Y$, determine if it is mathematically possible for this die to show the number $Y$.

### Input Format
- The only line of input contains three space-separated integers $X$, $K$, and $Y$, denoting the number of sides on the die, the base multiplier, and the wizard's claimed result, respectively.
### Output Format

Output "YES" (without quotes) if it is mathematically possible for the die to show $Y$, and "NO" otherwise.

You can output each letter in any case (lowercase or uppercase).

### Constraints
- $1 \le X \le 10$
- $1 \le K \le 10$
- $1 \le Y \le 100$
### Sample 1:
Input
Output

```
6 5 20

```

```
YES

```

### Explanation:

The die has $6$ faces, numbered $5, 10, 15, 20, 25, 30$. Since $20$ is one of these faces, the die can show $20$.

### Sample 2:
Input
Output

```
4 3 15

```

```
NO

```

### Explanation:

The die has $4$ faces, numbered $3, 6, 9, 12$. Since $15$ is not one of these faces, the die cannot show $15$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T14:36:01.263Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, k, y;
    cin >> x >> k >> y;

    if (y % k == 0 && y / k <= x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/POSSROLL)