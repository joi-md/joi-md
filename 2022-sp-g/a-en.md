Score: $100$ points

### Problem Statement

There are $N$ members in the track club of JOI High School, numbered from $1$ to $N$. For the member $i$ ($1 \le i \le N$), the time of the 100 m sprint is $A_{i}$ msec, and the ability of controlling the baton is $B_{i}$.

The track club will participate in a national contest for the 300 m relay. Three members will run in the 300 m relay. Each member will run for 100 m. A runner will pass the baton to the next runner. Precisely, if the first runner is the member $i$ ($1 \le i \le N$), the second runner is the member $j$ ($1 \le j \le N$), and the third runner is the member $k$ ($1 \le k \le N$), then the three members will run the relay in the following steps.

1. The member $i$ runs for 100 m with a baton. It takes $A_{i}$ msec.
2. The member $i$ gives a baton to the member $j$. It takes $\max(B_{i}, B_{j})$ msec.
3. The member $j$ runs for 100 m with a baton. It takes $A_{j}$ msec.
4. The member $j$ gives a baton to the member $k$. It takes $\max(B_{j}, B_{k})$ msec.
5. The member $k$ runs for 100 m with a baton. It takes $A_{k}$ msec.

Therefore, the record for the 300 m relay is $A_{i} + \max(B_{i}, B_{j}) + A_{j} + \max(B_{j}, B_{k}) + A_{k}$ msec. Here $\max(x, y)$ is the largest value of $x$ and $y$. Since you are the coach of the track club, you want to choose three distinct members for the relay and decide the order of the runners so that the record becomes minimum.

Write a program which, given information of the $N$ members of the track club, calculates the minimum possible record of the 300 m relay.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$
$A_{1}$ $B_{1}$
$A_{2}$ $B_{2}$
$\vdots$
$A_{N}$ $B_{N}$
~~~

### Output

Write one line to the standard output. The output should contain an integer which is the minimum possible record of the 300 m relay counted by msec.

### Constraints

- $3 \le N \le 200\,000$.
- $1 \le A_{i} \le 100\,000\,000 (= 10^{8})$ ($1 \le i \le N$).
- $1 \le B_{i} \le 100\,000\,000 (= 10^{8})$ ($1 \le i \le N$).

### Subtasks

1. ($25$ points) $N \le 100$.
2. ($33$ points) $N \le 3\,000$.
3. ($10$ points) $A_{1} = A_{2} = \cdots = A_{N}$.
4. ($32$ points) No additional constraints.

### Sample Input 1

~~~
4
1070 90
1080 70
1050 60
1020 100
~~~

### Sample Output 1

~~~
3320
~~~

If the first runner is the member 4, the second runner is the member 3, and the third runner is the member 2, then the time for the steps $1, 2, 3, 4, 5$ of the relay will be $1020, 100, 1050, 70, 1080$ msec, respectively. Thus, the record for the 300 m relay will be $1020 + 100 + 1050 + 70 + 1080 = 3320$ msec. Since it is the minimum possible record, output 3320.

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$.

### Sample Input 2

~~~
5
1000 28
1000 14
1000 21
1000 20
1000 14
~~~

### Sample Output 2

~~~
3034
~~~

If the first runner is the member 2, the second runner is the member 5, and the third runner is the member 4, then the time for the steps $1$, $2$, $3$, $4$, $5$ of the relay will be $1000$, $14$, $1000$, $20$, $1000$ msec, respectively. Thus, the record for the 300 m relay will be $1000 + 14 + 1000 + 20 + 1000 = 3034$ msec. Since it is the minimum possible record, output 3034.

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
9
3 1
4 1
5 9
2 6
5 3
5 8
9 7
9 3
2 3
~~~

### Sample Output 3

~~~
13
~~~

If the first runner is the member 1, the second runner is the member 2, and the third runner is the member 9, then the time for the steps $1$, $2$, $3$, $4$, $5$ of the relay will be $3$, $1$, $4$, $3$, $2$ msec, respectively. Thus, the record for the 300 m relay will be $3 + 1 + 4 + 3 + 2 = 13$ msec. Since it is the minimum possible record, output 13.

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$.
