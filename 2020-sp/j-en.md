Score: $100$ points

### Problem Statement

There are $N$ towns in JOI Kingdom, numbered from 1 to $N$. There are $N - 1$ roads connecting towns. The $i$-th road ($1 \le i \le N - 1$) connects the town $A_{i}$ and the town $B_{i}$. Every road can be passed through in either direction. You can travel from any town to any other town using some roads.

Currently, JOI Kingdom is divided into $K$ cities, numbered from 1 to $K$. The town $j$ ($1 \le j \le N$) belongs to the city $C_{j}$. Every city contains at least one town.

President K is the king of JOI Kingdom. He will choose one city as the capital city. For security reasons, the capital city must satisfy the following condition.

> You can travel from any town in the capital city to any other town in the capital city by passing only through towns which belong to the capital city.

However, President K noticed that it might be the case that no city satisfies this condition and he is not able to choose the capital city.

In order to treat this problem, President K will merge cities. Precisely, he can do the following operation.

> Choose $x$ and $y$ satisfying $1 \le x \le K$, $1 \le y \le K$ and $x \ne y$, and change the cities of towns belonging to the city $y$ so that every town belonging to the city $y$ becomes a town belonging to the city $x$.

Since it costs too much to merge cities, President K would like to minimize the number of times to merge cities, to choose any city as the capital city.

Write a program which, given the structure of the towns and the roads in JOI Kingdom and the cities each town currently belongs, calculates the minimum number of merging cities.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $K$
$A_{1}$ $B_{1}$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$
$C_{1}$
$\vdots$
$C_{N}$
~~~

### Output

Write one line to the standard output. Output the minimum number of merging cities needed to choose a capital city.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le K \le N$.
- $1 \le A_{i} \le N$ ($1 \le i \le N - 1$).
- $1 \le B_{i} \le N$ ($1 \le i \le N - 1$).
- You can travel from any town to any other town using some roads.
- $1 \le C_{j} \le K$ ($1 \le j \le N$).
- For every $k$ ($1 \le k \le K$), there exists an integer $j$ ($1 \le j \le N$) with $C_{j} = k$.

### Subtasks

1. ($1$ point) $N \le 20$.
2. ($10$ points) $N \le 2\,000$.
3. ($30$ points) Every town is directly connected to at most two towns by roads.
4. ($59$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
6 3
2 1
3 5
6 2
3 4
2 3
1
3
1
2
3
2
~~~

### Sample Output 1

~~~
1
~~~

In Sample Input 1, for example, you merge the city 3 and the city 1, choosing $(x, y) = (1, 3)$. Then you can choose the city 1 as the capital city. Initially, you cannot choose any city as the capital city. Thus the minimum number of merging cities is 1.

Sample Input 1 satisfies the constraints for Subtasks 1, 2 and 4.

### Sample Input 2

~~~
8 4
4 1
1 3
3 6
6 7
7 2
2 5
5 8
2
4
3
1
1
2
3
4
~~~

### Sample Output 2

~~~
1
~~~

Sample Input 2 satisfies the constraints for Subtasks 1, 2, 3 and 4.

### Sample Input 3

~~~
12 4
7 9
1 3
4 6
2 4
10 12
1 2
2 10
11 1
2 8
5 3
6 7
3
1
1
2
4
3
3
2
2
3
4
4
~~~

### Sample Output 3

~~~
2
~~~

Sample Input 3 satisfies the constraints of Subtasks 1, 2 and 4.
