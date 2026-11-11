Score: $100$ points

### Problem Statement

There are $N$ cities numbered from 1 to $N$ and $N - 1$ highways numbered from 1 to $N - 1$ in the United States of JOI. The $i$-th highway ($1 \le i \le N - 1$) connects between the city $A_{i}$ and the city $B_{i}$ bidirectionally. One can travel between any two cities by using the highways.

Currently, the United States of JOI is constituted of $K$ states numbered from 1 to $K$. The city $j$ ($1 \le j \le N$) belongs to the state $S_{j}$. Any state has at least one city.

Mr. K, the president of the United States of JOI, is afraid of separation of this country. The United States of JOI is said to be separable if one can divide all cities into Group X and Group Y so that the following conditions are satisfied:

- Any city belongs to either Group X or Group Y.
- Group X has at least one city.
- Group Y has at least one city.
- For any state, all cities belonging to the state belongs the same group.
- One can travel between any two cities belonging to Group X only via cities belonging to Group X by using the highways.
- One can travel between any two cities belonging to Group Y only via cities belonging to Group Y by using the highways.

Mr. K is going to merge states to make the United States of JOI not separable. When he merges states, he chooses two states and unifies the states into a state. The cities belonging to the unified state are the cities belonging to either of the two states. Mr. K wants to make the United States of JOI not separable by merging states as few times as possible.

Note that if the United States of JOI has only one state, it is not separable.

Write a program which, given information about cities, highways and states, calculates the minimum number of mergers to make the United States of JOI not separable.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $K$
$A_{1}$ $B_{1}$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$
$S_{1}$
$\vdots$
$S_{N}$
~~~

### Output

Write the minimum number of mergers to make the United States of JOI not separable to the standard output.

### Constraints

- $1 \le N \le 500\,000$．
- $1 \le K \le N$．
- $1 \le A_{i} \le N$ ($1 \le i \le N - 1$)．
- $1 \le B_{i} \le N$ ($1 \le i \le N - 1$)．
- One can travel between any two cities by using the highways.
- $1 \le S_{j} \le K$ ($1 \le j \le N$)．
- For any $k$ ($1 \le k \le K$), there exists $j$ ($1 \le j \le N$) such that $S_{j} = k$.

### Subtasks

1. ($10$ points) $N \le 100$, $K \le 7$.
2. ($24$ points) $N \le 3\,000$.
3. ($14$ points) $N \le 100\,000$, $K \le 50$.
4. ($22$ points) $N \le 100\,000$. At the initial situation, one can travel between any two cities belonging to the same state by using at most 100 highways.
5. ($30$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5 4
1 2
2 3
3 4
3 5
1
2
1
3
4
~~~

### Sample Output 1

~~~
1
~~~

In this sample, at the initial situation, the United States of JOI is separable. For example, if one groups the cities 1, 2, 3 and 4 as Group X and the city 5 as Group Y, the conditions of separability are satisfied.

If Mr. K merges the state 3 and the state 4, the United States of JOI becomes not separable. So the answer is $1$.

### Sample Input 2

~~~
5 4
1 2
2 3
3 4
4 5
1
2
3
4
1
~~~

### Sample Output 2

~~~
0
~~~

In this sample, at the initial situation, the United States of JOI is not separable. So the answer is 0.

### Sample Input 3

~~~
2 2
1 2
1
2
~~~

### Sample Output 3

~~~
1
~~~
