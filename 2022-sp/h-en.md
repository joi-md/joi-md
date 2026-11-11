Score: $100$ points

### Problem Statement

JOI-kun has years of experience of growing vegetables in his home vegetable garden. Now he is planning to manage IOI Farm.

IOI Farm consists of $N$ lands, numbered from 1 to $N$. There are $N - 1$ roads connecting with lands, numbered from 1 to $N - 1$. The road $i$ ($1 \le i \le N - 1$) connects the land $A_{i}$ and the land $B_{i}$ bidirectionally. It is possible to move from any land to any other land by passing through roads. There is a sprinkler in every land of IOI Farm. Using a sprinkler, we can spray water on surrounding lands.

JOI-kun is planning to grow JOI millets in IOI Farm. JOI millet is a curious plant. If we give water, the height of a JOI millet changes immediately. But, JOI millet is a weak plant. If the height of a JOI millet becomes larger than or equal to $L$, the top part of length $L$ of the JOI millet is broken immediately. JOI-kun will harvest the broken parts of JOI millets.

In the beginning, JOI-kun plants a JOI millet of height $H_{j}$ in the land $j$ ($1 \le j \le N$). After that, for $Q$ days, JOI-kun will take care of the JOI millets everyday. On the $k$-th day ($1 \le k \le Q$), JOI-kun takes one of the following actions.

- Type 1 : JOI-kun uses the sprinkler of the land $X_{k}$ to give water to every land whose distance from the land $X_{k}$ is less than or equal to $D_{k}$. If water is given on a land, the JOI millet in that land grows, and its height is multiplied by $W_{k}$. But, the top part of length $L$ of the JOI millet is broken immediately, when the height becomes larger than or equal to $L$. Therefore, if JOI-kun gives water to a JOI millet of height $h$, the height of the JOI millet finally becomes “the remainder of $h \times W_{k}$ when divided by $L$.”
- Type 2 : JOI-kun measures the height of a JOI millet in the land $X_{k}$.

Here, the distance from the land $x$ ($1 \le x \le N$) to the land $y$ ($1 \le y \le N$) is the minimum number of roads we have to pass through when we move from the land $x$ to the land $y$.

JOI-kun wants to see that the JOI millets are grown up as planned. For this purpose, he wants to calculate the height of a JOI millet measured by each action of Type 2 in advance.

Write a program which, given information of IOI Farm and JOI-kun’s plan, calculates the height of a JOI millet measured by each action of Type 2 taken by JOI-kun.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $L$
$A_{1}$ $B_{1}$
$A_{2}$ $B_{2}$
$\vdots$
$A_{N - 1}$ $B_{N - 1}$
$H_{1}$
$H_{2}$
$\vdots$
$H_{N}$
$Q$
(Query 1)
(Query 2)
$\vdots$
(Query $Q$)
~~~

Each (Query $k$) ($1 \le k \le Q$) consists of space separated integers. Let $T_{k}$ be the first integer of (Query $k$). The content of this line is one of the following.

- If $T_{k} = 1$, this line also contains three more space separated integers $X_{k}, D_{k}, W_{k}$, in this order. This means JOI-kun takes an action of Type 1 on the $k$-th day, JOI-kun gives water to every land whose distance from the land $X_{k}$ is less than or equal to $D_{k}$, and the height of a JOI millet is multiplied by $W_{k}$ after water is given.
- If $T_{k} = 2$, this line also contains one more integer $X_{k}$. This means JOI-kun takes an action of Type 2 on the $k$-th day, and JOI-kun measures the height of a JOI millet in the land $X_{k}$.

### Output

For each action of Type 2 (i.e., for each $k$ ($1 \le k \le Q$) with $T_{k} = 2$), write the height of a JOI millet in the land $X_{k}$ measured by the action of Type 2 on the $k$-th day to the standard output, in this order. The outputs should be separated by line breaks.

### Constraints

