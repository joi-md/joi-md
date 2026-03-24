Score: $100$ points

### Problem Statement

There are $N$ points on a straight path, numbered $1, 2, \ldots, N$ from left to right.
The path is one-way from left to right.

There are also $M$ teleporter devices numbered $1, 2, \ldots, M$.
By using device $i$ ($1 \leq i \leq M$), one can warp from point $S_i$ to point $T_i$ ($S_i < T_i$).

Bitaro is currently at point $1$ and wants to reach point $N$.
When Bitaro is at point $j$ ($1 \leq j \leq N-1$), he can take one of the following actions:

<ul>
<li> Move on foot to point $j+1$.
<li> Choose an $i$ ($1 \leq i \leq M$) satisfying $S_i = j$, use device $i$, and warp to point $T_i$.
</ul>

It is known that warp travel places stress on the body.
You are concerned about Bitaro's safety, so you decide to destroy zero or more teleporter devices so that, no matter which route Bitaro takes, the number of warp travels is at most $K$.
Device $i$ can be destroyed by paying cost $C_i$; if so, Bitaro can no longer use that device.

Find the minimum possible total cost you need to pay when destroying zero or more teleporter devices so that, regardless of Bitaro's route, the number of warp travels is at most $K$.

---

### Input

Read the following data from the standard input.

~~~
$N$ $M$ $K$
$S_1$ $T_1$ $C_1$
$S_2$ $T_2$ $C_2$
$\vdots$
$S_M$ $T_M$ $C_M$
~~~

### Output

Write one line to the standard output containing the minimum possible total cost.

---

### Constraints

<ul>
<li> $2 \leq N \leq 100\,000$.
<li> $1 \leq K \leq M \leq 100\,000$.
<li> $1 \leq S_i < T_i \leq N$ ($1 \leq i \leq M$).
<li> $1 \leq C_i \leq 10^9$ ($1 \leq i \leq M$).
<li> Given values are all integers.
</ul>

### Subtasks

<ol>
<li> ($5$ points) $K=1$.
<li> ($3$ points) $N \leq 20$, $M \leq 20$.
<li> ($29$ points) $N \leq 500$, $M \leq 500$.
<li> ($23$ points) $N \leq 4\,000$, $M \leq 4\,000$.
<li> ($24$ points) $N \leq 40\,000$, $M \leq 40\,000$.
<li> ($16$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
8 4 1
1 4 3
2 3 5
3 6 2
5 8 2
~~~

### Sample Output 1

~~~
4
~~~

Consider the case where devices $3$ and $4$ are destroyed.

Then Bitaro can use only devices $1$ and $2$.
When moving from point $1$ to point $8$, Bitaro will always make at most one warp travel, so the condition is satisfied.

In this case, the total paid cost is $4$.
Since it is impossible to make the cost at most $3$, the correct output is $4$.

This input example satisfies the constraints of all subtasks.

---

### Sample Input 2

~~~
12 7 2
1 5 3
4 8 2
2 4 5
2 4 8
7 9 4
9 11 7
3 10 5
~~~

### Sample Output 2

~~~
6
~~~

Destroying devices $2$ and $5$ is optimal.

This input example satisfies the constraints of subtasks $2,3,4,5,6$.

---

### Sample Input 3

~~~
6 3 2
1 4 2
2 5 4
3 6 3
~~~

### Sample Output 3

~~~
0
~~~

In this case, there is no need to destroy any device.

This input example satisfies the constraints of subtasks $2,3,4,5,6$.
