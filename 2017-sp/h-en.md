Score: $100$ points

### Problem Statement

There is a wide mansion near JOI-kun’s house. The mansion has $N$ rooms located in a row from east to west. The $i$-th room from the eastmost room is called the room $i$. For each $i$ with $1 \le i \le N - 1$, the room $i$ and the room $i + 1$ are connected by a corridor. We can pass corridors in both directions. We need a key to enter a corridor from a room. Each key has a number called the type. More than one keys can have the same type.

From the room $i$ or the room $i + 1$, we need a key of type $C_{i}$ to enter a corridor between them.

There are $B_{i}$ keys in the room $i$. Their types are $A_{i,j}$ ($1 \le j \le B_{i}$). If JOI-kun enters a room, he will pick up all the keys in that room. After that, he can use them to enter corridors.

JOI-kun can use keys as many times as he wants. Sometimes, he gets several keys of the same type. But, he has no special advantage to have several keys of the same type compared with the case where he has only one key of that type.

To deal with the situation where he gets lost in the mansion, JOI-kun plans to write a program which answers the following queries:

- If JOI-kun comes into the room $x$ without any keys, can he move to the room $y$?

Your task is to write a program which answers the above queries, instead of JOI-kun.

### Task

Given information of the mansion and the queries, write a program which determines, for each query, whether he can move from a room to another room assuming he is now in the mansion without any keys.

### Input

Read the following data from the standard input.

- The first line of input contains an integer $N$, the number of rooms in the mansion.
- The second line of input contains $N - 1$ space separated integers $C_{1},C_{2}, \ldots,C_{N - 1}$. This means we need a key of type $C_{i}$ to enter a corridor connecting the room $i$ and the room $i + 1$.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains a positive integer $B_{i}$, and $B_{i}$ space separated integers $A_{i,1}, A_{i,2}, \ldots, A_{i,B_{i}}$. This means there are $B_{i}$ keys in the room $i$, and their types are $A_{i,j}$ ($1 \le j \le B_{i}$).
- The following line contains an integer $Q$, the number of queries.
- The $k$-th line ($1 \le k \le Q$) of the following $Q$ lines contains two space separated integers $X_{k}, Y_{k}$. This means the $k$-th query asks whether JOI-kun can move from the room $X_{k}$ to the room $Y_{k}$ assuming he is now in the room $X_{k}$ without any keys.

### Output

Write $Q$ lines to the standard output. The $k$-th line ($1 \le k \le Q$) of the $Q$ lines contains `YES` if he can move from the room $X_{k}$ to the room $Y_{k}$ assuming he is now in the room $X_{k}$ without any keys. Otherwise, it contains `NO`.

### Constraints

All input data satisfy the following conditions.

- $2 \le N \le 500\,000$.
- $1 \le Q \le 500\,000$.
- $1 \le B_{1} + B_{2} + \cdot \cdot \cdot + B_{N} \le 500\,000$.
- $1 \le B_{i} \le N$ ($1 \le i \le N$).
- $1 \le C_{i} \le N$ ($1 \le i \le N - 1$).
- $1 \le A_{i,j} \le N$ ($1 \le i \le N$, $1 \le j \le B_{i}$).
- The $B_{i}$ integers $A_{i,1}, \ldots, A_{i,B_{i}}$ are different from each other ($1 \le i \le N$).
- $1 \le X_{k} \le N$ ($1 \le k \le Q$).
- $1 \le Y_{k} \le N$ ($1 \le k \le Q$).
- $X_{k} \ne Y_{k}$ ($1 \le k \le Q$).

### Subtask

This task has 4 subtasks in total. The score and the additional constraints of each subtask are as follows:

#### Subtask 1 [$5$ points]

- $N \le 5\,000$.
- $Q \le 5\,000$.
- $B_{1} + B_{2} + \cdot \cdot \cdot + B_{N} \le 5\,000$.

#### Subtask 2 [$5$ points]

- $N \le 5\,000$.
- $B_{1} + B_{2} + \cdot \cdot \cdot + B_{N} \le 5\,000$.

#### Subtask 3 [$15$ points]

- $N \le 100\,000$.
- $C_{i} \le 20$ ($1 \le i \le N - 1$).
- $A_{i,j} \le 20$ ($1 \le i \le N$, $1 \le j \le B_{i}$).

#### Subtask 4 [$75$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
1 2 3 4
2 2 3
1 1
1 1
1 3
1 4
4
2 4
4 2
1 5
5 3
~~~

### Sample Output 1

~~~
YES
NO
NO
YES
~~~

- In the first query, if JOI-kun visits the rooms $2$, $1$, $2$, $3$, $4$ in this order, he gets to the room 4.
- In the second query, he can visit the rooms $3$, $4$ only. Since he can get keys of type $1$, $3$ only, he can not get to the room 2.
- In the third query, he can not get a key of type 4 from the room 5 to the room 4. Hence he can not get to the room 5
- In the fourth query, if he visits the rooms $5$, $4$, $3$ in this order, he gets to the room 3.

### Sample Input 2

~~~
5
2 3 1 3
1 3
1 2
1 1
1 3
1 2
4
1 3
3 1
4 3
2 5
~~~

### Sample Output 2

~~~
NO
YES
NO
YES
~~~

### Sample Input 3

~~~
7
6 3 4 1 2 5
1 1
1 5
1 1
1 1
2 2 3
1 4
1 6
3
4 1
5 3
4 7
~~~

### Sample Output 3

~~~
YES
NO
YES
~~~
