Score: $100$ points

### Problem Statement

Joitter is a trending social media where you can share your memories with your friends.

In Joitter, you can follow other users. For example, when a user $a$ follows another user $b$, user $a$ can read user $b$’s posts on the timeline. In this case, it is possible that user $b$ follows back user $a$ or not. However, it is impossible that user $a$ follows him/herself or user $a$ follows a particular user $b$ more than once.

$N$ users, consisting of user 1, user 2, $\ldots$, user $N$, have started using Joitter. At first, none of them follows any other users.

From now on, for $M$ days, following events occur: user $A_{i}$ follows user $B_{i}$ on the $i$-th day ($1 \le i \le M$).

The official of Joitter is planning to hold a social exchange event on its service once during the $M$ days. A social exchange event occurs as follows:

1. Select one user. We will call the selected user $x$.
2. Select one user being followed by $x$ at the moment. We will call the selected user $y$.
3. Select one user $z$ such that: $z$ is different from $x, x$ is not following $z, y$ is following $z$, and $z$ is following $y$.
4. $x$ follows $z$.
5. Reiterate these processes until it is impossible to select a tuple $(x, y, z)$.

The official of Joitter still has not decided when to hold the social exchange event. So, they would like to know the maximum value of the total sum of the number of users each user follows after the social exchange event, if it happens right after the following event of the $i$-th day, for each $i$ ($1 \le i \le M$). We assume that the social exchange event finishes before the following event on the next day.

Write a program that, given the number of users and following events during $M$ days, calculates the maximum value of the total sum of the number of users each user follows after the social exchange event, if the social exchange event falls right after the following event of the $i$-th day, for each $i$ ($1 \le i \le M$).

### Input

Read the following data from the standard input. All the values in the input are integers.

~~~
$N$ $M$
$A_{1}$ $B_{1}$
$\vdots$
$A_{M}$ $B_{M}$
~~~

### Output

Write $M$ lines to the standard output. In the $i$-th line ($1 \le i \le M$), output the maximum value of the total sum of the number of users each user follows after the social exchange event, if the social exchange event falls right after the following event of day $i$.

### Constraints

- $2 \le N \le 100\,000$.
- $1 \le M \le 300\,000$.
- $1 \le A_{i} \le N$ ($1 \le i \le M$).
- $1 \le B_{i} \le N$ ($1 \le i \le M$).
- $A_{i} \ne B_{i}$ ($1 \le i \le M$).
- $(A_{i}, B_{i}) \ne (A_{j}, B_{j})$ ($1 \le i < j \le M$).

### Subtasks

1. ($1$ point) $N \le 50$.
2. ($16$ points) $N \le 2000$.
3. ($83$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
4 6
1 2
2 3
3 2
1 3
3 4
4 3
~~~

### Sample Output 1

~~~
1
2
4
4
5
9
~~~

- On day 1, user 1 follows user 2. Nobody would follow anyone else in the social exchange event falling on the day, so the total sum is 1.
- On day 2, user 2 follows user 3. Nobody would follow anyone else in the social exchange event falling on the day, so the total sum is 2.
- On day 3, user 3 follows user 2. User 1 would follow user 3 in the social exchange event falling on the day. In this case, the total sum is 4 and this is the largest possible value of the total sum.
- On day 4, user 1 follows user 3. Nobody would follow anyone else in the social exchange event falling on the day, so the total sum is 4.
- On day 5, user 3 follows user 4. Nobody would follow anyone else in the social exchange event falling on the day, so the total sum is 5.
- On day $6$, user $4$ follows user $3$. User $1$ would follow user $4$, user $2$ would follow user $4$, and user $4$ would follow user 2 in the social exchange event falling on the day. In this case, the total sum is 9 and this is the largest possible value of the total sum.

### Sample Input 2

~~~
6 10
1 2
2 3
3 4
4 5
5 6
6 5
5 4
4 3
3 2
2 1
~~~

### Sample Output 2

~~~
1
2
3
4
5
7
11
17
25
30
~~~
