Score: $100$ points

### Problem Statement

Do you know Just Odd Ink Way? It is a national road of length $10^{100}$ in Republic of EGOI from the east end to the west end. It is famous because there are several painting on the road painted by “Just Odd Ink.” In the following, we abbreviate it, and call it JOI Way.

There are several painting of various sizes on JOI Way. Characters are written on some of them.

Rie is a tour guide working on JOI Way. She plans to guide the participants of JOIG Spring Training Camp. In order to cheer the participants, she plans to choose the paintings on which ‘`J`’, ‘`O`’, ‘`I`’, ‘`G`’ are written, and visit them in this order. There are $N$ candidates of paintings. The $i$-th painting ($1 \le i \le N$) is located at the place on JOI Way at a distance of $A_{i}$ from the west end. In this painting, the character $C_{i}$ is written.

Rie has $Q$ plans. In the $j$-th plan ($1 \le j \le Q$), she will travel as follows.

1. Rie starts a tour from the place on JOI Way at a distance of $S_{j}$ from the west end.
2. She chooses a painting on which ‘`J`’ is written, and moves to its location.
3. She chooses a painting on which ‘`O`’ is written, and moves to its location.
4. She chooses a painting on which ‘`I`’ is written, and moves to its location.
5. She chooses a painting on which ‘`G`’ is written, and moves to its location.
6. She moves to the place on JOI Way at a distance of $T_{j}$ from the west end, and finishes the tour.

During the tour, it is not allowed to go outside JOI Way.

Under the above conditions, Rie wants to minimize the total travel distance for each plan.

Write a program which, given information on the paintings on JOI Way and Rie’s plans, calculates the minimum possible value of the total travel distance for each plan.

### Input

Read the following data from the standard input.

~~~
$N$
$A_{1}$ $C_{1}$
$A_{2}$ $C_{2}$
$\vdots$
$A_{N}$ $C_{N}$
$Q$
$S_1$ $T_{1}$
$S_2$ $T_{2}$
$\vdots$
$S_{Q}$ $T_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) of the output should contain the minimum possible value of the total travel distance for the $j$-th plan.

### Constraints

- $4 \le N \le 100\,000$.
- $1 \le A_{i} \le 1\,000\,000\,000\,000\,000 (= 10^{15})$ ($1 \le i \le N$).
- $A_{i} < A_{i+1}$ ($1 \le i \le N - 1$).
- $C_{i}$ ($1 \le i \le N$) is either ‘`J`’，‘`O`’，‘`I`’，or ‘`G`’.
- $C_{i}$ is equal to ‘`J`’ for at least one $i$ ($1 \le i \le N$).
- $C_{i}$ is equal to ‘`O`’ for at least one $i$ ($1 \le i \le N$).
- $C_{i}$ is equal to ‘`I`’ for at least one $i$ ($1 \le i \le N$).
- $C_{i}$ is equal to ‘`G`’ for at least one $i$ ($1 \le i \le N$).
- $1 \le Q \le 100\,000$.
- $1 \le S_{j} \le 1\,000\,000\,000\,000\,000 (= 10^{15})$ ($1 \le j \le Q$).
- $1 \le T_{j} \le 1\,000\,000\,000\,000\,000 (= 10^{15})$ ($1 \le j \le Q$).
- $(S_{j}, T_{j}) \ne (S_{k}, T_{k})$ ($1 \le j < k \le Q$).
- $N, Q$ are integers.
- $A_{i}$ is an integer ($1 \le i \le N$).
- $S_{j}, T_{j}$ are integers ($1 \le j \le Q$).

### Subtasks

1. ($4$ points) $N \le 80$, $Q \le 10$.
2. ($10$ points) $N \le 500$, $Q \le 10$.
3. ($6$ points) $N \le 3\,000$, $Q \le 100$.
4. ($25$ points) $N \le 5\,000$, $Q \le 1\,000$.
5. ($12$ points) $C_{i}$ is equal to ‘`O`’ for a unique $i$ ($1 \le i \le N$), $C_{j}$ is equal to ‘`I`’ for a unique $j$ ($1 \le j \le N$), and $C_{k}$ is equal to ‘`G`’ for a unique $k$ ($1 \le k \le N$).
6. ($8$ points) $C_{i}$ is equal to ‘`O`’ for a unique $i$ ($1 \le i \le N$), and $C_{j}$ is equal to ‘`I`’ for a unique $j$ ($1 \le j \le N$).
7. ($20$ points) $C_{i}$ is equal to ‘`O`’ for a unique $i$ ($1 \le i \le N$).
8. ($15$ points) No additional constraints.

