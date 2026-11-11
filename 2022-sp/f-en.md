Score: $100$ points

### Problem Statement

There are $N$ beavers in JOI University. All of them are working on competitive programming. Each beaver has three abilities: consideration skill, implementation skill, and luck. If the value of an ability is large, it means the level of the ability is high. For each $i$ ($1 \le i \le N$), the consideration skill of the beaver $i$ is $X_{i}$, the implementation skill of the beaver $i$ is $Y_{i}$, and the luck of the beaver $i$ is $Z_{i}$.

This year, the beavers of JOI University will attend a programming contest for teams. In this contest, the participants solve programming tasks, and each team consists of three beavers. Bitaro is a coach of JOI University. Since teamwork is very important, Bitaro decided to choose three beavers among the $N$ beavers and make a team so that the following condition is satisfied.

- **Condition** Every member in the team has an advantage. This means every member has an ability whose value is strictly larger than the values of the same ability of the other two members.

Among possible teams satisfying the above condition, Bitaro wants to choose a team whose total ability is as large as possible. Here, the total ability of a team is defined as the sum of the maximum value of the consideration skill of the members of the team, the maximum value of the implementation skill of the members of the team, and the maximum value of the luck of the members of the team.

Write a program which, given information of the abilities of each beaver, determines whether it is possible to make a team satisfying the above condition, and, if it is possible to make a team, calculate the maximum possible value of the total ability of a team.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$
$X_{1}$ $Y_{1}$ $Z_{1}$
$X_{2}$ $Y_{2}$ $Z_{2}$
$\vdots$
$X_{N}$ $Y_{N}$ $Z_{N}$
~~~

### Output

Write one line to the standard output. The output should contain the maximum possible value of the total ability of a team. If it is impossible to make a team satisfying the condition, output `-1`.

### Constraints

- $3 \le N \le 150\,000$.
- $1 \le X_{i} \le 100\,000\,000 (= 10^{8})$ ($1 \le i \le N$).
- $1 \le Y_{i} \le 100\,000\,000 (= 10^{8})$ ($1 \le i \le N$).
- $1 \le Z_{i} \le 100\,000\,000 (= 10^{8})$ ($1 \le i \le N$).

### Subtasks

1. ($8$ points) $N \le 300$.
2. ($29$ points) $N \le 4\,000$.
3. ($9$ points) $X_{i} \le 5$，$Y_{i} \le 5$，$Z_{i} \le 5$ ($1 \le i \le N$).
4. ($9$ points) $X_{i} \le 20$，$Y_{i} \le 20$，$Z_{i} \le 20$ ($1 \le i \le N$).
5. ($9$ points) $X_{i} \le 300$，$Y_{i} \le 300$，$Z_{i} \le 300$ ($1 \le i \le N$).
6. ($9$ points) $X_{i} \le 4\,000$，$Y_{i} \le 4\,000$，$Z_{i} \le 4\,000$ ($1 \le i \le N$).
7. ($27$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
5
3 1 4
2 3 1
1 5 5
4 4 2
5 2 3
~~~

### Sample Output 1

~~~
13
~~~

If we make a team consisting of the beaver $1$, the beaver $4$, and the beaver $5$, the condition of the task is satisfied.

- The value of the luck of the beaver 1 is strictly larger than the values of the luck of the other two members.
- The value of the implementation skill of the beaver 4 is strictly larger than the values of the implementation skill of the other two members.
- The value of the consideration skill of the beaver 5 is strictly larger than the values of the consideration skill of the other two members.

Then, the maximum values of the consideration skill, implementation skill, luck of the members of the team are $5$, $4$, $4$, respectively. The total ability of the team is 13. Since it is impossible to make a team whose total ability is larger than or equal to 14, output 13.

Note that if we make a team consisting of the beaver $1$, the beaver $3$, and the beaver $5$, the total ability becomes 15. However, since the beaver 1 does not have an ability whose value is strictly larger than the values of the same ability of the other two members, the condition of the task is not satisfied.

This sample input satisfies the constraints of all the subtasks.

### Sample Input 2

~~~
8
1 1 1
1 1 5
1 5 1
5 1 1
1 5 5
5 1 5
5 5 1
5 5 5
~~~

### Sample Output 2

~~~
15
~~~

If we make a team consisting of the beaver 2, the beaver 3, and the beaver 4, the total ability of the team is $15$. Since it is impossible to make a team whose total ability is larger than or equal to 16, output 15. This sample input satisfies the constraints of all the subtasks.

### Sample Input 3

~~~
4
1 2 3
1 2 3
1 2 3
1 2 3
~~~

### Sample Output 3

~~~
-1
~~~

Since it is impossible to make a team satisfying the condition of the task, output `-1`.

This sample input satisfies the constraints of all the subtasks.
