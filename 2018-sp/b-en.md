Score: $100$ points

### Problem Statement

Mr. JOI owns a large lot in IOI Country. IOI Country is represented by a coordinate plane, with the X-axis and the Y-axis being orthogonal. The point with the X-coordinate $x$ and the Y-coordinate $y$ is denoted by $(x, y)$. His lot is the area with the X-coordinate and the Y-coordinate both between $-10^{100}$ and $10^{100}$, inclusive. There, he breeds cows in a pasture, which is the area with the X-coordinate and the Y-coordinate both between $-S$ and $S$, inclusive.

Mr. JOI decided to enclose the pasture with some fences in order to keep the cows. A fence is represented by a line segment whose length is a positive real number. He will enclose the pasture in such a way that it is impossible to go from any point inside the pasture to the outside of his lot without passing any points where a fence exists (including the endpoints of the fences). There have already been some fences in the lot, which he may use to enclose the pasture. For any two fences among these, if they have a common point, it is an endpoint of at least one of the two.

Mr. JOI can build any number of new fences. A new fence can be of arbitrary length and of arbitrary direction, as long as it passes neither inside the pasture nor outside the lot. He may build a fence which passes along the boundary of the pasture. Building a new fence with length $l$ ($l > 0$) costs $l$. It may be that two fences intersect, an endpoint of a fence coincides with an endpoint of another fence, or an endpoint of a fence lies on another fence.

Mr. JOI wants to enclose the pasture with as low cost as possible.

### Task

Given the size of the pasture and the data of fences already built, write a program which calculates the minimum total cost needed to enclose the pasture.

### Input

Read the following data from the standard input.

- The first line of the input contains two space separated integers $N$ and $S$. This means the pasture is the area with the X-coordinate and the Y-coordinate both between $-S$ and $S$ , inclusive, and there have already been $N$ fences in Mr. JOI’s lot.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains four space separated integers $A_{i}, B_{i}, C_{i}$ and $D_{i}$. This means the $i$-th fence already built is the line segment connecting two points ($A_{i}, B_{i}$) and $(C_{i}, D_{i})$.

### Output

Write one line to the standard output. The output should contain the minimum total cost needed to enclose the pasture. You may print any number of digits after the decimal point, but the absolute error between your output and the correct answer must be at most $0.01$.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 100$．
- $1 \le S \le 200$．
- $-200 \le A_{i} \le 200$ ($1 \le i \le N$)．
- $-200 \le B_{i} \le 200$ ($1 \le i \le N$)．
- $-200 \le C_{i} \le 200$ ($1 \le i \le N$)．
- $-200 \le D_{i} \le 200$ ($1 \le i \le N$)．
- $(A_{i}, B_{i}) \ne (C_{i}, D_{i})$ ($1 \le i \le N$)．
- No fence in the input passes strictly inside the pasture.
- For any two distinct fences in the input, if they have a common point, it is an endpoint of at least one of the two.

### Subtask

There are 3 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$18$ points]

- $N = 1$．

#### Subtask 2 [$33$ points]

- $N \le 6$．

#### Subtask 3 [$49$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 4
-3 5 1 8
-4 3 -4 6
5 1 7 2
~~~

### Sample Output 1

~~~
29.0000000000
~~~

The fences already built in Sample Input 1 are depicted on the left of the following picture. The dotted square at the center is the boundary of the pasture.

A way to enclose the pasture in this sample input is depicted on the right, where thin line segments represent new fences. Building these fences costs 29, and this is the minimum possible cost. In this sample input, other than `29.0000000000`, outputs such as `29` and `28.999` are also judged correct.

<p><img src="https://img.atcoder.jp/joisc2018/fences-en-p3-1.png" alt="Figure" style="max-width:100%;height:auto;"></p>

### Sample Input 2

~~~
1 2
-3 -3 -3 -2
~~~

### Sample Output 2

~~~
16.0000000000
~~~

Note that it is fine to use no fences already built at all.

### Sample Input 3

~~~
4 3
4 -1 3 4
-4 2 -2 4
-4 0 -5 6
0 -6 5 -2
~~~

### Sample Output 3

~~~
14.1392801789
~~~

### Sample Input 4

~~~
10 80
175 95 60 -146
-106 57 18 185
190 -68 177 -142
84 -195 127 -179
34 143 126 69
-92 133 -190 80
-157 -66 -119 -161
-85 -124 129 -171
141 181 175 175
107 -38 150 148
~~~

### Sample Output 4

~~~
238.4778364511
~~~
