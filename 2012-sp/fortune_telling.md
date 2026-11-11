配点 : $100$ 点

### 問題文

K 理事長は占いが好きで，いつも様々な占いをしている．今日はカードを使って今年の IOI での日本選手団の出来を占うことにした．

占いの方法は次のようなものである．

- まずカードを縦 $M$ 行，横 $N$ 列の長方形状に全て表にして並べる．
- $i = 1, \cdot \cdot \cdot , K$ について，「上から数えて $A_{i}$ 行目から $B_{i}$ 行目かつ，左から数えて $C_{i}$ 列目から $D_{i}$ 列目にある全てのカードの表裏をひっくり返す」という操作を行う．すなわち，上から $a$ 行目で左から $b$ 列目にあるカードを $(a, b)$ と書いたとき，各 $i$ について，$A_{i} \leqq a \leqq B_{i}$ かつ $C_{i} \leqq b \leqq D_{i}$ をみたすカード $(a, b)$ を全てひっくり返す操作を行う．
- 操作が終わった後，表になっているカードの枚数によって占いの結果が出る．

K 理事長は途中でカードをひっくり返す回数があまりに多いことに気付いたので，カードを実際に使って占うのはやめて，操作が終わった後に表になっているカードの枚数だけを求めることにした．

### 課題

行の長さ $M$，列の長さ $N$，操作の回数 $K$ および $K$ 回の操作の指示が与えられたとき，操作後に表になっているカードの枚数を求めるプログラムを作成せよ．

### 制約

- $1 \leqq M \leqq 1\,000\,000\,000\ {} (=10^9)$：行の長さ．
- $1 \leqq N \leqq 1\,000\,000\,000\ {} (=10^9)$：列の長さ．
- $1 \leqq K \leqq 100\,000\ {} (=10^5)$：操作の回数．


### 入力

標準入力から以下の入力を読み込め．

- $1$ 行目には整数 $M, N, K$ が空白を区切りとして書かれており，カードが $M$ 行 $N$ 列に並んでいることと，操作を行う回数が $K$ 回であることを表す．
- $1 + i$ 行目 ($1 \leqq i \leqq K$) には $4$ つの整数 $A_{i}, B_{i},C_{i}, D_{i}$ ($1 \leqq A_{i} \leqq B_{i} \leqq M$，$1 \leqq C_{i} \leqq D_{i} \leqq N$) が書かれており， $i$ 回目の操作は上から $A_{i}$ 行目から $B_{i}$ 行目かつ，左から $C_{i}$ 列目から $D_{i}$ 列目のカードを全てひっくり返すことを表す．

### 出力

標準出力に，$K$ 回の操作後に表になっているカードの枚数を $1$ 行で出力せよ．

### 採点基準

採点用データのうち，配点の $30\%$ 分については，$K \leqq 3\,000$ を満たす．

### 入出力例

### 入力例 1

~~~
6 5 3
2 4 1 4
4 6 3 5
1 2 3 5
~~~

### 出力例 1

~~~
11
~~~

この例では，$K = 3$ 回の操作は以下のように行われる．

表のカードを□，裏のカードを■で表すと，

<div class="joisc2012-fortune-card-sequence">
<p>初期状態</p>
<table>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
</table>
<p>↓</p>
<table>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>■</td><td>■</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>■</td><td>■</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>■</td><td>■</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
</table>
<p>↓</p>
<table>
<tr><td>□</td><td>□</td><td>□</td><td>□</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>■</td><td>■</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>■</td><td>■</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>□</td><td>□</td><td>■</td></tr>
<tr><td>□</td><td>□</td><td>■</td><td>■</td><td>■</td></tr>
<tr><td>□</td><td>□</td><td>■</td><td>■</td><td>■</td></tr>
</table>
<p>↓</p>
<table>
<tr><td>□</td><td>□</td><td>■</td><td>■</td><td>■</td></tr>
<tr><td>■</td><td>■</td><td>□</td><td>□</td><td>■</td></tr>
<tr><td>■</td><td>■</td><td>■</td><td>■</td><td>□</td></tr>
<tr><td>■</td><td>■</td><td>□</td><td>□</td><td>■</td></tr>
<tr><td>□</td><td>□</td><td>■</td><td>■</td><td>■</td></tr>
<tr><td>□</td><td>□</td><td>■</td><td>■</td><td>■</td></tr>
</table>
<p>最終状態</p>
</div>

最終状態で表になっているカードの枚数 $11$ を出力する．

<style>
.joisc2012-fortune-card-sequence { text-align:center;margin:1em 0; }
.joisc2012-fortune-card-sequence table { border-collapse:collapse;width:auto;margin:0 auto; }
.joisc2012-fortune-card-sequence td { border:0;padding:0;line-height:1;font-family:monospace;font-size:1.2em;text-align:center; }
.joisc2012-fortune-card-sequence p { margin:0.4em 0; }
</style>
