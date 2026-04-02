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

## rand()為何在`stdlib` 跟記憶體管理有關?

## rand()跟加密`entropy` 資訊安全相關

### 延伸討論 `cross entropy`
