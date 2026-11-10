Score: $100$ points

### Problem Statement

Bitaro, who has been enjoying gardening for many years, is planning to grow a plant called Bita-radish starting this spring.

Bitaro has prepared $2N$ Bita-radish seedlings. The seedlings are numbered from $1$ to $2N$, and Bitaro plans to arrange them in this order for cultivation. The size of seedling $i$ ($1 \leq i \leq 2N$) is $A_i$. Bitaro wants every seedling to get enough sunlight, so the sizes of the seedlings satisfy the following conditions:

- $A_1 \leq A_2 \leq \cdots \leq A_N \leq A_{N+1}$.
- $A_{N+1} \geq A_{N+2} \geq \cdots \geq A_{2N-1} \geq A_{2N} \geq A_1$.

Note that seedling $1$ is the smallest and seedling $N+1$ is the largest.

Bitaro has also prepared $N$ red flowerpots and $N$ blue flowerpots, each of which also has a certain size. The size of the $j$-th ($1 \leq j \leq N$) red flowerpot is $B_j$, and the size of the $k$-th ($1 \leq k \leq N$) blue flowerpot is $C_k$. Bitaro plants one Bita-radish seedling in each of these total $2N$ flowerpots, and arranges the flowerpots in a row so that seedlings $1,2,\ldots,2N$ are in this order.

Considering the appearance, the $2N$ flowerpots must be arranged in a **beautiful order**. Here, a beautiful order means an arrangement of flowerpots such that there exist consecutive $N$ flowerpots with the same color. More precisely, an arrangement of flowerpots is said to be a beautiful order if and only if there exists an integer $l$ between $1$ and $N+1$ inclusive such that the colors of the flowerpots planted with seedlings $l,l+1,\ldots,l+N-1$ are all the same.

When a seedling of size $y$ is planted in a flowerpot of size $x$, the **difficulty of cultivation** for that pair is the absolute value $|x-y|$. Bitaro's **workload** in growing Bita-radish is the maximum difficulty of cultivation among the $2N$ pairs of flowerpots and seedlings.

Write a program which, given the information about the Bita-radish seedlings and flowerpots, finds the minimum possible value of Bitaro's workload when planting the seedlings so that the flowerpots are arranged in a beautiful order.

---

### Input

The input is given from Standard Input in the following format:

~~~
$N$
$A_1$ $A_2$ $\cdots$ $A_{2N}$
$B_1$ $B_2$ $\cdots$ $B_N$
$C_1$ $C_2$ $\cdots$ $C_N$
~~~

### Output

Print a single value — the minimum possible value of Bitaro's workload when planting the seedlings so that the flowerpots are arranged in a beautiful order — in a single line to Standard Output.

---

### Constraints

- $1 \leq N \leq 300\,000$.
- $1 \leq A_i \leq 10^9$ ($1 \leq i \leq 2N$).
- $1 \leq B_j \leq 10^9$ ($1 \leq j \leq N$).
- $1 \leq C_k \leq 10^9$ ($1 \leq k \leq N$).
- $A_1 \leq A_2 \leq \cdots \leq A_N \leq A_{N+1}$.
- $A_{N+1} \geq A_{N+2} \geq \cdots \geq A_{2N-1} \geq A_{2N} \geq A_1$.
- All input values are integers.

### Subtasks

1. ($4$ points) $N \leq 5$.
2. ($5$ points) $N \leq 10$.
3. ($21$ points) $N \leq 2\,000$.
4. ($37$ points) All values of $A_i$ are distinct. Additionally, $A_N < A_{2N}$ holds.
5. ($33$ points) No additional constraints.

---

### Sample Input 1

~~~
2
1 2 6 3
2 5
4 3
~~~

### Sample Output 1

~~~
2
~~~

In this sample input, Bitaro can achieve a workload of $2$ by planting the seedlings as follows:

- Plant seedling $1$ in the first red flowerpot. The difficulty of cultivation for this pair is $|2-1|=1$.
- Plant seedling $2$ in the second blue flowerpot. The difficulty of cultivation for this pair is $|3-2|=1$.
- Plant seedling $3$ in the first blue flowerpot. The difficulty of cultivation for this pair is $|4-6|=2$.
- Plant seedling $4$ in the second red flowerpot. The difficulty of cultivation for this pair is $|5-3|=2$.

The colors of the flowerpots planted with seedlings $2$ and $3$ are both blue, so the flowerpots are arranged in a beautiful order.

It is impossible to achieve a workload less than $2$ when planting the seedlings so that the flowerpots are arranged in a beautiful order. Therefore, the output is $2$.

This sample input satisfies the constraints of all subtasks.

---

### Sample Input 2

~~~
9
1 2 3 4 5 6 7 8 9 18 17 16 15 14 13 12 11 10
2 7 4 1 7 6 4 10 6
6 8 9 3 7 1 9 5 4
~~~

### Sample Output 2

~~~
8
~~~

This sample input satisfies the constraints of subtasks $2,3,4$ and $5$.

---

### Sample Input 3

~~~
7
13 16 18 18 21 22 22 23 23 21 19 17 15 14
14 14 20 19 22 17 25
24 15 18 25 24 19 11
~~~

### Sample Output 3

~~~
3
~~~

This sample input satisfies the constraints of subtasks $2,3$ and $5$.
