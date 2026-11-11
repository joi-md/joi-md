Score: $100$ points

### Problem Statement

One day, JOI-kun got a time machine. He decided to go to Japan in the 9th century. He met Kukai, one of the most famous priests in Japan at the moment. The priest wanted to develop the new way of training.

His training is done in the following way:

- Kukai reads the sutra with $N$ sentences. These sentences are ordered, and he has to read in order.
- Each sentence has one integer between $1$ and $N$, inclusive. No two different sentences have the same number.
- He has to read the sentence with the integer $i$ ($1 \le i \le N$) in the $i$-th period among the $N$ equally divided time periods in a day. Each sentence is so short that it is always possible for him to read a sentence in a period.

Kukai wants to read the whole sutra as fast as possible. However, how many days it takes for him to finish depends on the integers on the sentences in the sutra. JOI-kun was asked by Kukai to count the number of possible ways of integers on the sentences that takes Kukai exactly $K$ days to finish reading, if he reads optimally.

### Task

Given the number of sentences $N$ and an integer $K$, calculate the number of possible ways of integers on the sentences that takes Kukai exactly $K$ days to finish reading, if he reads optimally, modulo 1 000 000 007.

### Input

Read the following data from the standard input.

- The first line of input contains $N$ and $K$, separated by a single space.

### Output

Print the number of possible ways of integers on the sentences that takes Kukai exactly $K$ days to finish reading, if he reads optimally, modulo 1 000 000 007.

### Constraints

All input data satisfy the following conditions.

- $1 \le N \le 100\,000$．
- $1 \le K \le N$．

### Subtask

There are 4 subtasks. The score and additional constraints of each subtask are as follows:

#### Subtask 1 [$4$ points]

- $N \le 10$．

#### Subtask 2 [$20$ points]

- $N \le 300$．

#### Subtask 3 [$25$ points]

- $N \le 3\,000$．

#### Subtask 4 [$51$ points]

There are no additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 2
~~~

### Sample Output 1

~~~
4
~~~

There are 4 possible ways of integers on the sentences that takes him 2 days to finish reading.

- The first sentence has 1, the next sentence has 3 and the last sentence has 2. He reads the first two sentences (numbered 1 and 3 each) on the first day, and the last sentence (numbered 2) on the second day.
- The first sentence has 2, the next sentence has 1 and the last sentence has 3.
- The first sentence has 2, the next sentence has 3 and the last sentence has 1.
- The first sentence has 3, the next sentence has 1 and the last sentence has 2.

### Sample Input 2

~~~
10 5
~~~

### Sample Output 2

~~~
1310354
~~~
