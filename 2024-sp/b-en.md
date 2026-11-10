Score: $100$ points

### Problem Statement

Mr. JOI, who manages a famous ski resort on the IOI Plateau, has decided to commemorate the $15$th anniversary of the ski resort's opening by constructing a new ski resort on the adjacent KOI Plateau.

The KOI Plateau has $N$ points numbered from $1$ to $N$. Currently, the altitude of point $i$ ($1 \leq i \leq N$) is $H_i$ m, and there exist no courses connecting each point on the plateau. Additionally, each point is equipped with one unused connection facility available.

The goal of Mr. JOI is to construct KOI Hotel at one of the $N$ points and then construct some courses connecting each point on the plateau so that one can ski down to the hotel from any point. Specifically, Mr. JOI will construct the ski resort according to the following steps:

1. Perform the following embankment work any number of times (possibly zero):
    - Choose a point $i$, and increase the altitude of point $i$ by $1$ m. The cost of this work is $K$ per operation.
2. Choose a point from the $N$ points and construct KOI Hotel there.
3. Perform the following extension work any number of times (possibly zero):
    - Choose a point $i$, and build one connection facility at point $i$. The cost of this work is $C_i$ per operation.
4. For each of the remaining $N - 1$ points excluding the point with KOI Hotel, perform the following construction:
    - Let $i$ be the number of the point. Select another point $j$ with a strictly lower altitude than point $i$, and use one unused connection facility at point $j$ to construct a one-way course from point $i$ to point $j$. Note that if there is no point with an unused connection facility and a strictly lower altitude than point $i$, the goal cannot be achieved.

The cost of constructing the ski resort is the sum of the costs of embankment works and extension works performed.

Write a program which, given information about each point on the KOI Plateau and the cost $K$ per operation of embankment work, finds the minimum cost of constructing the ski resort.

---

### Input

Read the following data from the standard input.

~~~
$N$ $K$
$H_1$ $C_1$
$H_2$ $C_2$
$\vdots$
$H_N$ $C_N$
~~~

### Output

Write one line to the standard output. The output should contain the minimum cost of constructing the ski resort.

### Constraints

- $1 \leq N \leq 300$.
- $1 \leq K \leq 10^9$.
- $0 \leq H_i \leq 10^9$ ($1 \leq i \leq N$).
- $1 \leq C_i \leq 10^9$ ($1 \leq i \leq N$).
- Given values are all integers.

### Subtasks

1. ($5$ points) $K \geq 100\,000$, $H_i \leq 300$, $C_i \leq 100$ ($1 \leq i \leq N$).
2. ($12$ points) $H_1 \leq H_i$, $C_1 \leq C_i$, $H_i \leq 300$ ($1 \leq i \leq N$).
3. ($9$ points) $N \leq 10$, $H_i \leq 10$ ($1 \leq i \leq N$).
4. ($33$ points) $N \leq 40$, $H_i \leq 40$ ($1 \leq i \leq N$).
5. ($27$ points) $H_i \leq 300$ ($1 \leq i \leq N$).
6. ($14$ points) No additional constraints.

---

### Sample Input 1

~~~
5 2
0 6
1 1
0 5
2 1
1 2
~~~

### Sample Output 1

~~~
8
~~~

For example, the ski resort can be constructed in the following way:

1. Perform embankment work twice at point $1$ and once at point $5$. The total cost of these embankment works is $2 \times (2 + 1) = 6$. As a result, the altitude of each point becomes $2, 1, 0, 2, 2$ m starting from point $1$.
2. Construct KOI Hotel at point $3$.
3. Perform extension work twice at point $2$. The total cost of these extension works is $1 \times 2 = 2$. As a result, the number of connection facilities at each point becomes $1, 3, 1, 1, 1$ starting from point $1$.
4. Construct $4$ courses: one from point $1$ to point $2$, one from point $2$ to point $3$, one from point $4$ to point $2$, and one from point $5$ to point $2$.

Here, the cost of constructing the ski resort is $6 + 2 = 8$. Since it is impossible to construct the ski resort with a cost of $7$ or less, output $8$.

This sample input satisfies the constraints of Subtasks $3, 4, 5, 6$.

---

### Sample Input 2

~~~
5 100000
0 6
1 1
0 5
2 1
1 2
~~~

### Sample Output 2

~~~
100010
~~~

This sample input differs from Sample Input $1$ only in the value of $K$.

This sample input satisfies the constraints of Subtasks $1, 3, 4, 5, 6$.

---

### Sample Input 3

~~~
8 8
0 36
1 47
2 95
0 59
1 54
0 95
1 87
2 92
~~~

### Sample Output 3

~~~
108
~~~

This sample input satisfies the constraints of Subtasks $2, 3, 4, 5, 6$.
