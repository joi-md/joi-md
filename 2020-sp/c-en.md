Score: $100$ points

### Problem Statement

Bitaro’s room is an isosceles right-angled triangle whose leg has length $N$. A point in Bitaro’s room is represented as the coordinate $(x, y)$ with $0 \le x \le N$, $0 \le y \le N$, $x + y \le N$. The vertex of the right angle is the origin. The two legs of the triangle are the $x$-axis and the $y$-axis.

<p><img src="https://img.atcoder.jp/joisc2020/sweeping-en-p1-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

One day, Bitaro noticed that his room is full of dust. In the beginning, there are $M$ dusts in the room. The $i$-th dust ($1 \le i \le M$) lies in the point $(X_{i}, Y_{i})$. More than one dust may lie at the same point.

Now, Bitaro is planning to sweep the room using brooms. We consider a broom as a segment in the room and we call the length of the segment its width. Since Bitaro is well-organized, he can use a broom only in the following two ways.

- Bitaro puts the broom in the room so that one of its corners lies at the origin, and the broom is parallel to the $y$-axis. Then, he moves the broom horizontally to the positive direction of the $x$-axis as much as possible, keeping it parallel to the $y$-axis and one of its corners lying on the $x$-axis. If the broom has width $l$, a dust lying in $(x, y)$ with $x < N - l$ and $y \le l$ will be moved to $(N - l, y)$ (There may exist other dusts at $(N - l, y)$). This is called the procedure H.
- Bitaro puts the broom in the room so that one of its corners lies at the origin, and the broom is parallel to the $x$-axis. Then, he moves the broom vertically to the positive direction of the $y$-axis as much as possible, keeping it parallel to the $x$-axis and one of its corners lying on the $y$-axis. If the broom has width $l$, a dust lying in $(x, y)$ with $x \le l$ and $y < N - l$ will be moved to $(x, N - l)$ (There may exist other dusts at $(x, N - l)$). This is called the procedure V.

In Bitaro’s room, $Q$ events will happen sequentially. The event $j$ ($1 \le j \le Q$) is one of the following.

- Bitaro calculates the coordinates of the dust $P_{j}$.
- Bitaro uses a broom with width $L_{j}$ and performs the procedure $H$.
- Bitaro uses a broom with width $L_{j}$ and performs the procedure $V$.
- A new dust is added at the point $(A_{j}, B_{j})$. If there are $c$ dusts before this event, the new dust is the $(c + 1)$-th dust in the room.

Write a program which, given the length of the legs of the room, the coordinates of the dusts in the room, and the details of the events, calculates the coordinates of the dusts.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $M$ $Q$
$X_{1}$ $Y_{1}$
$\vdots$
$X_{M}$ $Y_{M}$
(Query 1)
$\vdots$
(Query $Q$)
~~~

Two or three space separated integers are written in each (Query $j$) ($1 \le j \le Q$). Let $T_{j}$ be the first integer. Then the meaning of this line is as follows.

- If $T_{j} = 1$, two integers $T_{j}, P_{j}$ are written in this line. This means, in the event $j$, Bitaro calculates the coordinates of the dust $P_{j}$.
- If $T_{j} = 2$, two integers $T_{j}, L_{j}$ are written in this line. This means, in the event $j$, Bitaro uses a broom with width $L_{j}$ and performs the procedure H.
- If $T_{j} = 3$, two integers $T_{j}, L_{j}$ are written in this line. This means, in the event $j$, Bitaro uses a broom with width $L_{j}$ and performs the procedure V.
- If $T_{j} = 4$, three integers $T_{j}, A_{j}, B_{j}$ are written in this line. This means, in the event $j$, a new dust is added at the point $(A_{j}, B_{j})$.

### Output

For each event with $T_{j} = 1$, write one line to the standard output. Output the $x$-coordinate and the $y$-coordinate of the dust $P_{j}$ when the event $j$ happens.

### Constraints

- $1 \le N \le 1\,000\,000\,000$.
- $1 \le M \le 500\,000$.
- $1 \le Q \le 1\,000\,000$.
- $0 \le X_{i} \le N$ ($1 \le i \le M$).
- $0 \le Y_{i} \le N$ ($1 \le i \le M$).
- $X_{i} + Y_{i} \le N$ ($1 \le i \le M$).
- $1 \le P_{j} \le$(the number of dusts when the event $j$ happens) ($1 \le j \le Q$).
- $0 \le L_{j} \le N - 1$ ($1 \le j \le Q$).
- $0 \le A_{j} \le N$ ($1 \le j \le Q$).
- $0 \le B_{j} \le N$ ($1 \le j \le Q$).
- $A_{j} + B_{j} \le N$ ($1 \le j \le Q$).
- There exists at least one event with $T_{j} = 1$ ($1 \le j \le Q$).

