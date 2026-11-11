Score: $100$ points

### Problem Statement

Kyoto City is a worldwide sightseeing place. It is also known as a city with grid of streets. You are now visiting Kyoto City for sightseeing. You are planning to visit a famous spot on foot. You want to arrive there as early as possible. In this task, we consider the following simplified situation.

In this city, there are $H$ streets in the east-west direction, and $W$ streets in the south-north direction. The shape of the city is a grid of $(H - 1) \times (W - 1)$ cells. The crossing of the $i$-th street ($1 \le i \le H$) from the north and the $j$-th street ($1 \le j \le W$) from the west is denoted by $(i, j)$.

Different streets may have different width, material, and crowdedness. Your walking speed may be different for different streets. For each street, your walking speed is determined as follows.

- If you walk on the $i$-th street ($1 \le i \le H$) from the north for the unit length, it takes $A_{i}$ seconds. In other words, for each $c$ ($1 \le c \le W - 1$), it takes $A_{i}$ seconds to walk from the crossing $(i, c)$ to the crossing $(i, c + 1)$.
- If you walk on the $j$-th street ($1 \le j \le W$) from the west for the unit length, it takes $B_{j}$ seconds. In other words, for each $r$ ($1 \le r \le H - 1$), it takes $B_{j}$ seconds to walk from the crossing $(r, j)$ to the crossing $(r + 1, j)$.

In order not to destroy the beautiful landscape of Kyoto City, you are not allowed to walk outside the streets.

Now you are in the crossing $(1, 1)$. You want to walk to the crossing $(H, W)$. Since you will be tired if you walk for long distance, you do not want to make a detour. You will not walk to the north or west direction. Under this condition, you want to arrive at the destination as early as possible.

Write a program which, given information of the streets, calculates the minimum time to walk from the crossing $(1, 1)$ to the crossing ($H, W$) without making a detour.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$H$ $W$
$A_{1}$ $A_{2}$ $\cdots$ $A_{H}$
$B_{1}$ $B_{2}$ $\cdots$ $B_{W}$
~~~

### Output

Write one line to the standard output. The output should contain the minimum time (seconds) to walk from the crossing $(1, 1)$ to the crossing ($H, W$) without making a detour.

### Constraints

- $2 \le H \le 100\,000$.
- $2 \le W \le 100\,000$.
- $1 \le A_{i} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le i \le H$).
- $1 \le B_{j} \le 1\,000\,000\,000 (= 10^{9})$ ($1 \le j \le W$).

### Subtasks

1. ($10$ points) $H \le 1\,000$, $W \le 1\,000$.
2. ($30$ points) $A_{i} \le 1\,000$ ($1 \le i \le H$), $B_{j} \le 1\,000$ ($1 \le j \le W$).
3. ($60$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
2 2
1 3
2 5
~~~

### Sample Output 1

~~~
5
~~~

There are two ways to walk from the crossing $(1, 1)$ to the crossing $(2, 2)$ without making a detour.

- Walk in the following way: crossing $(1, 1) \to (1, 2) \to (2, 2)$. It takes $A_{1} + B_{2} = 1 + 5 = 6$ seconds.
- Walk in the following way: crossing $(1, 1) \to (2, 1) \to (2, 2)$. It takes $B_{1} + A_{2} = 2 + 3 = 5$ seconds.

Since the minimum time is $5$ seconds, output $5$. These two ways are described in the following figure. An integer in the figure is the time needed to walk for the unit length on the corresponding street.

<p><img src="https://img.atcoder.jp/joisc2022/kyoto-en-p3-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

This sample input satisfies the constraints of all the subtasks.

### Sample Input 2

~~~
5 5
7 1 5 2 8
7 2 4 1 6
~~~

### Sample Output 2

~~~
20
~~~

For example, if you walk from the crossing $(1, 1)$ to the crossing $(5, 5)$ in the following way, it takes $20$ seconds. Since it is impossible to walk in $19$ seconds or less, output $20$. An integer in the figure is the time needed to walk for the unit length on the corresponding street.

<p><img src="https://img.atcoder.jp/joisc2022/kyoto-en-p3-2.png" alt="Figure" style="max-width:100%;height:auto;"></p>

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
4 6
454863204 543362989 866044086 813602010
71574269 17945210 688720933 392135202 38174709 168241720
~~~

### Sample Output 3

~~~
2737473954
~~~

This sample input satisfies the constraints of Subtasks $1$, $3$.
