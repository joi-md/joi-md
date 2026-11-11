Score: $100$ points

### Problem Statement

There are $N$ cities in JOI Kingdom, numbered from $1$ to $N$. There are $N - 1$ roads in JOI Kingdom, numbered from $1$ to $N - 1$. The road $i$ ($1 \le i \le N - 1$) connects the city $A_i$ and the city $B_i$ bi-directionally. It is possible to travel from any city to any other city by passing through some of the roads.

There are checkpoints on some of the roads in JOI Kingdom. There are $M$ checkpoints, numbered from $1$ to $M$. The checkpoint $j$ ($1 \le j \le M$) is located on the road $P_j$. In order to pass through it, you need to pay either one gold coin or $C_j$ silver coins.

There are $Q$ citizens in JOI Kingdom, numbered from $1$ to $Q$. The citizen $k$ ($1 \le k \le Q$) has $X_k$ gold coins and $Y_k$ silver coins, and wants to travel from the city $S_k$ to the city $T_k$. Since gold coins are valuable, all the citizens want to keep as many gold coins as possible.

Write a program which, given information of the cities, the roads, the checkpoints, and the citizens in JOI Kingdom, for each $k$ ($1 \le k \le Q$), determines whether it is possible for the citizen $k$ to travel from the city $S_k$ to the city $T_k$, and, if it is possible, calculates the maximum possible number of gold coins the citizen $k$ can keep.

---

### Input

Read the following data from the standard input.

~~~
$N$ $M$ $Q$
$A_1$ $B_1$
$A_2$ $B_2$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$
$P_1$ $C_1$
$P_2$ $C_2$
$\vdots$
$P_M$ $C_M$
$S_1$ $T_1$ $X_1$ $Y_1$
$S_2$ $T_2$ $X_2$ $Y_2$
$\vdots$
$S_Q$ $T_Q$ $X_Q$ $Y_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $k$-th line ($1 \le k \le Q$), if the citizen $k$ can travel from the city $S_k$ to the city $T_k$, output the maximum possible number of gold coins the citizen $k$ can keep. Otherwise, output `-1` in the $k$-th line.

---

### Constraints

- $2 \le N \le 100\,000$.
- $1 \le M \le 100\,000$.
- $1 \le Q \le 100\,000$.
- $1 \le A_i \le N$ ($1 \le i \le N - 1$).
- $1 \le B_i \le N$ ($1 \le i \le N - 1$).
- It is possible to travel from any city to any other city by passing through some of the roads.
- $1 \le P_j \le N - 1$ ($1 \le j \le M$).
- $1 \le C_j \le 10^9$ ($1 \le j \le M$).
- $1 \le S_k \le N$ ($1 \le k \le Q$).
- $1 \le T_k \le N$ ($1 \le k \le Q$).
- $S_k \neq T_k$ ($1 \le k \le Q$).
- $0 \le X_k \le 10^9$ ($1 \le k \le Q$).
- $0 \le Y_k \le 10^{18}$ ($1 \le k \le Q$).
- Given values are all integers.

### Subtasks

1. ($10$ points) $N \le 2\,000$, $M \le 2\,000$, $Q \le 2\,000$.
2. ($28$ points) $C_1 = C_2 = \cdots = C_M$.
3. ($30$ points) $A_i = i$, $B_i = i + 1$ ($1 \le i \le N - 1$).
4. ($32$ points) No additional constraints.

---

### Sample Input 1

~~~
5 4 3
1 2
1 3
2 4
2 5
2 9
2 4
3 5
4 7
3 4 2 11
5 3 4 5
2 3 1 1
~~~

### Sample Output 1

~~~
1
2
-1
~~~

The citizen $1$ can travel from the city $3$ to the city $4$ as follows. After the travel, the citizen $1$ keeps one gold coin.

