Score: $100$ points

### Problem Statement

Have you ever heard of Just Odd Inventions, Ltd.? This company is known for their “just odd inventions.” We call it JOI, Ltd. in this problem.

A new year party is being held in JOI, Ltd. The staff is baking $N$ hamburg steaks on a huge wire mesh. We consider the wire mesh as a $1\,000\,000\,000 \times 1\,000\,000\,000$ grid. We denote by $(x, y)$ the cell in the $x$-th column from the left and the $y$-th row from the bottom ($1 \le x \le 1\,000\,000\,000$, $1 \le y \le 1\,000\,000\,000$)

Hamburg steaks are numbered from $1$ to $N$. The Hamburg steak $i$ ($1 \le i \le N$) is place on the rectangular area whose left-bottom vertex is $(L_{i}, D_{i})$ and right-top vertex is $(R_{i}, U_{i})$. It is possible that the Hamburg steaks overlaps.

You are a new employee of JOI, Ltd. Your task is to choose $K$ cells on the wire mesh and stick bamboo skewers at the center of the cells perpendicularly to the wire mesh. For each hamburg steak, you can confirm how it is cooked by sticking at least one bamboo skewer at a cell on it. You need to confirm all the hamburg steaks. You are allowed to stick more than one bamboo skewer at a cell. You are also allowed to stick a bamboo skewer at a cell where no hamburg steak exists.

Formally, your task is to find a tuple of (not necessarily distinct) $K$ pairs of integers $(x_{1}, y_{1}), \ldots, (x_{K}, y_{K})$ satisfying the following condition:

- For every $i$ ($1 \le i \le N$), there exists $j$ ($1 \le j \le K$) such that both $L_{i} \le x_{j} \le R_{i}$ and $D_{i} \le y_{j} \le U_{i}$ hold.
- For every $j$ ($1 \le j \le K$), both $1 \le x_{j} \le 1\,000\,000\,000$ and $1 \le y_{j} \le 1\,000\,000\,000$ hold.

Write a program which, given the positions of the hamburg steaks and the number of bamboo skewers, calculates one way to stick the bamboo skewers. For the input data given for this task, it is guaranteed that there exists a tuple of cells satisfying the above conditions.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $K$
$L_{1}$ $D_{1}$ $R_{1}$ $U_{1}$
$L_{2}$ $D_{2}$ $R_{2}$ $U_{2}$
$\vdots$
$L_{N}$ $D_{N}$ $R_{N}$ $U_{N}$
~~~

### Output

Write $K$ lines to the standard output. In the $j$-th line ($1 \le j \le K$), output $x_{j}$ and $y_{j}$, separating them by a space.

If there are more than one way to stick the bamboo skewers satisfying the conditions, output any of them.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le K \le 4$.
- $1 \le L_{i} \le R_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le D_{i} \le U_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- There exists a tuple of $K$ cells satisfying the conditions in the problem statement.

### Subtasks

1. ($1$ point) $N \le 2000$, $K = 1$.
2. ($1$ point) $N \le 2000$, $K = 2$.
3. ($3$ points) $N \le 2000$, $K = 3$.
4. ($6$ points) $N \le 2000$, $K = 4$.
5. ($1$ point) $K = 1$.
6. ($3$ points) $K = 2$.
7. ($6$ points) $K = 3$.
8. ($79$ points) $K = 4$.

### Sample Input and Output

### Sample Input 1

~~~
4 2
2 1 3 3
1 2 4 3
6 1 7 4
5 3 7 5
~~~

### Sample Output 1

~~~
2 2
7 4
~~~

By sticking a bamboo skewer at the cell $(2, 2)$, you can confirm how the hamburg steaks 1 and 2 are cooked, and by sticking a bamboo skewer at the cell $(7, 4)$, you can confirm how the hamburg steaks 3 and 4 are cooked.

Other than the cells $(2, 2)$ and $(7, 4)$, You can stick bamboo skewers, for example, at the cells $(3, 3)$ and $(6, 4)$.

### Sample Input 2

~~~
3 3
1 1 1 1
1 2 1 2
1 3 1 3
~~~

### Sample Output 2

~~~
1 1
1 2
1 3
~~~
