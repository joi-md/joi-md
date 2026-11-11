Score: $100$ points

### Problem Statement

JOI-kun is breeding $N$ fish in a large tank, and each fish is numbered from $1$ to $N$.

JOI-kun has two types of fish food, A and B, both in sufficient quantities. When one piece of food is added to the aquarium, exactly one fish eats it (any fish could potentially eat it), and depending on the type of food and which fish ate it, the intelligence of the fish changes as follows:

- When fish $k$ ($1 \le k \le N$) eats one piece of type A food, the intelligence of fish $k$ increases exactly by $D$.
- When fish $k$ ($1 \le k \le N$) eats one piece of type B food, the intelligence of all fish numbered $k$ and above increases exactly by $1$ each.

Currently, the intelligence of all fish is $0$. JOI-kun wants to make the intelligence of fish $i$ ($1 \le i \le N$) equal to its ideal intelligence $C_i$, but it may not always be possible.

Therefore, he considered $Q$ questions. The $j$-th question ($1 \le j \le Q$) is as follows:

- Starting from the state where all fish have an intelligence of $0$, by repeating the action of putting food into the aquarium zero or more times, is it possible to reach the state where all fish $L_j, L_j + 1, \ldots, R_j$ have their exact ideal intelligence values? Furthermore, if it is possible, what is the minimum number of pieces of type A food that needs to be put into the tank?

Write a program that, given information about JOI-kun's fish and information about the questions, answers his questions.

---

### Input

Read the following data from the standard input.

~~~
$N$ $D$
$C_1$ $C_2$ $\cdots$ $C_N$
$Q$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_Q$ $R_Q$
~~~

### Output

Write $Q$ lines to the standard output. In the $j$-th line ($1 \le j \le Q$), if it is possible to reach the state where all fish $L_j, L_j + 1, \ldots, R_j$ have their exact ideal intelligence values, output the minimum number of pieces of type A food that needs to be put into the tank. Otherwise, output `-1`.

### Constraints

- $1 \le N \le 300\,000$.
- $1 \le Q \le 300\,000$.
- $1 \le D \le 10^{12}$.
- $0 \le C_i \le 10^{12}$ ($1 \le i \le N$).
- $1 \le L_j \le R_j \le N$ ($1 \le j \le Q$).
- Given values are all integers.

### Subtasks

1. ($9$ points) $N \le 3\,000$, $Q \le 3\,000$.
2. ($7$ points) $C_i \le 1$ ($1 \le i \le N$).
3. ($28$ points) $D = 1$.
4. ($20$ points) $C_i \ge C_{i+1}$ ($1 \le i \le N - 1$).
5. ($36$ points) No additional constraints.

---

### Sample Input 1

~~~
4 2
3 1 2 1
1
1 3
~~~

### Sample Output 1

~~~
1
~~~

For example, in the following case, all fish $1, 2, 3$ eventually have their exact ideal intelligence values, and the number of pieces of type A food put into the tank is $1$.

- At first, the intelligence of fish $1, 2, 3, 4$ is $0, 0, 0, 0$ respectively.
- Next, JOI-kun puts one piece of type B food into the tank, which fish $3$ eats. As a result, the intelligence of fish $1, 2, 3, 4$ becomes $0, 0, 1, 1$ respectively.
- Next, JOI-kun puts one piece of type A food into the tank, which fish $1$ eats. As a result, the intelligence of fish $1, 2, 3, 4$ becomes $2, 0, 1, 1$ respectively.
- Finally, JOI-kun puts one piece of type B food into the tank, which fish $1$ eats. As a result, the intelligence of fish $1, 2, 3, 4$ becomes $3, 1, 2, 2$ respectively.

Since it is impossible to reach the state where all fish $1, 2, 3$ have the exact ideal intelligence values without putting any piece of type A food, output $1$.

This sample input satisfies the constraints of Subtasks $1, 5$.

---

### Sample Input 2

~~~
4 2
0 1 0 1
3
1 2
2 3
1 1
~~~

### Sample Output 2

~~~
0
-1
0
~~~

This sample input satisfies the constraints of Subtasks $1, 2, 5$.

---

### Sample Input 3

~~~
5 1
3 1 4 1 5
3
1 5
2 4
3 5
~~~

### Sample Output 3

~~~
5
3
3
~~~

This sample input satisfies the constraints of Subtasks $1, 3, 5$.

---

### Sample Input 4

~~~
6 3
16 14 13 8 6 5
4
1 4
2 5
3 3
1 6
~~~

### Sample Output 4

~~~
9
8
0
-1
~~~

This sample input satisfies the constraints of Subtasks $1, 4, 5$.
