Score: $100$ points

### Problem Statement

JOI-kun is a biologist. He plans an experiment on ants and sugar.

JOI-kun’s experiment takes place on a long straight stick of length $1\,000\,000\,000 (= 10^{9})$. It is placed from the left to the right. The point on the stick which is located at a distance $x$ from the leftmost point is called the point of coordinate $x$.

Now, nothing is placed on the stick. JOI-kun will perform the $Q$ operations. The $i$-th operation ($1 \le i \le Q$) is specified by the three integers $T_{i}, X_{i}, A_{i}$. They mean as follows.

- If $T_{i} = 1$, JOI-kun places $A_{i}$ ants at the point of coordinate $X_{i}$.
- If $T_{i} = 2$, JOI-kun places $A_{i}$ sugar cubes at the point of coordinate $X_{i}$.

Since ants and sugar cubes are very small, it is possible to place some of them at the same point. JOI-kun may perform several operations at the same point.

The ants used in this experiment have curious properties. Precisely, if JOI-kun claps hands, every ant will do the following.

- If there is a sugar cube at a distance less than or equal to $L$ from the ant, the ant will choose any one of them and eat it.

It may happen that several ants eat the same sugar cube at the same time.

For every $k$ ($1 \le k \le Q$), JOI-kun wants to know the answer to the following question.

- Assume that JOI-kun claps hands after the $k$-th operation. What is the maximum possible number of sugar cubes eaten by at least one ant?

Write a program which, given the operations performed by JOI-kun and the value of $L$, answers to JOI-kun’s questions for all $k$.

Note that JOI-kun does not clap hands actually. Therefore, the positions of the ants do not change, and the sugar cubes are not eaten.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$Q$ $L$
$T_{1}$ $X_{1}$ $A_{1}$
$T_{2}$ $X_{2}$ $A_{2}$
$\vdots$
$T_{Q}$ $X_{Q}$ $A_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. The $k$-th line ($1 \le k \le Q$) of output should contain the maximum possible number of sugar cubes eaten by at least one ant if JOI-kun claps hands after the $k$-th operation.

### Constraints

- $1 \le Q \le 500\,000$.
- $1 \le L \le 1\,000\,000\,000 (= 10^{9})$.
- $T_{i}$ is 1 or 2 ($1 \le i \le Q$).
- $0 \le X_{i} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le i \le Q$).
- $1 \le A_{i} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le i \le Q$).

### Subtasks

1. ($6$ points) $Q \le 3\,000$.
2. ($16$ points) $L = 1$, $X_{i} \le Q - 1$, $X_{i} + T_{i}$ is an even integer ($1 \le i \le Q$).
3. ($26$ points) $Q$ is an even integer, $T_{i} = 1$ ($1 \le i \le Q/2$), $T_{i} = 2$ ($Q/2 + 1 \le i \le Q$)．
4. ($52$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4 1
1 1 1
2 2 1
1 3 1
2 0 1
~~~

### Sample Output 1

~~~
0
1
1
2
~~~

In this sample input, the operations and the answer to the question for each $k$ are as follows.

1. JOI-kun places an ant at the point of coordinate 1. Assume that JOI-kun claps hands. Since there is no sugar cube, the answer to the question for $k = 1$ is 0.
2. JOI-kun places a sugar cube at the point of coordinate 2. Assume that JOI-kun claps hands. Then, the ant of coordinate $1$ eats the sugar cube of coordinate $2$. Therefore, the answer to the question for $k = 2$ is 1.
3. JOI-kun places an ant at the point of coordinate 3. Assume that JOI-kun claps hands. Then, both of the ants of coordinates $1, 3$ eat the sugar cube of coordinate 2. Therefore, the answer to the question for $k = 3$ is 1.
4. JOI-kun places a sugar cube at the point of coordinate 0. Assume that JOI-kun claps hands. The number of sugar cubes eaten by at least one ant becomes maximum if the ant of coordinates 1 eats the sugar cube of coordinate 0 and the ant of coordinates 3 eats the sugar cube of coordinate 2. Therefore, the answer to the question for $k = 4$ is 2.

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$.

### Sample Input 2

~~~
20 1
2 16 778913911
1 7 558407445
1 1 589762439
1 17 74646747
1 1 149104909
1 15 956697952
2 6 389372991
2 4 867453845
1 15 157353445
1 9 846177695
1 7 747107163
2 10 525670462
2 16 478912944
2 6 301733761
2 12 132966485
1 1 748012313
2 10 830922632
1 19 969484637
1 13 370330582
1 1 464798040
~~~

### Sample Output 2

~~~
0
0
0
74646747
74646747
778913911
1168286902
1168286902
1168286902
1168286902
1168286902
1693957364
2103741597
2405475358
2405475358
2405475358
2725982591
2725982591
2858949076
2858949076
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$.

### Sample Input 3

~~~
20 6
2 27 12
2 9 11
1 36 10
2 39 4
2 14 9
2 33 7
2 38 20
2 0 20
2 25 16
1 14 3
1 13 19
2 6 4
2 15 6
2 33 4
1 12 11
1 44 1
2 17 14
2 12 19
1 48 18
2 30 16
~~~

### Sample Output 3

~~~
0
0
0
4
4
10
10
10
10
13
30
30
32
32
40
41
44
44
44
44
~~~

This sample input satisfies the constraints of Subtasks $1$, $4$.

### Sample Input 4

~~~
20 268886972
1 984472666 733463744
1 478477245 94817772
1 242536956 330762563
1 65794782 319137646
1 320548477 937296140
1 815011370 938193848
1 565184190 917533785
1 245417414 534089975
1 529908772 977043962
1 603891865 700935654
2 167042244 479827216
2 173921297 798343455
2 916159596 810126726
2 999299355 465535307
2 965968070 501768990
2 936073643 174976034
2 832859952 778072072
2 955489596 704853861
2 246733786 382428992
2 227669861 390905006
~~~

### Sample Output 4

~~~
0
0
0
0
0
0
0
0
0
0
479827216
1278170671
2088297397
2553832704
2949828263
2949828263
3727900335
3727900335
4110329327
4501234333
~~~

This sample input satisfies the constraints of Subtasks $1$, $3$, $4$.
