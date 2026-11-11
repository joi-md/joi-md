Score: $100$ points

### Problem Statement

$N$ students took an examination, which consisted of mathematics and informatics sections. The $i$-th student ($1 \le i \le N$) scored $S_{i}$ points in mathematics, and $T_{i}$ points in informatics. Professor T and Professor I are going to decide whether each student passes or fails, based on the scores.

- Professor T regards both subjects as important; he wants students who scored at least $A$ points in mathematics and $B$ points in informatics to pass.
- Professor I regards only the overall score as important; he wants students who scored at least $C$ points in total to pass.
- Only students whom both professors want to pass can pass the examination.

You do not know these criteria: the values of $A, B$ and $C$. Instead, given $Q$ triplets of integers $(X_{j}, Y_{j}, Z_{j})$ ($1 \le j \le Q$), you want to know the number of students passing the examination when $A = X_{j}$, $B = Y_{j}$ and $C = Z_{j}$.

Write a program which, given the number of students, each student’s scores, and some criteria, calculates the number of students passing the examination under each criterion.

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $Q$
$S_{1}$ $T_{1}$
$\vdots$
$S_{N}$ $T_{N}$
$X_{1}$ $Y_{1}$ $Z_{1}$
$\vdots$
$X_{Q}$ $Y_{Q}$ $Z_{Q}$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \le j \le Q$) should contain the number of students passing the examination when $A = X_{j}$, $B = Y_{j}$ and $C = Z_{j}$.

### Constraints

- $1 \le N \le 100\,000$.
- $1 \le Q \le 100\,000$.
- $0 \le S_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $0 \le T_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $0 \le X_{j} \le 1\,000\,000\,000$ ($1 \le j \le Q$).
- $0 \le Y_{j} \le 1\,000\,000\,000$ ($1 \le j \le Q$).
- $0 \le Z_{j} \le 2\,000\,000\,000$ ($1 \le j \le Q$).

### Subtasks

1. ($2$ points) $N \le 3\,000$, $Q \le 3\,000$.
2. ($20$ points) $S_{i} \le 100\,000$, $T_{i} \le 100\,000$ ($1 \le i \le N$), $X_{j} \le 100\,000$, $Y_{j} \le 100\,000$, $Z_{j} = 0$ ($1 \le j \le Q$).
3. ($21$ points) $S_{i} \le 100\,000$, $T_{i} \le 100\,000$ ($1 \le i \le N$), $X_{j} \le 100\,000$, $Y_{j} \le 100\,000$, $Z_{j} \le 200\,000$ ($1 \le j \le Q$).
4. ($57$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5 4
35 100
70 70
45 15
80 40
20 95
20 50 120
10 10 100
60 60 80
0 100 100
~~~

### Sample Output 1

~~~
2
4
1
1
~~~

- When $A = 20$, $B = 50$ and $C = 120$, only the 1st and the 2nd student can score at least $20$ points in mathematics, at least 50 points in informatics, and at least 120 points in total. Therefore, the number of students passing the examination is 2.

- When $A = 10$, $B = 10$ and $C = 100$, only the 1st, the 2nd, the 4th and 5th student can score at least 10 points in mathematics, at least 10 points in informatics, and at least 100 points in total. Therefore, the number of students passing the examination is 4.
- When $A = 60$, $B = 60$ and $C = 80$, only the 2nd student can score at least 60 points in mathematics, at least 60 points in informatics, and at least 80 points in total. Therefore, the number of students passing the examination is 1.
- When $A = 0$, $B = 100$ and $C = 100$, only the 1st student can score at least 0 points in mathematics, at least 100 points in informatics, and at least 100 points in total. Therefore, the number of students passing the examination is 1.

### Sample Input 2

~~~
10 10
41304 98327
91921 28251
85635 59191
30361 72671
28949 96958
99041 37826
10245 2726
19387 20282
60366 87723
95388 49726
52302 69501 66009
43754 45346 3158
25224 58881 18727
7298 24412 63782
24107 10583 61508
65025 29140 7278
36104 56758 2775
23126 67608 122051
56910 17272 62933
39675 15874 117117
~~~

### Sample Output 2

~~~
1
3
5
8
8
3
3
3
5
6
~~~
