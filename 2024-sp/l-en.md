Score: $100$ points

### Problem Statement

A table tennis competition was held in JOI Kingdom. $N$ beavers numbered from $1$ to $N$ participated in this competition, and a round-robin tournament was conducted.

You were told the following information about the result of this competition from Bitaro.

<ul>
<li>There were no draw matches.</li>
<li>There are exactly $M$ ways to choose $3$ beavers which are trilemma. Note that $3$ beavers $i, j, k$ ($1 \leq i < j < k \leq N$) are trilemma if and only if exactly one of the following $2$ conditions is satisfied.
<ul>
<li>Beaver $i$ beat beaver $j$, beaver $j$ beat beaver $k$, and beaver $k$ beat beaver $i$.</li>
<li>Beaver $i$ beat beaver $k$, beaver $k$ beat beaver $j$, and beaver $j$ beat beaver $i$.</li>
</ul>
</li>
</ul>

You don't know whether the information from Bitaro is correct, so you decided to think whether there are any results of this competition which accord with the information from Bitaro.

Write a program which, given the information from Bitaro, judges whether there are any results of this competition which accord with the information, and if so, finds one such result of this competition.

---

### Input

A test case consists of $Q$ scenarios, numbered from $1$ to $Q$. The following values are specified for each scenario.

- The number of beavers $N$ which participated in the competition.
- The number of ways $M$ to choose $3$ beavers which are trilemma.

The format of the input data is as follows.

~~~
$Q$
(Input for Scenario $1$)
(Input for Scenario $2$)
$\vdots$
(Input for Scenario $Q$)
~~~

The format of the input data for each scenario is as follows.

~~~
$N$ $M$
~~~

### Output

Write to standard output the answer of Scenario $1, 2, \ldots, Q$ in order as follows.

In some scenario, if there are any results of this competition which accord with the information, output as follows.

~~~
Yes
$S_2$
$S_3$
$\vdots$
$S_N$
~~~

Here, $S_i$ ($2 \leq i \leq N$) is a string of which characters are `0` or `1` and length is $i - 1$. The $j$-th character of $S_i$ ($1 \leq j \leq i - 1$) being `0` means beaver $i$ was defeated by beaver $j$, and the $j$-th character of $S_i$ being `1` means beaver $i$ won against beaver $j$. If multiple results exist, you can output any of them.

In some scenario, if there are not any results of this competition which accord with the information, output `No`.

---

### Constraints

- $1 \leq Q$.
- $3 \leq N \leq 5\,000$.
- $0 \leq M \leq \dfrac{1}{6}N(N - 1)(N - 2)$.
- The sum of $N$ for the $Q$ scenarios is less than or equal to $5\,000$.
- Given values are all integers.

### Subtasks

1. ($5$ points) $M \leq N - 2$.
2. ($4$ points) The sum of $N$ for the $Q$ scenarios is less than or equal to $7$.
3. ($23$ points) The sum of $N$ for the $Q$ scenarios is less than or equal to $20$.
4. ($30$ points) The sum of $N$ for the $Q$ scenarios is less than or equal to $150$.
5. ($15$ points) The sum of $N$ for the $Q$ scenarios is less than or equal to $600$.
6. ($23$ points) No additional constraints.

---

### Sample Input 1

~~~
2
3 1
4 4
~~~

### Sample Output 1

~~~
Yes
0
10
No
~~~

There are $Q = 2$ scenarios.

In the results of scenario $1$ in this sample output, beaver $1$ won against beaver $2$, beaver $2$ won against beaver $3$, and beaver $3$ won against beaver $1$. Therefore, $3$ beavers $1, 2, 3$ are trilemma. There are no other ways to choose $3$ beavers, so there is exactly $1$ way to choose $3$ beavers which are trilemma.

There is another output corresponding to scenario $1$ as follows.

~~~
Yes
1
01
~~~

In scenario $2$, there are not any results of this competition which accord with the information. Therefore, output `No`.

This sample input satisfies the constraints of Subtasks $2, 3, 4, 5, 6$.

---

### Sample Input 2

~~~
1
5 3
~~~

### Sample Output 2

~~~
Yes
0
11
001
0101
~~~

In the results of scenario $1$ in this sample output, beaver $1$ won against beaver $4$, beaver $4$ won against beaver $3$, and beaver $3$ won against beaver $1$. Therefore, $3$ beavers $1, 3, 4$ are trilemma. There are two other ways to choose $3$ beavers which are trilemma: choose beavers $2, 3, 4$ and choose beavers $3, 4, 5$. Therefore, there are exactly $3$ ways to choose $3$ beavers which are trilemma.

This sample input satisfies the constraints of all the subtasks.
