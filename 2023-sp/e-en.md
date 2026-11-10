Score: $100$ points

### Problem Statement

In the council of JOI City, there are $N$ assembly members, numbered from $1$ to $N$. The council will open a meeting, and the assembly members will take votes on $M$ proposed ordinances, numbered from $1$ to $M$. If $A_{i,j} = 1$, the assembly member $i$ ($1 \leq i \leq N$) will cast an affirmative vote on the proposed ordinance $j$ ($1 \leq j \leq M$). If $A_{i,j} = 0$, the assembly member $i$ will cast a negative vote on the proposed ordinance $j$.

The council of JOI City will be performed as follows.

1. Among the $N$ assembly members, they will randomly choose a chairperson by drawing lots.
2. The chairperson will choose a deputy chairperson among the $N - 1$ assembly members except for the chairperson.
3. The votes will be taken on $M$ proposed ordinances. Each of the $N - 2$ assembly members except for the chairperson and the deputy chairperson will cast an affirmative vote or a negative vote on each proposed ordinance. The council will approve a proposed ordinance if a majority of the assembly members (i.e., more than or equal to $\left\lfloor \dfrac{N}{2} \right\rfloor$ assembly members) cast affirmative votes on it. Here, $\lfloor x \rfloor$ is the largest integer not exceeding $x$.

Mayor K, the mayor of JOI City, wants the council to approve as many proposed ordinances as possible. Mayor K collected information on assembly members. Mayor K knows, on each proposed ordinance, who will cast an affirmative vote and who will cast a negative vote.

Write a program which, given information of the votes of the assembly members, calculates, for each assembly member, the maximum possible number of proposed ordinances approved by the council if that assembly member is chosen as the chairperson.

---

### Input

Read the following data from the standard input.

~~~
$N$ $M$
$A_{1,1}$ $A_{1,2}$ $\cdots$ $A_{1,M}$
$A_{2,1}$ $A_{2,2}$ $\cdots$ $A_{2,M}$
$\vdots$
$A_{N,1}$ $A_{N,2}$ $\cdots$ $A_{N,M}$
~~~

### Output

Write $N$ lines to the standard output. The $i$-th line ($1 \leq i \leq N$) of output should contain the maximum possible number of proposed ordinances approved by the council if the assembly member $i$ is chosen as the chairperson.

---

### Constraints

- $3 \leq N \leq 300\,000$.
- $1 \leq M \leq 20$.
- $0 \leq A_{i,j} \leq 1$ ($1 \leq i \leq N$, $1 \leq j \leq M$).
- Given values are all integers.

### Subtasks

1. ($8$ points) $N \leq 300$.
2. ($8$ points) $N \leq 3\,000$.
3. ($6$ points) $M \leq 2$.
4. ($19$ points) $M \leq 10$.
5. ($15$ points) $M \leq 14$.
6. ($22$ points) $M \leq 17$.
7. ($22$ points) No additional constraints.

---

### Sample Input 1

~~~
3 3
1 0 0
1 1 0
1 1 1
~~~

### Sample Output 1

~~~
3
3
2
~~~

- Let's consider the case where the assembly member $1$ is chosen as the chairperson. If the assembly member $2$ is chosen as the deputy chairperson, the council will approve three proposed ordinances, i.e., the proposed ordinances $1, 2, 3$. If the assembly member $3$ is chosen as the deputy chairperson, the council will approve two proposed ordinances, i.e., the proposed ordinances $1, 2$. Therefore, the maximum number of proposed ordinances approved by the council is $3$. Output $3$ in the first line.
- Let's consider the case where the assembly member $2$ is chosen as the chairperson. If the assembly member $1$ is chosen as the deputy chairperson, the council will approve three proposed ordinances, i.e., the proposed ordinances $1, 2, 3$. If the assembly member $3$ is chosen as the deputy chairperson, the council will approve one proposed ordinance, i.e., the proposed ordinance $1$. Therefore, the maximum number of proposed ordinances approved by the council is $3$. Output $3$ in the second line.
- Let's consider the case where the assembly member $3$ is chosen as the chairperson. If the assembly member $1$ is chosen as the deputy chairperson, the council will approve two proposed ordinances, i.e., the proposed ordinances $1, 2$. If the assembly member $2$ is chosen as the deputy chairperson, the council will approve one proposed ordinance, i.e., the proposed ordinance $1$. Therefore, the maximum number of proposed ordinances approved by the council is $2$. Output $2$ in the third line.

This sample input satisfies the constraints of Subtasks $1, 2, 4, 5, 6, 7$.

---

### Sample Input 2

~~~
4 12
1 1 1 0 1 1 0 1 0 1 1 0
1 1 0 1 1 0 1 1 1 1 1 0
0 0 1 1 1 0 0 0 0 0 1 1
1 0 0 0 1 1 1 1 1 0 0 0
~~~

### Sample Output 2

~~~
5
4
6
6
~~~

This sample input satisfies the constraints of Subtasks $1, 2, 5, 6, 7$.

---

### Sample Input 3

~~~
16 4
0 0 0 0
0 0 0 1
0 0 1 0
0 0 1 1
0 1 0 0
0 1 0 1
0 1 1 0
0 1 1 1
1 0 0 0
1 0 0 1
1 0 1 0
1 0 1 1
1 1 0 0
1 1 0 1
1 1 1 0
1 1 1 1
~~~

### Sample Output 3

~~~
3
3
3
2
3
2
2
1
3
2
2
1
2
1
1
0
~~~

This sample input satisfies the constraints of Subtasks $1, 2, 4, 5, 6, 7$.

---

### Sample Input 4

~~~
4 2
1 0
0 1
1 1
1 1
~~~

### Sample Output 4

~~~
2
2
1
1
~~~

This sample input satisfies the constraints of all the subtasks.
