Score: $100$ points

### Problem Statement

IOI Center is a training center equipped with living facilities. There is a food court for large groups. In the food court, there are $N$ shops in a row, numbered from $1$ to $N$. In front of each shop, there is a queue for customers. Customers will make a line in each queue.

Today, there are $M$ groups staying in IOI Center, numbered from 1 to $M$. Members of groups will make lines in a rather strange way to enjoy chatting.

In this food court, shops sometimes give free desserts to customers in their queue. JOI-kun, working in this food court, has a job to record the groups the customers who receive free desserts belong to.

No customers were making lines in the queues when the shops were closed. Today, when the shops were open, $Q$ events happened in the queues. The $i$-th event is one of the following.

- **Join** For every shop whose number is between $L_{i}$ and $R_{i}$, inclusive, $K_{i}$ customers from the group $C_{i}$ joined the queue at its end.
- **Leave** For every shop whose number is between $L_{i}$ and $R_{i}$, inclusive, if there were $K_{i}$ or more customers in the queue, $K_{i}$ customers from the beginning of the queue left. Otherwise, all the customers in the queue left.
- **Service** If there were $B_{i}$ or more customers in the queue of the shop $A_{i}$, the shop gave a free dessert to the $B_{i}$-th customer from the beginning of the queue. Otherwise, the staff of the shop ate the free dessert.

Unfortunately, JOI-kun lost the record of the groups the customers who received the desserts belong to. He plans to recover the record using information of the above $Q$ events.

Write a program which, given the number of shops, groups, events, and the details of the events, determines for each “Service” whether a customer received a free dessert or not. If a customer received a free dessert, the program should find the index of the group the customer belongs to.

### Input

Read the following data from the standard input. Given values are all integers.

~~~
$N$ $M$ $Q$
(Query 1)
$\vdots$
(Query $Q$)
~~~

In (Query $i$) ($1 \le i \le Q$), space-separated integers are written. Let $T_{i}$ be the first integer. Then (Query $i$)

means as follows.

- If $T_{i} = 1$, four more integers $L_{i}, R_{i},C_{i}, K_{i}$ are written in this order. This means the $i$-th event is “Join”, and, for every shop whose number is between $L_{i}$ and $R_{i}$, inclusive, $K_{i}$ customers from the group $C_{i}$ joined the queue at its end.
- If $T_{i} = 2$, three more integers $L_{i}, R_{i}, K_{i}$ are written in this order. This means the $i$-th event is “Leave”, and, for every shop whose number is between $L_{i}$ and $R_{i}$, inclusive, if there were $K_{i}$ or more customers in the queue, $K_{i}$ customers from the beginning of the queue left. Otherwise, all the customers in the queue left.
- If $T_{i} = 3$, two more integers $A_{i}, B_{i}$ are written in this order. This means the $i$-th event is “Service”, and, if there were $B_{i}$ or more customers in the queue of the shop $A_{i}$, the shop gave a free dessert to the $B_{i}$-th customer from the beginning of the queue. Otherwise, the staff of the shop ate the free dessert.

### Output

Output one line to the standard output for each “Service”, i.e., for each event $i$ ($1 \le i \le Q$) with $T_{i} = 3$. If a customer received a free dessert in the $i$-th event, the output should contain the number which represents the group the customer belongs to. If the staff of the shop ate the free dessert in the event $i$, the output should contain `0`.

### Constraints

- $1 \le N \le 250\,000$.
- $1 \le M \le 250\,000$.
- $1 \le Q \le 250\,000$.
- $T_{i}$ is either 1, 2, or 3 ($1 \le i \le Q$).
- If $T_{i} = 1$, we have $1 \le L_{i} \le R_{i} \le N$, $1 \le C_{i} \le M$, $1 \le K_{i} \le 1\,000\,000\,000$ ($1 \le i \le Q$).
- If $T_{i} = 2$, we have $1 \le L_{i} \le R_{i} \le N$, $1 \le K_{i} \le 1\,000\,000\,000$ ($1 \le i \le Q$).
- If $T_{i} = 3$, we have $1 \le A_{i} \le N$, $1 \le B_{i} \le 1\,000\,000\,000\,000\,000 (= 10^{15})$ ($1 \le i \le Q$).
- $T_{i} = 3$ holds for at least one $i$ ($1 \le i \le Q$).

### Subtasks