### Subtasks

1. ($1$ point) $M \le 2\,000$, $Q \le 5\,000$.
2. ($10$ points) $T_{j} = 1, 2, 4$.
3. ($11$ points) $T_{j} = 1, 2, 3, X_{j} \le X_{j+1}, Y_{j} \ge Y_{j+1}$ ($1 \le j \le M - 1$).
4. ($53$ points) $T_{j} = 1, 2, 3$.
5. ($25$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
6 2 10
1 1
4 0
4 2 3
3 3
1 1
4 1 2
2 3
2 0
1 4
3 2
1 3
1 2
~~~

### Sample Output 1

~~~
1 3
3 2
3 3
6 0
~~~

- In the beginning, the 1st dust lies at $(1, 1)$, and the 2nd dust lies at $(4, 0)$. Figure 1 describes the room.
- In the event 1, the 3rd dust is added at the point $(2, 3)$. Figure 2 describes the room.
- In the event $2$, Bitaro uses a broom with width $3$ and performs the procedure V. Then, the 1st dust is moved to $(1, 3)$. Figure 3 describes the room.
- In the event 3, Bitaro calculates the coordinates $(1, 3)$ of the 1st dust.
- In the event 4, the 4th dust is added at the point $(1, 2)$. Figure 4 describes the room.
- In the event $5$, Bitaro uses a broom with width $3$ and performs the procedure H. Then, the 1st dust is moved to $(3, 3)$, the 3rd dust is moved to $(3, 3)$, and the 4th dust is moved to $(3, 2)$. Figure 5 describes the room.
- In the event $6$, Bitaro uses a broom with width $0$ and performs the procedure H. Then, the 2nd dust is moved to $(6, 0)$. Figure 6 describes the room.
- In the event 7, Bitaro calculates the coordinates $(3, 2)$ of the 4th dust.
- In the event 8, Bitaro uses a broom with width 2 and performs the procedure V. No dust is moved. Figure 7 describes the room.
- In the event 9, Bitaro calculates the coordinates $(3, 3)$ of the 3rd dust.
- In the event 10, Bitaro calculates the coordinates $(6, 0)$ of the 2nd dust.

This sample input satisfies the constraints of Subtasks 1 and 5.

<p><img src="https://img.atcoder.jp/joisc2020/sweeping-en-p5-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

<p><img src="https://img.atcoder.jp/joisc2020/sweeping-en-p6-1-captions-20abf1b7cc.png" alt="Figure" style="max-width:100%;height:auto;"></p>

<p><img src="https://img.atcoder.jp/joisc2020/sweeping-en-p6-2-captions-bdb98ead5c.png" alt="Figure" style="max-width:100%;height:auto;"></p>

### Sample Input 2

~~~
9 4 8
2 3
3 1
1 6
4 3
2 6
1 3
2 2
1 4
2 3
1 2
2 4
1 1
~~~

### Sample Output 2

~~~
3 6
4 3
7 1
6 3
~~~

This sample input satisfies the constraints of Subtasks 1, 2, 4, and 5.

### Sample Input 3

~~~
8 1 8
1 5
4 4 1
2 6
1 2
2 3
4 2 2
2 5
1 1
1 3
~~~

### Sample Output 3

~~~
4 1
3 5
3 2
~~~

This sample input satisfies the constraints of Subtasks 1, 2, and 5.

### Sample Input 4

~~~
7 4 9
1 5
2 2
4 2
5 0
2 6
2 3
1 2
3 6
1 4
3 1
1 1
2 2
1 3
~~~

### Sample Output 4

~~~
4 2
5 1
1 6
5 2
~~~

This sample input satisfies the constraints of Subtasks 1, 3, 4, and 5.

### Sample Input 5

~~~
20 5 25
10 6
0 4
2 1
1 0
2 3
2 18
3 9
4 1 5
4 0 2
3 10
4 3 3
3 3
2 9
4 9 1
3 12
1 4
3 19
1 3
1 9
2 1
1 7
1 6
4 3 3
1 10
1 1
1 5
2 0
1 2
2 2
1 7
~~~

### Sample Output 5

~~~
2 17
2 17
9 8
0 17
1 17
3 3
10 10
2 17
2 17
0 17
~~~

This sample input satisfies the constraints of Subtasks 1 and 5.
