# 探討

## Random為何為假隨機亂數?

**rand() is devoid of entropy, and is thus a mediocre pseudo-random number**  
`rand()` 是「假隨機（pseudo-random）」因為它完全由演算法決定，不是來自真正的隨機來源。  
`rand()` 的本質是：

`用一個數學公式，從一個初始值（seed）一步一步算出下一個數字`

所以：

- 同一個 seed → 永遠產生同一串數列
- 沒有任何真正的「隨機性」，只是看起來像而已

大多數用的是：

$$👉 線性同餘產生器（LCG, Linear Congruential Generator）作為 seed=X_{0}$$
**相同 seed = 永遠同一串亂數**  
$$X_{n+1}=(aX_{n} + c) \bmod m$$

- $$X_{n}:為目前的數字$$
- $$a,c,m：常數$$
- $$X_{n+1}：下一個亂數$$

所以常見的解決方法就是使用  
`srand(time(NULL));`  
因為:

- `time(NULL)` 每秒都不同
- seed 每次不同
- 看起來像隨機

`seed = 可控的隨機性`

## rand()為何在`stdlib` 是跟記憶體管理有關?

C 的 #include <...> 本質上是把某個模組的宣告引入進來。  
每個 header 代表的是一組相關功能的介面，而不是某個唯一概念。

`stdlib.h` 並不是**記憶體專用**標頭，而是**General Utilities** 通用工具庫  
`string.h` 也不只是「字串」  
`stdio.h` 也不只是 `printf` 和 `scanf`  
一個 header 裡面可以同時放多種彼此相關、但不一定完全同類型的工具。

- `stdio.h` 透過 `stream(資料流)` 做格式化或非格式化 I/O
- `string.h` 一段連續位元組資料的操作，包含字串、記憶體區塊處理
- `time.h` 只負責「取得、轉換、表示時間資訊」
- `math.h` 凡是明確屬於數學公式運算的函式，大多放這裡
- `ctype.h` 針對單一字元的性質判斷
- `assert.h` 程式執行時的條件檢查，幫助在開發與除錯階段快速驗證假設是否成立

### `stdlib.h` :Standard Library Utilities

常見函式:

- 動態記憶體管理
<pre>
malloc
calloc
realloc
free
</pre>

- 亂數相關
<pre>
rand
srand
</pre>

- 程式控制
<pre>
exit
abort
atexit
</pre>

- 型別 / 字串轉數值
<pre>
atoi
atof
strtol
strtod
</pre>

- 泛用演算法工具
<pre>
qsort
bsearch
</pre>

## rand()跟加密`entropy` 資訊安全相關

### 延伸討論ML `cross entropy`