1. ($2$ points) $N \le 2\,000$, $Q \le 2\,000$. For each $i$ ($1 \le i \le Q$) with $T_{i} = 1$ or $T_{i} = 2$, we have $K_{i} = 1$.
2. ($5$ points) $N \le 2\,000$, $Q \le 2\,000$.
3. ($7$ points) $N \le 65\,000$, $Q \le 65\,000$. For each $i$ ($1 \le i \le Q$) with $T_{i} = 1$, we have $R_{i} - L_{i} \le10$ and $K_{i} = 1$.
4. ($21$ points) $M = 1$.
5. ($15$ points) $N \le 65\,000$, $Q \le 65\,000$. For each event $i$ ($1 \le i \le Q$) with $T_{i} = 1$ or $T_{i} = 2$, we have $K_{i} = 1$.
6. ($13$ points) $N \le 65\,000$, $Q \le 65\,000$. $T_{i} = 1$ or $T_{i} = 3$ ($1 \le i \le Q$)．
7. ($26$ points) $N \le 65\,000$, $Q \le 65\,000$.
8. ($11$ points) No additional constraints.

### Sample Input and Output

### Sample Input 1

~~~
3 5 7
1 2 3 5 2
1 1 2 2 4
3 2 3
2 1 3 3
3 1 2
1 2 3 4 2
3 3 2
~~~

### Sample Output 1

~~~
2
0
4
~~~

In the following, a queue is written as an integer sequence representing the groups of the customers in the queue. For example, if there are $3$ customers in the queue of a shop and the groups they belong to are $1, 2, 2$ from the beginning of the queue, we write it as $(1, 2, 2)$. The empty queue is written as ().

In this sample input, 7 events happened.

1. The 1-th event is “Join”, and 2 customers from the group 5 joined the queue of each of the shops $2, 3$. After that, the queues of the shops $1$, $2$, 3 became $()$, $(5, 5)$, $(5, 5)$.
2. The 2-nd event is “Join”, and 4 customers from the group 2 joined the queue of each the shops $1$, $2$. After that, the queues of the shops $1$, $2$, 3 became $(2, 2, 2, 2)$, $(5, 5, 2, 2, 2, 2)$, $(5, 5)$.
3. The 3-rd event is “Service”. There were 6 customers in the queue of the shop 2. Since it is larger than or equal to 3, the third customer in the queue received a free dessert. Since this customer belongs to the group 2, output 2.
4. The 4-th event is “Leave”. For each of the shops $1, 2$, there were $3$ customers in the queue. Thus $3$ customers left the queue of each of the shops $1$, $2$. Since there were less than 3 customers in the queue of the shop $3$, all the customers in the queue left. After that, the queues of the shops $1, 2, 3$ became $(2)$, $(2, 2, 2)$, $()$.
5. The 5-th event is “Service”. There were 1 customer in the queue of the shop 1. Since it is smaller than 2, the staff of the shop 1 ate the free dessert. Hence output 0.
6. The 6-th event is “Join”, and 2 customers from the group 4 joined the queue of each of the shops $2$, $3$. After that, the queues of the shops $1$, $2$, 3 became $(2)$, $(2, 2, 2, 4, 4)$, $(4, 4)$.
7. The 7-th event is “Service”. There were 2 customers in the queue of the shop 3. Since it is larger than or equal to 2, the second customer received a free dessert. Since this customer belongs to the group 4, output 4.

This sample input satisfies the constraints of Subtasks $2$, $7$, $8$.

### Sample Input 2

~~~
3 4 7
1 1 2 1 1
1 1 3 4 1
2 2 3 1
2 1 3 1
1 1 2 2 1
3 1 1
3 3 2
~~~

### Sample Output 2

~~~
4
0
~~~

This sample input satisfies the constraints of Subtasks $1$, $2$, $3$, $5$, $7$, $8$.

### Sample Input 3

~~~
183326 218318 22
1 106761 160918 151683 574906362
3 68709 1
1 29240 156379 22166 957318472
1 14054 181502 82845 97183925
2 112033 122908 587808357
2 57819 160939 215041262
3 36674 524274467
1 35854 69866 32334 322730299
1 1384 7230 115069 454256926
1 44192 158235 8750 84192710
3 54457 1077490708
2 10592 110384 979714505
2 44594 79244 311724477
3 160965 97183926
1 88748 101697 39148 373927458
3 41166 58039001
1 91501 137591 205480 958877326
2 77775 169655 135756956
1 12497 57047 60918 15666764
1 47839 51716 144688 732270998
3 114514 774994894
3 48645 169986425
~~~

### Sample Output 3

~~~
0
22166
32334
0
82845
8750
60918
~~~
