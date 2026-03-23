Score: $100$ points

### Problem Statement

Bitaro bought a long skewer of dumplings as a snack. This skewer can be represented by $N$ positive integers $A_1, A_2, \cdots, A_N$ as follows. For each integer $i$ with $0 \leq i \leq N$, let $s_i = A_1 + A_2 + \cdots + A_i$. In particular, we define $s_0 = 0$.

<ul>
<li> The skewer consists of $s_N$ dumplings arranged in a single column from top to bottom.
<li> Each dumpling is either <strong>sweet</strong> or <strong>spicy</strong>. The taste of each dumpling can be described as follows.
<ul>
<li> If $i$ is an odd integer satisfying $1 \leq i \leq N$, then the dumplings from the $(s_{i-1} + 1)$-th to the $s_i$-th from the top are sweet.
<li> If $i$ is an even integer satisfying $1 \leq i \leq N$, then the dumplings from the $(s_{i-1} + 1)$-th to the $s_i$-th from the top are spicy.
</ul>
</ul>

When eating this skewer of dumplings, Bitaro made $Q$ possible plans. The $j$-th plan ($1 \leq j \leq Q$) is represented by integers $L_j$ and $R_j$ satisfying $1 \leq L_j \leq R_j \leq N$, and in this plan he eats the dumplings from the $(s_{L_j-1}+1)$-th from the top through the $s_{R_j}$-th from the top.

Also, when eating this skewer, Bitaro decided to divide it into several bites in the following manner. Here, $K$ is a positive integer representing Bitaro's preference for sweetness.

<ul>
<li> He eats the dumplings from top to bottom, and each dumpling is eaten exactly once.
<li> In one bite, he may eat any positive number of consecutive dumplings on the skewer. If, among the dumplings eaten in that bite, the number of sweet dumplings minus the number of spicy dumplings is at least $K$, then Bitaro is pleased.
</ul>

Given the information about the skewer of dumplings and the plans, write a program that, for each plan, computes the maximum possible number of times Bitaro can be pleased.

---

### Input

Read the following data from the standard input.

~~~
$N$ $Q$ $K$
$A_1$ $A_2$ $\cdots$ $A_N$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_Q$ $R_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $j$-th line ($1 \leq j \leq Q$), output the maximum number of times Bitaro can be pleased in the $j$-th plan.

---

### Constraints

<ul>
<li> $1 \leq N \leq 500\,000$.
<li> $1 \leq Q \leq 500\,000$.
<li> $1 \leq K \leq 10^{14}$.
<li> $1 \leq A_i \leq 10^9$ ($1 \leq i \leq N$).
<li> $1 \leq L_j \leq R_j \leq N$ ($1 \leq j \leq Q$).
<li> Given values are all integers.
</ul>

### Subtasks

<ol>
<li> ($6$ points) $Q \leq 10$.
<li> ($5$ points) $K \leq 2$.
<li> ($18$ points) $K \leq 10$.
<li> ($27$ points) $A_1 + A_2 + \cdots + A_N \leq 500\,000$．
<li> ($17$ points) $N \leq 200\,000$, $Q \leq 200\,000$．
<li> ($27$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
5 2 1
2 1 2 4 3
1 5
2 4
~~~

### Sample Output 1

~~~
7
2
~~~

For the first plan, Bitaro eats the dumplings from the first through the $12$th from the top. By repeatedly eating exactly one dumpling per bite from the top, Bitaro can be pleased $7$ times. Since it is impossible to make him pleased $8$ times or more, you should output $7$.

For the second plan, Bitaro eats the dumplings from the third through the $9$th from the top. By repeatedly eating exactly one dumpling per bite from the top, Bitaro can be pleased $2$ times. Since it is impossible to make him pleased $3$ times or more, you should output $2$.

This sample input satisfies the constraints of all subtasks.

---

### Sample Input 2

~~~
5 2 3
2 1 2 4 3
1 5
2 4
~~~

### Sample Output 2

~~~
2
0
~~~

This differs from Sample Input $1$ only in the value of $K$.

For the first plan, Bitaro can be pleased $2$ times by eating the dumplings in the following four bites.

<ul>
<li> In the first bite, he eats the first through the $5$th dumplings from the top. Since the number of sweet dumplings is $4$ and the number of spicy dumplings is $1$, Bitaro is pleased.
<li> In the second bite, he eats only the $6$th dumpling from the top. Since the number of sweet dumplings is $0$ and the number of spicy dumplings is $1$, Bitaro is not pleased.
<li> In the third bite, he eats the $7$th through the $9$th dumplings from the top. Since the number of sweet dumplings is $0$ and the number of spicy dumplings is $3$, Bitaro is not pleased.
<li> In the fourth bite, he eats the $10$th through the $12$th dumplings from the top. Since the number of sweet dumplings is $3$ and the number of spicy dumplings is $0$, Bitaro is pleased.
</ul>

Since it is impossible to make him pleased $3$ times or more, you should output $2$.

For the second plan, it is impossible for Bitaro to eat the dumplings in such a way that he is pleased at least once, so you should output $0$.

This sample input satisfies the constraints of subtasks $1, 3,4,5,6$.

---

### Sample Input 3

~~~
9 4 50
24 26 89 45 84 72 15 31 66
1 9
2 8
4 6
5 6
~~~

### Sample Output 3

~~~
3
2
1
1
~~~

This sample input satisfies the constraints of subtasks $1,4,5,6$.
