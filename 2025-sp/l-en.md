Score: $100$ points

### Problem Statement

Aoi has $N$ cards numbered from 1 to $N$. Each card has a positive integer written on it. The integer written on the card $i$ ($1 \le i \le N$) is $A_{i}$.

Aoi is going to play a game $Q$ times using the cards and a blackboard. The $j$-th game ($1 \le j \le Q$) she plays consists of the following steps.

1. Write 0 on the blackboard.
2. Arrange the cards $L_{j}, L_{j} + 1, \ldots, R_{j}$ on the desk from left to right in this order.
3. Perform the following operation for $R_{j} - L_{j} + 1$ times. The $k$-th operation ($1 \le k \le R_{j} - L_{j} + 1$) is as follows.

    - Let $x$ be the current integer written on the blackboard, and let $y$ be the integer written on the $k$-th card from the left on the desk. Erase $x$ from the blackboard, and write either $x + y$ or $x - y$ instead. If $x - y$ is chosen, Aoi eats one piece of uiro, a traditional Japanese sweet.

    - However, writing an integer strictly less than 0 is not allowed.

For each game, you want to know the maximum number of uiro pieces Aoi can eat.

Given the information about cards and games, write a program that, for each game, calculates the maximum number of uiro pieces Aoi can eat.

### Input

Read the following data from the standard input.

~~~
$N$
$A_1$ $A_2$ $\cdots$ $A_N$
$Q$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_Q$ $R_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $j$-th line ($1 \le j \le Q$), output the maximum number of uiro pieces Aoi can eat in the $j$-th game.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le A_{i} \le 100$ ($1 \le i \le N$).
- $1 \le Q \le 200\,000$.
- $1 \le L_{j} \le R_{j} \le N$ ($1 \le j \le Q$).
- Given values are all integers.

### Subtasks

1. ($3$ points) $N \le 20$, $Q \le 20$.
2. ($5$ points) $N \le 300$, $Q \le 20$.
3. ($7$ points) $N \le 5\,000$, $Q \le 20$.
4. ($15$ points) $Q \le 20$.
5. ($21$ points) $A_{i} \le 2$ ($1 \le i \le N$).
6. ($29$ points) $A_{i} \le 20$ ($1 \le i \le N$).
7. ($20$ points) No additional constraints.

### Sample Input 1

~~~
5
3 4 7 2 8
2
1 3
4 4
~~~

### Sample Output 1

~~~
1
0
~~~

One possible sequence of actions in the first game is as follows:

1. Write 0 on the blackboard.
2. Arrange the cards $1, 2, 3$ on the desk from left to right in this order.
3. The current integer written on the blackboard is 0, and the integer written on the first card from the left on the desk is 3. Erase 0 from the blackboard and write 3 instead.
4. The current integer written on the blackboard is 3, and the integer written on the second card from the left on the desk is 4. Erase 3 from the blackboard and write 7 instead.
5. The current integer written on the blackboard is 7, and the integer written on the third card from the left on the desk is 7. Erase 7 from the blackboard and write 0 instead. Aoi eats one piece of uiro.

In this case, the number of uiro pieces Aoi eats in the first game is 1. It can be proven that the number of uiro pieces Aoi eats in the first game does not exceed 1. Therefore, you should output 1.

One possible sequence of actions in the second game is as follows:

1. Write 0 on the blackboard.
2. Arrange the card 4 on the desk.
3. The current integer written on the blackboard is 0, and the integer written on the first card from the left on the desk is 2. Erase 0 from the blackboard and write 2 instead.

In this case, the number of uiro pieces Aoi eats in the second game is 0. It can be proven that the number of uiro pieces Aoi eats in the second game does not exceed 0. Therefore, you should output 0.

This sample input satisfies the constraints of subtasks 1, 2, 3, 4, 6, and 7.

### Sample Input 2

~~~
14
1 2 2 1 2 1 1 2 1 2 2 1 1 1
5
1 2
1 14
5 11
3 12
4 7
~~~

### Sample Output 2

~~~
0
8
4
6
2
~~~

One possible sequence of actions in the first game is as follows:

1. Write 0 on the blackboard.
2. Arrange the cards $1, 2$ on the desk from left to right in this order.
3. The current integer written on the blackboard is 0, and the integer written on the first card from the left on the desk is 1. Erase 0 from the blackboard and write 1 instead.
4. The current integer written on the blackboard is 1, and the integer written on the second card from the left on the desk is 2. Erase 1 from the blackboard and write 3 instead.

In this case, the number of uiro pieces Aoi eats in the first game is 0. It can be proven that the number of uiro pieces Aoi eats in the first game does not exceed 0. Therefore, you should output 0.

This sample input satisfies the constraints of all subtasks.

### Sample Input 3

~~~
8
16 23 45 76 43 97 12 43
7
1 8
3 7
2 7
4 5
5 8
2 6
3 5
~~~

### Sample Output 3

~~~
3
2
2
1
2
2
1
~~~

This sample input satisfies the constraints of subtasks 1, 2, 3, 4, and 7.
