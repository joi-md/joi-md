Score: $100$ points

### Problem Statement

There are $N$ antennas, numbered from $1$ to $N$ along a line. Each antenna is one kilometer distant from consecutive antennas. The height of the antenna $i$ ($1 \le i \le N$) is $H_{i}$. The antenna $i$ can send information to the antennas located between $A_{i}$ kilometers and $B_{i}$ kilometers, inclusive, from the antenna $i$. If and only if the antenna $x$ and the antenna $y$ ($1 \le x < y \le N$) can send information to each other, the pair of antennas is in communication, and the communication cost is equal to $|H_{x} - H_{y}|$.

Mr. K, the Prime Minister of JOI Republic, has received $Q$ complaints about bad connection from the citizens. A study showed that, for the $j$-th complaint ($1 \le j \le Q$), something among the antennas $L_{j}, L_{j} + 1, \ldots, R_{j}$ has troubles. You are assigned to find whether there exists a pair of antennas in communication among the antennas $L_{j}, L_{j} + 1, \ldots, R_{j}$, and if there does, you also have to find the maximum communication cost among such pairs.

Write a program which, given the information of antennas and complaints, determines whether there exists a pair of antennas in communication among the antennas $L_{j}, L_{j} + 1, \ldots, R_{j}$ and calculates the maximum communication cost among such pairs if there exists such a pair.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$
$H_{1}$ $A_{1}$ $B_{1}$
$\vdots$
$H_{N}$ $A_{N}$ $B_{N}$
$Q$
$L_{1}$ $R_{1}$
$\vdots$
$L_{Q}$ $R_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) should be $-1$ if there is no pair of antennas in communication among the antennas $L_{j}, L_{j} + 1, \ldots, R_{j}$, or the maximum communication cost among such pairs otherwise.

### Constraints

- $2 \le N \le 200\,000$.
- $1 \le H_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le A_{i} \le B_{i} \le N - 1$ ($1 \le i \le N$).
- $1 \le Q \le 200\,000$.
- $1 \le L_{j} < R_{j} \le N$ ($1 \le j \le Q$).

### Subtasks

1. ($2$ points) $N \le 300$, $Q \le 300$.
2. ($11$ points) $N \le 2\,000$.
3. ($22$ points) $Q = 1$, $L_{1} = 1$, $R_{1} = N$.
4. ($65$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
10 2 4
1 1 1
2 1 3
1 1 1
100 1 1
5
1 2
2 3
1 3
1 4
1 5
~~~

### Sample Output 1

~~~
-1
1
8
8
99
~~~

The antenna 1 and the antenna 2 are not in communication, so the answer to the 1st complaint is $-1$.

The pair of antennas in communication which has the maximum communication cost for the 2nd, 3rd, 4th and 5th complaint is $(2, 3)$, $(1, 3)$, $(1, 3)$, and $(4, 5)$, respectively.

### Sample Input 2

~~~
20
260055884 2 15
737689751 5 5
575359903 1 15
341907415 14 14
162026576 9 19
55126745 10 19
95712405 11 14
416027186 8 13
370819848 11 14
629309664 4 13
822713895 5 15
390716905 13 17
577166133 8 19
195931195 10 17
377030463 14 17
968486685 11 19
963040581 4 10
566835557 1 12
586336111 6 16
385865831 8 9
1
1 20
~~~

### Sample Output 2

~~~
806460109
~~~

This sample input satisfies the constraints for Subtask 3.
