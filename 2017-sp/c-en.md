Score: $100$ points

### Problem Statement

JOI-kun and his friends will play with sparklers. In total, there are $N$ people including JOI-kun and his friends. If one sets fire to a sparkler, it keeps the fire for exactly $T$ seconds.

In the beginning, JOI-kun and his friends are standing separately along a straight street running from east to west. JOI-kun and his friends are numbered from 1 to $N$. For each $i, j$ with $i < j$, the $i$-th person is standing in the west of the $j$-th person, or the $i$-th person and the $j$-th person are standing in the same place. The distance from the $i$-th person to the westernmost person (i.e. the first person) is $X_{i}$ meters. JOI-kun is the $K$-th person.

When they start to play with sparklers, they notice that the lighter does not have enough fuel. They can set fire to one sparkler only.

So, they decide to set fire to JOI-kun’s sparkler first. Then, they will set fire to other sparklers by touching them to burning sparklers.

Since a sparkler keeps the fire for $T$ seconds only, JOI-kun and his friends have to cooperate together to spread the fire to sparklers. When they set fire to a sparkler from a burning sparkler, the following conditions must be satisfied:

- They must touch a sparkler to a burning sparkler within $T$ seconds after setting fire. They can do so after exactly $T$ seconds have passed.
- The sparkler they are planning to set fire must not be burnt before.
- The person who has a burning sparkler and the person who has a sparkler without fire must be in the same place.

We ignore the amount of waiting time for setting fire from one sparkler to another.

Since JOI-kun and his friends are standing separately in the beginning, they have to move appropriately to spread the fire. They can run at any speed to the west or east. But, it is dangerous to run too fast when they are playing. Hence, they will make a rule that their speed must not exceed $s$ meters per second. Here, $s$ is a non-negative integer.

How should they set the speed limit to spread fire to all sparklers?

### Task

Given the time a sparkler keeps fire and the initial positions of JOI-kun and his friends, write a program which calculates the minimum integer $s$ so that they can spread fire to all sparklers if the speed limit is $s$ meters per second.

### Input

Read the following data from the standard input.

- The first line of input contains three space separated integers $N, K, T$. This means there are $N$ people, JOI-kun is the $K$-th person, and a sparkler keeps the fire for $T$ seconds.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains an integer $X_{i}$. This means the distance from the $i$-th person to the westernmost person is $X_{i}$ meters in the beginning.

### Output

Write one line to the standard output. The output contains the minimum integer $s$ so that they can spread fire to all sparklers if the speed limit is $s$ meters per second.

### Constraints

All input data satisfy the following conditions.

- $1 \le K \le N \le 100\,000$.
- $1 \le T \le 1\,000\,000\,000$.
- $0 \le X_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $X_{1} = 0$.
- $X_{i} \le X_{j}$ ($1 \le i \le j \le N$).

### Subtask

There are 3 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$30$ points]

- $N \le 20$.

#### Subtask 2 [$20$ points]

- $N \le 1\,000$.

#### Subtask 3 [$50$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 2 50
0
200
300
~~~

### Sample Output 1

~~~
2
~~~

In this sample input, the speed limit can be 2 meters per second.

The first person moves to the east, the second person moves to the west, and the third person moves to the west; their speed is 2 meters per second. After 50 seconds, the second person gives fire to the first person.

Then, the first person moves to the east, and the third person moves to the west; their speed is $2$ meters per second. After 25 seconds, the first person gives fire to the third person.

If the speed limit is 1 meter per second, they can not spread fire to all sparklers.

### Sample Input 2

~~~
3 2 10
0
200
300
~~~

### Sample Output 2

~~~
8
~~~

In this sample input, the speed limit can be 8 meters per second.

The first person moves to the east, the second person moves to the east, and the third person moves to the west; their speed is 8 meters per second.

After 3 seconds, the second person stops moving. The first and third people keep moving.

After $6.5$ more seconds, the second and third people come to the same place. But they do not spread fire. The second and third people stop moving. The first person keeps moving.

After $0.5$ more second, the second person gives fire to the third person. The first person keeps moving. The third person moves to the west; his speed is 8 meters per second.

After 9 more seconds, the first and third people come to the same place. The third person gives fire to the first person.

If the speed limit is 7 meters per second, they can not spread fire to all sparklers.

### Sample Input 3

~~~
20 6 1
0
2
13
27
35
46
63
74
80
88
100
101
109
110
119
138
139
154
172
192
~~~

### Sample Output 3

~~~
6
~~~
