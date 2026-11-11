Score: $100$ points

### Problem Statement

There are $N$ cities in JOI Country. The cities are numbered from 1 to $N$. There are $N - 1$ roads, numbered from 1 to $N - 1$. The road $i$ ($1 \le i \le N - 1$) contains two lanes: a lane from the city $A_{i}$ toward the city $B_{i}$ and a lane from the city $B_{i}$ toward the city $A_{i}$. Thus, the all roads are bidirectional. It is possible to travel between any pair of cities by using roads.

Currently, all lanes of all roads are not paved. For each lane of each road, we know the cost to pave the lane. Of the road $i$ ($1 \le i \le N - 1$), the cost to pave the lane from the city $A_{i}$ toward the city $B_{i}$ is $C_{i}$ and the cost to pave the lane from the city $B_{i}$ toward the city $A_{i}$ is $D_{i}$.

Mr. K, the Prime Minister of JOI Country, can choose some cities and designate them as resort cities. When he designates the city $x$ ($1 \le x \le N$) as a resort city, the following event will occur to each road $i$ ($1 \le i \le N - 1$):

> Of the cities $A_{i}$ and $B_{i}$, let $a$ be the nearer to the city $x$ and let $b$ be the farther. Here, the nearer city to the city $x$ means the city from which the fewer number of roads are needed to pass through to reach the city $x$. Then, the lane from the city $b$ toward the city $a$ will be paved (if it has not been paved yet).

The cost of paving constructions of the lanes caused by designating resort cities will be financed from taxes. However, the cost of the paving constructions of the lanes left unpaved after the designation need be financed from Mr. K’s pocket money.

There are $Q$ plans proposed to Mr. K. In the $j$-th ($1 \le j \le Q$) plan, he will start from the situation where there is no resort city and all lanes in all roads are not paved, and he will designate exactly $E_{j}$ cities as resort cities. However, which cities to be designated is not determined yet. He wants to know for each plan the minimum total paving cost which need be paid from his pocket money.

Write a program which, given the number of cities in JOI Country, the information of the roads, and the information of the plans, calculates for each plan the minimum total paving cost which need be paid from Mr. K’s pocket money.

### Inputs

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$
$A_{1}$ $B_{1}$ $C_{1}$ $D_{1}$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$ $C_{N - 1}$ $D_{N - 1}$
$Q$
$E_{1}$
$\vdots$
$E_{Q}$
~~~

### Outputs

Write $Q$ lines to the standard output. The $j$-th ($1 \le j \le Q$) line should contain the minimum total paving cost which need be paid from Mr. K’s pocket money for the $j$-th plan.

### Constraints

- $2 \le N \le 200\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le N - 1$).
- $1 \le B_{i} \le N$ ($1 \le i \le N - 1$).
- $A_{i} \ne B_{i}$ ($1 \le i \le N - 1$).
- It is possible to travel between any pair of cities by using roads.
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le N - 1$).
- $1 \le D_{i} \le 1\,000\,000\,000$ ($1 \le i \le N - 1$).
- $1 \le Q \le N$.
- $1 \le E_{j} \le N$ ($1 \le j \le Q$).

### Subtasks

1. ($6$ points) $N \le 16$.
2. ($7$ points) $Q = 1$, $E_{1} = 1$.
3. ($9$ points) $Q = 1$, $E_{1} = 2$.
4. ($17$ points) $N \le 2\,000$.
5. ($17$ points) $Q = 1$.
6. ($44$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4
1 2 1 2
1 3 3 4
1 4 5 6
2
1
2
~~~

### Sample Output 1

~~~
9
1
~~~

Consider the plan 1: Mr. K will designate exactly 1 city as a resort city. If he designates the city 1 as a resort city, the lane from the city 2 toward the city 1 of the road 1, the lane from the city 3 toward the city 1 of the road 2, and the lane from the city 4 toward the city 1 of the road 3 will be paved. Hence, the following lanes will be left unpaved: the lane from the city 1 toward the city 2 of the road 1, the lane from the city 1 toward the city 3 of the road 2, and the lane from the city 1 toward the city 4 of the road 3. The total cost of paving these lanes is $1 + 3 + 5 = 9$. There is no way to designate a city so that the total cost is less than 9. Thus, the answer is 9.

Consider the plan 2: Mr. K will designate exactly 2 cities as resort cities. If he designates the city 3 and the city $4$ as resort cities, the lane from the city $1$ toward the city $2$ of the road $1$ will be the only lane to be left unpaved. The cost to pave this lane is 1. There is no way to designate 2 cities so that the total cost is less than $1$. Thus, the answer is 1.

### Sample Input 2

~~~
5
1 3 13 6
5 1 17 8
5 2 6 10
1 4 16 11
1
1
~~~

### Sample Output 2

~~~
36
~~~

This sample input satisfies the constraints for Subtask 2.

### Sample Input 3

~~~
6
1 6 6 12
6 2 5 16
1 4 13 4
5 1 19 3
3 1 9 13
1
2
~~~

### Sample Output 3

~~~
14
~~~

This sample input satisfies the constraints for Subtask 3.

### Sample Input 4

~~~
15
14 5 12 7
14 12 6 5
14 10 14 16
9 14 16 12
13 7 4 15
1 3 8 1
6 7 15 13
15 4 4 6
9 1 12 6
13 1 7 6
13 4 5 15
2 6 11 19
8 4 12 7
13 11 14 5
3
3
6
7
~~~

### Sample Output 4

~~~
44
12
6
~~~
