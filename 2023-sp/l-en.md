Score: $100$ points

### Problem Statement

There is a very long road in JOI City, which can be considered as the real number line. A position on the road is represented by a real number coordinate. In JOI City, there are $N$ sightseeing spots along the road, numbered from $1$ to $N$ in ascending order of the coordinates. The coordinate of the $i$-th sightseeing spot ($1 \le i \le N$) is $X_i$.

Bitaro will visit all the sightseeing spots in JOI City. Since “greedy” is the slogan of his life, he will repeat the following procedures until he visits all the sightseeing spots.

- Let $x$ be Bitaro's current coordinate. Among the sightseeing spots he has not yet visited, take the sightseeing spot $i$ where the distance $|x - X_i|$ from Bitaro's current position takes a minimum value. Then Bitaro moves to the position of the sightseeing spot $i$, and visits it. If there are more than one such sightseeing spots, he moves to the sightseeing spot whose coordinate is smaller than the others. Here, $|t|$ is the absolute value of $t$.

However, thanks to long years of experience, Bitaro knows that if he moves by repeating the above procedures, the total traveling distance may be longer than he expected. Since the total traveling distance varies according to the starting coordinate, he wants to know the total traveling distance until he visits all the sightseeing spots if he starts from each of $Q$ candidates of starting coordinates $S_1, S_2, \ldots, S_Q$.

To help Bitaro, write a program which calculates the total traveling distance if he starts from each of the candidates of starting coordinates, given information of JOI City and candidates of starting coordinates.

---

### Input

Read the following data from the standard input.

~~~
$N$
$X_1$ $X_2$ $\cdots$ $X_N$
$Q$
$S_1$
$S_2$
$\vdots$
$S_Q$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of output should contain the total traveling distance if Bitaro starts from the coordinate $S_j$.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le Q \le 200\,000$.
- $0 \le X_i \le 10^9$ ($1 \le i \le N$).
- $X_i < X_{i+1}$ ($1 \le i \le N - 1$).
- $0 \le S_j \le 10^9$ ($1 \le j \le Q$).
- Given values are all integers.

### Subtasks

1. ($5$ points) $Q = 1$, $N \le 2\,000$.
2. ($10$ points) $Q = 1$.
3. ($30$ points) $X_{i+1} - X_i \le 100$ ($1 \le i \le N - 1$).
4. ($55$ points) No additional constraints.

---

### Sample Input 1

~~~
5
0 5 6 7 9
1
7
~~~

### Sample Output 1

~~~
15
~~~

If Bitaro starts from the coordinate $7$, he visits all the sightseeing spots as follows.

1. He has not yet visited the sightseeing spots $1, 2, 3, 4, 5$, and the distances from Bitaro's current position are $7, 2, 1, 0, 2$, respectively. Since the sightseeing spot $4$ is the nearest sightseeing spot from Bitaro, he stays at the coordinate $7$ and visits the sightseeing spot $4$.
2. He has not yet visited the sightseeing spots $1, 2, 3, 5$, and the distances from Bitaro's current position are $7, 2, 1, 2$, respectively. Since the sightseeing spot $3$ is the nearest sightseeing spot from Bitaro, he moves from the coordinate $7$ to the coordinate $6$ and visits the sightseeing spot $3$.
3. He has not yet visited the sightseeing spots $1, 2, 5$, and the distances from Bitaro's current position are $6, 1, 3$, respectively. Since the sightseeing spot $2$ is the nearest sightseeing spot from Bitaro, he moves from the coordinate $6$ to the coordinate $5$ and visits the sightseeing spot $2$.
4. He has not yet visited the sightseeing spots $1, 5$, and the distances from Bitaro's current position are $5, 4$, respectively. Since the sightseeing spot $5$ is the nearest sightseeing spot from Bitaro, he moves from the coordinate $5$ to the coordinate $9$ and visits the sightseeing spot $5$.
5. He has not yet visited the sightseeing spot $1$. Since the sightseeing spot $1$ is the nearest sightseeing spot from Bitaro, he moves from the coordinate $9$ to the coordinate $0$ and visits the sightseeing spot $1$.

Since Bitaro's total traveling distance is $15$, output $15$.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 2

~~~
10
1 2 3 4 5 6 7 8 9 10
10
1
2
3
4
5
6
7
8
9
10
~~~

### Sample Output 2

~~~
9
10
11
12
13
14
15
16
17
9
~~~

This sample input satisfies the constraints of Subtasks $3, 4$.
