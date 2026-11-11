Score: $100$ points

### Problem Statement

There is a long-distance coach between the city I and the city O. It has a water supply machine. Passengers and the driver can drink water from it. The coach departs from the city I at time 0, and arrives the city O at time $X$. On the route, there are $N$ refilling points where we can put water into the machine. The coach will arrive at the $i$-th refilling point ($1 \le i \le N$) at time $S_{i}$.

In the beginning, the machine does not have water in it. We can put water into it before departure. Also, we can put water into it when the coach is at a refilling point. The cost of water is $W$ yen per liter regardless of the position of the coach.

At the city I, $M$ passengers get on the coach. The passengers are numbered from 1 to $M$. No passengers get on the coach at places other than the city I. The $j$-th passenger ($1 \le j \le M$) needs a liter of water at time $D_{j}$. If he drinks water, he will need a liter of water after a lapse of time $T$. In other words, the $j$-th passenger needs water at time $D_{j}+kT$ ($k = 0, 1, 2, \ldots$). Here, $1 \le D_{j} < T$ is satisfied, and the value of $T$ is the same for all passengers. If the machine does not have water in it when a passenger needs water, the passenger leaves the coach. If the $j$-th passenger leaves the coach before getting to the city O, we need to refund the fare. The cost for refund is $C_{j}$ yen.

The driver also needs water. If he drinks water, he will need a liter of water after a lapse of time $T$, just in the same way as passengers. In other words, the driver needs water at time $kT$ ($k = 0, 1, 2, \ldots$). If the machine does not have water in it when the driver needs water, the operation of the coach is stopped

No two people will need water at the same time. When the coach arrives at the city O or a refilling point, neither passengers nor the driver need water.

Adjusting the amount of water put into machine at refilling points, we want to minimize the sum of the cost of water and the cost of refund, and to operate the coach until the city O. Your task is to decide where and how much we should put water into the water supply machine during the travel.

### Task

Given the traveling time for the coach, information on refilling points, and information on passengers and the driver, write a program which calculates the minimum of the sum of the cost of water and the cost of refund assuming the coach gets to the city O.

### Input

Read the following data from the standard input.

- The first line of input contains five space separated integers $X, N, M, W, T$. This means the coach will arrive at the city O at time $X$, there are $N$ refilling points, there are $M$ passengers in the coach, the cost of water is $W$ yen per liter, and the interval of time of water is $T$ for passengers and the driver.
- The $i$-th line ($1 \le i \le N$) of the following $N$ lines contains an integer $S_{i}$. This means the coach will arrive at the $i$-th refilling point at time $S_{i}$.
- The $j$-th line ($1 \le j \le M$) of the following $M$ lines contains two space separated integers $D_{j},C_{j}$. This means the $j$-th passenger will need water at time $D_{j}$ for the first time, and the cost for refund for the $j$-th passenger is $C_{j}$.

### Output

Write one line to the standard output. The output contains an integer, the minimum total cost.

### Constraints

All input data satisfy the following conditions.

- $1 \le X \le 1\,000\,000\,000\,000$.
- $1 \le N \le 200\,000$.
- $1 \le M \le 200\,000$.
- $1 \le W \le 1\,000\,000$.
- $1 \le T \le X$.
- $1 \le S_{i} < X$ ($1 \le i \le N$).
- $1 \le D_{j} < T$ ($1 \le j \le M$).
- $1 \le C_{j} \le 1\,000\,000\,000$ ($1 \le j \le M$).
- $D_{j}$ ($1 \le j \le M$) are different from each other.
- When the coach arrives at the city O or a refilling point, neither passengers nor the driver need water.

### Subtask

There are 4 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$16$ points]

- $N \le 8$.
- $M \le 8$.

#### Subtask 2 [$30$ points]

- $N \le 100$.
- $M \le 100$.

#### Subtask 3 [$25$ points]

- $N \le 2\,000$.
- $M \le 2\,000$.

#### Subtask 4 [$29$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
19 1 4 8 7
10
1 20
2 10
4 5
6 5
~~~

### Sample Output 1

~~~
103
~~~

In this sample input, if we put 7 liters of water into the machine before departure, and 4 liters of water into the machine at the first refilling point, the coach will be operated as follows:

1. The coach departs from the city I. At this time, the water supply machine has 7 liters of water.
2. The driver and the passengers $1$, $2$, $3$, $4$ drink 1 liter of water at time $0$, $1$, $2$, $4$, $6$, respectively. The remaining amount of water is 2 liters.
3. The driver and the passenger $1$ drink $1$ liter of water at time $7, 8$, respectively. The remaining amount of water is 0 liter.
4. At time 9, the passenger 2 needs water. But he leaves the coach because the machine does not have water in it.
5. At time 10, we put 4 liters of water into the machine at the first refilling point. The remaining amount of water is 4 liters.
6. The passengers $3$, $4$, the driver, and the passenger 1 drink 1 liter of water at time $11$, $13$, $14$, $15$, respectively. The remaining amount of water is 0 liter.
7. At time 18, the passenger 3 needs water. But he leaves the coach because the machine does not have water in it.
8. At time 19, the coach arrives at the city O.

Total amount of water used is $11$ liters. The cost of water is $88$ yen. The sum of the cost of refund for the passengers $2$, $3$ is 15 yen. The total sum is 103 yen.

We output 103 because it is impossible to operate the coach if the total cost is less than or equal to 102 yen,

### Sample Input 2

~~~
105 3 5 9 10
59
68
71
4 71
6 32
7 29
3 62
2 35
~~~

### Sample Output 2

~~~
547
~~~

### Sample Input 3

~~~
1000000000000 1 1 1000000 6
999999259244
1 123456789
~~~

### Sample Output 3

~~~
333333209997456789
~~~
