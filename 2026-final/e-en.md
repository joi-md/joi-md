Score: $100$ points

### Problem Statement

There are $N$ towns in the country of JOI, numbered from $1$ to $N$.
Also, there are $N-1$ roads in the country of JOI, numbered from $1$ to $N-1$.
Road $j$ ($1 \leq j \leq N-1$) connects town $U_j$ and town $V_j$ in both directions.
It is possible to travel from any town to any other town by using some number of roads.

There is one shop in each town in the country of JOI.
In the shop in town $i$ ($1 \leq i \leq N$), a souvenir is sold for price $A_i$.

This year, $M$ tours are planned in the country of JOI.
The $k$-th tour ($1 \leq k \leq M$) starts from town $S_k$ and travels by roads to town $T_k$ without visiting the same town twice.
Note that the $k$-th tour visits both towns $S_k$ and $T_k$.
It is guaranteed that $S_k \neq T_k$.
Note that, from the structure of the country of JOI, the sequence of towns visited by a tour is uniquely determined.

You are planning to participate in one of these tours and buy one souvenir in each of exactly two of the towns visited on the tour.
Moreover, you want to use up exactly the entire budget prepared for souvenirs, so for each of $Q$ candidate budgets, you decided to investigate in how many ways this can be done.

Given the roads in the country of JOI, the prices of the souvenirs, the information on the tours, and the candidate budgets $B_1, B_2, \ldots, B_Q$, write a program that computes the number of ways to choose a tour and the towns in which to buy souvenirs.
More formally, for each $q$ ($1 \leq q \leq Q$), write a program that computes the number of triples of integers $(k,u,v)$ satisfying all of the following conditions.

<ul>
<li> $1\leq k\leq M$.
<li> $1\leq u < v \leq N$.
<li> The $k$-th tour visits towns $u$ and $v$.
<li> $A_u+A_v=B_q$.
</ul>

---

### Input

Read the following data from the standard input.

~~~
$N$
$A_1$ $A_2$ $\cdots$ $A_N$
$U_1$ $V_1$
$U_2$ $V_2$
$\vdots$
$U_{N-1}$ $V_{N-1}$
$M$
$S_1$ $T_1$
$S_2$ $T_2$
$\vdots$
$S_M$ $T_M$
$Q$
$B_1$ $B_2$ $\cdots$ $B_Q$
~~~

### Output

Write $Q$ lines to the standard output.
The $q$-th line ($1\leq q\leq Q$) should contain the number of ways to choose a tour and the towns in which to buy souvenirs so that the budget $B_q$ is used up exactly.

---

### Constraints

<ul>
<li> $2 \leq N \leq 100\,000$.
<li> $1\leq A_i\leq N$ ($1 \leq i \leq N$).
<li> $1\leq U_j\leq N$ ($1 \leq j \leq N-1$).
<li> $1\leq V_j\leq N$ ($1 \leq j \leq N-1$).
<li> It is possible to travel from any town to any other town by using some number of roads.
<li> $1\leq M \leq 200\,000$.
<li> $1\leq S_k\leq N$ ($1\leq k\leq M$).
<li> $1\leq T_k\leq N$ ($1\leq k\leq M$).
<li> $S_k\neq T_k$ ($1\leq k\leq M$).
<li> $1\leq Q\leq 2\,000$.
<li> $1\leq B_1 < B_2 < \cdots < B_Q\leq 2N$.
<li> All input values are integers.
</ul>

### Subtasks

<ol>
<li> ($3$ points) $N\leq 100$, $M\leq 100$, $Q\leq 100$.
<li> ($4$ points) $N\leq 5\,000$, $U_j=j$ ($1\leq j\leq N-1$), $V_j=j+1$ ($1\leq j\leq N-1$).
<li> ($5$ points) $N\leq 5\,000$.
<li> ($6$ points) $Q= 1$, $U_j=j$ ($1\leq j\leq N-1$), $V_j=j+1$ ($1\leq j\leq N-1$).
<li> ($10$ points) $Q= 1$.
<li> ($7$ points) $M\leq 1000$, $U_j=j$ ($1\leq j\leq N-1$), $V_j=j+1$ ($1\leq j\leq N-1$).
<li> ($12$ points) $M\leq 1000$.
<li> ($10$ points) $N\leq 50\,000$, $M\leq 50\,000$, $U_j=j$ ($1\leq j\leq N-1$), $V_j=j+1$ ($1\leq j\leq N-1$).
<li> ($15$ points) $N\leq 50\,000$, $M\leq 50\,000$.
<li> ($11$ points) $U_j=j$ ($1\leq j\leq N-1$), $V_j=j+1$ ($1\leq j\leq N-1$).
<li> ($17$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
8
1 2 3 2 1 2 3 2
2 3
7 8
4 3
1 2
7 3
2 5
6 1
4
1 4
1 6
2 5
3 8
7
1 2 3 4 5 6 16
~~~

### Sample Output 1

~~~
0
0
4
2
4
1
0
~~~

First, the towns visited by each tour are as follows.

<ul>
<li> The $1$st tour visits towns $1, 2, 3, 4$.
<li> The $2$nd tour visits towns $1, 6$.
<li> The $3$rd tour visits towns $2, 5$.
<li> The $4$th tour visits towns $3, 7, 8$.
</ul>

Represent a method of participating in the $k$-th tour and buying souvenirs in towns $u$ and $v$ by $(k,u,v)$.
Then, for each candidate budget, the ways to use up the budget exactly are as follows.

<ul>
<li> There are $0$ ways to use up budget $1$.
<li> There are $0$ ways to use up budget $2$.
<li> There are $4$ ways to use up budget $3$: $(1,1,2)$, $(1,1,4)$, $(2,1,6)$, $(3,2,5)$.
<li> There are $2$ ways to use up budget $4$: $(1,1,3)$, $(1,2,4)$.
<li> There are $4$ ways to use up budget $5$: $(1,2,3)$, $(1,3,4)$, $(4,3,8)$, $(4,7,8)$.
<li> There is $1$ way to use up budget $6$: $(4,3,7)$.
<li> There are $0$ ways to use up budget $16$.
</ul>

This input example satisfies the constraints of subtasks $1, 3, 7, 9, 11$.

---

### Sample Input 2

~~~
8
8 2 3 6 1 4 1 7
1 2
2 3
3 4
4 5
5 6
6 7
7 8
1
1 8
5
2 4 5 10 15
~~~

### Sample Output 2

~~~
1
2
3
3
1
~~~

This input example satisfies the constraints of subtasks $1, 2, 3, 6, 7, 8, 9, 10, 11$.


