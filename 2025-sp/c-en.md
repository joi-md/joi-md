Score: $100$ points

### Problem Statement

The JOI Mountain Range consists of many mountains. It is represented as a grid with $H$ rows and $W$ columns, where the north-south direction is vertical, and the east-west direction is horizontal. The cell at the $i$-th row from the north ($1 \le i \le H$) and the $j$-th column from the west ($1 \le j \le W$) is denoted as $(i, j)$. There is exactly one mountain in each cell. The height of the mountain at cell $(i, j)$ is $T_{i,j}$.

Bitaro, the beaver, can move between the summits of the mountains using the procedure called high jump, which is described below. Here, $L$ is the parameter for his jumping skill.

1. Bitaro floats straight up from the summit of the current mountain. When the altitude of the summit is $x$, Bitaro will float up to the point of altitude $x + L + 0.5$.
2. Bitaro then repeats moving to the adjacent cell in one of the four directions without changing the altitude. The height of the mountains at the visiting cells must be lower than the altitude at which he is floating.
3. Bitaro finally lands at the summit of the current cell’s mountain.

Bitaro is planning for $Q$ trips. In the $k$-th trip ($1 \le k \le Q$), he plans to move from the summit of the cell $(A_{k}, B_{k})$’s mountain to the summit of the cell $(C_{k}, D_{k})$’s mountain by only using high jumps. He wants to know if these trips are possible, and if so, he also wants to know the minimum number of high jumps needed, because high jumps require much energy.

The information on the mountains, Bitaro’s jumping skill, and his trip plans, are given. Write a program that, for each trip plan, determines whether it is possible, and calculates the minimum number of high jumps needed if the trip is possible.

### Input

Read the following data from the standard input.

~~~
$H$ $W$ $L$
$T_{1,1}$ $T_{1,2}$ $\ldots$ $T_{1,W}$
$T_{2,1}$ $T_{2,2}$ $\ldots$ $T_{2,W}$
$\vdots$
$T_{H,1}$ $T_{H,2}$ $\ldots$ $T_{H,W}$
$Q$
$A_1$ $B_1$ $C_1$ $D_1$
$A_2$ $B_2$ $C_2$ $D_2$
$\vdots$
$A_Q$ $B_Q$ $C_Q$ $D_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $k$-th line ($1 \le k \le Q$), output the minimum number of high jumps needed in the $k$-th trip if the trip is possible. If the trip is impossible, output `-1`.

### Constraints

- $1 \le H$.
- $1 \le W$.
- $2 \le H \times W \le 300\,000$.
- $1 \le L \le 10^{9}$.
- $1 \le T_{i,j} \le 10^{9}$ ($1 \le i \le H$, $1 \le j \le W$).
- $1 \le Q \le 300\,000$.
- $1 \le A_{k} \le H$ ($1 \le k \le Q$).
- $1 \le B_{k} \le W$ ($1 \le k \le Q$).
- $1 \le C_{k} \le H$ ($1 \le k \le Q$).
- $1 \le D_{k} \le W$ ($1 \le k \le Q$).
- $(A_{k}, B_{k}) \ne (C_{k}, D_{k})$ ($1 \le k \le Q$).
- Given values are all integers.

### Subtasks

1. ($10$ points) $H \times W \le 300$, $Q \le 150\,000$.
2. ($20$ points) $H \times W \le 3\,000$, $Q \le 150\,000$.
3. ($20$ points) $H \times W \le 150\,000$, $Q \le 150\,000$, $(A_{k}, B_{k}) = (1, 1)$ ($1 \le k \le Q$).
4. ($30$ points) $H \times W \le 150\,000$, $Q \le 150\,000$.
5. ($20$ points) No additional constraints.

### Sample Input 1

~~~
2 4 5
1 3 22 1
8 13 6 16
6
1 1 2 2
1 1 1 3
1 1 2 3
1 1 2 4
1 1 1 4
1 1 1 2
~~~

### Sample Output 1

~~~
3
-1
3
4
4
1
~~~

For the first trip, Bitaro can move from the summit of the mountain at cell $(1, 1)$ to the summit of the mountain at cell $(2, 2)$ by using 3 high jumps, in the following way:

- First high jump

    - Float up from the summit of the cell $(1, 1)$’s mountain. Then, his altitude becomes $6.5$.
    - Move to cell $(1, 2)$. It is possible because the height of the mountain at cell $(1, 2)$, which is $3$, is lower than $6.5$.
    - Land at the summit of the cell $(1, 2)$’s mountain.

- Second high jump

    - Float up from the summit of the cell $(1, 2)$’s mountain. Then, his altitude becomes $8.5$.
    - Move to cell $(1, 1)$.
    - Move to cell $(2, 1)$.
    - Land at the summit of the cell $(2, 1)$’s mountain.

- Third high jump

    - Float up from the summit of the cell $(2, 1)$’s mountain. Then, his altitude becomes $13.5$.
    - Move to cell $(2, 2)$.
    - Land at the summit of the cell $(2, 2)$’s mountain.

It is impossible to end the first trip with less than 3 high jumps. Therefore, output 3 in the first line.

For the second trip, it is impossible to realize the trip. Therefore, output `-1` in the second line.

This sample input satisfies the constraints of all subtasks.

### Sample Input 2

~~~
6 5 11
175 100 110 117 158
144 133 123 150 191
167 252 219 181 346
231 241 280 201 209
261 332 325 225 338
269 298 315 291 308
12
1 1 4 2
1 1 1 5
1 1 5 1
1 1 5 4
1 1 3 4
1 1 6 4
1 1 2 5
1 1 3 1
1 1 4 4
1 1 5 5
1 1 6 2
1 1 6 1
~~~

### Sample Output 2

~~~
8
1
10
6
1
13
2
1
3
19
14
11
~~~

This sample input satisfies the constraints of all subtasks.

### Sample Input 3

~~~
4 4 5
53 55 51 49
56 60 89 45
54 57 92 43
96 99 95 92
9
1 4 2 3
4 1 3 2
2 4 2 3
2 1 4 1
1 2 1 1
2 4 1 1
4 1 2 3
3 4 1 1
1 3 1 4
~~~

### Sample Output 3

~~~
-1
1
-1
-1
1
3
1
4
1
~~~

This sample input satisfies the constraints of Subtasks 1, 2, 4, and 5.
