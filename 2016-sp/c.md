配点 : $100$ 点

### 問題文

JOI 君は，縦に $3$ マス，横に $N$ マスの方眼状のボードと，いくつかのコマを使ってゲームをしている．ゲームの初期状態において，$1$ 個以上のマスにはコマが置かれており，また，$1$ 個以上のマスにはコマが置かれていない．

このゲームの目的は，コマの置かれていないマスにコマを $1$ 個ずつ置いていくことで，ボード上のすべてのマスにコマが置かれた状態にすることである．ただし，あるマスにコマを置ける条件は，以下のいずれかが満たされることである．

- そのマスの一つ上のマスと一つ下のマスの両方にコマが置かれている．
- そのマスの一つ左のマスと一つ右のマスの両方にコマが置かれている．

JOI 君はゲームの初期状態から始めて，目的を達成するまでにコマを置いていく順番が全部で何通りあるのかが気になった．ただしこの値は非常に大きくなることがある．

あなたの課題は，JOI 君の代わりに，ゲームの初期状態から目的を達成するまでにコマを置いていく順番の個数を $1\,000\,000\,007$ で割った余りを求めることである．

### 課題

ゲームの初期状態が与えられたとき，目的を達成するまでにコマを置いていく順番の個数を $1\,000\,000\,007$ で割った余りを求めるプログラムを作成せよ．

### 入力

標準入力から以下のデータを読み込め．

- $1$ 行目には，整数 $N$ が書かれている．これは，ゲームで使うボードの大きさが，縦に $3$ マス，横に $N$ マスであることを表す．
- 続く $3$ 行のそれぞれには，$N$ 文字からなる文字列が書かれている．各文字は ‘`o`’ もしくは ‘`x`’ である．この $3$ 行のうちの $i$ 行目 ($1 \leqq i \leqq 3$) の左から $j$ 文字目 ($1 \leqq j \leqq N$) は，ボードの上から $i$ 行目，左から $j$ 列目のマスの初期状態を表す．この文字が ‘`o`’ のときは，ゲームの初期状態においてそのマスにコマが置かれていることを表す．また，‘`x`’ のときは，ゲームの初期状態においてそのマスにコマが置かれていないことを表す．

### 出力

標準出力に，目的を達成するまでにコマを置いていく順番の個数を $1\,000\,000\,007$ で割った余りを $1$ 行で出力せよ．

### 制約

すべての入力データは以下の条件を満たす．

- $1 \leqq N \leqq 2\,000$．

### 小課題

#### 小課題 1 [$10$ 点]

以下の条件を満たす．

- ゲームの初期状態において，コマの置かれていないマスの個数は $16$ 個以下である．
- $N \leqq 30$．

#### 小課題 2 [$12$ 点]

- ゲームの初期状態において，コマの置かれていない各マスについて，そのマスに上下左右に隣り合うマスのうちコマの置かれていないマスの個数が $2$ 個以下である．

#### 小課題 3 [$20$ 点]

以下の条件を満たす．

- ゲームの初期状態において，コマの置かれていないマスが縦に $3$ 個連続して並ぶことはない．
- $N \leqq 30$．

#### 小課題 4 [$38$ 点]

- $N \leqq 300$ を満たす．

#### 小課題 5 [$20$ 点]

追加の制約はない．

### 入力例 1

~~~
3
oxo
xxo
oxo
~~~

### 出力例 1

~~~
14
~~~

この入力例では，ゲームの初期状態は以下の通りである (コマの置かれたマスを○で表す)．

<div class="joisc2016-solitaire-ja-table" markdown="1">
<table>
<tr><td>○</td><td></td><td>○</td></tr>
<tr><td></td><td></td><td>○</td></tr>
<tr><td>○</td><td></td><td>○</td></tr>
</table>
</div>

次のいずれかの表に従ってコマを置いていくことで，目的を達成することができる (番号はコマを置いていく順番を表す)．

<div class="joisc2016-solitaire-ja-table solitaire-boards" markdown="1">
<table>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
<tr><td>$2$</td><td>$3$</td><td>○</td></tr>
<tr><td>○</td><td>$4$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
<tr><td>$2$</td><td>$4$</td><td>○</td></tr>
<tr><td>○</td><td>$3$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
<tr><td>$3$</td><td>$4$</td><td>○</td></tr>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
<tr><td>$4$</td><td>$3$</td><td>○</td></tr>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
<tr><td>$1$</td><td>$3$</td><td>○</td></tr>
<tr><td>○</td><td>$4$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
<tr><td>$1$</td><td>$4$</td><td>○</td></tr>
<tr><td>○</td><td>$3$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$3$</td><td>○</td></tr>
<tr><td>$1$</td><td>$2$</td><td>○</td></tr>
<tr><td>○</td><td>$4$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$4$</td><td>○</td></tr>
<tr><td>$1$</td><td>$2$</td><td>○</td></tr>
<tr><td>○</td><td>$3$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$3$</td><td>○</td></tr>
<tr><td>$1$</td><td>$4$</td><td>○</td></tr>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$4$</td><td>○</td></tr>
<tr><td>$1$</td><td>$3$</td><td>○</td></tr>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
<tr><td>$3$</td><td>$4$</td><td>○</td></tr>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$2$</td><td>○</td></tr>
<tr><td>$4$</td><td>$3$</td><td>○</td></tr>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$3$</td><td>○</td></tr>
<tr><td>$2$</td><td>$4$</td><td>○</td></tr>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
</table>
<table>
<tr><td>○</td><td>$4$</td><td>○</td></tr>
<tr><td>$2$</td><td>$3$</td><td>○</td></tr>
<tr><td>○</td><td>$1$</td><td>○</td></tr>
</table>
</div>

目的を達成する順番はこれらの $14$ 通りのみであるので，$14$ を出力する．

### 入力例 2

~~~
10
ooxooxoxoo
xooxxxoxxx
oxoxoooooo
~~~

### 出力例 2

~~~
149022720
~~~

入力例 $2$ はすべての小課題の制約を満たす．

### 入力例 3

~~~
10
ooxoxxoxoo
oxxxxxoxxx
oxooxoxoxo
~~~

### 出力例 3

~~~
0
~~~

ゲームの初期状態によっては，目的を達成できないこともある．

### 入力例 4

~~~
20
oxooxoxooxoxooxoxoxo
oxxxoxoxxxooxxxxxoox
oxooxoxooxooxooxoxoo
~~~

### 出力例 4

~~~
228518545
~~~

<style>
.joisc2016-solitaire-ja-table { position:relative;max-width:100%;overflow-x:auto;margin:1em 0; }
.joisc2016-solitaire-ja-table table { display:table;width:auto;max-width:none;overflow:visible;border-collapse:collapse;margin:0; }
.joisc2016-solitaire-ja-table td { border:1px solid #aaa;width:2em;height:2em;padding:0;text-align:center;vertical-align:middle; }
.joisc2016-solitaire-ja-table .katex { position:relative; }
.joisc2016-solitaire-ja-table.solitaire-boards { display:flex;flex-wrap:wrap;align-items:flex-start;gap:1em; }
.joisc2016-solitaire-ja-table.solitaire-boards table { flex:none;table-layout:fixed;width:6em; }
</style>