### Sample Input 1

~~~
7
1 J
2 O
3 G
4 I
5 O
8 G
10 J
2
3 2
7 5
~~~

### Sample Output 1

~~~
7
12
~~~

In the first plan, Rie starts a tour from the place on JOI Way at a distance of 3 from the west end, and finishes the tour from the place on JOI Way at a distance of $2$ from the west end. For example, if she travels in the following way, the total travel distance becomes 7.

1. She starts a tour from the place on JOI Way at a distance of 3 from the west end.
2. She moves to the west for a distance of 2. She arrives at the place on JOI Way at a distance of 1 from the west end. She visits a painting of ‘`J`’.
3. She moves to the east for a distance of 1. She arrives at the place on JOI Way at a distance of 2 from the west end. She visits a painting of ‘`O`’.
4. She moves to the east for a distance of 2. She arrives at the place on JOI Way at a distance of 4 from the west end. She visits a painting of ‘`I`’.
5. She moves to the west for a distance of 1. She arrives at the place on JOI Way at a distance of 3 from the west end. She visits a painting of ‘`G`’.
6. She moves to the west for a distance of 1. She arrives at the place on JOI Way at a distance of 2 from the west end, and finishes the tour.

Since 7 is the minimum possible value of the total travel distance, output 7 in the first line.

In the second plan, she starts a tour from the place on JOI Way at a distance of $7$ from the west end, and finishes the tour from the place on JOI Way at a distance of 5 from the west end. For example, if she travels in the following way, the total travel distance becomes 12.

1. She starts a tour from the place on JOI Way at a distance of 7 from the west end.
2. She moves to the east for a distance of 3. She arrives at the place on JOI Way at a distance of 10 from the west end. She visits a painting of ‘`J`’.
3. She moves to the west for a distance of 5. She arrives at the place on JOI Way at a distance of 5 from the west end. She visits a painting of ‘`O`’.
4. She moves to the west for a distance of 1. She arrives at the place on JOI Way at a distance of 4 from the west end. She visits a painting of ‘`I`’.
5. She moves to the west for a distance of 1. She arrives at the place on JOI Way at a distance of 3 from the west end. She visits a painting of ‘`G`’.
6. She moves to the east for a distance of 2. She arrives at the place on JOI Way at a distance of 5 from the west end, and finishes the tour.

Since 12 is the minimum possible value of the total travel distance, output 12 in the second line.

This sample input satisfies the constraints of Subtasks $1$, $2$, $3$, $4$, $8$.

### Sample Input 2

~~~
10
5 J
7 O
10 J
11 G
12 J
13 I
17 J
18 J
19 J
20 J
4
4 9
15 14
6 20
7 20
~~~

### Sample Output 2

~~~
13
19
20
21
~~~

This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
10
1 G
2 J
3 G
4 O
7 G
9 J
10 G
14 I
17 G
19 G
7
11 6
6 3
17 19
1 18
17 17
20 1
20 10
~~~

### Sample Output 3

~~~
25
27
28
17
26
39
30
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $3$, $4$, $6$, $7$, $8$.

### Sample Input 4

~~~
10
3 J
5 G
6 I
7 I
8 J
9 I
10 O
14 G
16 I
19 J
6
4 4
20 3
18 5
15 4
20 11
10 8
~~~

### Sample Output 4

~~~
12
17
15
15
19
12
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $3$, $4$, $7$, $8$.

### Sample Input 5

~~~
12
179948747891578 I
263779425244614 I
320153642407146 G
383698990675423 J
478483318441339 J
505589213620811 G
507468309040564 O
530441288489671 J
730036011088087 O
896127332008998 I
899298512463927 O
915990785839829 J
10
744829561026263 366031656398270
700496830781726 684771674298690
314138534887378 222241904398827
695615197615084 632164325876673
418419052313523 409258287819812
932490604948180 62799105708059
738126150487131 45378717857226
320047965627255 918203067583346
859632377126681 967370566306944
115848334010451 834089404672067
~~~

### Sample Output 5

~~~
583302366935305
805077987955000
591304613119987
757352272699625
478217003098189
869691499240121
805495866954969
1085532869547991
928541333618299
1205618838253516
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $3$, $4$, $8$.
