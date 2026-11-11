Score: $100$ points

### Problem Statement

The IOI Kingdom consists of $N$ cities lined up from west to east, with cities numbered from $1$ to $N$ in order from west.

In the IOI Kingdom, they use Byou as the unit of time. A day in the IOI Kingdom is divided into $T$ units of time. The moment $x$ Byous ($0 \le x < T$) after the beginning of a day is called time $x$. Therefore, when $1$ Byou passes from time $T - 1$ of a certain day, it becomes time $0$ of the next day.

JOI Group is one of the secret sects in the IOI Kingdom. Since it is a secret sect, members must navigate around the country's checkpoints. Consequently, JOI Group members are restricted to using only flights operated by JOY Airlines for intercity travel.

JOY Airlines operate $M_i$ flights departing from city $i$ ($1 \le i \le N - 1$). The $j$-th flight ($1 \le j \le M_i$) departs from city $i$ at time $A_{i,j}$ every day and arrives at city $i + 1$ at time $B_{i,j}$ on the same day. Here, $A_{i,j} < B_{i,j}$ holds. These flights allow convenient transfers, and it is also possible to depart from a city immediately upon arrival or stay overnight at the company's airports.

The JOI Group has $Q$ members, numbered from $1$ to $Q$. Member $k$ ($1 \le k \le Q$) places their operational base in city $L_k$ and their living base in city $R_k$. Therefore, they want to know the minimum time required to travel from city $L_k$ to city $R_k$ by selecting the departure time from city $L_k$ and flights to use appropriately.

Given information about the flights operated by JOY Airlines and the members of the JOI Group, create a program to find the minimum time required for each member $k$ to travel from city $L_k$ to city $R_k$.

---

### Input

Read the following data from the standard input.

~~~
$N$ $T$
$M_1$
$A_{1,1}$ $B_{1,1}$
$A_{1,2}$ $B_{1,2}$
$\vdots$
$A_{1,M_1}$ $B_{1,M_1}$
$M_2$
$A_{2,1}$ $B_{2,1}$
$A_{2,2}$ $B_{2,2}$
$\vdots$
$A_{2,M_2}$ $B_{2,M_2}$
$\vdots$
$M_{N - 1}$
$A_{N - 1,1}$ $B_{N - 1,1}$
$A_{N - 1,2}$ $B_{N - 1,2}$
$\vdots$
$A_{N - 1,M_{N - 1}}$ $B_{N - 1,M_{N - 1}}$
$Q$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_Q$ $R_Q$
~~~

### Output

Output $Q$ lines to the standard output. On the $k$-th line ($1 \le k \le Q$), output the minimum time required for the member $k$ to travel from city $L_k$ to city $R_k$.

---

### Constraints

- $2 \le N \le 100\,000$.
- $2 \le T \le 10^9$.
- $M_i \ge 1$ ($1 \le i \le N - 1$).
- $M_1 + M_2 + \cdots + M_{N - 1} \le 100\,000$.
- $0 \le A_{i,j} < B_{i,j} < T$ ($1 \le i \le N - 1$, $1 \le j \le M_i$).
- $1 \le Q \le 300\,000$.
- $1 \le L_k < R_k \le N$ ($1 \le k \le Q$).
- Given values are all integers.

### Subtasks

1. ($6$ points) $N \le 2\,000$, $M_i = 1$ ($1 \le i \le N - 1$).
2. ($8$ points) $N \le 2\,000$, $M_i \le 5$ ($1 \le i \le N - 1$).
3. ($17$ points) $M_i = 1$ ($1 \le i \le N - 1$).
4. ($23$ points) $M_i \le 5$ ($1 \le i \le N - 1$).
5. ($36$ points) $N \le 90\,000$, $Q \le 90\,000$, $M_1 + M_2 + \cdots + M_{N - 1} \le 90\,000$.
6. ($10$ points) No additional constraints.

---

### Sample Input 1

~~~
4 10000
1
100 300
2
200 400
300 600
1
500 600
3
1 3
2 4
1 4
~~~

### Sample Output 1

~~~
500
400
10500
~~~

As a demonstration, let us designate the day on which member $k$ departs from city $L_k$ as day $1$.

Member $1$ can travel from city $1$ to city $3$ in $500$ Byou by following actions:

1. Depart from city $1$ at time $100$ on day $1$ and arrive at city $2$ at time $300$ on day $1$.
2. Depart from city $2$ at time $300$ on day $1$ and arrive at city $3$ at time $600$ on day $1$.

Since there is no faster way to travel, output $500$ on line $1$.

Member $2$ can travel from city $2$ to city $4$ in $400$ Byou by following actions:

1. Depart from city $2$ at time $200$ on day $1$ and arrive at city $3$ at time $400$ on day $1$.
2. Depart from city $3$ at time $500$ on day $1$ and arrive at city $4$ at time $600$ on day $1$.

Since there is no faster way to travel, output $400$ on line $2$.

Member $3$ can travel from city $1$ to city $4$ in $10500$ Byou by following actions:

1. Depart from city $1$ at time $100$ on day $1$ and arrive at city $2$ at time $300$ on day $1$.
2. Depart from city $2$ at time $300$ on day $1$ and arrive at city $3$ at time $600$ on day $1$.
3. Depart from city $3$ at time $500$ on day $2$ and arrive at city $4$ at time $600$ on day $2$.

Since there is no faster way to travel, output $10500$ on line $3$.

This sample input satisfies the constraints of subtasks $2, 4, 5, 6$.

---

### Sample Input 2

~~~
6 10000
1
100 300
1
400 700
1
500 600
1
300 900
1
200 800
1
1 6
~~~

### Sample Output 2

~~~
30700
~~~

This sample input satisfies the constraints of all subtasks.
