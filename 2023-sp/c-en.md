Score: $100$ points

### Problem Statement

Passport is a certificate which is used worldwide when a traveler enters foreign countries.

In a planet, there are $N$ countries, numbered from $1$ to $N$. Each country issues a passport. When a traveler has a passport issued by the country $i$ ($1 \leq i \leq N$), the traveler can enter the countries $L_i, L_i + 1, \ldots, R_i$. Here, it is guaranteed that the traveler can enter the country where the passport was issued. Namely, $L_i \leq i \leq R_i$ is satisfied.

You have a friend who likes traveling. Although he dreams of traveling around the world, he does not have a passport in the beginning. Thus, he plans to visit all of the $N$ countries by repeating the following two actions.

- He gets a passport issued by the country where he is currently staying.
- He moves to a country where he can enter using a passport he currently has.

When you hear about his plan, you are wondering whether it is possible to realize the plan, and, if it is possible, what is the minimum number of passports he needs to get. Since you do not know where he lives, you consider $Q$ possible countries $X_1, X_2, \ldots, X_Q$ where he lives.

Write a program which, given information of the passports and the possibilities of his living place, for each possibility, determines whether it is possible for him to visit all of the $N$ countries, and, if it is possible, calculates the minimum number of passports he needs to get.

---

### Input

Read the following data from the standard input.

~~~
$N$
$L_1$ $R_1$
$L_2$ $R_2$
$\vdots$
$L_N$ $R_N$
$Q$
$X_1$
$X_2$
$\vdots$
$X_Q$
~~~

### Output

Write $Q$ lines to the standard output. The $j$-th line ($1 \leq j \leq Q$) corresponds to the case where your friend lives in the country $X_j$. If it is possible for him to visit all of the $N$ countries, this line should contain the minimum number of passports he needs to get. Otherwise, this line should contain `-1`.

---

### Constraints

- $2 \leq N \leq 200\,000$.
- $1 \leq L_i \leq i \leq R_i \leq N$ ($1 \leq i \leq N$).
- $1 \leq Q \leq N$.
- $1 \leq X_j \leq N$ ($1 \leq j \leq Q$).
- $X_j < X_{j+1}$ ($1 \leq j \leq Q - 1$).
- Given values are all integers.

### Subtasks

1. ($6$ points) $Q = 1$, $X_1 = 1$.
2. ($16$ points) $N \leq 300$, $Q = 1$.
3. ($24$ points) $N \leq 2\,500$, $Q = 1$.
4. ($8$ points) $N \leq 2\,500$.
5. ($46$ points) No additional constraints.

---

### Sample Input 1

~~~
4
1 3
2 4
2 3
4 4
1
1
~~~

### Sample Output 1

~~~
2
~~~

Assume that your friend lives in the country $X_1 = 1$. It is possible for him to visit all of the $4$ countries if he acts in the following way. Then, he gets $2$ passports.

1. He gets a passport issued by the country $1$.
2. Using the passport issued by the country $1$, he moves to the country $2$.
3. He gets a passport issued by the country $2$.
4. Using the passport issued by the country $1$, he moves to the country $3$.
5. Using the passport issued by the country $2$, he moves to the country $4$.

Since it is impossible to realize the plan if he gets less than or equal to $1$ passport, output $2$.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 2

~~~
5
1 5
2 4
2 3
3 5
1 5
1
3
~~~

### Sample Output 2

~~~
4
~~~

Assume that your friend lives in the country $X_1 = 3$. It is possible for him to visit all of the $5$ countries if he acts in the following way. Then, he gets $4$ passports.

1. He gets a passport issued by the country $3$.
2. Using the passport issued by the country $3$, he moves to the country $2$.
3. He gets a passport issued by the country $2$.
4. Using the passport issued by the country $2$, he moves to the country $4$.
5. He gets a passport issued by the country $4$.
6. Using the passport issued by the country $4$, he moves to the country $5$.
7. He gets a passport issued by the country $5$.
8. Using the passport issued by the country $5$, he moves to the country $1$.

Since it is impossible to realize the plan if he gets less than or equal to $3$ passports, output $4$.

This sample input satisfies the constraints of Subtasks $2, 3, 4, 5$.

---

### Sample Input 3

~~~
5
1 1
2 3
1 5
3 4
5 5
5
1
2
3
4
5
~~~

### Sample Output 3

~~~
-1
2
1
2
-1
~~~

For example, if your friend lives in the country $X_3 = 3$, it is possible to realize the plan if he gets a passport issued by the country $3$, and uses it to visit the countries $1, 2, 4, 5$ in this order. Therefore, output $1$ in the third line.

On the other hand, if your friend lives in the country $X_5 = 5$, it is impossible for him to enter other countries even if he gets a passport issued by the country $5$. Thus, he cannot realize the plan. Therefore, output `-1` in the fifth line.

This sample input satisfies the constraints of Subtasks $4, 5$.

---

### Sample Input 4

~~~
4
1 2
1 2
3 4
3 4
4
1
2
3
4
~~~

### Sample Output 4

~~~
-1
-1
-1
-1
~~~

This sample input satisfies the constraints of Subtasks $4, 5$.
