Score: $100$ points

### Problem Statement

La Paz, the capital city of Bolivia, is famous as a tourist spot and for an aerial cable car called Mi Teleférico. You are now visiting La Paz for sightseeing, and you want to visit as many sightseeing places as possible. In this task, we consider the following simplified situation.

There are $N$ aerial cable car stations in La Paz, numbered from $1$ to $N$ in ascending order of altitude. There are $M$ <b>one-way</b> lines, numbered from $1$ to $M$. There are $P$ aerial cable car companies, numbered from $1$ to $P$. Each line is managed by a single company. Line $i$ ($1 \leq i \leq M$) is operated from station $A_i$ to station $B_i$, and is managed by the company $C_i$. Here, the line always runs from the lower altitude station to the higher altitude station. In other words, $A_i < B_i$ holds.

The Bureau of transportation of La Paz issued unlimited ride passes for convenience. Each ride pass contains $2$ integers $l, r$, which satisfy $1 \leq l \leq r \leq P$. The pass enables the possessor to ride lines, which are managed by any one of company $l, l + 1, \dots, r$. In other words, for an integer $i$ which satisfies $1 \leq i \leq M$, the pass enables the possessor to ride line $i$ when $l \leq C_i \leq r$ holds. It is possible to use a single pass for several lines. Let a ride pass $(l, r)$ denote this ride pass.

Now, $Q$ tourists, numbered from $1$ to $Q$, visit La Paz. Tourist $j$ ($1 \leq j \leq Q$) has a ride pass $(L_j, R_j)$ and $X_j$ boliviano cash.

Each tourist's goal is to ensure that no station cannot be travelled from station $1$, using only lines that can be ridden with the ride pass he or she has. Tourist $j$ ($1 \leq j \leq Q$) can exchange his or her ride pass described in the following process to achieve their goal. Here, each tourist can exchange at most once.

<ol>
<li> He or she chooses $2$ integers $l', r'$, which satisfy $1 \leq l' \leq r' \leq P$.
<li> He or she exchanges a ride pass $(L_j, R_j)$ for a ride pass $(l', r')$. It costs $|L_j - l'| + |R_j - r'|$ boliviano as a fee.
</ol>

Your purpose is to determine, for each tourist, whether or not he or she can achieve his or her goal within the cash he or she has.

Write a program which, given information about stations, lines, and tourists, determines whether or not he or she can achieve his or her goal within the cash he or she has for each tourist.

---

### Input

Read the following data from the standard input.

~~~
$N$ $M$ $P$
$A_1$ $B_1$ $C_1$
$A_2$ $B_2$ $C_2$
$\vdots$
$A_M$ $B_M$ $C_M$
$Q$
$L_1$ $R_1$ $X_1$
$L_2$ $R_2$ $X_2$
$\vdots$
$L_Q$ $R_Q$ $X_Q$
~~~

### Output

Write $Q$ lines to the standard output. On the $j$-th line ($1 \leq j \leq Q$), output `Yes` if tourist $j$ can achieve his or her goal, and `No` otherwise.

---

### Constraints

<ul>
<li> $2 \leq N \leq 300\,000$.
<li> $1 \leq M \leq 300\,000$.
<li> $1 \leq P \leq 10^9$.
<li> $1 \leq A_i < B_i \leq N$ ($1 \leq i \leq M$).
<li> $1 \leq C_i \leq P$ ($1 \leq i \leq M$).
<li> $1 \leq Q \leq 400\,000$.
<li> $1 \leq L_j \leq R_j \leq P$ ($1 \leq j \leq Q$).
<li> $0 \leq X_j \leq 10^9$ ($1 \leq j \leq Q$).
<li> Given values are all integers.
</ul>

### Subtasks

