Score: $100$ points

### Problem Statement

JOI-kun has $N$ fishes, numbered from 1 to $N$. The size of the fish $i$ ($1 \le i \le N$) is $A_{i}$.

When we grow fish, we have to pay attention to the following fact: if we have two nearby fishes, one fish eats the other fish as time passes. Here, two fishes are nearby if there is no fish between them. More precisely, if the size of the fish $x$ is larger than or equal to the size of the fish $y$, and the fish $x$ and the fish $y$ are nearby, then the fish $x$ eats the fish $y$, and the size of $x$ becomes the sum of the original size of $x$ and the size of $y$. If the fish $x$ and the fish $y$ have the same size, any one of them may eat the other.

JOI-kun will grow fishes for $Q$ days. To kill time, he does the following thought experiment. On the $j$-th day ($1 \le j \le Q$), JOI-kun takes one of the following actions.

- Type 1 : JOI-kun gives a special feed to the fish $X_{j}$. After that, the size of the fish $X_{j}$ becomes $Y_{j}$.
- Type $2$: JOI-kun takes only the fishes whose indices are between $L_{j}$ and $R_{j}$, inclusive. Then JOI-kun performs the following thought experiment:

    JOI-kun puts the fishes $L_{j}, L_{j} + 1, \ldots, R_{j}$ into an aquarium from left to right. By the above properties of the fishes, only one fish will survive in the aquarium. The index of the surviving fish depends on the choice of eaten fishes and the time when a fish eats another fish. JOI-kun wants to know the number of possible indices of surviving fishes. During the thought experiment, the order of the fishes does not change, and no two fishes eat the same fish simultaneously.

Write a program which, given information of JOI-kun’s fishes and JOI-kun’s plan, calculates the number of possible indices of surviving fishes for each action of Type 2 in order to determine whether JOI-kun’s thought is correct or not. Note that this is just a thought experiment. Please be assured that no fishes are eaten actually.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$
$A_{1}$ $A_{2}$ $\cdots$ $A_{N}$
$Q$
(Query 1)
(Query 2)
$\vdots$
(Query $Q$)
~~~

Each (Query $j$) ($1 \le j \le Q$) consists of space separated integers. Let $T_{j}$ be the first integer of (Query $j$). The content of this line is one of the following.

- If $T_{j} = 1$, this line contains two more space separated integers $X_{j}, Y_{j}$, in this order. This means JOI-kun takes an action of Type 1 on $j$-th day. The size of the fish $X_{j}$ becomes $Y_{j}$.
- If $T_{j} = 2$, this line contains two more space separated integers $L_{j}, R_{j}$, in this order. This means JOI-kun takes an action of Type 2 on $j$-th day. JOI-kun performs a thought experiment for fishes whose indices are between $L_{j}$ and $R_{j}$, inclusive.

### Output

For each action of Type 2 (i.e., for each $j$ ($1 \le j \le Q$) with $T_{j} = 2$), in order, write the number of possible indices of surviving fishes to the standard output. The outputs should be separated by line breaks.

### Constraints

- $1 \le N \le 100\,000$.
- $1 \le Q \le 100\,000$.
- $1 \le A_{i} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le i \le N$).
- $T_{j}$ is either 1 or 2 ($1 \le j \le Q$).
- $1 \le X_{j} \le N$ ($1 \le j \le Q$).
- $1 \le Y_{j} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le j \le Q$).
- $1 \le L_{j} \le R_{j} \le N$ ($1 \le j \le Q$).

### Subtasks

1. ($5$ points) $N \le 500$, $Q \le 500$.
2. ($8$ points) $Q = 1$, $T_{j} = 2$, $L_{j} = 1$, $R_{j} = N$ ($1 \le j \le Q$).
3. ($12$ points) $Q \le 1\,000$.
4. ($23$ points) $T_{j} = 2$ ($1 \le j \le Q$)．
5. ($35$ points) For each $j$ ($1 \le j \le Q$) with $T_{j} = 2$, the equalities $L_{j} = 1$ and $R_{j} = N$ are satisfied.
6. ($17$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
6 4 2 2 6
6
2 1 5
2 1 3
1 3 1
2 2 5
2 1 5
2 2 4
~~~

### Sample Output 1

~~~
5
2
2
3
1
~~~

For 6 days, JOI-kun takes the following actions.

- On the first day, JOI-kun performs a thought experiment for the fishes $1$, $2$, $3$, $4$, $5$.
- On the second day, JOI-kun performs a thought experiment for the fishes $1$, $2$, $3$.
- On the third day, JOI-kun gives a special feed to the fish 3. After that, the size of the fish 3 becomes 1.
- On the fourth day, JOI-kun performs a thought experiment for the fishes $2$, $3$, $4$, $5$.
- On the fifth day, JOI-kun performs a thought experiment for the fishes $1$, $2$, $3$, $4$, $5$.
- On the sixth day, JOI-kun performs a thought experiment for the fishes $2$, $3$, $4$

The results of a thought experiment for the first day are as follows.

- The sizes of the fishes in the aquarium are $6$, $4$, $2$, $2$, $6$ from left to right.
- For example, the fish 2 survives in the aquarium by the following process. (An array specifies the sizes of the fishes in the aquarium from left to right. A bold face character specifies the size of the fish 2.)

    $[6, \mathbf{4}, 2, 2, 6]$ (Initial State)  
    $\to [6, \mathbf{4}, 4, 6]$ (The fish $4$ eats the fish $3$)  
    $\to [6, \mathbf{8}, 6]$ (The fish $2$ eats the fish $4$)  
    $\to [\mathbf{14}, 6]$ (The fish $2$ eats the fish $1$)  
    $\to [\mathbf{20}]$ (The fish $2$ eats the fish $5$)

- Similarly, the possible indices of surviving fishes are $1$, $2$, $3$, $4$, $5$. Hence there are five possibilities.

This sample input satisfies the constraints of Subtasks $1$, $3$, $6$.

### Sample Input 2

~~~
13
10 4 2 5 20 5 4 8 20 10 3 3 7
1
2 1 13
~~~

### Sample Output 2

~~~
7
~~~

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
12
32 32 4 1 1 1 1 4 4 16 32 128
7
2 1 12
2 2 6
2 8 10
2 1 9
2 3 8
2 5 9
2 2 12
~~~

### Sample Output 3

~~~
12
1
1
2
6
2
1
~~~

This sample input satisfies the constraints of Subtasks $1$, $3$, $4$, $6$.

### Sample Input 4

~~~
10
2 3 5 10 1 3 4 9 5 2
8
2 1 10
1 10 5
2 1 10
1 4 1000000000
2 1 10
1 8 20
1 4 8
2 1 10
~~~

### Sample Output 4

~~~
4
6
1
6
~~~

This sample input satisfies the constraints of Subtasks $1$, $3$, $5$, $6$.
