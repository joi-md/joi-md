Score: $100$ points

### Problem Statement

Rie likes to make cookies. She made $N$ types of cookies. She made $A_i$ cookies of type $i$ ($1 \le i \le N$). In order to sell the cookies made by her, she will pack them into boxes. However, the following conditions should be satisfied.

- For every box, the types of the cookies in it should be different.
- For every box, the number of cookies in it should be equal to one of the following $M$ numbers: $B_1, B_2, \ldots, B_M$.

Write a program which, given information of cookies made by Rie and the conditions to pack the cookies into boxes, determines whether it is possible to pack all the cookies into boxes. Moreover, if it is possible to pack all the cookies into boxes, your program should output a way to pack the cookies into the minimum number of boxes.

---

### Input

Read the following data from the standard input.

~~~
$N$
$A_1$ $A_2$ $\cdots$ $A_N$
$M$
$B_1$ $B_2$ $\cdots$ $B_M$
~~~

### Output

If it is possible to pack all the cookies into boxes so that the conditions are satisfied, let $x$ be the number of used boxes, $c_k$ be the number of cookies in the $k$-th box ($1 \le k \le x$), and $v_{k,1}, v_{k,2}, \ldots, v_{k,c_k}$ be the types of the cookies in the $k$-th box. Write these numbers to the standard output as in the following format.

~~~
$x$
$c_1$ $v_{1,1}$ $v_{1,2}$ $\cdots$ $v_{1,c_1}$
$c_2$ $v_{2,1}$ $v_{2,2}$ $\cdots$ $v_{2,c_2}$
$\vdots$
$c_x$ $v_{x,1}$ $v_{x,2}$ $\cdots$ $v_{x,c_x}$
~~~

Here, the number of used boxes $x$ should be the minimum possible number. If there are several ways to pack the cookies into boxes satisfying the conditions, output any one of them.

If it is impossible to pack all the cookies into boxes so that the conditions are satisfied, write `-1` to the standard output.

### Constraints

- $1 \le N \le 15\,000$.
- $A_i \ge 1$ ($1 \le i \le N$).
- $A_1 + A_2 + \cdots + A_N \le 15\,000$.
- $1 \le M \le N$.
- $1 \le B_j \le N$ ($1 \le j \le M$).
- $B_j < B_{j+1}$ ($1 \le j \le M - 1$).
- Given values are all integers.

### Subtasks

1. ($6$ points) $N \le 500$, $A_i = 1$ ($1 \le i \le N$).
2. ($7$ points) $N \le 500$, $M = 1$.
3. ($12$ points) $A_1 + A_2 + \cdots + A_N \le 15$.
4. ($45$ points) $A_1 + A_2 + \cdots + A_N \le 500$.
5. ($15$ points) $A_1 + A_2 + \cdots + A_N \le 3\,000$.
6. ($15$ points) No additional constraints.

---

### Sample Input 1

~~~
7
1 1 1 1 1 1 1
3
1 2 3
~~~

### Sample Output 1

~~~
3
2 1 7
2 2 6
3 3 4 5
~~~

In this sample input, it is possible to pack the $7$ cookies into $3$ boxes so that the conditions are satisfied as follows.

- Pack cookies of types $1, 7$ into the first box. Pack one cookie for each type.
- Pack cookies of types $2, 6$ into the second box. Pack one cookie for each type.
- Pack cookies of types $3, 4, 5$ into the third box. Pack one cookie for each type.

Your program is judged as correct if it outputs the above way to pack the cookies because it is impossible to pack the $7$ cookies into less than or equal to $2$ boxes so that the conditions are satisfied. There are other ways to pack the cookies which are judged as correct.

This sample input satisfies the constraints of Subtasks $1, 3, 4, 5, 6$.

---

### Sample Input 2

~~~
5
5 3 1 2 4
1
4
~~~

### Sample Output 2

~~~
-1
~~~

In this sample input, it is impossible to pack the $15$ cookies into boxes so that the conditions are satisfied. Therefore, output `-1`.

This sample input satisfies the constraints of Subtasks $2, 3, 4, 5, 6$.

---

### Sample Input 3

~~~
7
5 4 4 2 1 1 1
2
2 6
~~~

### Sample Output 3

~~~
7
6 1 2 3 4 5 6
2 2 1
2 3 1
2 4 1
2 7 1
2 3 2
2 3 2
~~~

This sample input satisfies the constraints of Subtasks $4, 5, 6$.
