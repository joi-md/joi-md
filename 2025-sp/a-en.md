Score: $100$ points

### Problem Statement

The JOI Art Museum is planning to hold an exhibition of paintings soon. The museum owns $N$ paintings numbered from $1$ to $N$, and the beauty of painting $i$ ($1 \le i \le N$) is given as $A_{i}$. For the exhibition, these paintings will be arranged in a single row from left to right, but the order in which they are placed has not yet been determined.

There will be $M$ magazines covering the exhibition. These magazines are numbered from $1$ to $M$ in descending order of their influence. Each magazine will publish photographs of a certain contiguous segment of paintings in the arranged row. Specifically, magazine $j$ ($1 \le j \le M$) will publish photographs of the $L_{j}, L_{j} + 1, \ldots, R_{j}$-th paintings from the left in the row. The appeal of the article by magazine $j$ ($1 \le j \le M$) is defined as the maximum beauty among the paintings it covers.

JOI-kun, the director of the JOI Art Museum, aims to arrange the paintings in a way that allows these magazines to write articles with greater appeal, thereby attracting more people to the exhibition. Since magazines with greater influence reach a larger audience, he wants to prioritize increasing the appeal of articles in more influential magazines. More precisely, let $b_{j}$ be the appeal of the article published by magazine $j$ ($1 \le j \le M$), then JOI-kun wants to arrange the paintings so that the sequence $b = (b_{1}, b_{2}, \ldots, b_{M})$ is lexicographically maximized. Here, for two distinct sequences $b = (b_{1}, b_{2}, \ldots, b_{M})$ and $b^{\prime} = (b_{1}^{\prime}, b_{2}^{\prime}, \ldots, b_{M}^{\prime})$, $b$ is said to be lexicographically larger than $b^{\prime}$ when, for the smallest index $k$ ($1 \le k \le M$) such that $b_{k} \ne b_{k}^{\prime}$, $b_{k} > b_{k}^{\prime}$ holds.

Write a program which, given the information of the paintings to be exhibited and the magazines covering the event, calculates the appeal of each magazine’s article when the paintings are arranged to maximize the lexicographical order of sequence $b = (b_{1}, b_{2}, \ldots, b_{M})$.

### Input

Read the following data from the standard input.

~~~
$N$ $M$
$A_1$ $A_2$ $\ldots$ $A_N$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_M$ $R_M$
~~~

### Output

Write $M$ lines to the standard output. The $j$-th line ($1 \le j \le M$) of the output should contain $b_{j}$, the appeal of the article published by magazine $j$. Here, the sequence $b = (b_{1}, b_{2}, \ldots, b_{M})$ must be lexicographically maximized.

### Constraints

- $1 \le N \le 100\,000$.
- $1 \le M \le 100\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le N$).
- $1 \le L_{j} \le R_{j} \le N$ ($1 \le j \le M$).
- Given values are all integers.

### Subtasks

1. ($19$ points) $N \le 400$, $M \le 400$.
2. ($9$ points) $N \le 400$.
3. ($19$ points) $A_{i} \le 5$ ($1 \le i \le N$).
4. ($12$ points) $A_{i} = i$ ($1 \le i \le N$).
5. ($17$ points) For each $k$ ($1 \le k \le N$), the number of $i$ ($1 \le i \le N$) satisfying $A_{i} = k$ is at most 5.
6. ($24$ points) No additional constraints.

### Sample Input 1

~~~
4 4
1 2 1 2
1 1
2 3
4 4
3 4
~~~

### Sample Output 1

~~~
2
2
1
2
~~~

When the paintings are arranged in the order $2, 3, 4, 1$ from left to right, the appeal of each magazine’s article are determined as follows:

- Magazine 1: Covers painting 2. Since the beauty of this painting is 2, the appeal of the article is 2.
- Magazine 2: Covers paintings 3 and 4. Since the beauty of these paintings are 1 and 2, respectively, the appeal of the article is 2.
- Magazine 3: Covers painting 1. Since the beauty of this painting is 1, the appeal of the article is 1.
- Magazine 4: Covers paintings 4 and 1. Since the beauty of these paintings are 2 and 1, respectively, the appeal of the article is 2.

Thus, the sequence $b$ is $(2, 2, 1, 2)$. Since there is no arrangement of paintings that results in a lexicographically larger sequence than this, the output should be $2, 2, 1$, and 2 in this order, separated by new lines.

This sample input satisfies the constraints of Subtasks $1, 2, 3, 5$, and 6.

### Sample Input 2

~~~
4 8
1 2 3 4
1 2
2 3
4 4
1 1
2 4
3 3
3 3
4 4
~~~

### Sample Output 2

~~~
4
4
3
2
4
1
1
3
~~~

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
12 10
6 2 2 5 2 5 2 3 3 3 2 2
3 5
10 12
12 12
2 4
8 9
10 11
1 3
7 9
9 10
10 11
~~~

### Sample Output 3

~~~
6
5
5
6
5
3
6
5
5
3
~~~

This sample input satisfies the constraints of Subtasks $1, 2$, and 6.
