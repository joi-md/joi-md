Score: $100$ points

### Problem Statement

At the opening ceremony of IOI 2018, $N$ contestants marches along a line, which is represented by a number line. All contestants head for the positive direction of the number line. At time 0, the $i$-th contestant ($1 \le i \le N$, counted from the front) stands at coordinate $-i$. In addition, IOI-chan, the flag-bearer, stands at coordinate 0.

Each contestant has a value called slowness. The $i$-th contestant has slowness $D_{i}$. The contestants keep the following rule:

- If the $i$-th contestant is at a distance greater than or equal to $D_{i} + 1$ from the person (a contestant or IOI-chan) right in front of him or her, the $i$-th contestant moves to the position at a distance 1 from that person. Otherwise, the $i$-th contestant does not move.

IOI-chan moves a distance $1$ in the positive direction on the line per unit time. A contestant moves instantly whenever the condition described above is satisfied.

You are a reporter to cover the opening ceremony. You had to take photos, but you were fast asleep during the whole ceremony. It couldn’t be helped—you decided to cheat by taking photos of the hall and then drawing pictures of the people on them.

In order not to get caught cheating, or to estimate the time to draw pictures, you want to know the following $Q$ values:

- the number of people standing at coordinate between $L_{j}$ and $R_{j}$, inclusive, at time $T_{j}$ ($1 \le j \le Q$).

### Task

Given the slowness of each contestant and the data of the $Q$ questions, write a program which calculates the number of people satisfying the condition for each question.

### Input

Read the following data from the standard input.

- The first line of the input contains two space separated integers $N$ and $Q$. This means there are $N$ contestants (not including IOI-chan) and there are $Q$ questions.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains an integer $D_{i}$. This means the $i$-th contestant from the front has slowness $D_{i}$.
- The $j$-th line ($1 \le j \le Q$) of the following $Q$ lines contains three space separated integers $T_{j}, L_{j}$ and $R_{j}$. These values represent the $j$-th question.

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of the output should contain the answer to the $j$-th question.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 500\,000$．
- $1 \le Q \le 500\,000$．
- $1 \le D_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$)．
- $1 \le T_{j} \le 1\,000\,000\,000$ ($1 \le j \le Q$)．
- $1 \le L_{j} \le R_{j} \le 1\,000\,000\,000$ ($1 \le j \le Q$)．

### Subtasks

There are 3 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$7$ points]

- $D_{i} = 1$ ($1 \le i \le N$)．

#### Subtask 2 [$12$ points]

- $N \le 1\,000$．
- $Q \le 1\,000$．
- $T_{j} \le 1\,000$ ($1 \le j \le Q$)．
- $1 \le L_{j} \le R_{j} \le 1\,000$ ($1 \le j \le Q$)．

#### Subtask 3 [$81$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 6
2
5
3
1 2 4
2 2 4
3 2 4
4 2 4
5 2 4
6 2 4
~~~

### Sample Output 1

~~~
0
1
1
2
1
2
~~~

In this sample input, the contestants and IOI-chan move as follows.

In the following, interval $[L, R]$ denotes the set of points of coordinate between $L$ and $R$, inclusive, on the number line.

- At time $0$, IOI-chan stands at coordinate $0$. The 1st, 2nd and 3rd contestants stand at coordinates $-1, -2$ and $-3$, respectively.
- At time 1, IOI-chan moves to coordinate 1. No contestants move; the 1st, 2nd and 3rd contestants stand at coordinates $-1, -2$ and $-3$, respectively. Since there are no people in interval $[2, 4]$, output $0$ for the 1st question.
- At time 2, IOI-chan moves to coordinate 2. The distance between IOI-chan and the 1st contestant is now 3, so the 1st contestant moves to coordinate 1. The 1st, 2nd and 3rd contestants stand at coordinates 1, $-2$ and $-3$, respectively. Since there is only IOI-chan in interval $[2, 4]$, output 1 for the 2nd question.
- At time 3, IOI-chan moves to coordinate 3. No contestants move; the 1st, 2nd and 3rd contestants stand at coordinates 1, $-2$ and $-3$, respectively. Since there is only IOI-chan in interval $[2, 4]$, output 1 for the 3rd question.
- At time 4, IOI-chan moves to coordinate 4. The distance between IOI-chan and the 1st contestant is now 3, so the 1st contestant moves to coordinate 3. The 1st, 2nd and 3rd contestants stand at coordinates 3, $-2$ and $-3$, respectively. Since there are IOI-chan and the 1st contestant in interval $[2, 4]$, output 2 for the 4th question.
- At time 5, IOI-chan moves to coordinate 5. No contestants move; the 1st, 2nd and 3rd contestants stand at coordinates 3, $-2$ and $-3$, respectively. Since there is only the 1st contestant in interval $[2, 4]$, output 1 for the 5th question.
- At time 6, IOI-chan moves to coordinate 6. The distance between IOI-chan and the 1st contestant is now $3$, so the 1st contestant moves to coordinate $5$. Then, the distance between the 1st and 2nd contestants is now $7$, so the 2nd contestant moves to coordinate $4$. Furthermore, the distance between the 2st and 3nd contestants is now 7, so the 3nd contestant moves to coordinate 3. The 1st, 2nd and 3rd contestants stand at coordinate 5, 4 and 3, respectively. Since there are the 2nd and 3rd contestants in interval $[2, 4]$, output 2 for the 6th question.

### Sample Input 2

~~~
4 2
1
1
1
1
2 1 4
1 3 6
~~~

### Sample Output 2

~~~
2
0
~~~

This sample input satisfies the constraints for subtask 1.

### Sample Input 3

~~~
6 6
11
36
28
80
98
66
36 29 33
190 171 210
18 20 100
1000 900 1100
92 87 99
200 100 300
~~~

### Sample Output 3

~~~
1
6
0
5
2
7
~~~
