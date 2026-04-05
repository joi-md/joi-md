Score: $100$ points

### Problem Statement

There are $N$ towns in the country of IOI where JOI-kun lives, numbered from $1$ to $N$.
Also, there are $N-1$ roads in the country of IOI, numbered from $1$ to $N-1$.
Road $j$ ($1 \leq j \leq N-1$) connects town $U_j$ and town $V_j$ in both directions.
It is possible to travel from any town to any other town by using some number of roads.

A stamp rally will now be held in the country of IOI.
One stamp station will be installed in each town.
The stamp station in town $i$ ($1 \leq i \leq N$) will be installed at time $T_i$.

JOI-kun decides to participate in the stamp rally.
At time $0$, JOI-kun starts from one of the towns.
Also, JOI-kun has stamina $D$ at time $0$.

When JOI-kun is in town $i$ at time $t$, he takes the following actions.

<ol>
<li> First, if a stamp station has already been installed in the current town, he presses the stamp.
That is, he presses the stamp if $T_i \leq t$.
<li> Next, he chooses either to finish the stamp rally or to move to another town.
However, he can choose to move to another town only if there exists an adjacent town connected to town $i$ by a road that he has not visited yet, and his current stamina is at least $1$.
<li> If JOI-kun chooses to move to another town, he chooses an unvisited town $j$ among the towns connected to town $i$ by a road, and moves there.
His stamina decreases by $1$, and he arrives at town $j$ at time $t+1$.
<li> If JOI-kun chooses to finish the stamp rally, the rally is successful if he has pressed a stamp at least once up to that point, and he can receive a present there.
Otherwise, the rally is unsuccessful.
</ol>

Assume that all times other than travel time between towns are negligible.
Note that JOI-kun cannot stay in the same town.

You are an event organizer.
If JOI-kun succeeds in the stamp rally, you need to prepare presents in the corresponding towns. However, the number of presents is limited, so you want to prepare presents in as few towns as possible.
Unfortunately, you do not know from which town JOI-kun will start.
Therefore, for each $s$ ($1 \leq s \leq N$), you want to find the number of towns in which presents must be prepared when JOI-kun starts from town $s$.
In other words, you need to count the number of $g$ ($1 \leq g \leq N$) such that it is possible for the stamp rally to be successful when JOI-kun finishes at town $g$.

Given the information about the towns and roads in the country of IOI, JOI-kun's stamina, and the installation times of the stamp stations, write a program that computes, for each town,
the number of towns in which presents must be prepared when JOI-kun starts from that town.

---

### Input

Read the following data from the standard input.

~~~
$N$ $D$
$T_1$ $T_2$ $\cdots$ $T_N$
$U_1$ $V_1$
$U_2$ $V_2$
$\vdots$
$U_{N-1}$ $V_{N-1}$
~~~

### Output

Write $N$ lines to the standard output.
The $s$-th line ($1\leq s \leq N$) should contain the number of towns in which presents must be prepared when JOI-kun starts from town $s$.

---

### Constraints

<ul>
<li> $2 \leq N \leq 400\,000$.
<li> $0 \leq D \leq N-1$.
<li> $0 \leq T_i \leq N$ ($1 \leq i \leq N$).
<li> $1 \leq U_j < V_j \leq N$ ($1 \leq j \leq N-1$).
<li> It is possible to travel from any town to any other town by using some number of roads.
<li> Given values are all integers.
</ul>

### Subtasks

<ol>
<li> ($3$ points) $D\leq 1$.
<li> ($7$ points) $N\leq 3\,000$, $(U_j,V_j)=(j,j+1)$ ($1\leq j \leq N-1$).
<li> ($10$ points) $N\leq 3\,000$.
<li> ($11$ points) $(U_j,V_j)=(j,j+1)$ ($1\leq j \leq N-1$).
<li> ($41$ points) $D=N-1$, $N \leq 150\,000$.
<li> ($28$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
5 2
2 2 0 1 3
1 2
2 3
2 4
4 5
~~~

### Sample Output 1

~~~
2
3
4
2
2
~~~

We show one example of JOI-kun's actions when $s=1$.
<ul>
<li> At time $0$, JOI-kun is in town $1$ and takes the following actions.
<ul>
<li> The stamp station in town $1$ has not been installed yet, so JOI-kun does not press a stamp.
<li> JOI-kun's current stamina is $2$. He moves to town $2$, which is one of the unvisited towns connected to town $1$ by a road.
<li> JOI-kun's stamina decreases by $1$, and he arrives at town $2$ at time $1$.
</ul>
<li> At time $1$, JOI-kun is in town $2$ and takes the following actions.
<ul>
<li> The stamp station in town $2$ has not been installed yet, so JOI-kun does not press a stamp.
<li> JOI-kun's current stamina is $1$. He moves to town $3$, which is one of the unvisited towns connected to town $2$ by a road.
<li> JOI-kun's stamina decreases by $1$, and he arrives at town $3$ at time $2$.
</ul>
<li> At time $2$, JOI-kun is in town $3$ and takes the following actions.
<ul>
<li> The stamp station in town $3$ has already been installed, so JOI-kun presses a stamp.
<li> JOI-kun chooses to finish the stamp rally here. Since he has pressed a stamp at least once, the stamp rally is successful. He receives a present there.
</ul>
</ul>
Therefore, when JOI-kun starts from town $1$ and finishes the stamp rally at town $3$, the stamp rally can be successful, so it is necessary to prepare a present in town $3$.
When JOI-kun starts from town $1$, presents must be prepared only in towns $3$ and $4$, so the first line of the output should be $2$.

Also, when JOI-kun starts from town $2$, presents must be prepared only in towns $3$, $4$, and $5$, so the second line of the output should be $3$.

This input example satisfies the constraints of subtasks $3,6$.

---

### Sample Input 2

~~~
5 1
0 1 2 1 2
1 2
2 3
3 4
4 5
~~~

### Sample Output 2

~~~
2
1
2
0
1
~~~

This input example satisfies the constraints of subtasks $1,2,3,4,6$.

---

### Sample Input 3

~~~
7 6
2 3 0 4 1 3 4
1 2
2 3
2 4
1 5
1 6
6 7
~~~

### Sample Output 3

~~~
2
2
7
5
1
2
5
~~~

This input example satisfies the constraints of subtasks $3,5,6$.


