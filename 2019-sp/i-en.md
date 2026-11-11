Score: $100$ points

### Problem Statement

Beaverland consists of $N$ cities, numbered from $1$ to $N$. There are $N - 1$ roads connecting cities. The $i$-th ($1 \le i \le N - 1$) road connects the city $i$ and the city $i+1$ bidirectionally. In Beaverland, they use Byou as the unit of time. Each day in Beaverland is 1 000 000 000 Byous long. The moment $x$ Byous ($0 \le x < 1\,000\,000\,000$) after the beginning of a day is called time $x$. It takes 1 Byou to pass through any of the roads, and the $i$-th road can be passed through only between time $L_{i}$ and time $R_{i}$ every day. Specifically, to pass through the $i$-th road, we must leave the city $i$ or the city $i + 1$ at time $x$ satisfying $L_{i} \le x \le R_{i} - 1$, and must arrive at the other city at time $x + 1$.

Bitaro used to be an ordinary Beaver living in Beaverland. However, as he tries to cope with his lateness, he has finally acquired the skill of leaping through time. By using this skill once, he can go back 1 Byou ago. He cannot go back to the day before: if he uses the skill between time 0 and time 1, he will go back to time 0 of the day. He can use this skill only when he is at a city. The position of Bitaro does not change on using the skill.

Bitaro gets tired when he uses the skill. To find ways to travel with fewer number of usage of the skill, he decided to do a thought experiment consisting of $Q$ steps. In the $j$-th ($1 \le j \le Q$) step in the thought experiment, he does one of the followings:

- Change the duration in which the $P_{j}$-th road can be traveled. After the modification, it can be passed through only between time $S_{j}$ and time $E_{j}$.
- Suppose he is at the city $A_{j}$ at time $B_{j}$. Then, compute the minimum number of usage of the skill to be at the city $C_{j}$ at time $D_{j}$ on the day.

He wonders the result of the thought experiment.

Write a program which, given the number of cities in Beaverland, the information of roads, and the details of the thought experiment, calculates the result of the thought experiment.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $Q$
$L_{1}$ $R_{1}$
$\vdots$
$L_{N - 1}$ $R_{N - 1}$
(Query 1)
$\vdots$
(Query $Q$)
~~~

Here, each (Query j) consists of 4 or 5 integers separated by a space. Let $T_{j}$ be the first integer in it. Then,

- If $T_{j} = 1$, (Query $j$) consists of 4 integers $T_{j}, P_{j}, S_{j}$ and $E_{j}$. This means that, in the $j$-th step of the thought experiment, the duration in which the $P_{j}$-th road can be passed is changed to the interval between time $S_{j}$ and time $E_{j}$.
- If $T_{j} = 2$, (Query $j$) consists of 5 integers $T_{j}, A_{j}, B_{j}, C_{j}$ and $D_{j}$. This means that, in the $j$-th step of the thought experiment, your program should compute the minimum number of usage of the skill to be at the city $C_{j}$ at time $D_{j}$ on the day, on the assumption that Bitaro is at the city $A_{j}$ at time $B_{j}$.

### Output

For each step with $T_{j} = 2$, write a line containing the minimum number of usage of the skill to the standard output, in order.

### Constraints

- $1 \le N \le 300\,000$．
- $1 \le Q \le 300\,000$．
- $0 \le L_{i} < R_{i} \le 999\,999\,999$ ($1 \le i \le N - 1$)．
- $1 \le T_{j} \le 2$ ($1 \le j \le Q$)．
- $1 \le P_{j} \le N - 1$ ($1 \le j \le Q$，$T_{j} = 1$)．
- $0 \le S_{j} < E_{j} \le 999\,999\,999$ ($1 \le j \le Q$，$T_{j} = 1$)．
- $1 \le A_{j} \le N$ ($1 \le j \le Q$，$T_{j} = 2$)．
- $0 \le B_{j} \le 999\,999\,999$ ($1 \le j \le Q$，$T_{j} = 2$)．
- $1 \le C_{j} \le N$ ($1 \le j \le Q$，$T_{j} = 2$)．
- $0 \le D_{j} \le 999\,999\,999$ ($1 \le j \le Q$，$T_{j} = 2$)．

### Subtasks

1. ($4$ points) $N \le 1000$, $Q \le 1000$．
2. ($30$ points) $T_{j} = 2$ ($1 \le j \le Q$).
3. ($66$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 3
0 5
0 5
2 1 3 3 3
1 2 0 1
2 1 3 3 3
~~~

### Sample Output 1

~~~
2
4
~~~

In the 1st step of the thought experiment, Bitaro moves from the city 1 to the city 2 in 1 Byou, then moves from the city 2 to the city 3 in 1 Byou to be at the city 3 at time 5. Therefore, by using the skill twice, he can be at the city 3 at time 3.

In the 2nd step of the thought experiment, the duration in which the 2nd road can be passed is changed to the interval between time 0 and time 1.

In the 3rd step of the thought experiment, Bitaro moves from the city 1 to the city 2 in 1 Byou to be at the city 2 at time 4. Then, he uses the skill four times, moves to the city 3 in 1 Byou and wait 2 Byous to be at the city 3 at time 3.

### Sample Input 2

~~~
5 5
3 5
4 8
2 6
5 10
2 5 3 1 10
2 2 6 5 6
1 3 4 6
2 3 3 4 3
2 4 5 1 5
~~~

### Sample Output 2

~~~
4
3
2
3
~~~

### Sample Input 3

~~~
7 7
112103440 659752416
86280800 902409187
104535475 965602300
198700180 945132880
137957976 501365807
257419446 565237610
2 4 646977260 7 915994878
2 1 221570340 6 606208433
2 7 948545948 4 604273995
2 7 247791098 5 944822313
2 7 250362511 2 50167280
2 3 364109400 4 555412865
2 7 33882587 7 186961394
~~~

### Sample Output 3

~~~
145611455
0
447180143
0
207252171
0
0
~~~

### Sample Input 4

~~~
7 7
535825574 705426142
964175291 996597835
481817391 649559926
4519006 410772613
74521477 274584126
256535565 899389890
1 6 511428966 602601933
1 1 69986642 201421232
2 3 636443425 4 625975977
1 6 235225515 405336399
2 3 866680458 3 701821857
1 6 180606048 900533151
1 6 612564160 720179605
~~~

### Sample Output 4

~~~
10467449
164858601
~~~
