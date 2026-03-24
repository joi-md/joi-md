Score: $100$ points

### Problem Statement

The JOI-Garden has a rectangular shape divided into a grid of $H$ rows and $W$ columns.
The cell in the $i$-th row from the top and the $j$-th column from the left is called cell $(i,j)$.

When rain falls on a cell, the moisture level of that cell increases.
The moisture level of a cell never changes except when it rains.
If the moisture level of a cell becomes at least $X$, the cell turns into mud, which is dangerous.
Therefore, every morning, JOI-kun, the manager of the JOI-Garden, may designate at most one rectangular off-limits area that contains all cells whose moisture level is at least $X$.
More precisely, JOI-kun chooses four integers $u,d,l,r$ ($1\leq  u\leq  d\leq  H,1\leq  l\leq  r\leq  W$), and the rectangular region consisting of all cells $(i,j)$ satisfying $u\leq  i\leq  d$ and $l\leq  j\leq  r$ becomes off-limits.

Initially, the moisture level of every cell in the JOI Garden is $0$.

Starting today, it will rain once every evening for $N$ days.
On the evening of the $(k - 1)$-th day after ($1\leq  k\leq  N$), rain falls on every cell $(i,j)$ satisfying $U_k\leq  i\leq  D_k$ and $L_k\leq  j\leq  R_k$, and the moisture level of each such cell increases by $C_k$.

For each $k=1,2,\ldots ,N$, write a program that computes the minimum possible number of cells contained in the off-limits area that JOI-kun sets on the morning of the $k$-th day after.

---

### Input

Read the following data from the standard input.

~~~
$H$ $W$ $N$ $X$
$U_1$ $D_1$ $L_1$ $R_1$ $C_1$
$U_2$ $D_2$ $L_2$ $R_2$ $C_2$
$\vdots$
$U_N$ $D_N$ $L_N$ $R_N$ $C_N$
~~~

### Output

Write $N$ lines to the standard output.
The $k$-th line ($1 \leq  k \leq  N$) of the output should contain the minimum possible number of cells contained in the off-limits area that JOI-kun sets on the morning of day $k$.

---

### Constraints

<ul>
<li> $1 \leq  H \leq  10^9$.
<li> $1 \leq  W \leq  10^9$.
<li> $1 \leq  N \leq  200\,000$.
<li> $1 \leq  X \leq  2\times 10^{14}$.
<li> $1 \leq  U_k \leq  D_k \leq  H$ ($1 \leq  k \leq  N$).
<li> $1 \leq  L_k \leq  R_k \leq  W$ ($1 \leq  k \leq  N$).
<li> $1 \leq  C_k \leq  10^9$ ($1 \leq  k \leq  N$).
<li> Given values are all integers.
</ul>

### Subtasks

<ol>
<li> ($3$ points) $X = 1$.
<li> ($24$ points) $W = 1$.
<li> ($15$ points) $N \leq  300$.
<li> ($30$ points) $N \leq  5\,000$.
<li> ($28$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
3 3 5 10
3 3 1 1 5
1 3 1 2 7
1 3 3 3 4
1 1 1 2 12
3 3 3 3 6
~~~

### Sample Output 1

~~~
0
1
1
6
9
~~~

The following is one example of how the moisture levels increase each day and how the off-limits area can be chosen so that the number of contained cells is minimized.

<ul>
<li> On the evening of day $0$, the moisture level of cell $(3,1)$ increases by $5$.
On the morning of day $1$, there are no cells whose moisture level of at least $10$, so no off-limits area is set.
<li> On the evening of day $1$, the moisture level of cells $(1,1)$, $(1,2)$, $(2,1)$, $(2,2)$, $(3,1)$, and $(3,2)$ each increase by $7$.
On the morning of day $2$, cell $(3,1)$ has moisture level of at least $10$. JOI-kun chooses $u=d=3$ and $l=r=1$, thereby setting a off-limits area that contains $1$ cell.
<li> On the evening of day $2$, the moisture level of cells $(1,3)$, $(2,3)$, and $(3,3)$ each increase by $4$.
On the morning of day $3$, cell $(3,1)$ has moisture level of at least $10$. JOI-kun chooses $u=d=3$ and $l=r=1$, thereby setting a off-limits area that contains $1$ cell.
<li> On the evening of day $3$, the moisture level of cells $(1,1)$, and $(1,2)$ each increase by $12$.
On the morning of day $4$, cells $(1,1)$,$(1,2)$, and $(3,1)$ has moisture level of at least $10$. JOI-kun chooses $u=1$, $d=3$, $l=1$, $r=2$, thereby setting a off-limits area that contains $6$ cells.
<li> On the evening of day $4$, the moisture level of cell $(3,3)$ increases by $6$.
On the morning of day $5$, cells $(1,1)$, $(1,2)$, $(3,1)$, and $(3,3)$ has moisture level of at least $10$. JOI-kun chooses $u=1$, $d=3$, $l=1$, $r=3$, thereby setting a off-limits area that contains $9$ cells.
</ul>

This sample input satisfies the constraints of Subtasks 3, 4, and 5.

---

### Sample Input 2

~~~
9 1 5 1
3 3 1 1 4
5 8 1 1 1
3 5 1 1 3
8 8 1 1 4
8 9 1 1 5
~~~

### Sample Output 2

~~~
1
6
6
6
7
~~~

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 3

~~~
4596 9794 15 141929907
600 3070 2222 8763 472026497
47 2644 3276 6033 930213777
638 945 304 1100 992702990
370 2211 2178 2977 783902937
277 2601 1559 8989 842013671
566 3272 3124 8456 254633541
91 4241 2655 8035 303526265
1342 3662 3909 7175 685435928
1176 4012 2827 8429 614977118
255 2461 1482 5835 794902067
982 2314 941 3952 342731056
1603 2215 6730 7105 332440107
2301 4568 6898 9561 591652619
124 2097 3520 8882 168525684
1845 3599 5592 7145 555656973
~~~

### Sample Output 3

~~~
16165282
19783008
25583040
25583040
26266464
28021036
36437770
36437770
36437770
36437770
36437770
36437770
41864676
41864676
41864676
~~~

This sample input satisfies the constraints of Subtasks 3, 4, and 5.


