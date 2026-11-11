Score: $100$ points

### Problem Statement

The Olympic Games will be held in JOI Kingdom soon. In order to welcome participants from all over the world, the buildings on the way from the airport to the accommodation will be decorated. There are $2N$ buildings, numbered from 1 to $2N$ from the airport.

President K is in charge of the decoration project. He asked the public to make decoration plans. After examining them, he finally chose two plans, the plan A and the plan B. In the plan A, the luxury level of the building $i$ ($1 \le i \le 2N$) is $A_{i}$. In the plan B, the luxury level of the building $i$ ($1 \le i \le 2N$) is $B_{i}$.

Both plans are very good, and it is difficult to choose one of them. He decided to decorate the buildings in the following way: for each building, one of the plan A or B will be chosen. In order to decorate the buildings in a fair way, the plan A will be chosen for $N$ buildings, and the plan B will be chosen for the remaining $N$ buildings. Moreover, since the participants will be excited if the luxury levels are increasing on the way from the airport to the accommodation, the following condition should be satisfied: $C_{i} \le C_{i+1}$ for every $i$ with $1 \le i \le 2N - 1$, where $C_{i}$ is the luxury level of the building $i$ ($1 \le i \le 2N$).

Write a program which, given the number of buildings and the luxury levels of the buildings for each plan, decides whether it is possible to choose decoration plans satisfying the above condition, and output one way to decorate the buildings if it is possible.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$
$A_{1}$ $\cdots$ $A_{2N}$
$B_{1}$ $\cdots$ $B_{2N}$
~~~

### Output

If it is impossible to choose decoration plans satisfying the condition, output `-1` to the standard output.

Otherwise, output a string $S$ of length $2N$ describing a way to decorate the buildings to the standard output. Here the $i$-th character of $S$ ($1 \le i \le 2N$) is `A` if the plan A is chosen for the building $i$, and is `B` if the plan B is chosen for the building $i$. If there are multiples ways satisfying the condition, output any of them.

### Constraints

- $1 \le N \le 500\,000$．
- $1 \le A_{i} \le 1\,000\,000\,000$ ($1 \le i \le 2N$).
- $1 \le B_{i} \le 1\,000\,000\,000$ ($1 \le i \le 2N$).

### Subtasks

1. ($11$ points) $N \le 2\,000$.
2. ($89$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3
2 5 4 9 15 11
6 7 6 8 12 14
~~~

### Sample Output 1

~~~
AABABB
~~~

Choose the plan A, A, B, A, B, B for each building, respectively. Then both the plan A and B are chosen three times. The luxury level of each building is 2, 5, 6, 9, 12, 14, respectively. The condition is satisfied.

### Sample Input 2

~~~
2
1 4 10 20
3 5 8 13
~~~

### Sample Output 2

~~~
BBAA
~~~

If there are more than one ways to decorate the buildings satisfying the condition, your program may output any one of them.

### Sample Input 3

~~~
2
3 4 5 6
10 9 8 7
~~~

### Sample Output 3

~~~
-1
~~~

Since it is impossible to choose decoration plans satisfying the condition, output `-1`.

### Sample Input 4

~~~
6
25 18 40 37 29 95 41 53 39 69 61 90
14 18 22 28 18 30 32 32 63 58 71 78
~~~

### Sample Output 4

~~~
BABBABAABABA
~~~
