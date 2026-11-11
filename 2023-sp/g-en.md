Score: $100$ points

### Problem Statement

On the stage, $2N$ beavers are standing in a row. They are members of the chorus. Each beaver sings either the alto part or the bass part of the chorus. This information is given by a string $S$. Precisely, the $i$-th beaver ($1 \le i \le 2N$) from the stage right (i.e., from left when seen from the audience seats) sings the alto part if the $i$-th character of $S$ is `A`. The $i$-th beaver sings the bass part if the $i$-th character of $S$ is `B`. There are $N$ beavers singing the alto part, and $N$ beavers singing the bass part.

From now, the beavers will sing $K$ songs. However, since all the songs are very difficult, each beaver sings exactly one song only, and does not sing other songs. Moreover, in order to make singing voice more beautiful, for every song, the following conditions should be satisfied.

- At least one beaver sings the song.
- The number of beavers singing the alto part of the song is equal to the number of beavers singing the bass part of the song.
- If we consider the beavers singing the song only, every alto beaver stands the stage right of every bass beaver.

Bitaro, the conductor, tried to find a way to allot songs to beavers which satisfies the conditions. Since Bitaro is bright, he notices that it might be impossible to allot songs to beavers.

In order to cope with this issue, Bitaro will perform the following operation several times so that there is a way to allot songs to beavers which satisfies the conditions.

- Swap the position of two adjacent beavers.

Since Bitaro thinks efficiency is important, he wants to minimize the number of operations. However, it turns out to be a surprisingly difficult problem. Since you are a brilliant programmer, Bitaro asks you to solve this problem.

Write a program which, given information of the chorus and the number of songs $K$, calculates the minimum number of operations Bitaro needs to perform. Note that, under the constraints of this task, it is possible to perform the operations several times so that there is a way to allot songs to beavers which satisfies the conditions.

---

### Input

Read the following data from the standard input.

~~~
$N$ $K$
$S$
~~~

### Output

Write one line to the standard output. The output should contain the minimum number of operations Bitaro needs to perform.

### Constraints

- $1 \le N \le 1\,000\,000$.
- $1 \le K \le N$.
- $S$ is a string of length $2N$. In the string $S$, the character `A` appears $N$ times, and the character `B` appears $N$ times.
- $N, K$ are integers.

### Subtasks

1. ($16$ points) $N \le 10$.
2. ($24$ points) $N \le 500$.
3. ($21$ points) $N \le 5\,000$.
4. ($26$ points) $N \le 100\,000$.
5. ($13$ points) No additional constraints.

---

### Sample Input 1

~~~
5 2
AABABABBAB
~~~

### Sample Output 1

~~~
2
~~~

In this sample input, for example, Bitaro can perform the following operations. Here, the underline denotes the positions of the two beavers swapped by Bitaro.

1. Swap the third beaver and the fourth beaver from the stage right.

    After this operation, the string which denotes the parts of the beavers from the stage right becomes “AA<u>AB</u>BABBAB”.

2. Swap the eighth beaver and the ninth beaver from the stage right.

    After this operation, the string which denotes the parts of the beavers from the stage right becomes “AAABBAB<u>AB</u>B”.

After these operations, Bitaro can allot songs to beavers as follows.

- From the stage right, the $1, 2, 3, 4, 5, 7$-th beavers sing the first song.
- From the stage right, the $6, 8, 9, 10$-th beavers sing the second song.

This way to allot songs to beavers satisfies the conditions.

If the number of operations is less than $2$, there does not exist a way to allot songs to beavers which satisfies the conditions. Therefore, output $2$.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 2

~~~
5 3
AABABABBAB
~~~

### Sample Output 2

~~~
0
~~~

Without performing operations, Bitaro can allot songs to beavers as follows.

- From the stage right, the $1, 2, 3, 5$-th beavers sing the first song.
- From the stage right, the $4, 6, 7, 8$-th beavers sing the second song.
- From the stage right, the $9, 10$-th beavers sing the third song.

This way to allot songs to beavers satisfies the conditions. Therefore, output $0$.

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 3

~~~
3 1
BBBAAA
~~~

### Sample Output 3

~~~
9
~~~

This sample input satisfies the constraints of all the subtasks.

---

### Sample Input 4

~~~
10 3
ABABBBBABBABABABAAAA
~~~

### Sample Output 4

~~~
37
~~~

This sample input satisfies the constraints of all the subtasks.
