Score: $100$ points

### Problem Statement

In EGOI Farm, the employees are receiving and shipping melons. This morning, $N$ melons are received. The melons are numbered from 1 to $N$. The weight of melon $i$ ($1 \le i \le N$) is $A_{i}$.

Rie is working at EGOI Farm. Her job is packing melons into boxes. Now, an integer $x$ ($1 \le x \le N$) is determined in EGOI Farm. After that, she will receive the melons $x, x + 1, \ldots, N$, in this order. She will pack them into boxes by repeating the following process.

- Rie will take an empty box. She will repeat putting the melons into the box. However, if the total weight of the melons in the box will exceeds $L$ after putting the next melon into the box, she will not put it into the box. Then, she will ship the box. (In this case, she will put the next melon into a new box.) After putting the melon $N$ into a box, she will ship the box, and her job will be finished.

Rie wants to prepare for her job for all possible values of $x$. Write a program which, given information of the melons and the maximum possible weight $L$ of a box, calculates the number of boxes shipped by her and the total weight of the melons in the last box for all possible values of $x$.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $L$
$A_{1}$
$A_{2}$
$\vdots$
$A_{N}$
~~~

### Output

Write $N$ lines to the standard output. The $i$-th line ($1 \le i \le N$) of output corresponds to the case $x = i$. This line should contain the number of shipped boxes and the total weight of the melons in the last box if $x = i$. These two values should be separated by a space.

### Constraints

- $1 \le N \le 200\,000$.
- $1 \le L \le 1\,000\,000\,000 (= 10^{9})$.
- $1 \le A_{i} \le L$ ($1 \le i \le N$).

### Subtasks

1. ($6$ points) $A_{1} = A_{2} = \cdots = A_{N}$.
2. ($21$ points) $N \le 1\,000$．
3. ($29$ points) For every $x$, the number of boxes shipped by Rie will be less than or equal to 10.
4. ($33$ points) For every $x$, Rie will put at most 10 melons into a box.
5. ($11$ points) No additional constraints.

### Sample Input 1

~~~
7 100
20
80
50
40
20
80
10
~~~

### Sample Output 1

~~~
4 10
4 10
3 10
2 90
2 10
1 90
1 10
~~~

For example, if $x = 1$, Rie will pack melons into boxes as follows.

1. Rie puts the melon 1 into a box. The total weight of the box is 20.
2. Rie puts the melon 2 into the same box. The total weight of the box is 100.
3. If Rie puts the melon 3 into the same box, the total weight of the box will be 150. Therefore, Rie ships the current box, and puts the melon 3 into a new box. The total weight of the new box is 50.
4. Rie puts the melon 4 into the box. The total weight of the box is 90.
5. If Rie puts the melon $5$ into the box, the total weight of the box will be $110$. Therefore, Rie ships the current box, and puts the melon 5 into a new box. The total weight of the new box is 20.
6. Rie puts the melon 6 into the box. The total weight of the box is 100.
7. If Rie puts the melon $7$ into the box, the total weight of the box will be $110$. Therefore, Rie ships the current box, and puts the melon 7 into a new box. The total weight of the new box is 10.
8. Finally, Rie ships the current box.

If $x = 1$, Rie ships 4 boxes, and the total weight of the melons in the last box is 10. Therefore, output 4 and 10 in this order. These two values should be separated by a space.

This sample input satisfies the constraints of Subtasks $2, 3, 4, 5$.

### Sample Input 2

~~~
6 160
63
63
63
63
63
63
~~~

### Sample Output 2

~~~
3 126
3 63
2 126
2 63
1 126
1 63
~~~

For example, if $x = 1$, Rie puts the melons $1, 2$ into the first box, the melons $3, 4$ into the second box, and the melons $5, 6$ into the third box. Rie ships 3 boxes, and the total weight of the melons in the last box is 126. Therefore, output 3 and 126 in the first line in this order. These two values should be separated by a space.

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
5 20
7
10
4
6
8
~~~

### Sample Output 3

~~~
2 18
2 8
1 18
1 14
1 8
~~~

For example, if $x = 2$, Rie puts the melons $2, 3, 4$ into the first box. Rie puts only the melon 5 into the second box. Rie ships 2 boxes, and the total weight of the melons in the last box is 8. Therefore, output 2 and 8 in the second line in this order. These two values should be separated by a space.

This sample input satisfies the constraints of Subtasks $2, 3, 4, 5$.
