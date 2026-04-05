Score: $100$ points

### Problem Statement

The country of JOI is an equilateral triangle with side length $L$ whose vertices are points $A$, $B$, and $C$.
Here, $L$ is a positive integer.
Side $AB$ connects vertices $A$ and $B$ in the east-west direction, and vertex $A$ is the westernmost point of the country of JOI, while vertex $B$ is the easternmost point.
Vertex $C$ is the northernmost point of the country of JOI.

The country of JOI is divided into $L^2$ <strong>regions</strong>, each of which is an equilateral triangle with side length $1$.
A point that is a vertex of some region is called a <strong>lattice point</strong>.
For integers $x, y$ satisfying $0\leq y\leq L$ and $0\leq x\leq L-y$, the lattice point that is the $(1+y)$-st from the south and the $(1+x)$-st from the west is denoted by $(x,y)$.
In particular, $A$, $B$, and $C$ are denoted by $(0,0)$, $(L,0)$, and $(0,L)$, respectively.
For example, the following figure shows the regions and the lattice points when $L=5$.

<img src="https://img.atcoder.jp/joi2026final/rainfall-fig1.png" class="img-responsive center-block" style="max-width: 100%; width: 400px;">

In the country of JOI, weather forecasts for the next $N$ days have been announced.
On day $i$, rain is forecast to fall in the triangular region $T_i$ whose vertices are lattice points $(X_i, Y_i)$, $(X_i + Z_i, Y_i)$, and $(X_i, Y_i + Z_i)$.
An region is said to be forecast to receive rain on day $i$ if the entire region is contained in $T_i$.

In order to prepare for disasters caused by rainfall, it is necessary to determine, for each $k=1,2,\ldots,K$, the number of regions that are forecast to receive rain on at least $k$ days.

Given the size of the country of JOI, the weather forecasts, and $K$, write a program which, for each $k=1,2,\ldots,K$, computes the number of regions that are forecast to receive rain on at least $k$ days.

---

### Input

Input is given from Standard Input in the following format:

~~~
$L$ $N$ $K$
$X_1$ $Y_1$ $Z_1$
$X_2$ $Y_2$ $Z_2$
$\vdots$
$X_N$ $Y_N$ $Z_N$
~~~

### Output

Print $K$ lines to Standard Output.
The $k$-th line ($1\leq k\leq K$) should contain the number of regions that are forecast to receive rain on at least $k$ days.

---

### Constraints

<ul>
<li> $2\leq L\leq 10^9$.
<li> $2 \leq N \leq 200\,000$.
<li> $1 \leq K \leq 5$.
<li> $0\leq X_i\leq L$ ($1\leq i\leq N$).
<li> $0\leq Y_i\leq L$ ($1\leq i\leq N$).
<li> $1 \leq Z_i\leq L$ ($1\leq i\leq N$).
<li> $X_i+Y_i+Z_i\leq L$ ($1\leq i\leq N$).
<li> All input values are integers.
</ul>

### Subtasks

<ol>
<li> ($4$ points) $N = 2$, $K = 2$.
<li> ($5$ points) $L\leq 100$, $N\leq 100$.
<li> ($5$ points) $L\leq 1\,000$.
<li> ($7$ points) $N\leq 2\,000$.
<li> ($10$ points) $X_i = 0$ ($1\leq i\leq N$), $K = 1$.
<li> ($10$ points) $X_i = 0$ ($1\leq i\leq N$).
<li> ($23$ points) $K = 1$.
<li> ($18$ points) $K \leq 2$.
<li> ($18$ points) There are no additional constraints.
</ol>

---

### Sample Input 1

~~~
5 2 2
1 0 3
0 1 4
~~~

### Sample Output 1

~~~
21
4
~~~

If we illustrate, for each region, the number of days on which rain is forecast to fall, we obtain the following figure.


<img src="https://img.atcoder.jp/joi2026final/rainfall-fig2.png" class="img-responsive center-block" style="max-width: 100%; width: 400px;">

This sample input satisfies the constraints for Subtasks $1, 2, 3, 4, 8,$ and $9$.

---

### Sample Input 2

~~~
5 4 5
1 0 4
0 1 3
2 0 2
1 2 2
~~~

### Sample Output 2

~~~
21
10
2
0
0
~~~

If we illustrate, for each region, the number of days on which rain is forecast to fall, we obtain the following figure.

<img src="https://img.atcoder.jp/joi2026final/raillfall-fig3.png" class="img-responsive center-block" style="max-width: 100%; width: 400px;">

This sample input satisfies the constraints for Subtasks $2, 3, 4,$ and $9$.


