Score: $100$ points

### Problem Statement

The IOI Tower is an extremely tall tower equipped with a staircase for ascending. This staircase consists of $10^{100}$ steps, numbered sequentially from the bottom as step $0$, step $1$, and so on. JOI-kun is currently on step $0$ and intends to climb the staircase. JOI-kun can ascend the staircase by taking the following $2$ types of actions. Descending the staircase is not permitted.

- Ascend $1$ step. This action takes $A$ seconds.
- Jump from the current step to a step $D$ steps above, skipping the steps in between. This action takes $B$ seconds.

Currently, construction is ongoing at several locations on the staircase, and steps undergoing construction cannot be stepped on. Specifically, there are $N$ ongoing constructions, and the $i$-th construction ($1 \le i \le N$) is being carried out at steps $L_i, L_i + 1, \ldots, R_i$.

The IOI Tower has $Q$ rooms numbered from $1$ to $Q$. One can enter room $j$ ($1 \le j \le Q$) from step $X_j$ of the staircase. Therefore, JOI-kun has decided to determine whether he can reach each room and, if possible, how many seconds it will take to reach there in the minimum time.

Given the information about JOI-kun, constructions, and rooms, create a program that determines whether JOI-kun can reach step $X_j$ for each $j$ ($1 \le j \le Q$) and, if possible, calculates the minimum time it takes.

---

### Input

Read the following data from the standard input.

~~~
$N$ $Q$
$D$ $A$ $B$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_N$ $R_N$
$X_1$
$X_2$
$\vdots$
$X_Q$
~~~

### Output

Output $Q$ lines to the standard output. On the $j$-th line ($1 \le j \le Q$), output the minimum number of seconds it takes if JOI-kun can reach step $X_j$; otherwise, output `-1`.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le Q \le 200\,000$.
- $1 \le D \le 10^{12}$.
- $1 \le A \le 1\,000\,000$.
- $1 \le B \le 1\,000\,000$.
- $1 \le L_i \le R_i \le 10^{12}$ ($1 \le i \le N$).
- $R_i + 1 < L_{i+1}$ ($1 \le i \le N - 1$).
- $1 \le X_j \le 10^{12}$ ($1 \le j \le Q$).
- Given values are all integers.

### Subtasks

1. ($5$ points) $R_i \le 1\,000\,000$ ($1 \le i \le N$), $X_j \le 1\,000\,000$ ($1 \le j \le Q$).
2. ($38$ points) $N \le 2\,000$, $Q \le 2\,000$.
3. ($25$ points) $A = 1$, $B = D$.
4. ($32$ points) No additional constraints.

---

### Sample Input 1

~~~
3 1
4 10 35
4 5
10 12
14 14
13
~~~

### Sample Output 1

~~~
120
~~~

JOI-kun can reach the $13$th step of the staircase in $120$ seconds following the steps below:

1. Ascend from step $0$ to step $1$. This action takes $10$ seconds.
2. Ascend from step $1$ to step $2$. This action takes $10$ seconds.
3. Ascend from step $2$ to step $3$. This action takes $10$ seconds.
4. Jump from step $3$ to step $7$, skipping the steps in between. This action takes $35$ seconds.
5. Ascend from step $7$ to step $8$. This action takes $10$ seconds.
6. Ascend from step $8$ to step $9$. This action takes $10$ seconds.
7. Jump from step $9$ to step $13$, skipping the steps in between. This action takes $35$ seconds.

Since it's not possible to reach the $13$th step of the staircase in less than $120$ seconds, the output is $120$.

This sample input satisfies the constraints of subtasks $1, 2$, and $4$.

---

### Sample Input 2

~~~
5 10
10 1 9
7 11
25 32
37 38
43 44
50 52
6
12
18
24
30
36
42
48
54
60
~~~

### Sample Output 2

~~~
6
11
17
22
-1
33
-1
44
-1
55
~~~

This sample input satisfies the constraints of subtasks $1, 2$, and $4$.
