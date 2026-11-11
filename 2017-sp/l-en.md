Score: $100$ points

### Problem Statement

In the JOI plain, people are living with dragons.

The JOI plain is a wide coordinate plane with $X$ and $Y$ coordinates. The point with $X$-coordinate $x$ and $Y$-coordinate $y$ is denoted by $(x, y)$.

There are $N$ dragons in the JOI plain, numbered from $1$ to $N$. There are $M$ tribes of dragons. The tribes are numbered from 1 to $M$. The dragon $i$ ($1 \le i \le N$) is always staying at the point ($A_{i}, B_{i}$) in the JOI plain, and its tribe is $C_{i}$. It is not always the case that dragons of all kinds live in the JOI plain.

In the JOI plain, there are two villages of human beings at the points $(D_{1}, E_{1})$, $(D_{2}, E_{2})$. The two villages are connected by a road, which is a line segment connecting the two points of the villages.

The points $(A_{1}, B_{1}), \ldots, (A_{N}, B_{N})$ and the points $(D_{1}, E_{1}), (D_{2}, E_{2})$ are different from each other. No three of them lie on a straight line.

Sometimes, there are conflicts between tribes of dragons. If the tribe $a$ ($1 \le a \le M$) gets hostile to the tribe $b$ ($1 \le b \le M$, $a \ne b$), every dragon of tribe $a$ launches balls of fire toward all dragons of tribe $b$. A ball of fire goes straight toward the target. After it gets to the target, it keeps going toward the same direction. Hence the track of a ball of fire is a half-line.

When conflicts between tribes occur, the road must be damaged if a ball of fire from a dragon comes across it. You have a list of $Q$ possible conflicts between tribes of dragons which can occur in the near future. For each possible conflict, you want to calculate the number of balls of fire coming across the road.

### Task

Given the information of the dragons and the villages of human beings and a list of possible conflicts between tribes of dragons, write a program which calculates, for each conflict, the number of balls of fire coming across the road.

### Input

Read the following data from the standard input.

- The first line of input contains two space separated integers $N, M$. This means there are $N$ dragons in the JOI plain, and there are $M$ tribes of dragons.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains three space separated integers $A_{i}, B_{i},C_{i}$. This means the dragon $i$ ($1 \le i \le N$) is staying at the point ($A_{i}, B_{i}$) in the JOI plain, and its tribe is $C_{i}$.
- The following line contains four space separated integers $D_{1}, E_{1}, D_{2}, E_{2}$. This means there are two villages of human beings at the points $(D_{1}, E_{1})$, $(D_{2}, E_{2})$ in the JOI plain.
- The following line contains an integer $Q$, the number of possible conflicts between tribes of dragons.
- The $j$-th line ($1 \le j \le Q$) of the following $Q$ lines contains two space separated integers $F_{j},G_{j}$. This means, in the $j$-th possible conflict, the tribe $F_{j}$ gets hostile to the tribe $G_{j}$.

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of output contains the number of balls of fire coming across the road in the $j$-th conflict between tribes.

### Constraints

All input data satisfy the following conditions.

- $2 \le N \le 30\,000$.
- $2 \le M \le N$.
- $-1\,000\,000\,000 \le A_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $-1\,000\,000\,000 \le B_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le C_{i} \le M$ ($1 \le i \le N$).
- $-1\,000\,000\,000 \le D_{1} \le 1\,000\,000\,000$.
- $-1\,000\,000\,000 \le E_{1} \le 1\,000\,000\,000$.
- $-1\,000\,000\,000 \le D_{2} \le 1\,000\,000\,000$.
- $-1\,000\,000\,000 \le E_{2} \le 1\,000\,000\,000$.
- The $N+2$ points $(A_1,B_1)$, $\ldots$, $(A_N,B_N)$, $(D_1,E_1)$, and $(D_2,E_2)$ are different from each other. No three of them lie on a straight line.
- $1 \le Q \le 100\,000$.
- $1 \le F_{j} \le M$ ($1 \le j \le Q$).
- $1 \le G_{j} \le M$ ($1 \le j \le Q$).
- $F_{j} \ne G_{j}$ ($1 \le j \le Q$).
- $(F_{j},G_{j}) \ne (F_{k},G_{k})$ ($1 \le j < k \le Q$).

### Subtask

There are 3 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$15$ points]

- $N \le 3\,000$.

#### Subtask 2 [$45$ points]

- $Q \le 100$.

#### Subtask 3 [$40$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4 2
0 1 1
0 -1 1
1 2 2
-6 1 2
-2 0 2 0
2
1 2
2 1
~~~

### Sample Output 1

~~~
1
2
~~~

In the first conflict between tribes, the following are satisfied:

- The ball of fire launched by the dragon 1 toward the dragon 3 does not come across the road.
- The ball of fire launched by the dragon 1 toward the dragon 4 does not come across the road.
- The ball of fire launched by the dragon 2 toward the dragon 3 comes across the road.
- The ball of fire launched by the dragon 2 toward the dragon 4 does not come across the road.

Hence one ball of fire comes across the road.

In the second conflict between tribes, the following are satisfied:

- The ball of fire launched by the dragon 3 toward the dragon 1 comes across the road.
- The ball of fire launched by the dragon 3 toward the dragon 2 comes across the road.
- The ball of fire launched by the dragon 4 toward the dragon 1 does not come across the road.
- The ball of fire launched by the dragon 4 toward the dragon 2 does not come across the road.

Hence two balls of fire come across the road.

### Sample Input 2

~~~
3 2
-1000000000 -1 1
-999999998 -1 1
0 0 2
999999997 1 999999999 1
1
1 2
~~~

### Sample Output 2

~~~
1
~~~

### Sample Input 3

~~~
6 3
2 -1 1
1 0 1
0 3 2
2 4 2
5 4 3
3 9 3
0 0 3 3
6
1 2
1 3
2 1
2 3
3 1
3 2
~~~

### Sample Output 3

~~~
4
2
4
0
2
1
~~~
