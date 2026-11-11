Score: $100$ points

### Problem Statement

JOI Kingdom consists of $N$ cities numbered from 1 to $N$. There are $N - 1$ one-way roads connecting these cities. Specifically, for each $i = 2, 3, \ldots, N$, there is a road leading from city $i$ to city $P_{i}$. Here, it is guaranteed that $1 \le P_{i} < i$.

Each of the $N$ cities has a defined danger level. The capital city, city $1$, has a danger level of $0$. For city $i$ ($2 \le i \le N$), the danger level is defined as the number of roads traversed in the path from city $i$ to city 1. Due to the structure of JOI Kingdom, there is exactly one unique path from any city $i$ to city 1.

Currently, there are $K_{i}$ beavers living in city $i$ ($1 \le i \le N$). The president of JOI Kingdom, Bitaro, has planned a beaver relocation program. This relocation plan will be executed over $Q$ days. On the $j$-th day ($1 \le j \le Q$), one of the following three types of events will occur:

- **Relocation**: All beavers living in a city with danger level $X_j$ at that moment will move to a city with danger level $Y_j$, which they can reach by traveling along one or more roads from their current city. It is guaranteed that $0 \le Y_j < X_j$. Due to the structure of JOI Kingdom, the relocation destination for each beaver is uniquely determined.
- **Immigration**: The number of beavers living in city $A_j$ increases by $L_j$ due to immigration from outside JOI Kingdom.
- **Survey**: The number of beavers currently living in city $B_j$ is surveyed.

As Bitaro’s subordinate, you realize that you can compute the number of beavers in each survey event based solely on the relocation plan’s information, without physically visiting the city.

Given the structure of JOI Kingdom, the current number of beavers living in each city, and the details of the relocation plan, write a program to compute the results of each survey event.

### Input

Read the following data from the standard input.

~~~
$N$
$P_2$ $P_3$ $\cdots$ $P_N$
$K_1$ $K_2$ $\cdots$ $K_N$
$Q$
$(\text{Query }1)$
$(\text{Query }2)$
$\vdots$
$(\text{Query }Q)$
~~~

Each (Query $j$) ($1 \le j \le Q$) consists of several integers separated by spaces. Let the first integer be $T_j$. The contents of this line are as follows:

- If $T_{j} = 1$, the line continues with two integers $X_{j}, Y_{j}$ in this order. This indicates that on day $j$, a relocation event occurs, where all beavers living in a city with danger level $X_{j}$ move to a city with danger level $Y_{j}$ that they can reach by traveling along one or more roads from their current city.
- If $T_{j} = 2$, the line continues with two integers $A_{j}, L_{j}$ in this order. This indicates that on day $j$, an immigration event occurs, increasing the number of beavers in city $A_{j}$ by $L_{j}$.
- If $T_{j} = 3$, the line continues with one integer $B_{j}$. This indicates that on day $j$, a survey event occurs, where the number of beavers currently living in city $B_{j}$ is surveyed.

### Output

For each $j$ ($1 \le j \le Q$) where $T_{j} = 3$, output the number of beavers in city $B_{j}$ at that moment, one per line, in order.

### Constraints

- $2 \le N \le 2\,000\,000$.
- $1 \le P_{i} < i$ ($2 \le i \le N$).
- $0 \le K_{i} \le 100$ ($1 \le i \le N$).
- $1 \le Q \le 2\,000\,000$.
- $T_{j}$ is either 1, 2, or 3 ($1 \le j \le Q$).
- If $T_{j} = 1$, then $0 \le Y_{j} < X_{j} \le N - 1$ ($1 \le j \le Q$).
- If $T_{j} = 2$, then $1 \le A_{j} \le N$, $1 \le L_{j} \le 100$ ($1 \le j \le Q$).
- If $T_{j} = 3$, then $1 \le B_{j} \le N$ ($1 \le j \le Q$).
- At least one $j$ ($1 \le j \le Q$) satisfies $T_{j} = 3$.
- All input values are integers.

### Subtasks

Let the maximum danger level of the cities be $D$.

1. ($4$ points) $D = 1$.
2. ($8$ points) $N \le 20$.
3. ($13$ points) $D \le 20$.
4. ($15$ points) No queries satisfy $T_{j} = 2$, and at most 5 queries satisfy $T_{j} = 3$.
5. ($15$ points) At most 5 queries satisfy $T_{j} = 3$.
6. ($27$ points) No queries satisfy $T_{j} = 2$.
7. ($18$ points) No additional constraints.

### Sample Input 1

~~~
4
1 1 2
1 3 4 3
6
3 1
1 1 0
3 1
3 2
1 2 1
3 2
~~~

### Sample Output 1

~~~
1
8
0
3
~~~

Initially, cities $1, 2, 3, 4$ have $1, 3, 4, 3$ beavers respectively. The danger levels of these cities are $0, 1, 1, 2$, respectively.

- On day 1, a survey event occurs. Output 1 on the first line, representing the number of beavers in city 1.
- On day 2, a relocation event occurs. All beavers in city 2 and city 3 move to city 1. At the end of day 2, cities $1, 2, 3, 4$ contain $8, 0, 0, 3$ beavers, respectively.
- On day 3, a survey event occurs. Output 8 on the second line.
- On day 4, a survey event occurs. Output 0 on the third line.
- On day $5$, a relocation event occurs. All beavers in city $4$ move to city $2$. At the end of day $5$, cities $1, 2, 3, 4$ contain $8, 3, 0, 0$ beavers, respectively.
- On day 6, a survey event occurs. Output 3 on the fourth line.

This input example satisfies the constraints of subtasks $2, 3, 4, 5, 6, 7$.

### Sample Input 2

~~~
3
1 1
3 1 4
11
2 2 5
1 2 0
3 1
1 1 0
3 1
3 2
2 3 4
3 3
1 1 0
3 3
3 1
~~~

### Sample Output 2

~~~
3
13
0
4
0
17
~~~

Initially, cities $1, 2, 3$ have $3, 1, 4$ beavers, respectively. The danger levels of these cities are $0, 1, 1$, respectively.

- On day 1, an immigration event occurs. The number of beavers in city 2 increases by 5. At the end of day 1, cities $1, 2, 3$ contain $3, 6, 4$ beavers, respectively.
- On day 2, a relocation event occurs. No beavers move, as no city has a danger level of 2.
- On day 3, a survey event occurs. Output 3 on the first line.
- On day 4, a relocation event occurs. All beavers in city 2 and city 3 move to city 1. At the end of day 4, cities $1, 2, 3$ contain $13, 0, 0$ beavers, respectively.
- On day 5, a survey event occurs. Output 13 on the second line.
- On day 6, a survey event occurs. Output 0 on the third line.

Subsequent events occur similarly, but their descriptions are omitted.

This input example satisfies the constraints of subtasks $1, 2, 3, 7$.

### Sample Input 3

~~~
7
1 2 1 3 3 2
5 2 8 9 4 0 5
10
1 3 1
2 4 10
3 2
1 6 3
1 2 0
3 1
3 4
2 5 6
3 5
3 3
~~~

### Sample Output 3

~~~
6
18
19
6
0
~~~

This input example satisfies the constraints of subtasks $2, 3, 5, 7$.
