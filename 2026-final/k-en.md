Score: $100$ points

### Problem Statement

JOI Kingdom consists of $N$ cities and $N-1$ highways.

The cities are numbered $1$ through $N$, and the highways are numbered $1$ through $N-1$.

It is possible to travel from any city to any other city by traversing a number of highways.

Each city has a <strong>popularity</strong>, represented by a non-negative integer.

The popularity of city $i$ ($1 \leq i \leq N$) is initially $C_i$.

Each highway has a <strong>travel time</strong>, represented by a positive integer.

Highway $j$ ($1 \leq j \leq N-1$) connects city $A_j$ and city $B_j$, and its travel time is initially $D_j$.

Each city in JOI Kingdom has a cauldron.

JOI Kingdom keeps its tradition that, in a festival, cities ignite their cauldrons, and these ignitions signal the departure of parades from those cities.

City $u$ is <strong>adjacent</strong> to city $v$ if these two cities are directly connected by a highway.

At the exact moment when a city ignites its cauldron, one parade will depart from this city for each of its adjacent cities, spending time equal to the travel time of the corresponding highway.

To be precise, for two adjacent cities $v$ and $u$, the parade from city $v$ reaches city $u$ at time $t+d$, where $t$ is the time when the cauldron of city $v$ is ignited, and $d$ is the travel time of the highway connecting cities $v$ and $u$.

Some cities ignite their cauldron the moment the festival starts, while other cities only do so after the festival heats up enough.

Let the time $0$ be the start of the festival.

For the city $i$ whose popularity is $c$, the time when city $i$ ignites its cauldron is determined as follows:

<ul>
<li> If $c = 0$, city $i$ ignites its cauldron at time $0$.

<li> If $c \geq 1$, city $i$ ignites its cauldron at the time when the number of parades that have arrived from adjacent cities becomes at least $c$.
If this never happens, city $i$ never ignites its cauldron.

</ul>

Mr. K will stay at JOI Kingdom.

During his stay, JOI Kingdom will have $Q$ events related to its festival.

These events are numbered $1$ through $Q$ from earliest to latest.

Event $k$ ($1 \leq k \leq Q$) is one of the following $3$ types:

<ul>
<li> Type $1$: The popularity of city $V_k$ changes to $X_k$.

<li> Type $2$: The travel time of highway $E_k$ changes to $X_k$.

<li> Type $3$: Mr. K visits city $V_k$. Assuming a festival starts at this moment, you must determine whether {city \nolinebreak $V_k$} would ignite its cauldron, and if so, calculate the time that the cauldron is ignited.

</ul>

Write a program which, given the structure of JOI Kingdom, popularity of each city, travel time of each highway, and details of the events, for each Type $3$ event, determines when the city Mr. K visits ignites its cauldron.

---

### Input

Read the following data from the standard input.

~~~
$N$
$A_1$ $B_1$ $D_1$
$\vdots$
$A_{N-1}$ $B_{N-1}$ $D_{N-1}$
$C_1$
$\vdots$
$C_N$
$Q$
(Query $1$)
$\vdots$
(Query $Q$)
~~~

(Query $k$) represents the details of event $k$ ($1 \leq k \leq Q$).

In (Query $k$), space-separated integers are written.

Let $P_k$ be the first integer.
$P_k$ is $1$, $2$, or $3$, which means the type of event $k$.
Then (Query $k$) means as follows:

<ul>
<li> If $P_k = 1$, there are two more integers $V_k, X_k$ written in this order.

This means that the popularity of city $V_k$ changes to $X_k$.

<li> If $P_k = 2$, there are two more integers $E_k, X_k$ written in this order.

This means that the travel time of highway $E_k$ changes to $X_k$.

<li> If $P_k = 3$, there is one more integer $V_k$ written.

This means Mr. K visits city $V_k$ and, assuming a festival starts at this moment, you must determine the time that the cauldron at city $V_k$ is ignited.

</ul>

### Output

To standard output, output the following in one line for each event $k$ ($1 \leq k \leq Q$) with $P_k = 3$, in the increasing order of $k$.

<ul>
<li> If the city Mr. K visits would ignite its cauldron, output the time that the cauldron is ignited.
<li> Otherwise, output <code>-1</code>.
</ul>

---

### Constraints

<ul>
<li> $2 \leq N \leq 150\,000$.
<li> $0 \leq C_i \leq N$ ($1 \leq i \leq N$).
<li> $1 \leq A_j < B_j \leq N$ ($1 \leq j \leq N-1$).
<li> $1 \leq D_j \leq 1\,000\,000$ ($1 \leq j \leq N-1$).
<li> It is possible to travel from any city to any other city by traversing a number of highways.

