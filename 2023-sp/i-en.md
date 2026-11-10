Score: $100$ points

### Problem Statement

JOI Kingdom is an insular country consisting of $N$ islands, numbered from $1$ to $N$. The islands are connected by $N - 1$ bridges, numbered from $1$ to $N - 1$. The bridge $i$ ($1 \leq i \leq N - 1$) connects the island $A_i$ and the island $B_i$ bidirectionally. It is possible to travel from any island to any other island by passing through a number of bridges.

In JOI Kingdom, there are $M$ sightseeing spots, numbered from $1$ to $M$. The sightseeing spot $j$ ($1 \leq j \leq M$) is located in the island $C_j$.

There are $Q$ travelers. They plan to visit sightseeing spots in JOI Kingdom. The travelers are numbered from $1$ to $Q$. Each traveler makes a trip in the following way.

<ol>
<li>The traveler chooses an island $x$ ($1 \leq x \leq N$). Taking an airplane, the traveler arrives at the island $x$.</li>
<li>The traveler takes the following actions a number of times. The order and the kinds of actions are arbitrary.
<ul>
<li>The traveler chooses a sightseeing spot in the current island, and visits there.</li>
<li>The traveler moves to another island by passing through a bridge.</li>
</ul>
</li>
<li>Taking an airplane, the traveler leaves JOI Kingdom.</li>
</ol>

The traveler $k$ ($1 \leq k \leq Q$) wants to visit all of the sightseeing spots $L_k, L_k + 1, \ldots, R_k$. However, since the budget is limited, the traveler $k$ wants to minimize the number of islands where the traveler $k$ visits at least once.

Write a program which, given information of JOI Kingdom and the travelers, calculates, for each $k$ ($1 \leq k \leq Q$), the minimum possible number of islands where the traveler $k$ visits at least once.

---

### Input

Read the following data from the standard input.

~~~
$N$ $M$ $Q$
$A_1$ $B_1$
$A_2$ $B_2$
$\vdots$
$A_{N-1}$ $B_{N-1}$
$C_1$ $C_2$ $\cdots$ $C_M$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_Q$ $R_Q$
~~~

### Output

Write $Q$ lines to the standard output. The $k$-th line ($1 \leq k \leq Q$) of output should contain the minimum possible number of islands where the traveler $k$ visits at least once.

### Constraints

- $1 \leq N \leq 100\,000$.
- $1 \leq M \leq 100\,000$.
- $1 \leq Q \leq 100\,000$.
- $1 \leq A_i \leq N$ ($1 \leq i \leq N - 1$).
- $1 \leq B_i \leq N$ ($1 \leq i \leq N - 1$).
- It is possible to travel from any island to any other island by passing through a number of bridges.
- $1 \leq C_j \leq N$ ($1 \leq j \leq M$).
- $1 \leq L_k \leq R_k \leq M$ ($1 \leq k \leq Q$).
- Given values are all integers.

### Subtasks

1. ($5$ points) $N \leq 300$, $M \leq 300$, $Q \leq 300$.
2. ($5$ points) $N \leq 2\,000$, $M \leq 2\,000$, $Q \leq 2\,000$.
3. ($7$ points) $A_i = i$, $B_i = i + 1$ ($1 \leq i \leq N - 1$).
4. ($18$ points) $L_1 = 1$, $R_k + 1 = L_{k+1}$ ($1 \leq k \leq Q - 1$), $R_Q = M$.
5. ($24$ points) $A_i = \left\lfloor \dfrac{i+1}{2} \right\rfloor$, $B_i = i + 1$ ($1 \leq i \leq N - 1$). Here, $\lfloor x \rfloor$ is the largest integer not exceeding $x$.
6. ($41$ points) No additional constraints.

---

### Sample Input 1

~~~
7 6 2
1 2
1 3
2 4
2 5
3 6
3 7
2 3 6 4 5 7
1 3
4 6
~~~

### Sample Output 1

~~~
4
6
~~~

The traveler $1$ makes a trip in the following way, and visits all of the sightseeing spots $1, 2, 3$.

1. The traveler $1$ arrives at the island $2$.
2. The traveler $1$ visits the sightseeing spot $1$ in the island $2$.
3. The traveler $1$ moves from the island $2$ to the island $1$ by passing through the bridge $1$.
4. The traveler $1$ moves from the island $1$ to the island $3$ by passing through the bridge $2$.
5. The traveler $1$ visits the sightseeing spot $2$ in the island $3$.
6. The traveler $1$ moves from the island $3$ to the island $6$ by passing through the bridge $5$.
7. The traveler $1$ visits the sightseeing spot $3$ in the island $6$.
8. The traveler $1$ departs from the island $6$ and leaves JOI Kingdom.

The islands $1, 2, 3, 6$ are the four islands where the traveler $1$ visits at least once. If the number of islands traveler $1$ visits at least once is less than or equal to $3$, it is impossible to visit all of the sightseeing spots $1, 2, 3$. Therefore, output $4$ in the first line.

The traveler $2$ makes a trip in the following way, and visits all of the sightseeing spots $4, 5, 6$.

1. The traveler $2$ arrives at the island $3$.
2. The traveler $2$ moves from the island $3$ to the island $7$ by passing through the bridge $6$.
3. The traveler $2$ visits the sightseeing spot $6$ in the island $7$.
4. The traveler $2$ moves from the island $7$ to the island $3$ by passing through the bridge $6$.
5. The traveler $2$ moves from the island $3$ to the island $1$ by passing through the bridge $2$.
6. The traveler $2$ moves from the island $1$ to the island $2$ by passing through the bridge $1$.
7. The traveler $2$ moves from the island $2$ to the island $4$ by passing through the bridge $3$.
8. The traveler $2$ visits the sightseeing spot $4$ in the island $4$.
9. The traveler $2$ moves from the island $4$ to the island $2$ by passing through the bridge $3$.
10. The traveler $2$ moves from the island $2$ to the island $5$ by passing through the bridge $4$.
11. The traveler $2$ visits the sightseeing spot $5$ in the island $5$.
12. The traveler $2$ departs from the island $5$ and leaves JOI Kingdom.

The islands $1, 2, 3, 4, 5, 7$ are the six islands where the traveler $2$ visits at least once. If the number of islands traveler $2$ visits at least once is less than or equal to $5$, it is impossible to visit all of the sightseeing spots $4, 5, 6$. Therefore, output $6$ in the second line.

This sample input satisfies the constraints of Subtasks $1, 2, 4, 5, 6$.

---

### Sample Input 2

~~~
8 8 9
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 6 4 3 5 2 4 7
3 5
4 6
6 8
1 4
2 3
6 8
5 5
2 8
1 2
~~~

### Sample Output 2

~~~
3
4
6
6
3
6
1
6
3
~~~

This sample input satisfies the constraints of Subtasks $1, 2, 3, 6$.

---

### Sample Input 3

~~~
10 7 9
6 5
3 6
9 3
8 3
7 8
7 1
2 5
7 10
8 4
9 4 10 1 10 7 6
4 4
1 3
1 3
6 7
3 6
3 3
1 5
2 5
1 2
~~~

### Sample Output 3

~~~
1
6
6
4
3
1
7
5
4
~~~

This sample input satisfies the constraints of Subtasks $1, 2, 6$.
