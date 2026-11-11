Score: $100$ points

### Problem Statement

There are $N$ cities in JOI Kingdom, which are indexed by the numbers from 1 to $N$. City 1 is the capital city. Each city has a value called liveliness and the initial value of liveliness of city $i$ ($1 \le i \le N$) is $C_{i}$.

Road in JOI Kingdom connects two different cities bidirectionally. Initially, there is no road in JOI Kingdom. You have planned $N - 1$ constructions of roads. The $j$-th construction ($1 \le j \le N - 1$) is planned to be done in the follwing way.

- Two cities, $A_{j}$ and $B_{j}$, are appointed, when one can go from city 1 to city $A_{j}$ and cannot go from city 1 to city $B_{j}$ by using only roads constructed at that time.
- You construct a road connecting city $A_{j}$ and city $B_{j}$. The cost of this construction is the number of pairs of cities ($s, t$) satisfying the following conditions:

    > City $s$ and City $t$ lie on the shortest path between city 1 and city $A_{j}$, and when one goes from city $1$ to city $A_{j}$ he arrives city $s$ before city $t$, and the value of liveliness of city $s$ is strictly larger than that of city $t$.

    Here, cities lying on the path between city 1 and city $A_{j}$ include city 1 and city $A_{j}$. Notice that the shortest path between city 1 and city $A_{j}$ is unique.

- The values of liveliness of all cities lying on the path between city $1$ and city $A_{j}$ change to the value of liveliness of city $B_{j}$.

You want to know the cost of each construction.

### Task

Given the data of cities and constructions of roads, write a program which calculates the cost of each construction.

### Input

Read the following data from the standard input.

- The first line of input contains a integer $N$. This means there are $N$ cities in JOI Kingdom.
- The second line of input contains $N$ space separated integers $C_{1},C_{2}, \cdots C_{N}$. This means the initial value of liveliness of city $i$ ($1 \le i \le N$) is $C_{i}$.
- The $j$-th line ($1 \le j \le N - 1$) of following $N - 1$ lines contains two space separated integers $A_{j}, B_{j}$. This means city $A_{j}$ and city $B_{j}$ are appointed for the $j$-th construction of road.

### Output

Write $N - 1$ lines to the standard output. The $j$-th line ($1 \le j \le N - 1$) of output contains the cost of the $j$-th construction of road.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 100\,000$．
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le A_{j} \le N$ ($1 \le j \le N - 1$).
- $1 \le B_{j} \le N$ ($1 \le j \le N - 1$).
- By using roads constructed before the $j$-th construction, one can go from city $1$ to city $A_{j}$ and cannot go from city 1 to city $B_{j}$ ($1 \le j \le N - 1$).

### Subtask

There are 3 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$7$ points]

- $N \le 500$．

#### Subtask 2 [$9$ points]

- $N \le 4000$．

#### Subtask 3 [$84$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
1 2 3 4 5
1 2
2 3
2 4
3 5
~~~

### Sample Output 1

~~~
0
0
0
2
~~~

In Sample Input 1, constructions are done as follows:

- In the first construction, there are no pairs ($s, t$) satisfying the conditions, so the cost is 0. A road connecting city 1 and city 2 is constructed and the value of liveliness of city 1 changes to 2.
- In the second construction, there are no pairs $(s, t)$ satisfying the conditions too, so the cost is $0$. A road connecting city 2 and city 3 is constructed and the values of liveliness of city 1 and city 2 change to 3.
- In the third construction, there are no pairs $(s, t)$ satisfying the conditions too, so the cost is $0$. A road connecting city 2 and city 4 is constructed and the values of liveliness of city 1 and city 2 change to 4.
- In the fourth construction, two pairs $(s, t) = (1, 3), (2, 3)$ satisfy the conditions, so the cost is $2$. A road connecting city 3 and city 5 is constructed and the values of liveliness of city 1, city 2 and city 3 change to $5$.

### Sample Input 2

~~~
10
1 7 3 4 8 6 2 9 10 5
1 2
1 3
2 4
3 5
2 6
3 7
4 8
5 9
6 10
~~~

### Sample Output 2

~~~
0
0
0
1
1
0
1
2
3
~~~
