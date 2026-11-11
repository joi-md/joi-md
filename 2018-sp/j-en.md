Score: $100$ points

### Problem Statement

There are $N$ candies in a row on the table. Each candy has a value called deliciousness. The deliciousness of the candy which is located $i$-th from the left is $A_{i}$ ($1 \le i \le N$).

JOI-chan decided to eat some of these $N$ candies. JOI-chan wants to maximize the sum of deliciousness of candies which she is going to eat.

However, JOI-chan thinks that just choosing candies greedily is not interesting, so she makes a rule that she cannot choose two consecutive candies simultaneously.

JOI-chan has not decided how many candies she eats, so JOI-chan wants to know, for each $j$ ($1 \le j \le \left\lceil\frac{N}{2}\right\rceil$), the maximum sum of deliciousness of candies when she eats $j$ candies. Here $\lceil x\rceil$ is the smallest integer larger than or equal to $x$.

### Task

Given the number of candies and the deliciousness of candies, write a program which calculates, for each $j$ ($1 \le j \le \left\lceil\frac{N}{2}\right\rceil$), the maximum sum of deliciousness of candies when she eats $j$ candies.

### Input

Read the following data from the standard input.

- The first line of input contains an integer $N$. This means there are $N$ candies on the table.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains an integer $A_{i}$. This means the deliciousness of the candy which is located $i$-th from the left is $A_{i}$.

### Output

Write $\left\lceil\frac{N}{2}\right\rceil$ lines to the standard output. The $j$-th line ($1 \le j \le \left\lceil\frac{N}{2}\right\rceil$) of output contains the maximum sum of deliciousness of candies when she eats $j$ candies.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 200\,000$.
- $1 \le A_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).

### Subtask

There are 2 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$8$ points]

- $N \le 2\,000$.

#### Subtask 2 [$92$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
3
5
1
7
6
~~~

### Sample Output 1

~~~
7
12
10
~~~

In Sample Input 1, there are 5 candies and their deliciousness are 3, 5, 1, 7, 6 from the left.

JOI-chan should eat candies as follows:

- When she eats 1 candies, she eats fourth candy from the left (deliciousness 7).
- When she eats 2 candies, she eats second and fourth candies from the left (deliciousness 5, 7).
- When she eats 3 candies, she eats first and third and fifth candies from the left (deliciousness 3, 1, 6).

Again, she cannot choose two consecutive candies simultaneously. For example, keep in mind that when she eats 2 candies, she cannot eat both fourth and fifth candies from the left (deliciousness 7, 6).

### Sample Input 2

~~~
20
623239331
125587558
908010226
866053126
389255266
859393857
596640443
60521559
11284043
930138174
936349374
810093502
521142682
918991183
743833745
739411636
276010057
577098544
551216812
816623724
~~~

### Sample Output 2

~~~
936349374
1855340557
2763350783
3622744640
4439368364
5243250666
5982662302
6605901633
7183000177
7309502029
~~~
