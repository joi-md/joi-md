Score: $100$ points

### Problem Statement

Some time ago, President K had a string $S$ of length $N$ consisting of lower case characters. But, he forgot it. He had a dictionary which contains misspellings of several kinds, and he once took a look at the dictionary to check the misspellings of the string $S$. Now, he remembers that the following is true for the string $S$.

- Let $T_{i}$ ($1 \le i \le N$) be the string obtained from $S$ by deleting the $i$-th character and removing the gap. For each $j$ ($1 \le j \le M$), the relation $T_{A_{j}} \le T_{B_{j}}$ holds.

Here, $T_{A_{j}} \le T_{B_{j}}$ means either $T_{A_{j}}$ is equal to $T_{B_{j}}$, or $T_{A_{j}}$ is smaller than $T_{B_{j}}$ in the lexicographic order (alphabetical order).

Write a program which, given information on the string $S$ remembered by President K, calculates the number of strings $S$ modulo 1 000 000 007 which do not contradict given information.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $M$
$A_{1}$ $B_{1}$
$A_{2}$ $B_{2}$
$\vdots$
$A_{M}$ $B_{M}$
~~~

### Output

Write one line to the standard output. The output should contain the number of strings $S$ modulo 1 000 000 007 which do not contradict given information.

### Constraints

- $2 \le N \le 500\,000$.
- $1 \le M \le 500\,000$.
- $1 \le A_{j} \le N$ ($1 \le j \le M$).
- $1 \le B_{j} \le N$ ($1 \le j \le M$).
- $A_{j} \ne B_{j}$ ($1 \le j \le M$).
- $(A_{j}, B_{j}) \ne (A_{k}, B_{k})$ ($1 \le j < k \le M$).

### Subtasks

1. ($8$ points) $N \le 10$.
2. ($20$ points) $N \le 200$.
3. ($29$ points) $M = N - 1$. Moreover, there exists a permutation $P$ of $(1, 2, \ldots, N)$ of length $N$ satisfying $A_{j} = P_{j}$ and $B_{j} = P_{j+1}$ ($1 \le j \le M$).
4. ($32$ points) $N \le 20\,000$.
5. ($11$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 2
1 3
3 2
~~~

### Sample Output 1

~~~
5876
~~~

For example, if the string $S$ is `bab`, we have $T_{1} = {}$`ab`，$T_{2} = {}$`bb`，$T_{3} = {}$`ba`. The relations $T_{1} \le T_{3}$ and $T_{3} \le T_{2}$ hold. This string does not contradict given information. In total, there are 5876 strings $S$ which do not contradict given information. Therefore, output 5876.

On the other hand, for example, if the strings $S$ is `aab`, we have $T_{1} = {}$`ab`，$T_{2} = {}$`ab`，$T_{3} = {}$`aa`. The relation $T_{1} \le T_{3}$ does not hold. Therefore, this string contradicts given information.

This sample input satisfies the constraints of all the subtasks.

### Sample Input 2

~~~
5 6
1 2
1 5
2 4
5 4
5 3
4 3
~~~

### Sample Output 2

~~~
656981
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$, $5$.

### Sample Input 3

~~~
10 9
3 6
4 6
6 7
7 9
10 8
9 8
8 5
5 2
5 1
~~~

### Sample Output 3

~~~
206289833
~~~

The number of strings $S$ which do not contradict given information is $824\,206\,295\,601$. Therefore, output 206 289 833, which is the remainder of 824 206 295 601 when divided by 1 000 000 007.

This sample input satisfies the constraints of Subtasks $1$, $2$, $4$, $5$.

### Sample Input 4

~~~
7 6
1 3
3 4
4 6
6 5
5 7
7 2
~~~

### Sample Output 4

~~~
7125651
~~~

This sample input satisfies the constraints of all the subtasks.

### Sample Input 5

~~~
5 4
2 4
4 3
3 5
5 1
~~~

### Sample Output 5

~~~
61451
~~~

This sample input satisfies the constraints of all the subtasks.
