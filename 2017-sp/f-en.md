Score: $100$ points

### Problem Statement

JOI Railways is a company operating one railway. In the railway of JOI Railways, there are $N$ stations on a straight line numbered from 1 to $N$. For each $i$ ($1 \le i \le N - 1$), the station $i$ and the station $i + 1$ are connected by a railway track.

JOI Railways has $K$ types of trains running in both directions. The types of trains are expressed as integers between $1$ and $K$ inclusive. Each station has a level which is an integer between $1$ and $K$ inclusive. For each $i$ ($1 \le i \le N$), the station $i$ has level $L_{i}$. The stations in both ends, namely the station 1 and the station $N$, have level $K$.

A train of type $j$ ($1 \le j \le K$) stops at every station whose level is greater than or equal to $j$, and it does not stop at any other stations. Since the stations in both ends, namely the station 1 and the station $N$, have level $K$, every train stops at these stations.

Many passengers use JOI Railways every day. During travel, they can take a train whose direction is opposite to the destination, or they can pass the destination. In the end of the travel, they have to stop at the destination. They do not like to stop at stations very much. Hence they try to take a route with minimum number of intermediate stops regardless of the number of passed stations or the number of connections. If a passenger stops at a station to change trains, we count it as one stop. The first stop at the starting station and the last stop at the destination are not considered as intermediate stops.

Your task is to write a program which answers queries on the minimum number of intermediate stops for each passenger.

### Task

Given information of the railway of JOI Railways and the starting station and the destination of each passenger, write a program which answers queries on the minimum number of intermediate stops for each passenger.

### Input

Read the following data from the standard input.

- The first line of input contains three space separated integers $N, K, Q$. This means there are $N$ stations in JOI Railways, there are $K$ types of trains, and $Q$ queries about travels between two stations are given.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains an integer $L_{i}$, the level of the station $i$.
- The $k$-th line ($1 \le k \le Q$) of the following $Q$ lines contains two space separated integers $A_{i}, B_{i}$. This means the starting station and the destination of the $k$-th passenger are the stations $A_{i}, B_{i}$, respectively.

### Output

Write $Q$ lines to the standard output. The $k$-th line ($1 \le k \le Q$) of output contains the minimum number of intermediate stops of a route from the station $A_{k}$ to the station $B_{k}$.

### Constraints

All input data satisfy the following conditions.

- $2 \le N \le 100\,000$.
- $1 \le K \le N$.
- $1 \le Q \le 100\,000$.
- $1 \le L_{i} \le K$ ($1 \le i \le N$).
- $1 \le A_{k} \le N$ ($1 \le k \le Q$).
- $1 \le B_{k} \le N$ ($1 \le k \le Q$).
- $A_{k} \ne B_{k}$ ($1 \le k \le Q$).

### Subtask

There are 4 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$5$ points]

- $N \le 100$.
- $K \le 100$.
- $Q \le 50$.

#### Subtask 2 [$15$ points]

- $Q \le 50$.

#### Subtask 3 [$25$ points]

- $K \le 20$.

#### Subtask 4 [$55$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
9 3 3
3
1
1
1
2
2
2
3
3
2 4
4 9
6 7
~~~

### Sample Output 1

~~~
1
3
0
~~~

In this sample input, three queries about travels between two stations are given.

- The first query is about the travel from the station 2 to the station 4. If a passenger takes a train of type 1 from the station 2 to the station 4, there is only one intermediate stop, the station 3.
- The second query is about the travel from the station 4 to the station 9. If a passenger takes a train of type 1 from the station 4 to the station 5, then a train of type 2 from the station 5 to the station 1, and finally a train of type 3 from the station 1 to the station 9, there are three intermediate stops, the stations 5, 1, 8.
- The third query is about the travel from the station 6 to the station 7. If a passenger takes a train of type 2 from the station 6 to the station 7, there are no intermediate stops.

### Sample Input 2

~~~
5 2 1
2
1
1
1
2
1 4
~~~

### Sample Output 2

~~~
1
~~~

Note that passengers can pass the destination during travel.

### Sample Input 3

~~~
15 5 15
5
4
1
2
3
1
1
2
4
5
4
1
5
3
5
8 1
11 1
5 3
6 11
9 12
15 14
15 2
3 12
2 1
4 8
15 5
12 6
1 13
13 8
14 9
~~~

### Sample Output 3

~~~
2
1
1
3
2
0
3
4
0
1
3
4
1
2
2
~~~
