Score: $100$ points

### Problem Statement

JOI Kingdom is represented by a $xy$-plane. There are $N$ houses in JOI Kingdom numbered from 1 to $N$. The coordinate of the house $i$ ($1 \le i \le N$) is $(X_{i}, Y_{i})$. Different houses have different coordinates. A citizen lives in each house. The citizen in the house $i$ is called the citizen $i$.

A long holiday season begins in JOI Kingdom. At time 0, every citizen leaves the house, and starts traveling. In the beginning, every citizen chooses one of ‘east’, ‘west’, ‘south’, ‘north’, which is the direction for traveling. The citizens will travel in the following way.

- If the citizen $i$ chooses ‘east’, the citizen moves along the $x$-axis toward the positive direction with speed 1. In other words, at time $t$ ($t \ge0$), the coordinates of the citizen $i$ becomes $(X_{i} + t, Y_{i})$.
- If the citizen $i$ chooses ‘west’, the citizen moves along the $x$-axis toward the negative direction with speed 1. In other words, at time $t$ ($t \ge0$), the coordinates of the citizen $i$ becomes $(X_{i} - t, Y_{i})$.
- If the citizen $i$ chooses ‘south’, the citizen moves along the $y$-axis toward the negative direction with speed 1. In other words, at time $t$ ($t \ge0$), the coordinates of the citizen $i$ becomes $(X_{i}, Y_{i} - t)$.
- If the citizen $i$ chooses ‘north’, the citizen moves along the $y$-axis toward the positive direction with speed 1. In other words, at time $t$ ($t \ge0$), the coordinates of the citizen $i$ becomes $(X_{i}, Y_{i} + t)$.

Unfortunately, at time $0$, the citizen $1$ is infected with IOI fever, which is a newly discovered infectious disease. At time $0$, there are no infected people other than the citizen $1$. The IOI fever is transmitted among citizens in the following way.

> Assume that, at a certain time, the citizen $a$ ($1 \le a \le N$) and the citizen $b$ ($1 \le b \le N$) have the same coordinates, the citizen $a$ is infected with IOI fever, and the citizen $b$ is not infected with IOI fever. Then, the citizen $b$ becomes infected with IOI fever.

The IOI fever is not transmitted by other methods. Moreover, since IOI fever is an incurable disease, infected citizen will not be recovered.

As a minister of JOI Kingdom, you need to estimate how many citizens will be infected with IOI fever if the citizens make the worst possible choice.

Write a program which, given the number of houses and the coordinate of each house, calculates the largest possible number of infected citizens at time $10^{100}$.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$
$X_{1}$ $Y_{1}$
$\vdots$
$X_{N}$ $Y_{N}$
~~~

### Output

Write one line to the standard output. Output the largest possible number of infected citizens at time $10^{100}$.

### Constraints

- $1 \le N \le 100\,000$.
- $0 \le X_{i} \le 500\,000\,000$ ($1 \le i \le N$).
- $0 \le Y_{i} \le 500\,000\,000$ ($1 \le i \le N$).
- $(X_{i}, Y_{i}) \ne (X_{j}, Y_{j})$ ($1 \le i < j \le N$).

### Subtasks

