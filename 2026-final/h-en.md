Score: $100$ points

### Problem Statement

There is a vast field in JOI Village. 
The field is represented by the infinite $xy$-plane, where the positive direction of the $x$-axis is East and the positive direction of the $y$-axis is North.

The mayor of JOI Village plans to place several scarecrows in the field in order to protect it from enemies.
Each scarecrow protects a certain region of the plane depending on its position and direction.

Currently, $N$ placement plans have been proposed, numbered from $1$ to $N$.
Executing plan $i$ ($1 \leq i \leq N$) requires a cost of $C_i$.
Each plan is described by three integers $T_i, X_i, Y_i$ as follows.

<ul>
<li> If $T_i = 1$, a scarecrow is placed at the point $(X_i, Y_i)$ facing West.
This scarecrow protects all points on the plane satisfying $x \leq X_i$.

<li> If $T_i = 2$, a scarecrow is placed at the point $(X_i, Y_i)$ facing East.
This scarecrow protects all points on the plane satisfying $x \geq X_i$.

<li> If $T_i = 3$, a scarecrow is placed at the point $(X_i, Y_i)$ facing South.
This scarecrow protects all points on the plane satisfying $y \leq Y_i$.

<li> If $T_i = 4$, a scarecrow is placed at the point $(X_i, Y_i)$ facing North.
This scarecrow protects all points on the plane satisfying $y \geq Y_i$.
</ul>

The mayor wants to select and execute some of these $N$ plans so that every point on the plane is protected by at least $K$ scarecrows.
Among all such choices, the total cost should be minimized.
It is guaranteed that the coordinates $(X_i, Y_i)$ are pairwise distinct among the $N$ plans.

Given the information of the $N$ plans, determine whether it is possible to select plans so that every point on the plane is protected by at least $K$ scarecrows.
If it is possible, output the minimum possible total cost of the selected plans.

---

### Input

Read the following data from the standard input.

~~~
$N$ $K$
$T_1$ $X_1$ $Y_1$ $C_1$
$T_2$ $X_2$ $Y_2$ $C_2$
$\vdots$
$T_{N}$ $X_{N}$ $Y_{N}$ $C_{N}$
~~~

### Output

Output the minimum total cost required so that every point on the plane is protected by at least $K$ scarecrows.
If there is no way to choose the plans so that the condition is satisfied, output <code>-1</code>.

---

### Constraints

<ul>
<li> $1 \leq K \leq N \leq 200\,000$．
<li> $T_i$ is one of $1, 2, 3,$ or $4$ ($1 \leq i \leq N$).
<li> $0 \leq X_i \leq 10^9$ ($1 \leq i \leq N$)．
<li> $0 \leq Y_i \leq 10^9$ ($1 \leq i \leq N$)．
<li> $(X_i, Y_i) \neq (X_j, Y_j)$ ($1 \leq i < j \leq N$)．
<li> $0 \leq C_i \leq 10^9$ ($1 \leq i \leq N$)．
<li> Given values are all integers.
</ul>

### Subtasks

<ol>
<li> ($4$ points) $K = 1$．
<li> ($6$ points) $K \leq 2$．
<li> ($11$ points) $N \leq 500$，$K \leq 300$．
<li> ($27$ points) $N \leq 6\,000$．
<li> ($19$ points) $N \leq 75\,000$．
<li> ($33$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
7 1
2 45 21 96
1 5 85 70
1 36 73 78
1 28 12 80
2 15 49 21
1 45 11 96
2 63 26 19
~~~

### Sample Output 1

~~~
99
~~~

For example, suppose that plans $3$ and $5$ are executed. 
Then the scarecrows are placed as follows.

<ul>
<li> In plan $3$, one scarecrow is placed at the point $(36,73)$ facing West.  
The cost is $78$.

<li> In plan $5$, one scarecrow is placed at the point $(15,49)$ facing East.  
The cost is $21$.
</ul>
In this case, every point on the coordinate plane is protected by at least one scarecrow.
For example, the point $(0,0)$ is protected by the scarecrow placed at $(36,73)$ facing West in plan $3$.
The total cost is $78 + 21 = 99$.
It is impossible to protect every point on the plane with at least one scarecrow with a smaller total cost, so the output should be $99$.

This sample input satisfies the constraints of all subtasks.

---

### Sample Input 2

~~~
7 3
2 45 21 96
1 5 85 70
1 36 73 78
1 28 12 80
2 15 49 21
1 45 11 96
2 63 26 19
~~~

### Sample Output 2

~~~
-1
~~~

This example differs from Sample Input $1$ only in the value of $K$.
Since it is impossible to protect every point on the coordinate plane with at least $3$ scarecrows, the output should be <code>-1</code>.

This sample input satisfies the constraints of subtasks $3,4,5,6$.

---

### Sample Input 3

~~~
19 5
2 36 42 64
2 7 89 74
1 0 15 82
1 10 63 55
2 58 28 19
2 45 91 3
2 2 34 97
1 7 55 82
1 17 12 17
2 59 76 82
1 7 4 68
2 51 98 47
1 51 21 38
2 19 0 72
1 73 73 11
2 62 19 74
1 45 7 94
1 79 32 21
1 85 50 21
~~~

### Sample Output 3

~~~
315
~~~

This sample input satisfies the constraints of subtasks $3,4,5,6$.

---

### Sample Input 4

~~~
8 3
4 4 21 80
2 59 65 69
4 63 36 3
2 29 13 23
1 37 45 95
2 79 14 89
3 91 54 76
1 85 46 62
~~~

### Sample Output 4

~~~
328
~~~

This sample input satisfies the constraints of subtasks $3,4,5,6$.


