Score: $100$ points

### Problem Statement

In Republic of JOI, there are $N$ stations numbered from 1 to $N$. They are located clockwise on a circular railway in order.

There are $N$ types of train tickets numbered from $1$ to $N$. By using one ticket of type $i$ ($1 \le i \le N - 1$), one person can travel from the station $i$ to the station $i + 1$, or from the station $i + 1$ to the station $i$. By using one ticket of type $N$, one person can travel from the station 1 to the station $N$, or from the station $N$ to the station 1. We can only buy a package of $N$ tickets consisting of one ticket for each type.

You are working at a travel agency in Republic of JOI. Your task is to arrange tickets for customers.

Today, you have $M$ requests for arranging tickets. The $i$-th request says $C_{i}$ people want to travel from the station $A_{i}$ to the station $B_{i}$. These $C_{i}$ people need not to take the same route when they travel.

You want to know the minimum number of packages of tickets you need to buy in order to deal with all the requests.

### Task

Given the number of stations and information of requests, write a program which calculates the minimum number of packages of tickets you need to buy.

### Input

Read the following data from the standard input.

- The first line of input contains two space separated integers $N, M$. This means there are $N$ stations in Republic of JOI, and you have $M$ requests today.
- The $i$-th line ($1 \le i \le M$) of the following $M$ lines contains three space separated integers $A_{i}, B_{i},C_{i}$. This means the $i$-th request says $C_{i}$ people want to travel from the station $A_{i}$ to the station $B_{i}$.

### Output

Write one line to the standard output. The output contains the minimum number of packages of tickets you need to buy.

### Constraints

All input data satisfy the following conditions.

- $3 \le N \le 200\,000$.
- $1 \le M \le 100\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le M$).
- $1 \le B_{i} \le N$ ($1 \le i \le M$).
- $1 \le C_{i} \le 1\,000\,000\,000$ ($1 \le i \le M$).
- $A_{i} \ne B_{i}$ ($1 \le i \le M$).

### Subtask

There are 5 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$10$ points]

- $N \le 20$.
- $M \le 20$.
- $C_{i} = 1$ ($1 \le i \le M$).

#### Subtask 2 [$35$ points]

- $N \le 300$.
- $M \le 300$.
- $C_{i} = 1$ ($1 \le i \le M$).

#### Subtask 3 [$20$ points]

- $N \le 3\,000$.
- $M \le 3\,000$.
- $C_{i} = 1$ ($1 \le i \le M$).

#### Subtask 4 [$20$ points]

- $C_{i} = 1$ ($1 \le i \le M$).

#### Subtask 5 [$15$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 3
1 2 1
2 3 1
3 1 1
~~~

### Sample Output 1

~~~
1
~~~

If everybody travels clockwise, you need one ticket for each type. Hence you need to buy one package of tickets.

### Sample Input 2

~~~
3 2
1 2 4
1 2 2
~~~

### Sample Output 2

~~~
3
~~~

You need three tickets for each type if people travel in the following way:

- In the first request, three people travel clockwise, and one person travels counterclockwise.
- In the second request, two people travel counterclockwise.

Hence it is enough to buy three packages of tickets.

We output 3 because it is impossible to travel if you buy only two packages.

### Sample Input 3

~~~
6 3
1 4 1
2 5 1
3 6 1
~~~

### Sample Output 3

~~~
2
~~~

For example, you buy two packages of tickets, and distribute them in the following way:

- Give tickets $1$, $2$, $3$ to the person who wants to travel from the station 1 to the station 4.
- Give tickets $1$, $6$, $5$ to the person who wants to travel from the station 2 to the station 5.
- Give tickets $3$, $4$, $5$ to the person who wants to travel from the station 3 to the station 6.

We output 2 because it is impossible to travel if you buy one package only.
