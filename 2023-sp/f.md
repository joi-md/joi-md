配点 : $100$ 点

<style>
.joisp2023-f-table table { position:relative;
    display: table;
    width: auto;
    max-width: none;
    overflow: visible;
    border-collapse: collapse;
    margin: 0;
}
.joisp2023-f-table table td {
    border: 1px solid #aaa;
    padding: 0.3em 0.6em;
    text-align: left;
    vertical-align: top;
}
.joisp2023-f-table table.mizuyokan-figure {
    display: table;
    width: 480px;
    table-layout: fixed;
    margin: 0.2em 0;
}
.joisp2023-f-table table.mizuyokan-figure td {
    text-align: center;
}
.joisp2023-f-table table.mizuyokan-figure .join-left {
    border-left: 0;
}
.joisp2023-f-table table.mizuyokan-figure .join-right {
    border-right: 0;
}

.joisp2023-f-table {position:relative;max-width:100%;overflow-x:auto;margin:1em 0;}
</style>

### 問題文

水ようかんとは，おもに小豆からなる餡を型に流し込んで寒天で固めることにより作られる和菓子である．

いま，JOI 君の手元には水ようかん製造機がある．この水ようかん製造機は横長の直方体の形をした水ようかんを製造し，その水ようかんには縦方向の切れ目が $N - 1$ 箇所に入る．水ようかんの長さと切れ目の位置は，水ようかん製造機に設定されている $N$ 個のパラメータ $d_1, d_2, \ldots, d_N$ によって定まる．水ようかんの長さは $d_1 + d_2 + \cdots + d_N$ であり，左から $i - 1$ 番目と $i$ 番目 ($1 \leqq i \leqq N$) の切れ目の間の長さは $d_i$ である．ただし，水ようかんの左端を $0$ 番目の切れ目，右端を $N$ 番目の切れ目とみなす．はじめ，水ようかん製造機のパラメータは $d_i = L_i$ ($1 \leqq i \leqq N$) に設定されている．

JOI 君は $Q$ 回のお茶会を計画している．$j$ 回目 ($1 \leqq j \leqq Q$) のお茶会の内容は整数 $X_j, Y_j, A_j, B_j$ で表され，その手順は以下の通りである．

1. 水ようかん製造機のパラメータ $d_{X_j}$ の値を $Y_j$ に更新する．
2. 水ようかん製造機で，新しい水ようかんを $1$ つ製造し，$A_j$ 番目の切れ目から $B_j$ 番目の切れ目の間の部分を切り出し，お茶会に使用する．残りの部分は JOI 君が食べる．
3. お茶会に使用する部分の水ようかんを，いくつかの切れ目に沿って $1$ 個以上のピースに切り分ける．このとき，得られるピースの長さをそのピースのもともとの位置が左にあるものから順に並べた数列がジグザグになる，という条件を満たすようにする．

ただし，数列がジグザグであるとは，数列の要素が増加と減少を交互に繰り返していることをいう．例えば，数列 $(2, 9, 2, 7)$，$(7, 1, 9, 4, 6)$，$(5)$，$(2, 1)$ はジグザグであるが，数列 $(1, 2, 3)$，$(7, 1, 4, 4, 6)$，$(2, 2)$ はジグザグではない．厳密には，数列 $(x_1, x_2, \ldots, x_m)$ がジグザグであるとは，その数列が以下の $2$ つの条件のいずれかを満たすことをいう．

- $k = 1, 2, \ldots, m - 1$ に対して，$k$ が奇数ならば $x_k < x_{k+1}$ を，$k$ が偶数ならば $x_k > x_{k+1}$ を満たす．
- $k = 1, 2, \ldots, m - 1$ に対して，$k$ が奇数ならば $x_k > x_{k+1}$ を，$k$ が偶数ならば $x_k < x_{k+1}$ を満たす．

JOI 君は，できるだけ多くの友達に水ようかんをふるまうため，それぞれのお茶会の手順 $3$. において得られるピースの個数をできるだけ多くしたい．

水ようかん製造機のパラメータの初期値とお茶会の計画の情報が与えられるので，それぞれのお茶会において，条件を満たすような切り分け方で得られるピースの個数の最大値を求めるプログラムを作成せよ．なお，この問題の制約下では，条件を満たすように水ようかんを切り分ける方法が必ず存在する．

---

### 入力

入力は以下の形式で標準入力から与えられる．

~~~
$N$
$L_1$ $L_2$ $\cdots$ $L_N$
$Q$
$X_1$ $Y_1$ $A_1$ $B_1$
$X_2$ $Y_2$ $A_2$ $B_2$
$\vdots$
$X_Q$ $Y_Q$ $A_Q$ $B_Q$
~~~

### 出力

標準出力に $Q$ 行出力せよ．$j$ 行目 ($1 \leqq j \leqq Q$) には，$j$ 回目のお茶会において，条件を満たすような切り分け方で得られるピースの個数の最大値を出力せよ．

---

### 制約