<ol>
<li> ($7$ points) $N \leq 50$, $M \leq 50$, $Q \leq 50$, $X_j = 0$ ($1 \leq j \leq Q$).
<li> ($8$ points) $P \leq 10$.
<li> ($11$ points) $P \leq 100$.
<li> ($23$ points) $P \leq 300\,000$, $X_j = 0$ ($1 \leq j \leq Q$).
<li> ($9$ points) $P \leq 300\,000$.
<li> ($22$ points) $N \leq 8\,000$, $M \leq 8\,000$.
<li> ($20$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
4 6 10
1 2 3
2 4 7
1 2 6
2 3 5
3 4 2
3 4 8
4
3 7 0
5 6 0
3 4 0
1 9 0
~~~

### Sample Output 1

~~~
Yes
No
No
Yes
~~~

First, tourist $1$ has a ride pass $(3, 7)$ and $0$ boliviano cash initially. He or she can achieve his or her goal without exchange. Because, this pass enables tourist $1$ to ride $4$ lines, lines $1, 2, 3, 4$, and he or she can move to each stations from station $1$ by using these $4$ lines as follows.

<ul>
<li> It is possible to move as station $1 \rightarrow 2$ by using line $3$.
<li> It is possible to move as station $1 \rightarrow 2 \rightarrow 3$ by using lines $1, 4$ in this order.
<li> It is possible to move as station $1 \rightarrow 2 \rightarrow 4$ by using lines $3, 2$ in this order.
</ul>

Therefore, output `Yes` on the $1$-st line.

Next, tourist $2$ has a ride pass $(5, 6)$ and $0$ boliviano cash initially. However, He or she can't achieve his or her goal. Because, this pass enables tourist $2$ to ride $2$ lines, lines $3, 4$, and he or she can't move station $4$ from station $1$ by using these $2$ lines. Moreover, since tourist $2$ has only $0$ boliviano as cash, he or she can't exchange the pass with another pass.

Hence, output `No` on the $2$-nd line.

Also, tourist $3$ can't achieve his or her goal, and tourist $4$ can achieve his or her goal. Thus, output `No` on the $3$-rd line, and output `Yes` on the $4$-th line.

This sample input satisfies the constraints of all the Subtasks.

---

### Sample Input 2

~~~
4 6 10
1 2 3
2 4 7
1 2 6
2 3 5
3 4 2
3 4 8
3
5 6 10
3 4 1
7 8 3
~~~

### Sample Output 2

~~~
Yes
No
Yes
~~~

The information of stations and lines is the same as in the sample Input $1$.

First, tourist $1$ has a ride pass $(5, 6)$ and $10$ boliviano cash initially. He or she can achieve his or her goal with exchange as below.

<ol>
<li> He or she chooses $2$ integers $l' = 1, r' = 5$, which satisfy $1 \leq l' \leq r' \leq P$.
<li> He or she exchange a ride pass $(5, 6)$ for a ride pass $(1, 5)$. It costs $|5 - 1| + |6 - 5| = 5$ boliviano as a fee.
</ol>

Therefore, output `Yes` on the $1$-st line.

Next, tourist $2$ has a ride pass $(3, 4)$ and $1$ boliviano cash initially. He or she can't achieve his or her goal with any exchange.

Consequently, output `No` on the $2$-nd line.

Since Tourist $3$ can achieve his or her goal, output `Yes` on the $3$-rd line.

This sample input satisfies the constraints of Subtasks $2,3,5,6,7$.

---

### Sample Input 3

~~~
3 1 1000000000
1 2 6
1
1 1000000000 1000000000
~~~

### Sample Output 3

~~~
No
~~~

It is not possible to move from station $1$ to station $3$ with these lines, so tourists can't achieve their goal regardless of their ride passes.

This sample input satisfies the constraints of Subtasks $6,7$.

---

### Sample Input 4

~~~
5 9 2000
2 3 1814
2 3 457
1 2 1226
3 4 1354
1 5 1050
1 2 1725
2 3 1383
1 5 1626
1 4 1795
5
850 1872 128
82 428 1217
487 924 573
1639 1926 202
202 420 25
~~~

### Sample Output 4

~~~
Yes
Yes
Yes
Yes
No
~~~

This sample input satisfies the constraints of Subtasks $5,6,7$.


