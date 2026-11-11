Score: $100$ points

### Problem Statement

Bitaro is a professional reporter and writes reports on competitive programming contests. Several days later, an international competitive programming contest will be held. Bitaro is planning to write reports on it.

There will be $N$ contestants, numbered from 1 to $N$. Each contestant has an integer called the rating, which measures their strength in competitive programming. A rating is an integer between $1$ and $1\,000\,000\,000$, inclusive.

Bitaro conducted interviews with the contestants. He obtained the following information.

> The rating of the contestant $i$ ($1 \le i \le N$) is greater than or equal to the rating of the contestant $A_{i}$ ($1 \le A_{i} \le N$). Here it might happen that $A_{i} = i$.

After the interviews, Bitaro received a list of the ratings of the contestants from a company managing the rating system. In the list, the following information was written.

> The rating of the contestant $i$ ($1 \le i \le N$) is equal to $H_{i}$.

Bitaro was trying to write a report based on the above information. However, it turned out that the list of the ratings of the contestants might contain errors.

Because the deadline is coming up soon, Bitaro has no time to obtain a correct list of the ratings. Therefore, Bitaro decided to change the ratings of some contestants in the list so that it will not contradict the information obtained by the interviews. The cost to change the rating of the contestant $i$ ($1 \le i \le N$) in the list is $C_{i}$. That is, Bitaro can change the rating of the contestant $i$ in the list into any integer between $1$ and $1\,000\,000\,000$, inclusive, by paying a cost of $C_{i}$. In order to meet the deadline, Bitaro wants to minimize the total cost to change the ratings in the list.

Write a program which, given the number of contestants, information obtained by interviews, the list containing the ratings, and the cost to change the rating of each contestant in the list, calculates the minimum total cost to change the ratings in the list so that it will not contradict the information obtained by the interviews.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$
$A_{1}$ $H_{1}$ $C_{1}$
$\vdots$
$A_{N}$ $H_{N}$ $C_{N}$
~~~

### Output

Write one line to the standard output. Output the minimum total cost.

### Constraints

- $2 \le N \le 200\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le N$).
- $1 \le H_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le N$).

### Subtasks

1. ($14$ points) $N \le 5\,000$, $A_{1} = 1$, $A_{i} \le i - 1$ ($2 \le i \le N$).
2. ($65$ points) $A_{1} = 1$, $A_{i} \le i - 1$ ($2 \le i \le N$).
3. ($21$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
6
1 6 5
1 3 6
1 8 4
3 4 9
2 2 5
2 5 6
~~~

### Sample Output 1

~~~
14
~~~

If Bitaro changes the ratings of the contestants in the list in the following way, it will not contradict the information obtained by the interviews.

- Change the rating of the contestant 1 from 6 to 1. The cost is 5.
- Change the rating of the contestant 3 from 8 to 4. The cost is 4.
- Change the rating of the contestant 5 from 2 to 1 000 000 000. The cost is 5.

Then the total cost is $5 + 4 + 5 = 14$. Since it is the minimum possible value, output 14.

This sample input satisfies the constraints of Subtasks 1, 2, 3.

### Sample Input 2

~~~
5
1 1 1
2 2 1
4 3 1
3 3 1
4 3 1
~~~

### Sample Output 2

~~~
0
~~~

In this sample input, the ratings of the contestants in the list do not contradict the information obtained by the interviews. Thus, the minimum total cost is 0. Hence, output 0.

### Sample Input 3

~~~
20
1 7 381792936
1 89 964898447
1 27 797240712
3 4 299745243
2 18 113181438
2 20 952129455
4 34 124298446
4 89 33466733
7 40 109601410
5 81 902931267
2 4 669879699
8 23 785166502
8 1 601717183
8 26 747624379
1 17 504589209
9 24 909134233
16 56 236448090
8 94 605526613
5 90 481898834
9 34 183442771
~~~

### Sample Output 3

~~~
2711043927
~~~

This sample input satisfies the constraints of Subtasks 1, 2, 3.

### Sample Input 4

~~~
20
15 62 418848971
13 5 277275513
14 60 80376452
12 14 256845164
12 42 481331310
6 86 290168639
3 98 947342135
3 19 896070909
16 39 48034188
8 29 925729089
18 97 420006994
13 51 454182928
19 61 822405612
13 37 148425187
15 77 474094143
14 27 272926693
18 43 566552069
9 93 790433300
10 73 61654171
14 28 334498030
~~~

### Sample Output 4

~~~
4012295156
~~~
