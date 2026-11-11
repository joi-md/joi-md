Score: $100$ points

### Problem Statement

JOI Street is a long street from west to east. It is considered as the number line.

From now, $N$ very important people (VIP) will come to JOI Street and walk along it. VIPs are numbered from 1 to $N$. VIP $i$ ($1 \le i \le N$) will depart from the coordinate $A_{i}$ at time $T_{i}$, and walk to the coordinate $B_{i}$. Its speed is 1 per unit time. If $A_{i} < B_{i}$, VIP $i$ will move toward the positive direction at the constant speed. Similarly, if $A_{i} > B_{i}$, VIP $i$ will move toward the negative direction at the constant speed.

A bodyguard’s job is to walk along JOI Street and guard the VIPs. To guard a VIP, it is necessary to walk with the VIP for some time. It is allowed for a bodyguard to start guarding a VIP in the middle of their walk, or to quit guarding before they end walking. The time to start or end guarding need not be an integer. However, even if multiple VIPs are at the same coordinate, a bodyguard can guard at most one VIP at a time.

A bodyguard can walk JOI Street freely at the speed of at most 1 per unit time. When they finish guarding a VIP, it is allowed to move to another place and start guarding another VIP. If a bodyguard walks with VIP $i$, the VIP gives the bodyguard the reward of $C_{i}$ yen per unit distance, according to the distance where the bodyguard guards the VIP. Here it is guaranteed that $C_{i}$ is an even integer.

You, working for a security company, are planning $Q$ projects to guard the VIPs. The projects are numbered from 1 to $Q$. For the project $j$ ($1 \le j \le Q$), a bodyguard starts working at coordinate $X_{j}$ at time $P_{j}$. Your task is to calculate the maximum total reward for each project.

Write a program which, given information of VIPs and projects, calculates the maximum total reward for each project.

Under the constraints of this task, it can be proved that the maximum total reward of a project is always an integer.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $Q$
$T_{1}$ $A_{1}$ $B_{1}$ $C_{1}$
$\vdots$
$T_{N}$ $A_{N}$ $B_{N}$ $C_{N}$
$P_{1}$ $X_{1}$
$\vdots$
$P_{Q}$ $X_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of the output should contain an integer which is the maximum total reward for the project $j$.

### Constraints

- $1 \le N \le 2\,800$.
- $1 \le Q \le 3\,000\,000$.
- $1 \le T_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le A_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le B_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $A_{i} \ne B_{i}$ ($1 \le i \le N$).
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $C_{i}$ is an even integer ($1 \le i \le N$).
- $1 \le P_{j} \le 1\,000\,000\,000$ ($1 \le j \le Q$).
- $1 \le X_{j} \le 1\,000\,000\,000$ ($1 \le j \le Q$),

### Subtasks

1. ($6$ points) $T_{i} \le 3\,000$, $A_{i} \le 3\,000$, $B_{i} \le 3\,000$ ($1 \le i \le N$).$P_{j} \le 3\,000$, $X_{j} \le 3\,000$ ($1 \le j \le Q$).
2. ($7$ points) $Q = 1$.
3. ($15$ points) $Q \le 3\,000$.
4. ($20$ points) $Q \le 40\,000$.
5. ($52$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
2 2
1 2 1 4
3 1 3 2
1 2
3 3
~~~

### Sample Output 1

~~~
8
2
~~~

In the project 1, a bodyguard gets a total reward of $4 + 4 = 8$ yen by the following way.

1. A bodyguard starts working at coordinate 2 at time 1.
2. He guards VIP 1 from time 1 to time 2. Since he moves with VIP 1 for a distance 1, he gets a reward of $4 \times 1 = 4$ yen.
3. He stays at coordinate 1 from time 2 to time 3.
4. He guards VIP 2 from time 3 to time 5. Since he moves with VIP 2 for a distance 2, he gets a reward of $2 \times 2 = 4$ yen.

Since it is the maximum value, output 8 in the first line of the output.

In the project 2, a bodyguard will get a total reward of 2 yen by the following way.

1. A bodyguard starts working at coordinate 3 at time 3.
2. He departs from the coordinate 3 at time 3, and arrives at the coordinate 2 at time 4.
3. He guards VIP 2 from time 4 to time 5. Since he moves with VIP 2 for a distance 1, he gets a reward of $2 \times 1 = 2$ yen.

Since it is the maximum value, output 2 in the second line of the output.

This sample input satisfies the constraints of Subtasks $1$, $3$, $4$, $5$.

### Sample Input 2

~~~
3 2
3 1 5 2
1 4 1 4
4 2 4 4
2 2
6 3
~~~

### Sample Output 2

~~~
15
0
~~~

In the project 1, a bodyguard will get a total reward of $4 + 1 + 8 + 2 = 15$ yen by the following way.

1. A bodyguard will start working at coordinate 2 at time 2.
2. He departs from the coordinate 2 at time 2, and arrives at the coordinate $2.5$ at time $2.5$.
3. He guards VIP 2 from time $2.5$ to time $3.5$. Since he moves with VIP 2 for a distance 1, he gets a reward of $4 \times 1 = 4$ yen.
4. He guards VIP 1 from time $3.5$ to time 4. Since he moves with VIP 1 for a distance $0.5$, he gets a reward of $2 \times 0.5 = 1$ yen.
5. He guards VIP 3 from time 4 to time 6. Since he moves with VIP 3 for a distance 2, he gets a reward of $4 \times 2 = 8$ yen.
6. He guards VIP 1 from time 6 to time 7. Since he moves with VIP 1 for a distance 1, he gets a reward of $2 \times 1 = 2$ yen.

Since it is the maximum value, output 15 in the first line of the output.

In the project 2, a bodyguard starts working at coordinate 3 at time 6. However, it is impossible to guard a VIP. Thus, the maximum amount of reward is 0 yen. Therefore, output 0 in the second line of the output.

This sample input satisfies the constraints of Subtasks $1$, $3$, $4$, $5$.

### Sample Input 3

~~~
5 5
8 1 4 10
8 3 7 6
1 4 6 2
3 9 5 4
6 1 9 6
7 6
6 8
1 3
9 4
2 4
~~~

### Sample Output 3

~~~
30
27
48
30
48
~~~

This sample input satisfies the constraints of Subtasks $1$, $3$, $4$, $5$.
