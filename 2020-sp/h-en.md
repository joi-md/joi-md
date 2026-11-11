Score: $100$ points

### Problem Statement

IOI Farm is an agricultural farm growing apples. It is famous for being located around a large circular lake.

In IOI Farm, there are $N$ employees, numbered from 1 to $N$. There are $M$ apple trees, numbered from 1 to $M$. The perimeter of the lake is $L$ meter.

In the beginning, the employee $i$ ($1 \le i \le N$) is waiting at the distance of $A_{i}$ meter from the northernmost point of the lake, in the clockwise direction. The values of $A_{i}$ ($1 \le i \le N$) are distinct. The apple tree $j$ ($1 \le j \le M$) is grown up at the distance of $B_{j}$ meter from the northernmost point of the lake, in the clockwise direction. The values of $B_{j}$ ($1 \le j \le M$) are distinct. Moreover, there is no apple tree at the initial position of any employee.

Due to a special breed improvement of the apple trees in IOI Farm, every apple tree can have at most one apple at the same time. Moreover, if an apple is harvested from the apple tree, it will have a new apple exactly after $C$ seconds. At time 0, every apple tree has an apple, and every employee starts walking around the lake in the clockwise direction. The speed of every employee is $1$ meter per second. If an employee arrives at an apple tree with an apple, then the employee will always harvest it (If an apple tree has a new apple at the same time when an employee arrives there, then the employee will harvest it too). We ignore the time it takes for an employee to harvest an apple.

President K is an stock holder of IOI Farm. Since you are a manager of IOI Farm, President K asked you to report on the efficiency of the employees. More precisely, President K wants to know the following $Q$ values.

- For each $k$ ($1 \le k \le Q$), the number of apples harvested by the employee $V_{k}$ until time $T_{k}$ (including an apple harvested exactly at time $T_{k}$ if it exists).

Write a program which, given the number of the employees, the number of the apple trees, the perimeter of the lake, the time it takes for an apple tree to have a new apple, the positions of the employees and the apple trees, and information on $Q$ queries, calculates the number of harvested apples for each query.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $M$ $L$ $C$
$A_{1}$ $\cdots$ $A_{N}$
$B_{1}$ $\cdots$ $B_{M}$
$Q$
$V_{1}$ $T_{1}$
$\vdots$
$V_{Q}$ $T_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. In the $k$-th line ($1 \le k \le Q$), output the answer to the $k$-th query.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le M \le 200\,000$.
- $N + M \le L \le 1\,000\,000\,000$.
- $1 \le C \le 1\,000\,000\,000$.
- $0 \le A_{i} < L$ ($1 \le i \le N$).
- $A_{i} < A_{i+1}$ ($1 \le i \le N - 1$).
- $0 \le B_{j} < L$ ($1 \le j \le M$).
- $B_{j} < B_{j+1}$ ($1 \le j \le M - 1$).
- $A_{i} \ne B_{j}$ ($1 \le i \le N$, $1 \le j \le M$).
- $1 \le Q \le 200\,000$.
- $1 \le V_{k} \le N$ ($1 \le k \le Q$).
- $1 \le T_{k} \le 1\,000\,000\,000\,000\,000\,000 = 10^{18}$ ($1 \le k \le Q$).

### Subtasks

1. ($5$ points) $N \le 3\,000$, $M \le 3\,000$, $Q \le 3\,000$.
2. ($20$ points) $T_{k} \ge 1\,000\,000\,000\,000\,000 = 10^{15}$ ($1 \le k \le Q$)．
3. ($75$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 2 7 3
1 4 6
0 5
3
1 7
2 3
3 8
~~~

### Sample Output 1

~~~
2
1
1
~~~

- At time 1, the employee 2 harvests an apple from the apple tree 2, and the employee 3 harvests an apple from the apple tree 1.
- At time $3$, the employee $2$ arrives at the apple tree $1$. Since it has no apple at that time, the employee does no harvest an apple.
- At time 4, the employee 1 harvests an apple from the apple tree 2.
- At time 6, the employee 1 harvests an apple from the apple tree 1. The employee 3 arrives at the apple tree 2, but does not harvest an apple since the apple tree has no apple at that time.
- At time 8, the employee 2 harvests an apple from the apple tree 2. The employee 3 arrives at the apple tree 1, but does not harvest an apple since the apple tree has no apple at that time.

As the number of apples harvested by the employee 1 until time 7 (including an apple harvested at time 7) is 2, output 2 in the first line.

### Sample Input 2

~~~
5 3 20 6
0 4 8 12 16
2 11 14
9
4 1932
2 93787
1 89
5 98124798
1 2684
1 137598
3 2
3 8375
4 237
~~~

### Sample Output 2

~~~
146
7035
7
7359360
202
10320
0
628
18
~~~

### Sample Input 3

~~~
8 15 217 33608
0 12 71 96 111 128 152 206
4 34 42 67 76 81 85 104 110 117 122 148 166 170 212
14
2 223544052420046341
3 86357593875941375
4 892813012303440034
1 517156961659770735
7 415536186438473633
6 322175014520330760
7 557706040951533058
6 640041274241532527
5 286263974600593111
8 349405886653104871
1 987277313830536091
5 989137777159975413
2 50689028127994215
7 445686748471896881
~~~

### Sample Output 3

~~~
33230868503053
3
5
1
123542793648997
8
165811220737767
8
7
1
1
7
7535161012043
132506837660717
~~~
