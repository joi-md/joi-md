Score: $100$ points

### Problem Statement

There is a board game for $K$ players. The board of this game consists of $N$ cells numbered from $1$ to $N$, and $M$ paths numbered from $1$ to $M$, where path $j$ ($1 \leq j \leq M$) connects cells $U_j$ and $V_j$ bidirectionally.

There are two types of cells on the board: **re-activate cells** and **stop cells**.
This information is given by a string $S$ of length $N$ consisting of `0` and `1`, where the $i$-th character of $S$ ($1 \leq i \leq N$) is `0` if cell $i$ is a re-activate cell, and `1` if cell $i$ is a stop cell.

This board game is played by $K$ players numbered from $1$ to $K$. Each player has their own piece, and the game starts with each player placing their piece on a specified cell. At the beginning, player $p$ ($1 \leq p \leq K$) places their piece on cell $X_p$. Note that multiple players' pieces can be placed on the same cell.

The game progresses with each player taking turns starting from player $1$ and proceeding in numerical order. After player $p$ finishes their turn, the turn moves to player $p+1$ (if $p=K$, then the turn goes to player $1$). Each player takes the following actions on their turn:

1. Choose one cell connected to the cell where their piece is placed via a path, and move their piece to the chosen cell.
2. If the destination cell is a re-activate cell, repeat step $1$ and continue their turn. If the destination cell is a stop cell, end their turn.

The team consisting of $K$ members, including JOI-Kun, who represent Japan in this board game, are researching cooperative strategies to quickly conquer the game. They are currently studying the following problem:

> What is the minimum total number of moves required by the $K$ players in order to place player $1$'s piece on cell $T$? Even if it's in the middle of a turn, if player $1$'s piece is placed on cell $T$, the condition is considered satisfied.

Given the information about the board of the game and the initial placement of each player's piece, create a program to calculate the answer to this problem for each $T=1,2,\ldots,N$.

---

### Input

Read the following data from the standard input.

~~~
$N$ $M$ $K$
$U_1$ $V_1$
$U_2$ $V_2$
$\vdots$
$U_M$ $V_M$
$S$
$X_1$ $X_2$ $\cdots$ $X_K$
~~~

### Output

Output $N$ lines to the standard output. On the $T$-th line ($1 \leq T \leq N$), output the minimum total number of moves required by the $K$ players to place player $1$'s piece on cell $T$.

---

### Constraints

- $2 \leq N \leq 50\,000$.
- $1 \leq M \leq 50\,000$.
- $2 \leq K \leq 50\,000$.
- $1 \leq U_j < V_j \leq N$ ($1 \leq j \leq M$).
- $(U_j,V_j) \neq (U_k,V_k)$ ($1 \leq j < k \leq M$).
- It is possible to reach any cell from any other cell by traversing several paths.
- $S$ is a string of length $N$ consisting of `0` and `1`.
- $1 \leq X_p \leq N$ ($1 \leq p \leq K$).
- $N,M$ and $K$ are integers.
- $U_j$ and $V_j$ are integers ($1 \leq j \leq M$).
- $X_p$ is an integer ($1 \leq p \leq K$).

### Subtasks

1. ($3$ points) There are no stop cells.
2. ($7$ points) There is exactly one stop cell.
3. ($7$ points) There are exactly two stop cells.
4. ($19$ points) $N \leq 3\,000$, $M \leq 3\,000$, $K \leq 3\,000$.
5. ($23$ points) $K=2$.
6. ($9$ points) $K \leq 100$.
7. ($23$ points) $N \leq 30\,000$, $M \leq 30\,000$, $K \leq 30\,000$.
8. ($9$ points) There are no additional constraints.

---

### Sample Input 1

~~~
5 5 2
1 2
2 3
2 4
3 5
4 5
00000
1 5
~~~

### Sample Output 1

~~~
0
1
2
2
3
~~~

Since player $1$'s piece starts on cell $1$, the answer for $T=1$ is $0$.

For $T=2$, in the first move, player $1$ can move his piece from cell $1$ to cell $2$. Therefore, the answer for $T=2$ is $1$.

For $T=3$, they can place player $1$'s piece on cell $3$ with the following $2$ moves:

- In the first move, player $1$ moves his piece from cell $1$ to cell $2$. Since cell $2$ is a re-activate cell, player $1$'s turn continues.
- In the second move, player $1$ moves his piece from cell $2$ to cell $3$.

Since they cannot place player $1$'s piece on cell $3$ in $1$ or fewer moves, the answer for $T=3$ is $2$.

Similarly, it can be verified that the answer for $T=4$ is $2$ and for $T=5$ is $3$.

This sample input satisfies the constraints of subtasks $1,4,5,6,7$, and $8$.

---

### Sample Input 2

~~~
5 5 2
1 2
2 3
2 4
3 5
4 5
01000
1 5
~~~

### Sample Output 2

~~~
0
1
4
4
5
~~~

For $T=3$, they can place player $1$'s piece on cell $3$ with the following $4$ moves:

- In the first move, player $1$ moves his piece from cell $1$ to cell $2$. Since cell $2$ is a stop cell, it's player $2$'s turn next.
- In the second move, player $2$ moves his piece from cell $5$ to cell $3$. Since cell $3$ is a re-activate cell, player $2$'s turn continues.
- In the third move, player $2$ moves his piece from cell $3$ to cell $2$. Since cell $2$ is a stop cell, it's player $1$'s turn next.
- In the fourth move, player $1$ moves his piece from cell $2$ to cell $3$.

Since they cannot place player $1$'s piece on cell $3$ in $3$ or fewer moves, the answer for $T=3$ is $4$.

This sample input satisfies the constraints of subtasks $2,4,5,6,7$, and $8$.

---

### Sample Input 3

~~~
5 5 2
1 2
2 3
2 4
3 5
4 5
01100
1 5
~~~

### Sample Output 3

~~~
0
1
3
3
4
~~~

This sample input satisfies the constraints of subtasks $3,4,5,6,7$, and $8$.

---

### Sample Input 4

~~~
8 7 5
1 3
5 7
4 6
2 6
2 3
7 8
1 5
10011010
4 6 4 7 1
~~~

### Sample Output 4

~~~
4
2
3
0
10
1
17
24
~~~

This sample input satisfies the constraints of subtasks $4,6,7$, and $8$.

---

### Sample Input 5

~~~
12 13 3
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 10
1 10
2 9
7 12
11 12
110000011101
1 9 11
~~~

### Sample Output 5

~~~
0
1
4
5
6
7
8
8
4
1
13
9
~~~

This sample input satisfies the constraints of subtasks $4,6,7$, and $8$.
