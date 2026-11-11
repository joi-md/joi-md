Score: $100$ points

### Problem Statement

There are $N$ lamps in a row at a long hallway. The lamps are numbered from 1 to $N$. Each lamps has a state of either off or on. There is a special mechanism to change the states of the lamps. In an operation, we can do one of the followings:

- Choose integers $p$ and $q$ with $1 \le p \le q \le N$, and make the lamps $p, p + 1, \ldots, q$ off.
- Choose integers $p$ and $q$ with $1 \le p \le q \le N$, and make the lamps $p, p + 1, \ldots, q$ on.
- Choose integers $p$ and $q$ with $1 \le p \le q \le N$, and toggle the states of the lamps $p, p + 1, \ldots, q$ (off to on, or on to off).

Current states of the lamps are represented by a string $A$ of length $N$. The $i$-th ($1 \le i \le N$) character of $A$ is `0` if the lamp $i$ is off, and `1` if on. We want to make the states of the lamps to be those represented by a string $B$ of length $N$, with as few operations as possible. The $i$-th ($1 \le i \le N$) character of $B$ is `0` if we want to make the lamp $i$ off, and `1` if on.

Write a program which, given the number of lamps, the current states and the target states, calculates the minimum number of operations needed to achieve the target states.

### Input

Read the following data from the standard input.

~~~
$N$
$A$
$B$
~~~

### Output

Write one line to the standard output. The output should contain the minimum number of operations needed to achieve the target states.

### Constraints

- $1 \le N \le 1\,000\,000$.
- $A$ and $B$ are strings of length $N$.
- Each character in $A$ and $B$ is either `0` or `1`.

### Subtasks

1. ($6$ points) $N \le 18$.
2. ($41$ points) $N \le 2\,000$.
3. ($4$ points) Each character in $A$ is `0`.
4. ($49$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
8
11011100
01101001
~~~

### Sample Output 1

~~~
4
~~~

In this sample input, we can achieve the target states in 4 operations, for example as follows:

1. Toggle the states of the lamps 1, 2, 3 and 4. The states of the lamps become `00101100`.
2. Make the lamp 2 on. The states of the lamps become `01101100`.
3. Toggle the states of the lamps 6, 7 and 8. The states of the lamps become `01101011`.
4. Make the lamps 6 and 7 off. The states of the lamps become `01101001`.

Since it is impossible to achieve the target states in less than 4 operations, output 4.

### Sample Input 2

~~~
13
1010010010100
0000111001011
~~~

### Sample Output 2

~~~
3
~~~

### Sample Input 3

~~~
18
001100010010000110
110110001000100101
~~~

### Sample Output 3

~~~
5
~~~