- $2 \le N \le 200\,000$.
- $2 \le L \le 1\,000\,000\,000 (= 10^{9})$.
- $1 \le A_{i} < B_{i} \le N$ ($1 \le i \le N - 1$).
- It is possible to move from any land to any other land by passing through roads.
- $0 \le H_{j} \le L - 1$ ($1 \le j \le N$).
- $1 \le Q \le 400\,000$.
- $T_{k}$ is either 1 or 2 ($1 \le k \le Q$).
- For every $k$ ($1 \le k \le Q$) with $T_{k} = 1$, the following inequalities are satisfied:
    - $1 \le X_{k} \le N$.
    - $0 \le D_{k} \le 40$.
    - $0 \le W_{k} \le L - 1$.
- For every $k$ ($1 \le k \le Q$) with $T_{k} = 2$, the inequality $1 \le X_{k} \le N$ is satisfied.

### Subtasks

1. ($3$ points) $N \le 1\,000$, $Q \le 1\,000$.
2. ($9$ points) For every $k$ ($1 \le k \le Q$) with $T_{k} = 1$, the inequality $D_{k} \le1$ is satisfied.
3. ($29$ points) For every $k$ ($1 \le k \le Q$) with $T_{k} = 1$, the inequality $D_{k} \le2$ is satisfied.
4. ($12$ points) For every $k$ ($1 \le k \le Q$) with $T_{k} = 1$, the inequality $W_{k} = 0$ is satisfied.
5. ($30$ points) For every $k$ ($1 \le k \le Q$) with $T_{k} = 1$, the inequality $W_{k} = 2$ is satisfied.
6. ($17$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4 7
1 2
2 3
3 4
1
1
1
1
11
1 2 1 2
1 1 0 2
2 1
2 2
2 3
2 4
1 4 10 2
2 1
2 2
2 3
2 4
~~~

### Sample Output 1

~~~
4
2
2
1
1
4
4
2
~~~

In the beginning, JOI-kun plants a JOI millet of height 1 in every land.

On the first day, JOI-kun uses the sprinkler of the land 2. The heights of the JOI millets in the lands $1, 2, 3$ (whose distances from the land 2 are less than or equal to 1) are multiplied by 2. After that, the heights of the JOI millets in the lands $1, 2, 3, 4$ are $2, 2, 2, 1$, respectively.

On the second day, JOI-kun uses the sprinkler of the land $1$. The heights of the JOI millets in the land $1$ (whose distance from the land 1 is less than or equal to 0) are multiplied by 2. After that, the heights of the JOI millets in the lands $1, 2, 3, 4$ are $4, 2, 2, 1$, respectively.

On the seventh day, JOI-kun uses the sprinkler of the land $4$. The heights of the JOI millets in the lands $1, 2, 3, 4$ (whose distances from the land $4$ are less than or equal to $10$) are multiplied by $2$. After that, the heights of the JOI millets in the lands $1, 2, 3, 4$ are $8, 4, 4, 2$, respectively. Since the height of the JOI millet in the land 1 is larger than 7, the top part of length 7 is broken immediately. Finally, the heights are $1, 4, 4, 2$.

This sample input satisfies the constraints of Subtasks $1, 5, 6$.

### Sample Input 2

~~~
6 10
5 6
1 2
1 4
2 6
3 6
9
2
3
4
9
1
10
1 5 1 7
2 4
1 4 1 9
1 5 0 7
2 1
1 1 1 3
1 6 1 4
2 5
2 4
2 3
~~~

### Sample Output 2

~~~
4
1
4
8
2
~~~

On the first day, JOI-kun uses the sprinkler of the land $5$. The heights of the JOI millets in the lands $5, 6$ (whose distances from the land 5 are less than or equal to 1) are multiplied by 7. After that, the heights of the JOI millets in the lands $5, 6$ are $63, 7$, respectively. In the land 5, the top part of length 10 of the JOI millet is broken immediately. This process is repeated several times until the height becomes less than 10. Finally, the heights are $3, 7$, respectively.

This sample input satisfies the constraints of Subtasks $1, 2, 3, 6$.

### Sample Input 3

~~~
8 10
1 3
3 5
4 7
6 7
4 5
7 8
2 4
5
8
6
4
6
2
9
3
11
1 2 2 0
2 1
1 6 1 0
2 4
2 6
1 5 2 0
2 8
1 7 2 0
2 6
2 7
2 4
~~~

### Sample Output 3

~~~
5
0
0
3
0
0
0
~~~

This sample input satisfies the constraints of Subtasks $1$, $3$, $4$, $6$.
