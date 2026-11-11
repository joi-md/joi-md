Score: $100$ points

### Problem Statement

There are $N$ houses in the JOI kingdom, numbered from 1 to $N$. The houses lie on a line in numerical order. A citizen lives in each house. The citizen living in the house $x$ ($1 \le x \le N$) is denoted by the citizen $x$.

Recently, new virus appeared, and every citizen was infected with the virus. In order to deal with the problem, $M$ treatment projects are proposed. The cost of the project $i$ ($1 \le i \le M$) is $C_{i}$. If the project $i$ is performed, the following happens:

> In the evening of the $T_{i}$-th day, if the citizen $x$ with $L_{i} \le x \le R_{i}$ is infected with the virus, then the citizen $x$ is treated.

The virus is transmitted through the neighboring citizens in the following way.

> If the citizen $x$ ($1 \le x \le N$) is infected with the virus in the morning of some day, then the citizen $x - 1$ (if $x \ge2$) and the citizen $x + 1$ (if $x \le N - 1$) become infected with the virus at noon of the same day.

A citizen who was already treated can be infected with the virus again.

Since you are a minister of the JOI kingdom, you need to choose some of the projects so that the following condition is satisfied.

> **Condition.** After all the chosen projects are performed, no citizen is infected with the virus.

It is possible to perform more than one project on the same day.

Write a program which, given the number of houses and the information of the treatment projects, determines whether it is possible to satisfy the above condition, and calculates the minimum total cost if it is possible.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $M$
$T_{1}$ $L_{1}$ $R_{1}$ $C_{1}$
$\vdots$
$T_{M}$ $L_{M}$ $R_{M}$ $C_{M}$
~~~

### Output

Write one line to the standard output. If the condition cannot be satisfied, output $-1$. Otherwise, output the minimum total cost.

### Constraints

- $1 \le N \le 1\,000\,000\,000$.
- $1 \le M \le 100\,000$.
- $1 \le T_{i} \le 1\,000\,000\,000$ ($1 \le i \le M$).
- $1 \le L_{i} \le R_{i} \le N$ ($1 \le i \le M$).
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le M$).

### Subtasks

1. ($4$ points) $T_{i} = 1$ ($1 \le i \le M$).
2. ($5$ points) $M \le 16$.
3. ($30$ points) $M \le 5\,000$.
4. ($61$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
10 5
2 5 10 3
1 1 6 5
5 2 8 3
7 6 10 4
4 1 3 1
~~~

### Sample Output 1

~~~
7
~~~

In Sample Input 1, you can perform the projects as follows.

- In the evening of the second day, the project 1 is performed, and the citizens $5$, $6$, $7$, $8$, $9$, $10$ are treated. Now the citizens $1$, $2$, $3$, $4$ are infected with the virus.
- At noon of the third day, the citizen 5 becomes infected with the virus. Now the citizens $1$, $2$, $3$, $4$, $5$ are infected with the virus.
- At noon of the fourth day, the citizen 6 becomes infected with the virus. Now the citizens $1$, $2$, $3$, $4$, $5$, $6$ are infected with the virus.
- In the evening of the fourth day, the project 5 is performed, and the citizens $1$, $2$, $3$ are treated. Now the citizens $4$, $5$, $6$ are infected with the virus.
- At noon of the fifth day, the citizens 3 and 7 become infected with the virus. Now the citizens $3$, $4$, $5$, $6$, $7$ are infected with the virus.
- In the evening of the fifth day, the project 3 is performed, and the citizens $3$, $4$, $5$, $6$, $7$ are treated. After that, no citizen is infected with the virus.

The total cost to perform the projects $1, 3$ and $5$ is $7$. Since it is impossible to perform projects so that the condition is satisfied and the total cost is smaller than 7, output 7.

### Sample Input 2

~~~
10 5
2 6 10 3
1 1 5 5
5 2 7 3
8 6 10 4
4 1 3 1
~~~

### Sample Output 2

~~~
-1
~~~

In Sample Input 2, output $-1$ since the condition cannot be satisfied.

### Sample Input 3

~~~
10 5
1 5 10 4
1 1 6 5
1 4 8 3
1 6 10 3
1 1 3 1
~~~

### Sample Output 3

~~~
7
~~~

This sample input satisfies the constraints for Subtask 1.
