Score: $100$ points

### Problem Statement

There are $N$ towns in JOI Kingdom. The towns are numbered from $1$ to $N$. The land of JOI Kingdom is considered as the $xy$-plane. The coordinates of the town $i$ ($1 \le i \le N$) is $(X_{i}, Y_{i})$.

In JOI Kingdom, they are planning to construct $K$ roads connecting towns. It costs $|X_{i} - X_{j}| + |Y_{i} - Y_{j}|$ yen to construct a road connecting the town $i$ and the town $j$ ($i \ne j$). Note that we consider “the construction of a road connecting the town $i$ and the town $j$” and “the construction of a road connecting the town $j$ and the town $i$” to be the same.

Since you are in charge of the construction project, you want to know the cost to construct roads connecting some pairs of towns, in order to estimate the cost. Among the $\dfrac{N(N - 1)}{2}$ pairs of towns to construct roads, you want to know the costs of the $K$ cheapest roads.

Write a program which, given the coordinates of the towns of JOI Kingdom and the value of $K$, calculates the costs of the $K$ cheapest roads.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $K$
$X_{1}$ $Y_{1}$
$\vdots$
$X_{N}$ $Y_{N}$
~~~

### Output

Write $K$ lines to the standard output. In the $k$-th line ($1 \le k \le K$), output the cost of the $k$-th cheapest road.

### Constraints

- $2\le N\le250\,000$.
- $1\le K\le\min\left(250\,000,\dfrac{N(N - 1)}{2}\right)$.
- $-1\,000\,000\,000\le X_i\le1\,000\,000\,000\ {}$ ($1\le i\le N$).
- $-1\,000\,000\,000\le Y_i\le1\,000\,000\,000\ {}$ ($1\le i\le N$).
- $(X_i,Y_i)\ne(X_j,Y_j)\ {}$ ($1\le i < j\le N$).

### Subtasks

1. ($5$ points) $N \le 1\,000$.
2. ($6$ points) $Y_{i} = 0$ ($1 \le i \le N$).
3. ($7$ points) $K = 1$.
4. ($20$ points) $K \le 10$.
5. ($27$ points) $N \le 100\,000$.
6. ($35$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 2
-1 0
0 2
0 0
~~~

### Sample Output 1

~~~
1
2
~~~

The coordinates of the town $1$ is $(-1, 0)$, the coordinates of the town $2$ is $(0, 2)$, and the coordinates of the town 3 is $(0, 0)$.

There are $\dfrac{3\times2}{2}= 3$ pairs of towns.

- It costs $|(-1) - 0| + |0 - 2| = 3$ yen to construct a road connecting the town 1 and the town 2.
- It costs $|(-1) - 0| + |0 - 0| = 1$ yen to construct a road connecting the town 1 and the town 3.
- It costs $|0 - 0| + |2 - 0| = 2$ yen to construct a road connecting the town 2 and the town 3.

The costs of the roads are $1$, $2$, $3$ from the cheapest. Therefore, output 1 to the 1-st line, and output 2 to the 2-nd line.

This sample input satisfies the constraints of Subtasks $1$, $4$, $5$, $6$.

### Sample Input 2

~~~
5 4
1 -1
2 0
-1 0
0 2
0 -2
~~~

### Sample Output 2

~~~
2
2
3
3
~~~

Since $N = 5$, there are $\dfrac{5\times4}{2}= 10$ pairs of towns.

The costs of the roads are $2, 2, 3, 3, 3, 3, 4, 4, 4, 4$ from the cheapest. Therefore, the costs of the $4$ cheapest roads are $2$, $2$, $3$, $3$.

This sample input satisfies the constraints of Subtasks $1$, $4$, $5$, $6$.

### Sample Input 3

~~~
4 6
0 0
1 0
3 0
4 0
~~~

### Sample Output 3

~~~
1
1
2
3
3
4
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$, $5$, $6$.

### Sample Input 4

~~~
10 10
10 -8
7 2
7 -8
-3 -6
-2 1
-8 6
8 -1
2 4
6 -6
2 -1
~~~

### Sample Output 4

~~~
3
3
4
5
6
6
6
7
7
7
~~~

This sample input satisfies the constraints of Subtasks $1$, $4$, $5$, $6$.