<li> $1 \leq Q \leq 150\,000$.
<li> If $P_k = 1$, we have $1 \leq V_k \leq N$, \, $0 \leq X_k \leq N$ ($1 \leq k \leq Q$).
<li> If $P_k = 2$, we have $1 \leq E_k \leq N-1$, \, $1 \leq X_k \leq 1\,000\,000$ ($1 \leq k \leq Q$).
<li> If $P_k = 3$, we have $1 \leq V_k \leq N$ ($1 \leq k \leq Q$).

<li> Given values are all integers.

</ul>

### Subtasks

<ol>
<li> ($6$ points) $N \leq 2\,000$, \, $Q \leq 2\,000$.
<li> ($7$ points) $A_j = 1$, \, $B_j = j+1$ ($1 \leq j \leq N-1$). \,
If $P_k = 3$, we have $V_k = 1$ ($1 \leq k \leq Q$).
<li> ($14$ points) $N-1$ is divisible by $3$.
$A_j = ((j - 1) \bmod \frac{N-1}{3}) + 1$, \,
$B_j = j+1$ ($1 \leq j \leq N-1$). \,
If $P_k = 3$, we have $V_k = 1$ ($1 \leq k \leq Q$).
<li> ($25$ points) $P_k \neq 1$. \, If $P_k = 3$, we have $V_k = 1$ ($1 \leq k \leq Q$).
<li> ($12$ points) If $P_k = 3$, we have $V_k = 1$ ($1 \leq k \leq Q$).
<li> ($22$ points) $P_k \neq 1$ ($1 \leq k \leq Q$).
<li> ($14$ points) No additional constraints.
</ol>

---

### Sample Input 1

~~~
7
1 2 30
2 3 30
1 4 70
2 5 20
1 6 10
2 7 50
2
3
0
0
0
1
0
8
3 1
1 6 0
3 1
2 6 10
3 1
1 2 7
1 6 7
3 1
~~~

### Sample Output 1

~~~
80
70
60
-1
~~~

In the festival considered in event $1$, the times when the cities ignite their cauldrons are as follows:

<ul>
<li> At time $0$, cities $3,4,5,7$ ignite their cauldrons.

<li> At time $50$, city $2$ ignites its cauldron. By then, the parades from cities $3,5,7$ have reached city $2$.

<li> At time $80$, city $1$ ignites its cauldron. By then, the parades from cities $2,4$ have reached city $1$.

<li> At time $90$, city $6$ ignites its cauldron. By then, the parade from city $1$ has reached city $6$.

</ul>

Since city $1$ would ignite its cauldron at time $80$, output $80$.

In the festival considered in event $3$, the times when the cities ignite their cauldrons are as follows:

<ul>
<li> At time $0$, cities $3,4,5,6,7$ ignite their cauldrons.

<li> At time $50$, city $2$ ignites its cauldron. By then, the parades from cities $3,5,7$ have reached city $2$.

<li> At time $70$, city $1$ ignites its cauldron. By then, the parades from cities $4,6$ have reached city $1$.

</ul>

Since city $1$ would ignite its cauldron at time $70$, output $70$.

In the festival considered in event $5$, the times when the cities ignite their cauldrons are as follows:

<ul>
<li> At time $0$, cities $3,4,5,6,7$ ignite their cauldrons.

<li> At time $30$, city $2$ ignites its cauldron. By then, the parades from cities $3,5,7$ have reached city $2$.

<li> At time $60$, city $1$ ignites its cauldron. By then, the parades from cities $2,6$ have reached city $1$.

</ul>

Since city $1$ would ignite its cauldron at time $60$, output $60$.

In the festival considered in event $8$, the times when the cities ignite their cauldrons are as follows:

<ul>
<li> At time $0$, cities $3,4,5,7$ ignite their cauldrons.

</ul>

Cities $1,2,6$ would never ignite their cauldrons. 
Since city $1$ would never ignite its cauldron, output <code>-1</code>.

This sample input satisfies the constraints of Subtasks $1,3,5,7$.

---

### Sample Input 2

~~~
6
1 2 10
1 3 30
1 4 50
1 5 30
1 6 10
2
0
0
0
0
1
10
3 1
2 3 20
3 1
1 6 0
3 1
1 1 4
3 1
1 2 6
1 3 6
3 1
~~~

### Sample Output 2

~~~
30
20
10
30
-1
~~~

This sample input satisfies the constraints of Subtasks $1,2,5,7$.


