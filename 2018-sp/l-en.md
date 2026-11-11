Score: $100$ points

### Problem Statement

JOI-kun is a wild boar living in IOI Forest, which has $N$ food stations and $M$ roads. The food stations are numbered 1 through $N$. The $i$-th road ($1 \le i \le M$) connects food stations $A_{i}$ and $B_{i}$ in both directions, and it takes $C_{i}$ hours for JOI-kun to go along this road in either direction. It is possible to go from any food station to any other using one or more roads.

JOI-kun is poor at U-turning. He cannot U-turn halfway on a road to return to the food station where he was. Moreover, when he arrives at a food station using a road, he cannot go along that road to return to the food station where he was just before.

Every day, JOI-kun supplies food at food stations according to the supply plan. The supply plan for a day consists of a sequence of $L$ food stations $X_{1}, X_{2}, \ldots, X_{L}$. He starts supplying at food station $X_{1}$, visits food stations in this order, and ends supplying at food station $X_{L}$. He is allowed to go via other food stations in the middle. It is possible that he is to supply at a food station multiple times, but $X_{j} \ne X_{j+1}$ holds for each $j$ ($1 \le j \le L - 1$). Note that there might exist a supply plan which he cannot execute.

At the beginning, JOI-kun determines the initial supply plan $X_{1}, X_{2}, \ldots, X_{L}$. He will change the $P_{k}$-th value of the supply plan into $Q_{k}$ (i.e. $X_{P_{k}}$ becomes $Q_{k}$) on the morning of the $k$-th day ($1 \le k \le T$), and then supply food according to the new supply plan. It is assured that $X_{j} \ne X_{j+1}$ holds for each $j$ ($1 \le j \le L - 1$) after the change.

For each supply plan for the $T$ days, JOI-kun wants to determine whether he can execute the supply plan or not, and, if he can, to find the minimum possible time to supply foods according to the supply plan.

### Task

Given the data of IOI Forest and JOI-kun’s supply plans, for each supply plan for the $T$ days, write a program which determines whether he can execute the supply plan or not, and, if he can, finds the minimum possible time to supply foods according to the supply plan.

### Input

Read the following data from the standard input.

- The first line of the input contains four space separated integers $N, M, T$ and $L$. This means that there are $N$ food stations and $M$ roads in IOI Forest, JOI-kun considers supply plans for $T$ days, and the supply plan consists of a sequence of length $L$.
- The $i$-th line ($1 \le i \le M$) of the following $M$ lines contains three space separated integers $A_{i}, B_{i}$ and $C_{i}$. This means that the $i$-th road connects food stations $A_{i}$ and $B_{i}$ in both directions, and it takes $C_{i}$ hours for JOI-kun to go along this road in either directions.
- The $j$-th line ($1 \le j \le L$) of the following $L$ lines contains an integer $X_{j}$. This means the initial supply plan is $X_{1}, X_{2}, \ldots, X_{L}$.
- The $k$-th line ($1 \le k \le T$) of the following $T$ lines contains two space separated integers $P_{k}$ and $Q_{k}$. This means that JOI-kun will change the $P_{k}$-th value of the supply plan into $Q_{k}$ on the morning of the $k$-th day.

### Output

Write $T$ lines to the standard output. The $k$-th line ($1 \le k \le T$) should contain `-1` if he cannot execute the supply plan on the $k$-th day, or the minimum possible time in hours to execute it if he can.

### Constraints

All input data satisfy the following conditions.

- $2 \le N \le 2\,000$.
- $N - 1 \le M \le 2\,000$.
- $1 \le T \le 100\,000$.
- $2 \le L \le 100\,000$.
- $1 \le A_{i} < B_{i} \le N$ ($1 \le i \le M$).
- $(A_{i}, B_{i}) \ne (A_{j}, B_{j})$ ($1 \le i < j \le M$).
- It is possible to go from any food station to any other using one or more roads.
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le M$).
- $1 \le X_{j} \le N$ ($1 \le j \le L$).
- $1 \le P_{k} \le L$ ($1 \le k \le T$).
- $1 \le Q_{k} \le N$ ($1 \le k \le T$).
- $X_{j} \ne X_{j+1}$ holds for each $j$ ($1 \le j \le L - 1$). Also after each change of the supply plan, $X_{j} \ne X_{j+1}$ holds for each $j$ ($1 \le j \le L - 1$).

### Subtasks

There are 4 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$12$ points]

- $N \le 10$．
- $M \le 10$.
- $T = 1$.
- $L \le 10$.
- $C_{i} \le 10$ ($1 \le i \le M$).

#### Subtask 2 [$35$ points]

- $N \le 500$.
- $M \le 500$.
- $T = 1$.

#### Subtask 3 [$15$ points]

- $T = 1$.

#### Subtask 4 [$38$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 3 1 3
1 2 1
2 3 1
1 3 1
1
2
3
3 1
~~~

### Sample Output 1

~~~
3
~~~

In Sample Input 1, the initial supply plan is $1$, $2$, $3$. JOI-kun changes the 3rd value of this supply plan into 1 on the morning of the 1st day. Therefore, the supply plan on the 1st day is $1$, $2$, $1$.

At first, JOI-kun will supply food at food station 1. Next, he will use the 1st road to go from the food station 1 to the food station 2 and supply food at food station 2. Then, he will use the 2nd road to go from the food station 2 to the food station 3. Finally, he will use the 3rd road to go from the food station 3 to the food station 1 and supply food at food station $1$. In this way, it will take $3$ hours to execute the supply plan. Since this is the minimum possible time, output 3.

Note that JOI-kun cannot move food stations $1 \to 2 \to 1$ because he cannot U-turn.

### Sample Input 2

~~~
4 4 4 3
1 2 1
2 3 1
1 3 1
1 4 1
4
1
3
3 4
1 2
3 2
2 4
~~~

### Sample Output 2

~~~
5
2
3
-1
~~~

In Sample Input 2, the supply plan on the 1st day is $4$, $1$, $4$. First, JOI-kun will supply at food station 4. Next, he will use the 4th road to go from food station 4 to food station 1 and supply food at food station 1. Then, he will use the 1st, 2nd, 3rd and 4th roads in this order to move food stations $1 \to 2 \to 3 \to 1 \to 4$ and supply food at food station 4. This takes the minimum possible time.

The supply plan on the 4th day is $2$, $4$, $2$. Since JOI-kun cannot execute this supply plan, output `-1`.

### Sample Input 3

~~~
5 6 1 5
1 2 8
1 3 8
1 4 8
2 5 2
3 4 6
4 5 6
2
5
1
5
3
5 2
~~~

### Sample Output 3

~~~
38
~~~
