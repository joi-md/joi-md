配点 : $100$ 点

### 問題文

JOI ちゃんは友達とマスコットで遊んでいた．楽しかった時間はあっという間に過ぎ去り，友達が帰った今は後片付けの時間である．

JOI ちゃんはマスコットを $R \times C$ 個持っていて，片付けには縦 $R$ 行，横 $C$ 列のマスが並んだ長方形の領域を使う．$1$ 個のマスには，$1$ 個のマスコットが置かれる．上から $A$ 行目，左から $B$ 列目のマスのことを $(A, B)$ と表現することにする．片付けが始まる段階で既に $N$ 個のマスコットが置かれている．片付けを始めるときに少なくとも $1$ 個はマスコットが置かれていないマスがある．

JOI ちゃんはマスコットを $1$ 個ずつ置いて片付けをする．新しくマスコットを $1$ 個置いたときに，マスコットのあるマス全体が $1$ 個の長方形となれば，JOI ちゃんは少し幸せになる（最初の状態でマスコットのあるマス全体が $1$ 個の長方形になっていた場合を除く）．マスコットのあるマス全体が $1$ 個の長方形となるとは，ある $4$ つの整数 $r_{1}, r_{2}, c_{1}, c_{2}$ ($1 \leqq r_{1} \leqq r_{2} \leqq R$ かつ $1 \leqq c_{1} \leqq c_{2} \leqq C$) が存在して，$r_{1} \leqq i \leqq r_{2}$ かつ $c_{1} \leqq j \leqq c_{2}$ を満たすどのマス $(i, j)$ にもマスコットがあり，さらに他のいずれのマスにもマスコットがないことをいう．少し幸せになる回数が多ければ多いほど JOI ちゃんは今晩ぐっすり眠ることができる．

マスコットを置く際，置くマスコットの種類は区別しないものとする．少し幸せになる回数が最大となるような置き方は全部で何通りあるだろうか．

### 課題

マスコットを片付ける場所と既に置かれているマスコットの情報が与えられると，少し幸せになる回数が最大となるようなマスコットの置き方の個数を $1\,000\,000\,007$ で割った余りを求めるプログラムを作成せよ．

### 入力

標準入力から以下の入力を読み込め．

- $1$ 行目には整数 $R,C$ が空白を区切りとして書かれている．$R$ はマスコットを置く場所の行数を，$C$ はマスコットを置く場所の列数を表す．
- $2$ 行目には整数 $N$ が書かれている．$N$ は片付けが始まる段階で既に置かれているマスコットの個数を表す．
- 続く $N$ 行には，最初から置かれているマスコットの情報が書かれている．これらの行の $i$ 行目には整数 $A_{i}, B_{i}$ が空白を区切りとして書かれている．これはマス $(A_{i}, B_{i})$ に最初からマスコットが置かれていることを表す．これらの数字の組は重複しない．

### 出力

標準出力に，考えられる置き方の個数を $1\,000\,000\,007$ で割った余りを出力せよ．

### 制約

すべての入力データは以下の条件を満たす．

- $2 \leqq R \leqq 3\,000$．
- $2 \leqq C \leqq 3\,000$．
- $1 \leqq N \leqq 100\,000$．

### 小課題

#### 小課題 1 [$10$ 点]

以下の条件を満たす．

- $R \leqq 3$．
- $C \leqq 3$．

#### 小課題 2 [$30$ 点]

以下の条件を満たす．

- $R \leqq 50$．
- $C \leqq 50$．

#### 小課題 3 [$60$ 点]

追加の制限はない．

### 入出力例

### 入力例 1

~~~
2 3
2
1 2
2 2
~~~

### 出力例 1

~~~
8
~~~

初期状態で $6$ 個のマスは次のようになっている（△は初期状態でマスコットが置いてあるマス）．

<p><img src="https://img.atcoder.jp/joisc2013-day2/mascots-ja-p7-group1.png" alt="図" style="max-width:100%;height:auto;"></p>

$6$ マスのうち $(1, 2)$ と $(2, 2)$ には既にマスコットが置いてある．少し幸せになる回数の最大値は $2$ である．少し幸せになる回数が $2$ 回となる配置は次の $8$ 通りである（数字は新しくマスコットを置く順番を表す）．

<div class="joisc2013-day2-mascots-ja-table mascots-boards" markdown="1">
<table>
<tr><td>$1$</td><td>△</td><td>$3$</td></tr>
<tr><td>$2$</td><td>△</td><td>$4$</td></tr>
</table>
<table>
<tr><td>$1$</td><td>△</td><td>$4$</td></tr>
<tr><td>$2$</td><td>△</td><td>$3$</td></tr>
</table>
<table>
<tr><td>$2$</td><td>△</td><td>$3$</td></tr>
<tr><td>$1$</td><td>△</td><td>$4$</td></tr>
</table>
<table>
<tr><td>$2$</td><td>△</td><td>$4$</td></tr>
<tr><td>$1$</td><td>△</td><td>$3$</td></tr>
</table>
<table>
<tr><td>$3$</td><td>△</td><td>$1$</td></tr>
<tr><td>$4$</td><td>△</td><td>$2$</td></tr>
</table>
<table>
<tr><td>$3$</td><td>△</td><td>$2$</td></tr>
<tr><td>$4$</td><td>△</td><td>$1$</td></tr>
</table>
<table>
<tr><td>$4$</td><td>△</td><td>$1$</td></tr>
<tr><td>$3$</td><td>△</td><td>$2$</td></tr>
</table>
<table>
<tr><td>$4$</td><td>△</td><td>$2$</td></tr>
<tr><td>$3$</td><td>△</td><td>$1$</td></tr>
</table>
</div>

$8$ 通りの例のいずれにおいても $2$ 番目のマスコットを置いたときにマスコットのあるマスが $2 \times 2$ の長方形に，$4$ 番目のマスコットを置いたときにマスコットのあるマスが $2 \times 3$ の長方形になり，全体で $2$ 回 JOI ちゃんは少し幸せになる．

### 入力例 2

~~~
3 3
2
1 1
3 3
~~~

### 出力例 2

~~~
5040
~~~

どのような順番で配置しても少し幸せになる回数は $1$ 回である．

<style>
.joisc2013-day2-mascots-ja-table { position:relative;max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2013-day2-mascots-ja-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2013-day2-mascots-ja-table td { border:1px solid #aaa;width:2em;height:2em;padding:0;text-align:center;vertical-align:middle; }
.joisc2013-day2-mascots-ja-table .katex { position:relative; }
.joisc2013-day2-mascots-ja-table.mascots-boards { display:flex;flex-wrap:wrap;align-items:flex-start;gap:1em; }
.joisc2013-day2-mascots-ja-table.mascots-boards table { flex:none;table-layout:fixed;width:6em; }
</style>