1. The citizen $1$ travels from the city $3$ to the city $1$ by passing through the road $2$. There are the checkpoints $1, 2$ on the road $2$. The citizen $1$ pays one gold coin at the checkpoint $1$ and passes through it, and $4$ silver coins at the checkpoint $2$ and passes through it, respectively. After that, the citizen $1$ keeps one gold coin and $7$ silver coins.
2. The citizen $1$ travels from the city $1$ to the city $2$ by passing through the road $1$. Since there is no checkpoint on the road $1$, the citizen $1$ keeps one gold coin and $7$ silver coins.
3. The citizen $1$ travels from the city $2$ to the city $4$ by passing through the road $3$. There is the checkpoint $3$ on the road $3$. The citizen $1$ pays $5$ silver coins at the checkpoint $3$ and passes through it. After that, the citizen $1$ keeps one gold coin and $2$ silver coins.

Since it is impossible for the citizen $1$ to travel by finally keeping more than or equal to $2$ gold coins, output $1$ in the first line.

The citizen $2$ can travel from the city $5$ to the city $3$ as follows. After the travel, the citizen $2$ keeps two gold coins.

1. The citizen $2$ travels from the city $5$ to the city $2$ by passing through the road $4$. There is the checkpoint $4$ on the road $4$. The citizen $2$ pays one gold coin at the checkpoint $4$ and passes through it. After that, the citizen $2$ keeps $3$ gold coins and $5$ silver coins.
2. The citizen $2$ travels from the city $2$ to the city $1$ by passing through the road $1$. Since there is no checkpoint on the road $1$, the citizen $2$ keeps $3$ gold coins and $5$ silver coins.
3. The citizen $2$ travels from the city $1$ to the city $3$ by passing through the road $2$. On the road $2$, there are the checkpoints $1, 2$. The citizen $2$ pays one gold coin at the checkpoint $1$ and passes through it, and $4$ silver coins at the checkpoint $2$ and passes through it, respectively. After that, the citizen $2$ keeps $2$ gold coins and one silver coin.

Since it is impossible for the citizen $2$ to travel by finally keeping more than or equal to $3$ gold coins, output $2$ in the second line.

Since it is impossible for the citizen $3$ to travel from the city $2$ to the city $3$, output `-1` in the third line.

This sample input satisfies the constraints of Subtasks $1, 4$.

---

### Sample Input 2

~~~
10 7 9
1 8
6 3
5 9
7 9
3 1
3 4
10 1
2 6
5 6
9 4
7 4
7 4
2 4
7 4
7 4
1 4
8 6 5 3
3 9 8 0
4 7 6 15
7 4 9 3
6 4 8 0
9 10 5 16
5 3 2 4
2 8 4 3
6 1 3 3
~~~

### Sample Output 2

~~~
3
6
6
7
7
3
1
2
2
~~~

This sample input satisfies the constraints of Subtasks $1, 2, 4$.

---

### Sample Input 3

~~~
8 7 11
1 2
2 3
3 4
4 5
5 6
6 7
7 8
4 4
3 7
2 10
5 2
4 1
4 4
5 6
6 3 7 69
7 1 5 55
3 1 6 8
8 2 5 45
4 6 4 45
6 1 3 33
2 1 0 19
3 7 2 31
7 1 2 31
7 2 4 58
8 3 5 63
~~~

### Sample Output 3

~~~
7
5
5
5
4
2
0
2
1
4
5
~~~

This sample input satisfies the constraints of Subtasks $1, 3, 4$.

---

### Sample Input 4

~~~
8 7 11
1 8
1 4
3 1
3 6
6 7
2 1
5 2
5 5
5 8
4 7
6 6
4 1
6 4
1 7
4 7 2 18
2 4 5 1
4 2 1 32
1 5 7 21
2 5 0 50
8 4 4 33
1 7 6 16
4 8 7 18
1 2 8 13
5 4 10 42
7 1 6 40
~~~

### Sample Output 4

~~~
1
3
1
7
0
4
5
7
8
10
6
~~~

This sample input satisfies the constraints of Subtasks $1, 4$.
