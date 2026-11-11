Score: $100$ points

### Problem Statement

Many containers are transported by ships to the JOI Port every day. They are transported to all over the country by trucks.

The JOI Port is very narrow. It has only two areas where we can put containers. In each area, we can put any number of containers vertically.

For safety reasons, when a container is transported by a ship, we have to put it on one of the areas. If some containers are already put there, we have to put it on the top of them. When we transport a container by a truck, we have to take a container from the top of the containers on one of the areas.

Today, $N$ containers will be transported to the JOI Port. All of them will be transported by trucks.

Your task is to manage the facilities of the JOI Port. For each container, you know when it will come and when it will leave. Write a program which calculates the number of ways to put and take containers modulo $1\,000\,000\,007$.

### Task

Given the number of containers transported to the JOI Port and the time for each container to come and leave, write a program which calculates the number of ways to put and take containers satisfying the conditions modulo $1\,000\,000\,007$.

### Input

Read the following data from the standard input.

- The first line of input contains an integer $N$, the number of containers transported to the JOI Port.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains two space separated integers $A_{i}, B_{i}$. This means the $i$-th container will come to the JOI Port at time $A_{i}$, and leave the JOI Port by a truck at time $B_{i}$.

### Output

Write one line to the standard output. The output contains the number of ways to put and take containers satisfying the conditions modulo 1 000 000 007.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 1\,000\,000$.
- $1 \le A_{i} \le 2N$ ($1 \le i \le N$).
- $1 \le B_{i} \le 2N$ ($1 \le i \le N$).
- $A_{i} < B_{i}$ ($1 \le i \le N$).
- The $2N$ integers $A_{1}, \cdot \cdot \cdot , A_{N}, B_{1}, \cdot \cdot \cdot , B_{N}$ are different from each other.

### Subtask

There are 4 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$10$ points]

- $N \le 20$.

#### Subtask 2 [$12$ points]

- $N \le 2\,000$.

#### Subtask 3 [$56$ points]

- $N \le 100\,000$.

#### Subtask 4 [$22$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4
1 3
2 5
4 8
6 7
~~~

### Sample Output 1

~~~
4
~~~

There are 4 ways to put and take containers. Denote the areas by A, B. The following ways to put containers satisfy the condition.

- Put $1$, $2$, $3$, $4$-th container to the area A,B,A,A, respectively.
- Put $1$, $2$, $3$, $4$-th container to the area A,B,A,B, respectively.
- Put $1$, $2$, $3$, $4$-th container to the area B,A,B,A, respectively.
- Put $1$, $2$, $3$, $4$-th container to the area B,A,B,B, respectively.

### Sample Input 2

~~~
3
1 4
2 5
3 6
~~~

### Sample Output 2

~~~
0
~~~

### Sample Input 3

~~~
5
1 4
2 10
6 9
7 8
3 5
~~~

### Sample Output 3

~~~
8
~~~

### Sample Input 4

~~~
8
1 15
2 5
3 8
4 6
14 16
7 9
10 13
11 12
~~~

### Sample Output 4

~~~
16
~~~
