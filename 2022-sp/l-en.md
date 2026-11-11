Score: $100$ points

### Problem Statement

JOI Town is an industrial area which had flourished some time ago. In order to transport products, many stations and railway tracks were constructed. Though it declined, there remain the stations and the railway tracks which are not used any more.

There are $N$ stations in JOI Town, numbered from 1 to $N$. There remain $M$ railway tracks. The $i$-th railway track ($1 \le i \le M$) connects the station $A_{i}$ and the station $B_{i}$ bidirectionally. The width of the $i$-th railway track is $W_{i}$. It is possible to travel from any station to any other station using railway tracks.

You are the mayor of JOI Town. You are planning to attract a railroad company using the remaining stations and railway tracks, and revive the JOI Town as the town of railway. Then, $Q$ railroad companies applied for this revival project. However, the width of the railway track for trains varies for different companies. It turns out that they need to reconstruct the railway tracks so that the width of the railway tracks of JOI Town matches the width of the railway tracks for the trains of a company.

The width of the railway tracks for the trains of the railroad company $j$ ($1 \le j \le Q$) is $X_{j}$. To attract the railroad company $j$, it is required that the following condition is satisfied.

- **Condition** It is possible to travel from any station to any other station using railway tracks of width $X_{j}$ only.

In order to satisfy the above condition, you can reconstruct the railway tracks as many times as needed.

- **Reconstruction** You choose a railway track. Then you reconstruct the chosen track so that its width will be increased or decreased by 1. The cost is 1. However, if the width of a railway track is 1, it is impossible to decrease the width further.

In order to decide on the company to be attracted, you want to estimate the minimum cost to attract each railroad company.

White a program which, given information on the stations, the railway tracks, and the railroad companies, calculates the minimum cost to attract each railroad company.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $M$
$A_{1}$ $B_{1}$ $W_{1}$
$A_{2}$ $B_{2}$ $W_{2}$
$\vdots$
$A_{M}$ $B_{M}$ $W_{M}$
$Q$
$X_{1}$
$X_{2}$
$\vdots$
$X_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of output should contain the minimum cost to attract the railroad company $j$.

### Constraints

- $2 \le N \le 500$.
- $N - 1 \le M \le 100\,000$.
- $1 \le Q \le 1\,000\,000$.
- $1 \le A_{i} < B_{i} \le N$ ($1 \le i \le M$).
- $1 \le W_{i} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le i \le M$).
- $(A_{i}, B_{i}, W_{i}) \ne (A_{j}, B_{j}, W_{j})$ ($1 \le i < j \le M$).
- It is possible to travel from any station to any other station using railway tracks.
- $1 \le X_{j} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le j \le Q$).
- $X_{j} < X_{j+1}$ ($1 \le j \le Q - 1$).

### Subtasks

1. ($3$ points) $M \le 16$, $Q \le 10$.
2. ($4$ points) $Q \le 10$.
3. ($7$ points) $B_{i} = A_{i} + 1$ ($1 \le i \le M$).
4. ($28$ points) $M \le 1\,000$.
5. ($35$ points) $Q \le 20\,000$.
6. ($23$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5 10
1 2 8
1 3 13
1 4 5
1 5 11
1 5 3
2 3 7
2 4 15
3 4 6
3 5 6
4 5 2
6
3
6
8
10
13
17
~~~

### Sample Output 1

~~~
8
2
5
10
9
21
~~~

For example, to attract the railroad company 1, it will cost 8 if you reconstruct the railway tracks as follows.

1. Decrease the width of the 6-th railway track by 4. The cost is 4.
2. Decrease the width of the 9-th railway track by 3. The cost is 3.
3. Increase the width of the 10-th railway track by 1. The cost is 1.

It is impossible to attract the railroad company 1 at cost less than 8. Therefore, output 8 in the first line.

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$, $5$, $6$.

### Sample Input 2

~~~
3 4
1 2 1
1 2 4
2 3 2
2 3 4
4
1
2
3
4
~~~

### Sample Output 2

~~~
1
1
2
0
~~~

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
10 20
6 7 914727791
1 8 771674531
3 5 632918108
5 9 329296846
1 7 237501112
4 9 303328173
2 6 216298255
2 10 504024991
3 8 158236886
1 10 10176179
8 9 918271145
3 6 217165898
3 6 624543444
4 9 70147274
8 9 976983490
6 9 210108505
2 9 972711062
1 10 564567289
3 7 411395464
4 7 952470985
10
115721165
198969744
356664401
429802521
513343279
610443927
741016686
786597783
898772266
903568946
~~~

### Sample Output 3

~~~
1121073688
761832468
1026806785
1316097872
1321500065
1445238392
1637513141
1621778548
1733953031
1738749711
~~~

This sample input satisfies the constraints of Subtasks $2$, $4$, $5$, $6$.