- $1 \leqq N \leqq 250\,000$．
- $1 \leqq L_i \leqq 10^9$ ($1 \leqq i \leqq N$)．
- $1 \leqq Q \leqq 50\,000$．
- $1 \leqq X_j \leqq N$ ($1 \leqq j \leqq Q$)．
- $1 \leqq Y_j \leqq 10^9$ ($1 \leqq j \leqq Q$)．
- $0 \leqq A_j < B_j \leqq N$ ($1 \leqq j \leqq Q$)．
- 入力される値はすべて整数である．

### 小課題

1. ($6$ 点) $N \leqq 200$，$Q \leqq 10$．
2. ($9$ 点) $N \leqq 2\,000$，$Q \leqq 10$．
3. ($13$ 点) $Q \leqq 10$．
4. ($32$ 点) $Y_j = L_{X_j}$ ($1 \leqq j \leqq Q$)．
5. ($29$ 点) $L_i \leqq 120\,000$ ($1 \leqq i \leqq N$)，$Y_j \leqq 120\,000$ ($1 \leqq j \leqq Q$)．
6. ($11$ 点) 追加の制約はない．

---

### 入力例 1

~~~
6
5 6 8 7 4 9
1
6 9 0 5
~~~

### 出力例 1

~~~
3
~~~

$1$ 回目のお茶会において，水ようかん製造機のパラメータは $(d_1, d_2, d_3, d_4, d_5, d_6) = (5, 6, 8, 7, 4, 9)$ となる．お茶会には，表 $1$ に示すような $0$ 番目の切れ目と $5$ 番目の切れ目の間の部分を使用する．

表 $1$　お茶会で使用する水ようかん．

<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td>$5$</td><td>$6$</td><td>$8$</td><td>$7$</td><td>$4$</td></tr></tbody>
</table>

</div>

例えば，表 $2$ のような切り分け方が考えられる．

表 $2$　水ようかんの切り分け方の例 $3$ つ．上から方法 $1, 2, 3$ とする．

<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td>$5$</td><td class="join-right">$6$</td><td class="join-left">$8$</td><td>$7$</td><td>$4$</td></tr></tbody>
</table>

</div>
<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td class="join-right">$5$</td><td class="join-left">$6$</td><td>$8$</td><td class="join-right">$7$</td><td class="join-left">$4$</td></tr></tbody>
</table>

</div>
<div class="joisp2023-f-table" markdown="1">

<table class="mizuyokan-figure">
<colgroup><col style="width: 16.6667%;"><col style="width: 20%;"><col style="width: 26.6666%;"><col style="width: 23.3334%;"><col style="width: 13.3333%;"></colgroup>
<tbody><tr><td class="join-right">$5$</td><td class="join-left join-right">$6$</td><td class="join-left join-right">$8$</td><td class="join-left join-right">$7$</td><td class="join-left">$4$</td></tr></tbody>
</table>

</div>

方法 $1$ ではピースの長さが順に $5, 14, 7, 4$ となっており，この数列はジグザグではないので条件を満たさない．一方，方法 $2$ ではピースの長さが順に $11, 8, 11$ となっており，この数列はジグザグであるため条件を満たす．また，方法 $3$ ではピースの長さが順に $30$ となっており，この数列もジグザグであるため条件を満たす．

方法 $2$ のようにして，条件を満たすような切り分け方で $3$ 個のピースを得ることができる．また，条件を満たすような切り分け方で $4$ 個以上のピースを得ることはできない．よって，$1$ 行目には $3$ を出力する．

この入力例はすべての小課題の制約を満たす．

---

### 入力例 2

~~~
4
6 2 3 6
3
3 2 1 3
4 5 1 4
1 1 0 4
~~~

### 出力例 2

~~~
1
2
3
~~~

$1$ 回目のお茶会では，お茶会に使用する水ようかんの長さは $4$ であり，左から長さ $2$ の位置に切れ目がある．このとき，切り分けずにそのまま使用することで $1$ 個のピースが得られる．得られるピースの長さを順に並べた数列は $(4)$ であり，これはジグザグである．これよりも多くのピースを得ることはできないので，$1$ を出力する．

$2$ 回目のお茶会では，お茶会に使用する水ようかんの長さは $9$ であり，左から長さ $2, 4$ の位置に切れ目がある．このとき，左から長さ $4$ の位置の切れ目で切ることで，$2$ 個のピースが得られる．得られるピースの長さを順に並べた数列は $(4, 5)$ であり，これはジグザグである．これよりも多くのピースを得ることはできないので，$2$ を出力する．

$3$ 回目のお茶会では，お茶会に使用する水ようかんの長さは $10$ であり，左から長さ $1, 3, 5$ の位置に切れ目がある．このとき，左から長さ $3, 5$ の位置の切れ目で切ることで，$3$ 個のピースが得られる．得られるピースの長さを順に並べた数列は $(3, 2, 5)$ であり，これはジグザグである．これよりも多くのピースを得ることはできないので，$3$ を出力する．

この入力例は小課題 $1, 2, 3, 5, 6$ の制約を満たす．

<style>
.joisp2023-f-table .katex {position:relative;}
</style>