1. ($5$ points) $N \le 7$, $X_{i} \ne X_{j}$ ($1 \le i < j \le N$),$Y_{i} \ne Y_{j}$ ($1 \le i < j \le N$).
2. ($8$ points) $N \le 15$, $X_{i} \ne X_{j}$ ($1 \le i < j \le N$),$Y_{i} \ne Y_{j}$ ($1 \le i < j \le N$).
3. ($6$ points) $N \le 100$, $X_{i} \ne X_{j}$ ($1 \le i < j \le N$),$Y_{i} \ne Y_{j}$ ($1 \le i < j \le N$),$X_{1} = 0$, $Y_{1} = 0$.
4. ($6$ points) $N \le 100$, $X_{i} \ne X_{j}$ ($1 \le i < j \le N$),$Y_{i} \ne Y_{j}$ ($1 \le i < j \le N$).
5. ($12$ points) $N \le 3\,000$.
6. ($32$ points) $X_{i} \ne X_{j}$ ($1 \le i < j \le N$),$Y_{i} \ne Y_{j}$ ($1 \le i < j \le N$).
7. ($31$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
2
0 0
4 3
~~~

### Sample Output 1

~~~
1
~~~

In this sample input, the positions of the houses are as follows.

<p><img src="https://img.atcoder.jp/joisc2021/fever-en-p3-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

For example, assume that the citizen 1 chooses ‘east’ and the citizen 2 chooses ‘west.’

Then, at any time, the coordinates of citizens $1$ and $2$ are different. Thus the citizen $2$ will not be infected. Therefore the citizen 1 is the only infected citizen at time $10^{100}$. The number of infected citizens is 1.

Regardless of the choices of the directions of the citizens 1 and 2, the number of infected citizens cannot be larger than 1. Hence the largest possible number of infected citizens is 1, and output 1.

This sample input satisfies the constraints of Subtasks 1, 2, 3, 4, 5, 6, 7.

### Sample Input 2

~~~
3
1 2
2 1
4 3
~~~

### Sample Output 2

~~~
3
~~~

In this sample input, the positions of the houses are as follows.

<p><img src="https://img.atcoder.jp/joisc2021/fever-en-p4-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

For example, assume that the citizen $1$ chooses ‘east,’ the citizen $2$ chooses ‘north,’ the citizen $3$ chooses ‘west.’ Then the IOI fever is transmitted among citizens in the following way.

- At time 0, the citizen 1 is the only infected citizen.
- At time 1, the coordinates of the citizens $1$, $2$, $3$ are $(2, 2)$, $(2, 2)$, $(3, 3)$, respectively. The coordinates of the citizens 1 and 2 are the same. At that time, the citizen 1 is infected with IOI fever, and the citizen 2 is not infected with IOI fever. Hence the citizen 2 becomes infected with IOI fever.
- At time 2, the coordinates of the citizens $1$, $2$, $3$ are $(3, 2)$, $(2, 3)$, $(2, 3)$, respectively. The coordinates of the citizens 2 and 3 are the same. At that time, the citizen 2 is infected with IOI fever, and the citizen 3 is not infected with IOI fever. Hence the citizen 3 becomes infected with IOI fever.

Finally, the number of infected citizens becomes 3. Since it is the largest possible value, output 3.

This sample input satisfies the constraints of Subtasks 1, 2, 4, 5, 6, 7.

### Sample Input 3

~~~
2
20 20
20 21
~~~

### Sample Output 3

~~~
2
~~~

Assume that the citizen 1 chooses ‘north’ and the citizen 2 chooses ‘south.’ Then the IOI fever is transmitted among citizens in the following way.

- At time 0, the citizen 1 is the only infected citizen.
- At time $0.5$, both of the coordinates of the citizens $1$, $2$ are $(20, 20.5)$. At that time, the citizen 1 is infected with IOI fever, and the citizen 2 is not infected with IOI fever. Hence the citizen 2 becomes infected with IOI fever.

Finally, the number of infected citizens becomes 2. Since it is the largest possible value, output 2.

This sample input satisfies the constraints of Subtasks 5, 7.

### Sample Input 4

~~~
15
5 6
2 9
12 0
4 11
3 12
6 5
0 8
9 10
11 13
8 7
13 2
1 1
7 14
10 4
14 3
~~~

### Sample Output 4

~~~
9
~~~

This sample input satisfies the constraints of Subtasks 2, 4, 5, 6, 7.

### Sample Input 5

~~~
30
275810186 246609547
122805872 99671769
243507947 220373844
281305347 252104708
237805644 214671541
172469077 149334974
222589229 229887956
160653451 208404690
241378966 211098219
144302355 224755786
186392385 163258282
199129390 169928751
294937491 265736852
196096122 172962019
314342944 285142305
202720470 166337671
157037485 133903382
263858979 240724876
210720220 181519581
296402036 267201397
186021287 183036854
195081930 173976211
328293029 299092390
261195361 238061258
323595085 294394446
299933764 270733125
240976723 128081418
188501753 165367650
277832422 248631783
119896220 96762117
~~~

### Sample Output 5

~~~
11
~~~

This sample input satisfies the constraints of Subtasks 4, 5, 6, 7.
