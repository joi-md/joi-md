Score: $100$ points

### Problem Statement

JOI-kun lives in the country of IOI, which is famous for its large lake. Today, a stamp rally competition will be held around the lake.

Around the lake, there are $2N$ evenly spaced locations, numbered from $1$ to $2N$ in a clockwise manner. Additionally, there are $2N$ one-way roads connecting adjacent locations. Road $i$ ($1 \le i \le 2N - 1$) goes from location $i$ to location $i+ 1$, and road $2N$ goes from location $2N$ to location 1. At the midpoint of each road, there is a stamp station.

There are $N$ colors of stamps numbered from 1 to $N$. The color of the stamp that can be obtained at the stamp station on road $i$ ($1 \le i \le 2N$) is given by $A_{i}$. For each color $j$ ($1 \le j \le N$), there are exactly 2 stamp stations where the stamp of that color can be obtained.

JOI-kun, equipped with many stamp cards, participates in the stamp rally competition. Each stamp card has two spaces, left and right, where stamps can be pressed. At most one stamp can be placed in each space. Initially, all stamp cards are blank.

The process of the stamp rally competition for JOI-kun is as follows:

1. First, he selects one of the $2N$ locations as the starting point and moves there. If he selects location $i$ ($1 \le i \le 2N$), he must pay a participation cost of $C_{i}$.
2. Next, he can instruct the event organizers to swap adjacent stamp stations. Specifically, he can swap the stamp stations on roads $2N$ and 1, or swap the stations on roads $i - 1$ and $i$ for any $i$ ($2 \le i \le 2N$).

    Each swap costs $X$, and JOI-kun can issue as many swap commands as he wants, possibly none. Swaps are executed immediately upon command. However, to prevent cheating, it is not allowed to exchange stamp stations that cross the starting location that JOI-kun has chosen. That is, if he starts at location 1, swapping the stations on roads $2N$ and 1 is forbidden. If he starts at location $i$ ($2 \le i \le 2N$), swapping the stations on roads $i - 1$ and $i$ is forbidden.

3. After that, JOI-kun starts from his chosen location and moves clockwise, visiting each of the $2N$ stamp stations in sequence. When visiting a stamp station, he can press the stamp onto his stamp cards as many times as he likes. He can also stamp both the left and right spaces of a single card at the same station. However, for each stamp card, he must always stamp the left space before the right space; that is, he cannot stamp the right space if the left space of that stamp card is still empty.

JOI-kun wants to collect many distinct types of stamp cards that are stamped on both spaces. Let stamped card $(a, b)$ be a stamp card with color $a$ stamped on the left and color $b$ stamped on the right. Two stamped cards $(a_{1}, b_{1})$ and $(a_{2}, b_{2})$ are considered the same type if and only if $a_{1} = a_{2}$ and $b_{1} = b_{2}$. Since there are $N$ colors of stamps, there are a total of $N^{2}$ possible types of stamped cards.

You need to answer $Q$ queries to help JOI-kun. The $q$-th query ($1 \le q \le Q$) asks the following:

- What is the minimum total cost required for JOI-kun to collect at least $K_{q}$ types of stamped cards by the end of the rally? It is provable that under the given constraints, JOI-kun can always collect at least $K_{q}$ types of stamped cards by spending a sufficiently large cost.

Given the information about stamp colors, participation costs, swap costs, and queries, write a program to answer JOI-kun’s $Q$ queries.

### Input

Read the following data from the standard input.

~~~
$N$ $X$
$A_1$ $A_2$ $\cdots$ $A_{2N}$
$C_1$ $C_2$ $\cdots$ $C_{2N}$
$Q$
$K_1$
$K_2$
$\vdots$
$K_Q$
~~~

### Output

Write $Q$ lines to the standard output, where the $q$-th line ($1 \le q \le Q$) contains the minimum total cost required to collect at least $K_{q}$ types of stamped cards.

### Constraints

- $2 \le N \le 500\,000$.
- $1 \le X \le 500\,000$.
- $(A_{1}, A_{2}, \ldots, A_{2N})$ is a permutation of $(1, 1, 2, 2, \ldots, N, N)$.
- $1 \le C_{i} \le 10^{18}$ ($1 \le i \le 2N$).
- $1 \le Q \le 500\,000$.
- $1 \le K_{q} \le N^{2}$ ($1 \le q \le Q$).
- Given values are all integers.

### Subtasks

1. ($5$ points) $N \le 4$.
2. ($20$ points) $N \le 5000$, $Q = 1$, $K_{1} = N^{2}$.
3. ($20$ points) $N \le 5000$, $Q = 1$.
4. ($19$ points) $N \le 5000$.
5. ($21$ points) $Q = 1$.
6. ($15$ points) No additional constraints.

### Sample Input 1

~~~
3 2
1 2 2 3 1 3
6 1 4 5 4 7
2
8
9
~~~

### Sample Output 1

~~~
3
4
~~~

Consider the case where JOI-kun selects location $2$ as the starting point and instructs the exchange of the stamp stations installed on road 3 and road 4.

In this case,

- The total cost paid by JOI-kun is $C_{2} + X \times 1 = 3$.
- JOI-kun visits the stamp stations in the order of roads $2, 3, 4, 5, 6, 1$, and the stamp colors available at each station in sequence are $2, 3, 2, 1, 3, 1$.
- The number of types of stamp cards stamped on both spaces that JOI-kun can collect is 8.

    - For example, to obtain a stamped card with a stamp of color 3 on the left and a stamp of color 1 on the right, JOI-kun can stamp the left side at road 3 and the right side at road 1.
    - However, note that it is impossible to obtain a stamped card with a stamp of color 1 on the left and color 2 on the right.

Since it is impossible to obtain 8 or more types of stamped cards with a cost of 2 or less, the first line of the output should be 3.

Additionally, if JOI-kun selects location $3$ as the starting point and does not instruct any stamp station exchange, he can obtain 9 types of stamped cards.

In this case, the total cost paid by JOI-kun is $C_{3} + X \times 0 = 4$. Since it is impossible to obtain 9 or more types of stamped cards with a cost of 3 or less, the second line of the output should be 4.

This input example satisfies the constraints of subtasks $1, 4, 6$.

### Sample Input 2

~~~
8 1
1 2 6 1 6 3 8 4 5 5 3 4 7 2 7 8
4 5 3 6 2 9 1 4 6 3 8 5 2 9 4 7
1
64
~~~

### Sample Output 2

~~~
7
~~~

Consider the case where JOI-kun chooses location $10$ as the starting point and instructs the stamp station exchanges in the following order:

- Exchange the stamp station installed on road 15 with the one on road 16.
- Exchange the stamp station installed on road 2 with the one on road 3.
- Exchange the stamp station installed on road 16 with the one on road 1.
- Exchange the stamp station installed on road 1 with the one on road 2.

In this case, JOI-kun can obtain 64 types of stamped cards, and the total cost paid is $C_{10} + X \times 4 = 7$.

This input example satisfies the constraints of subtasks $2, 3, 4, 5, 6$.

### Sample Input 3

~~~
9 4
4 3 5 3 8 1 5 8 1 7 6 2 4 9 6 9 2 7
12 9 4 8 7 1 20 5 8 7 4 13 5 9 10 3 7 8
6
39
81
73
79
64
52
~~~

### Sample Output 3

~~~
1
18
3
10
1
1
~~~

This input example satisfies the constraints of subtasks $4, 6$.
