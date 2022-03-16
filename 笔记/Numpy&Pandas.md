[TOC]

转载：[Python常见库Numpy、Pandas函数使用汇总_Wei Junyan's blog-CSDN博客](https://blog.csdn.net/weay/article/details/80826949)

# 一、常用链接：

1.Python官网：https://www.python.org/
2.各种库的whl离线安装包：http://www.lfd.uci.edu/~gohlke/pythonlibs/#scikit-learn
3.数据分析常用库的离线安装包（pip+wheels）（百度云）：http://pan.baidu.com/s/1dEMXbfN 密码：bbs2



# NumPy

​	NumPy是高性能科学计算和数据分析的基础包。部分功能如下：

> ​	ndarray, 具有矢量算术运算和复杂广播能力的快速且节省空间的多维数组。
>
> ​	用于对整组数据进行快速运算的标准数学函数（无需编写循环）。
>
> ​	用于读写磁盘数据的工具以及用于操作内存映射文件的工具。
>
> ​	线性代数、随机数生成以及傅里叶变换功能。
>
> ​	用于集成C、C++、Fortran等语言编写的代码的工具。

首先要导入numpy库：**import numpy as np**



## 2.类型

| 类型          | 类型代码 | 说明                                     |
| ------------- | -------- | ---------------------------------------- |
| int8、uint8   | i1、u1   | 有符号和无符号8位整型（1字节）           |
| int16、uint16 | i2、u2   | 有符号和无符号16位整型（2字节）          |
| int32、uint32 | i4、u4   | 有符号和无符号32位整型（4字节）          |
| int64、uint64 | i8、u8   | 有符号和无符号64位整型（8字节）          |
| float16       | f2       | 半精度浮点数                             |
| float32       | f4、f    | 单精度浮点数                             |
| float64       | f8、d    | 双精度浮点数                             |
| float128      | f16、g   | 扩展精度浮点数                           |
| complex64     | c8       | 分别用两个32位表示的复数                 |
| complex128    | c16      | 分别用两个64位表示的复数                 |
| complex256    | c32      | 分别用两个128位表示的复数                |
| bool          | ?        | 布尔型                                   |
| object        | O        | python对象                               |
| string        | Sn       | 固定长度字符串，每个字符1字节，如S10     |
| unicode       | Un       | 固定长度Unicode，字节数由系统决定，如U10 |

 

## 3.生成函数

| 生成函数                                                     | 作用                                                         |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| np.array( x) <br>np.array( x, dtype)                         | 将输入数据转化为一个ndarray<br/>将输入数据转化为一个类型为type的ndarray |
| np.asarray( array )                                          | 将输入数据转化为一个新的（copy）ndarray                      |
| np.ones( N )<br>np.ones( N, dtype)<br>np.ones_like( ndarray ) | 生成一个N长度的一维全一ndarray<br>生成一个N长度类型是dtype的一维全一ndarray<br>生成一个形状与参数相同的全一ndarray |
| np.zeros( N)<br>np.zeros( N, dtype)<br>np.zeros_like(ndarray) | 生成一个N长度的一维全零ndarray<br>生成一个N长度类型位dtype的一维全零ndarray<br/>类似np.ones_like( ndarray ) |
| np.empty( N )<br/>np.empty( N, dtype)<br/>np.empty(ndarray)  | 生成一个N长度的未初始化一维ndarray<br>生成一个N长度类型是dtype的未初始化一维ndarray<br/>类似np.ones_like( ndarray ) |
| np.eye( N )<br>np.identity( N )                              | 创建一个N * N的单位矩阵（对角线为1，其余为0）<br>            |
| np.arange( num)                                              | 生成一个从0到num-1步数为1的一维ndarray                       |
| np.arange( begin, end)                                       | 生成一个从begin到end-1步数为1的一维ndarray                   |
| np.arange( begin, end, step)                                 | 生成一个从begin到end-step的步数为step的一维ndarray           |
| np.mershgrid(ndarray, ndarray,...)                           | 生成一个ndarray * ndarray * ...的多维ndarray                 |
| np.where(cond, ndarray1, ndarray2)                           | 根据条件cond，选取ndarray1或者ndarray2，返回一个新的ndarray  |
| np.in1d(ndarray, [x,y,...])                                  | 检查ndarray中的元素是否等于[x,y,...]中的一个，返回bool数组   |



## 4.矩阵函数

矩阵函数	说明
np.diag( ndarray)<br>np.diag( [x,y,...])

以一维数组的形式返回方阵的对角线（或非对角线）元素

将一维数组转化为方阵（非对角线元素为0）

np.dot(ndarray, ndarray)	矩阵乘法
np.trace( ndarray)	计算对角线元素的和
 	 

## 5.排序函数

|排序函数|说明|
|----|---|
|np.sort( ndarray)|排序，返回副本|
|np.unique(ndarray)|返回ndarray中的元素，排除重复元素之后，并进行排序|
|np.intersect1d( ndarray1, ndarray2)<br>np.union1d( ndarray1, ndarray2)<br>np.setdiff1d( ndarray1, ndarray2)<br>np.setxor1d( ndarray1, ndarray2)|返回二者的交集并排序。<br>返回二者的并集并排序。<br>返回二者的差。<br>返回二者的对称差|

## 6.一元计算函数

|一元计算函数|说明|
|----|---|
|np.abs(ndarray)<br>np.fabs(ndarray)|计算绝对值<br>计算绝对值（非复数）|
|np.mean(ndarray)|求平均值|
|np.sqrt(ndarray)|计算x^0.5|
|np.square(ndarray)|计算x^2|
|np.exp(ndarray)计算e^x|
|log、log10、log2、log1p|计算自然对数、底为10的log、底为2的log、底为(1+x)的log|
|np.sign(ndarray)|计算正负号：1（正）、0（0）、-1（负）|
|np.ceil(ndarray)<br>np.floor(ndarray)<br>np.rint(ndarray)|计算大于等于改值的最小整数<br>计算小于等于该值的最大整数<br>四舍五入到最近的整数，保留dtype|
|np.modf(ndarray)|将数组的小数和整数部分以两个独立的数组方式返回|
|np.isnan(ndarray)|返回一个判断是否是NaN的bool型数组|
|np.isfinite(ndarray)<br>np.isinf(ndarray)|返回一个判断是否是有穷（非inf，非NaN）的bool型数组<br>返回一个判断是否是无穷的bool型数组|
|cos、cosh、sin、sinh、tan、tanh|普通型和双曲型三角函数|
|arccos、arccosh、arcsin、arcsinh、arctan、arctanh|反三角函数和双曲型反三角函数|
|np.logical_not(ndarray)|计算各元素not x的真值，相当于-ndarray|

## 7.多元计算函数

|多元计算函数|说明|
|----|---|
|np.add(ndarray, ndarray)<br>np.subtract(ndarray, ndarray)<br>np.multiply(ndarray, ndarray)<br>np.divide(ndarray, ndarray)<br>np.floor_divide(ndarray, ndarray)<br>np.power(ndarray, ndarray)<br>np.mod(ndarray, ndarray)|相加<br>相减<br>乘法<br>除法<br>圆整除法（丢弃余数）<br>次方<br>求模|
|np.maximum(ndarray, ndarray)<br>np.fmax(ndarray, ndarray)<br>np.minimun(ndarray, ndarray)<br>np.fmin(ndarray, ndarray)|求最大值<br>求最大值（忽略NaN）<br>求最小值<br>求最小值（忽略NaN）|
|np.copysign(ndarray, ndarray)|将参数2中的符号赋予参数1|
|np.greater(ndarray, ndarray)<br>np.greater_equal(ndarray, ndarray)<br>np.less(ndarray, ndarray)<br>np.less_equal(ndarray, ndarray)<br>np.equal(ndarray, ndarray)<br>np.not_equal(ndarray, ndarray)|><br>>=<br><<br><=<br>==<br>!=|
|logical_and(ndarray, ndarray)<br>logical_or(ndarray, ndarray)<br>logical_xor(ndarray, ndarray)|&<br>\|<br>^|
|np.dot( ndarray, ndarray)|计算两个ndarray的矩阵内积|
|np.ix_([x,y,m,n],...)|生成一个索引器，用于Fancy indexing(花式索引)|

## 8.文件读写

| 函数 | 说明 |
| ---- | ---- |
|np.save(string, ndarray)	|将ndarray保存到文件名为 [string].npy 的文件中（无压缩）|
|np.savez(string, ndarray1, ndarray2, ...)	|将所有的ndarray压缩保存到文件名为[string].npy的文件中|
|np.savetxt(sring, ndarray, fmt, newline='\n')	|将ndarray写入文件，格式为fmt|
|np.load(string)	|读取文件名string的文件内容并转化为ndarray对象（或字典对象）|
|np.loadtxt(string, delimiter)	|读取文件名string的文件内容，以delimiter为分隔符转化为ndarray|


## NumPy.ndarray函数和属性：
|函数	|说明|
| ---- | ---- |
|ndarray.ndim|	获取ndarray的维数|
|ndarray.shape	|获取ndarray各个维度的长度|
|ndarray.dtype	|获取ndarray中元素的数据类型|
|ndarray.T	|简单转置矩阵ndarray|

|函数	|说明|
| ---- | ---- |
|ndarray.astype(dtype)|	转换类型，若转换失败则会出现TypeError|
|ndarray.copy()|	复制一份ndarray(新的内存空间)|
|ndarray.reshape((N,M,...))	|将ndarray转化为N*M*...的多维ndarray（非copy）
|ndarray.transpose((xIndex,yIndex,...))	|根据维索引xIndex,yIndex...进行矩阵转置，依赖于shape，不能用于一维矩阵（非copy）|
|ndarray.swapaxes(xIndex,yIndex)	|交换维度（非copy）|



## 9.计算函数


|函数	|说明|
| ---- | ---- |
|ndarray.mean( axis=0 )	|求平均值 |
|ndarray.sum( axis= 0)	|求和 |
|ndarray.cumsum( axis=0)<br>ndarray.cumprod( axis=0)|累加<br>累乘|
|ndarray.std()<br>ndarray.var()|方差<br>标准差|
|ndarray.max()<br>ndarray.min()|最大值<br>最小值|
|ndarray.argmax()<br>ndarray.argmin()|最大值索引<br>最小值索引|
|ndarray.any()<b>ndarray.all()|是否至少有一个True<br>是否全部为True|
|ndarray.dot( ndarray)|计算矩阵内积|



## 10.排序函数

|函数	|说明|
| ---- | ---- |
|ndarray.sort(axis=0)|排序，返回源数据|
|ndarray[n]|	选取第n+1个元素|
|ndarray[n:m]|	选取第n+1到第m个元素|
|ndarray[:]	|选取全部元素|
|ndarray[n:]	|选取第n+1到最后一个元素|
|ndarray[:n]	|选取第0到第n个元素|
|ndarray[ bool_ndarray ]<br/>注：bool_ndarray表示bool类型的ndarray|选取为true的元素|
|ndarray[[x,y,m,n]]...|选取顺序和序列为x、y、m、n的ndarray|
|ndarray[n,m] |选取第n+1行第m+1个元素|
|ndarray [n] [m] |选取第n+1行第m+1个元素|
|ndarray[n,m,...] |选取n行n列....的元素|
|darray [n] [m]....|选取n行n列....的元素|


## 11.random函数和属性

|函数	|说明|
| ---- | ---- |
|seed()<br/>seed(int)<br/>seed(ndarray)|确定随机数生成种子|
|permutation(int)|返回一个一维从0~9的序列的随机排列|
|permutation(ndarray)|返回一个序列的随机排列|
|shuffle(ndarray)|对一个序列就地随机排列|
|rand(int)|产生int个均匀分布的样本值|
|randint(begin,end,num=1)|从给定的begin和end随机选取num个整数|
|randn(N, M, ...)	|生成一个N*M*...的正态分布（平均值为0，标准差为1）的ndarray|
|normal(size=(N,M,...))	|生成一个N*M*...的正态（高斯）分布的ndarray |
|beta(ndarray1,ndarray2)	|产生beta分布的样本值，参数必须大于0 |
|chisquare()	|产生卡方分布的样本值 |
|gamma()	|产生gamma分布的样本值 |
|uniform()	|产生在[0,1)中均匀分布的样本值 |

## 12.linalg函数和属性

|函数	|说明|
| ---- | ---- |
|det(ndarray)	|计算矩阵列式|
|eig(ndarray)	|计算方阵的本征值和本征向量|
|inv(ndarray)|计算方阵的逆|
|pinv(ndarray)|计算方阵的Moore-Penrose伪逆|
|qr(ndarray)	|计算qr分解 |
|svd(ndarray)	|计算奇异值分解svd|
|solve(ndarray)	|解线性方程组Ax = b，其中A为方阵 |
|lstsq(ndarray)	|计算Ax=b的最小二乘解 |

# Pandas

​	pandas 是基于NumPy 的一种工具 ，该工具是为了解决数据分析任务而创建的。Pandas 纳入了大量库和一些标准的数据模型，提供了高效地操作大型数据集所需的工具。pandas提供了大量能使我们快速便捷地处理数据的函数和方法。

```python
from pandas import Series, DataFrame
import pandas as pd
```

## pandas常用函数

|函数	|说明|
| ---- | ---- |
|pd.isnull(series)|判断是否为空(NaN)|
|pd.notnull(series)|判断是否不为空(not NaN)|



## Series

	Series可以运用ndarray或字典的几乎所有索引操作和函数，融合了字典和ndarray的优点。

|属性	|说明|
| ---- | ---- |
|values	|获取数组|
|index	|获取索引
|name	|values的name|
|index.name|	索引的name|

### 常用函数
|函数	|说明|
| ---- | ---- |
|Series([x,y,...])Series({'a':x,'b':y,...}, index=param1)	|生成一个Series|
|Series.copy()	|复制一个Series |
|Series.reindex([x,y,...], fill_value=NaN)<br/>Series.reindex([x,y,...], method=NaN)<br/>Series.reindex(columns=[x,y,...])|重返回一个适应新索引的新对象，将缺失值填充为fill_value<br/>返回适应新索引的新对象，填充方式为method<br/>对列进行重新索引 |
|Series.drop(index)|	丢弃指定项|
|Series.map(f)	|应用元素级函数 |

### 排序函数

|函数	|说明|
| ---- | ---- |
|Series.sort_index(ascending=True)	|根据索引返回已排序的新对象|
|Series.order(ascending=True)|	根据值返回已排序的对象，NaN值在末尾|
|Series.rank(method='average', ascending=True, axis=0)|	为各组分配一个平均排名|
|df.argmax()|返回含有最大值的索引位置|
|df.argmin()|返回含有最小值的索引位置|



## Series常用函数

>　　　　reindex的method选项：
　　　　　　ffill, bfill　　　　　向前填充/向后填充
　　　　　　pad, backfill　　　向前搬运，向后搬运
　　　　rank的method选项
　　　　　　'average'　　　　在相等分组中，为各个值分配平均排名
　　　　　　'max','min'　　　使用整个分组中的最小排名
　　　　　　'first'　　　　　　按值在原始数据中出现的顺序排名

|函数	|说明|
|--|--|
|Index([x,y,...])|创建索引|
|append(Index)|连接另一个Index对象，产生一个新的Index|
|diff(Index)|计算差集，产生一个新的Index|
|intersection(Index)|计算交集|
|union(Index)|计算并集|
|isin(Index)|检查是否存在与参数索引中，返回bool型数组|
|delete(i)|删除索引i处元素，得到新的Index|
|drop(str)|删除传入的值，得到新Index|
|insert(i,str)|将元素插入到索引i处，得到新Index|
|is_monotonic()|当各元素大于前一个元素时，返回true|
|is_unique()|当Index没有重复值时，返回true|
|unique()|计算Index中唯一值的数组|



# DataFrame
​	DataFrame是一个表格型的数据结构，它含有一组有序的列，每列可以是不同的值类型（数值、字符串、布尔值等）。

​	DataFrame既有行索引也有列索引，它可以被看做由Series组成的字典（共用同一个索引）。

​	DataFrame可以通过类似字典的方式或者.columnname的方式将列获取为一个Series。行也可以通过位置或名称的方式进行获取。为不存在的列赋值会创建新列。

> del frame['xxx']　　# 删除列

|属性	|说明|
|--|--|
|values|DataFrame的值|
|index|行索引|
|index.name|行索引的名字|
|columns|列索引|
|columns.name	|列索引的名字|
|ix	|返回行的DataFrame|
|ix[[x,y,...], [x,y,...]]|	对行重新索引，然后对列重新索引|
|T	|frame行列转置|



## DataFrame常用属性

|函数	|说明|
|--|--|
|DataFrame(dict, columns=dict.index, index=[dict.columnnum])|构建DataFrame|
|DataFrame(二维ndarray)|数据矩阵，还可以传入行标和列标|
|DataFrame(由数组、列表或元组组成的字典)|每个序列会变成DataFrame的一列。所有序列的长度必须相同|
|DataFrame(NumPy的结构化/记录数组)|类似于“由数组组成的字典”|
|DataFrame(由Series组成的字典)|每个Series会成为一列。如果没有显式制定索引，则各Series的索引会被合并成结果的行索引|
|DataFrame(由字典组成的字典)|各内层字典会成为一列。键会被合并成结果的行索引。|
|DataFrame(字典或Series的列表)|各项将会成为DataFrame的一行。索引的并集会成为DataFrame的列标。|
|DataFrame(由列表或元组组成的列表)|类似于二维ndarray|
|DataFrame(DataFrame)|沿用DataFrame|
|DataFrame(NumPy的MaskedArray)|类似于二维ndarray，但掩码结果会变成NA/缺失值|
|df.reindex([x,y,...], fill_value=NaN, limit)|返回一个适应新索引的新对象，将缺失值填充为fill_value，最大填充量为limit|
|df.reindex([x,y,...], method=NaN)|返回适应新索引的新对象，填充方式为method|
|df.reindex([x,y,...],columns=[x,y,...],copy=True)|同时对行和列进行重新索引，默认复制新对象。|
|df.drop(index, axis=0)	|丢弃指定轴上的指定项。|



### 排序函数

|函数	|说明|
|--|--|
|df.sort_index(axis=0, ascending=True)<br>df.sort_index(by=[a,b,...])|根据索引排序|



### 汇总统计函数

|函数	|说明|
|--|--|
|df.count()|	非NaN的数量|
|df.describe()|	一次性产生多个汇总统计|
|df.min()|最小值|
|df.min()|最大值|
|df.idxmax(axis=0, skipna=True)|返回含有最大值的index的Series|
|df.idxmin(axis=0, skipna=True)|返回含有最小值的index的Series|
|df.quantile(axis=0)	|计算样本的分位数|
|df.sum(axis=0, skipna=True, level=NaN)|返回一个含有求和小计的Series|
| df.mean(axis=0, skipna=True, level=NaN)    | 返回一个含有**平均值**的Series                 |
| df.median(axis=0, skipna=True, level=NaN)  | 返回一个含有**算术中位数**的Series             |
| df.mad(axis=0, skipna=True, level=NaN)     | 返回一个**根据平均值计算平均绝对离差**的Series |
| df.var(axis=0, skipna=True, level=NaN)     | 返回一个方差的Series                           |
| df.std(axis=0, skipna=True, level=NaN)     | 返回一个标准差的Series                         |
| df.skew(axis=0, skipna=True, level=NaN)    | 返回样本值的偏度（三阶距）                     |
| df.kurt(axis=0, skipna=True, level=NaN)    | 返回样本值的峰度（四阶距）                     |
| df.cumsum(axis=0, skipna=True, level=NaN)  | 返回样本的累计和                               |
| df.cummin(axis=0, skipna=True, level=NaN)  | 返回样本的累计最大值                           |
| df.cummax(axis=0, skipna=True, level=NaN)  | 返回样本的累计最小值                           |
| df.cumprod(axis=0, skipna=True, level=NaN) | 返回样本的累计积                               |
| df.diff(axis=0)                            | 返回样本的一阶差分                             |
| df.pct_change(axis=0)                      |返回样本的百分比数变化|



### 计算函数

|函数|	说明 |
|---|--|
|df.add(df2, fill_value=NaN, axist=1)|	元素级相加，对齐时找不到元素默认用fill_value |
|df.sub(df2, fill_value=NaN, axist=1)|	元素级相减，对齐时找不到元素默认用fill_value |
|df.div(df2, fill_value=NaN, axist=1)|	元素级相除，对齐时找不到元素默认用fill_value |
|df.mul(df2, fill_value=NaN, axist=1)|	元素级相乘，对齐时找不到元素默认用fill_value |
|df.apply(f, axis=0)| 将f函数应用到由各行各列所形成的一维数组上 |
|df.applymap(f)| 将f函数应用到各个元素上 |
|df.cumsum(axis=0, skipna=True)| 累加，返回累加后的dataframe |



## Dataframe常用函数

### 索引方式
|函数|	说明 |
|---|--|
|df[val]|选取DataFrame的单个列或一组列|
|df.ix[val]|选取Dataframe的单个行或一组行|
|df.ix[:,val]|选取单个列或列子集|
|df.ix[val1,val2]|将一个或多个轴匹配到新索引|
|reindex方法|将一个或多个轴匹配到新索引|
|xs方法|根据标签选取单行或者单列，返回一个Series|
|icol、irow方法|根据整数位置选取单列或单行，并返回一个Series|
|get_value、set_value|根据行标签和列标签选取单个值|



## Dataframe常用索引方式

运算：
默认情况下，Dataframe和Series之间的算术运算会将Series的索引匹配到的Dataframe的列，沿着列一直向下传播。若索引找不到，则会重新索引产生并集。

Index
pandas的索引对象负责管理轴标签和其他元数据（比如轴名称等）。构建Series或DataFrame时，所用到的任何数组或其他序列的标签都会被转换成一个Index。Index对象不可修改，从而在多个数据结构之间安全共享。


主要的Index对象	说明
|函数|	说明 |
|---|--|
|Index	|最广泛的Index对象，将轴标签表示为一个由Python对象组成的NumPy数组|
|Int64Index|	针对整数的特殊Index|
|MultiIndex	|“层次化”索引对象，表示单个轴上的多层索引。可以看做由元组组成的数组|
|DatetimeIndex|	存储纳秒级时间戳（用NumPy的Datetime64类型表示）|
|PeriodIndex	|针对Period数据（时间间隔）的特殊Index|





三、Pandas常用函数的使用

```python
import numpy as np  
import pandas  as pd  
import matplotlib.pyplot  as plt  

---------------numpy-----------------------  
arr = np.array([ 1, 2, 3], dtype=np.float64)  
np.zeros(( 3, 6))  np.empty(( 2, 3, 2)) np.arange( 15)  
arr.dtype arr.ndim arr.shape  
arr.astype(np.int32)  #np.float64 np.string_ np.unicode_  
arr * arr arr - arr  1/arr  
arr= np.arange( 32).reshape(( 8, 4))  
arr[ 1: 3, : ]   #正常切片  
arr[[ 1, 2, 3]]   #花式索引  
arr.T   arr.transpose((...))   arr.swapaxes(...)  #转置  
arr.dot  #矩阵内积  
np.sqrt(arr)   np.exp(arr)    randn( 8)#正态分布值
np.maximum(x,y)  
np.where(cond, xarr, yarr)  #当cond为真，取xarr,否则取yarr  
arr.mean()  arr.mean(axis= 1)    #算术平均数  
arr.sum()   arr.std()  arr.var()    #和、标准差、方差  
arr.min()   arr.max()    #最小值、最大值  
arr.argmin()   arr.argmax()     #最小索引、最大索引  
arr.cumsum()    arr.cumprod()    #所有元素的累计和、累计积  
arr.all()   arr.any()    # 检查数组中是否全为真、部分为真  
arr.sort()   arr.sort( 1)    #排序、1轴向上排序  
arr.unique()    #去重  
np.in1d(arr1, arr2)   #arr1的值是否在arr2中  
np.load() np.loadtxt() np.save() np.savez() #读取、保存文件  
np.concatenate([arr, arr], axis= 1)  #连接两个arr，按行的方向  

---------------pandas-----------------------  
ser = Series()     ser = Series([...], index=[...])   #一维数组, 字典可以直接转化为series  
ser.values    ser.index    ser.reindex([...], fill_value= 0)   #数组的值、数组的索引、重新定义索引  
ser.isnull()   pd.isnull(ser)   pd.notnull(ser)    #检测缺失数据  
ser.name=       ser.index.name=     #ser本身的名字、ser索引的名字  
ser.drop( 'x')  #丢弃索引x对应的值  
ser +ser   #算术运算  
ser.sort_index()   ser.order()     #按索引排序、按值排序  
df = DataFrame(data, columns=[...], index=[...])  #表结构的数据结构，既有行索引又有列索引  
df.ix[ 'x']   #索引为x的值    对于series，直接使用ser['x']  
del df[ 'ly']   #用del删除第ly列  
df.T     #转置  
df.index.name df.columns.name df.values  
df.drop([...])  
df + df   df1.add(df2, fill_vaule= 0)  #算术运算  
df -ser    #df与ser的算术运算  
f= lambda x: x.max()-x.min()   df.apply(f)  
df.sort_index(axis= 1, ascending= False)    #按行索引排序  
df.sort_index(by=[ 'a', 'b'])    #按a、b列索引排序  
ser.rank()   df.rank(axis= 1)   #排序，增设一个排名值  
df.sum()   df.sum(axis= 1)    #按列、按行求和  
df.mean(axis= 1, skipna= False)    #求各行的平均值，考虑na的存在  
df.idxmax()    #返回最大值的索引  
df.cumsum()    #累计求和  
df.describe()  ser.describe()    #返回count mean std min max等值  
ser.unique()   #去重  
ser.value_counts()   df.value_counts()  #返回一个series，其索引为唯一值，值为频率  
ser.isin([ 'x',  'y'])   #判断ser的值是否为x,y，得到布尔值  
ser.dropna() ser.isnull() ser.notnull() ser.fillna( 0)   #处理缺失数据，df相同  
df.unstack()    #行列索引和值互换  df.unstack().stack()  
df.swaplevel( 'key1', 'key2')    #接受两个级别编号或名称，并互换  
df.sortlevel( 1)  #根据级别1进行排序，df的行、列索引可以有两级  
df.set_index([ 'c', 'd'], drop= False)     #将c、d两列转换为行,因drop为false，在列中仍保留c,d  

read_csv   read_table   read_fwf     #读取文件分隔符为逗号、分隔符为制表符('\t')、无分隔符（固定列宽）  
pd.read_csv( '...', nrows= 5)  #读取文件前5行  
pd.read_csv( '...', chunksize= 1000)  #按块读取，避免过大的文件占用内存  
pd.load()  #pd也有load方法，用来读取二进制文件  
pd.ExcelFile( '...xls').parse( 'Sheet1')   # 读取excel文件中的sheet1  
df.to_csv('...csv', sep= '|', index= False, header= False)  #将数据写入csv文件，以｜为分隔符，默认以，为分隔符, 禁用列、行的标签  

pd.merge(df1, df2, on= 'key', suffixes=( '_left',  '_right'))  #合并两个数据集,类似数据库的inner join, 以二者共有的key列作为键,suffixes将两个key分别命名为key_left、key_right  
pd.merge(df1, df2, left_on= 'lkey', right_on= 'rkey')  #合并，类似数据库的inner join, 但二者没有同样的列名，分别指出，作为合并的参照  
pd.merge(df1, df2, how= 'outer')  #合并，但是是outer join；how='left'是笛卡尔积，how='inner'是...;还可以对多个键进行合并  
df1.join(df2, on= 'key', how= 'outer')   #也是合并  
pd.concat([ser1, ser2, ser3], axis= 1)  #连接三个序列，按行的方向  
ser1.combine_first(ser2)   df1.combine_first(df2)  #把2合并到1上，并对齐  
df.stack() df.unstack()   #列旋转为行、行旋转为列  
df.pivot()  

df.duplicated()   df.drop_duplicates()  #判断是否为重复数据、删除重复数据  
df[''].map(lambda x: abs(x))  #将函数映射到df的指定列  
ser.replace(-999, np.nan)  #将－999全部替换为nan  
df.rename(index={}, columns={}, inplace= True)  #修改索引，inplace为真表示就地修改数据集  
pd.cut(ser, bins)   #根据面元bin判断ser的各个数据属于哪一个区段，有labels、levels属性  
df[(np.abs(df)> 3).any( 1)]  #输出含有“超过3或－3的值”的行  

permutation  take     #用来进行随机重排序  
pd.get_dummies(df[ 'key'], prefix= 'key')   #给df的所有列索引加前缀key  
df[...].str.contains()  df[...].str.findall(pattern, flags=re.IGNORECASE)  df[...].str.match(pattern, flags=...)    df[...].str.get()   #矢量化的字符串函数  

----绘图  
ser.plot() df.plot()  #pandas的绘图工具，有参数label, ax, style, alpha, kind, logy, use_index, rot, xticks, xlim, grid等，详见page257  
kind= 'kde'  #密度图  
kind= 'bar' kind= 'barh'  #垂直柱状图、水平柱状图，stacked=True为堆积图  
ser.hist(bins= 50)  #直方图  
plt.scatter(x,y)  #绘制x,y组成的散点图  
pd.scatter_matrix(df, diagonal= 'kde', color= 'k', alpha= '0.3')   #将df各列分别组合绘制散点图  

----聚合分组  
groupby() 默认在axis= 0轴上分组，也可以在 1组上分组；可以用 for进行分组迭代  
df.groupby(df[ 'key1'])  #根据key1对df进行分组  
df[ 'key2'].groupby(df[ 'key1'])   #根据key1对key2列进行分组  
df[ 'key3'].groupby(df[ 'key1'], df[ 'key2'])   #先根据key1、再根据key2对key3列进行分组  
df[ 'key2'].groupby(df[ 'key1']).size()  #size()返回一个含有分组大小的series  
df.groupby(df[ 'key1'])[ 'data1']  等价于 df[ 'data1'].groupby(df[ 'key1'])  
df.groupby(df[ 'key1'])[[ 'data1']]  等价于  df[[ 'data1']].groupby(df[ 'key1'])  
df.groupby(mapping, axis= 1)  ser(mapping)  #定义mapping字典，根据字典的分组来进行分组  
df.groupby(len)  #通过函数来进行分组，如根据len函数  
df.groupby(level= '...', axis= 1)   #根据索引级别来分组  
df.groupby([], as_index= False)    #禁用索引，返回无索引形式的数据  
df.groupby(...).agg([ 'mean',  'std'])    #一次使用多个聚合函数时，用agg方法  
df.groupby(...).transform(np.mean)    #transform()可以将其内的函数用于各个分组  
df.groupby().apply()   #apply方法会将待处理的对象拆分成多个片段，然后对各片段调用传入的函数，最后尝试将各片段组合到一起  

----透视交叉  
df.pivot_table([ '', ''], rows=[ '', ''], cols= '', margins= True)   #margins为真时会加一列all  
pd.crosstab(df.col1, df.col2, margins= True)  #margins作用同上  


---------------matplotlib---------------  
fig=plt.figure() ＃图像所在的基对象  
ax=fig.add_subplot( 2, 2, 1)   #2*2的图像，当前选中第1个  
fig, axes = plt.subplots(nrows, nclos, sharex, sharey)   #创建图像，指定行、列、共享x轴刻度、共享y轴刻度  
plt.subplots_adjust(left= None, bottom= None, right= None, top= None, wspace= None, hspace= None)  
#调整subplot之间的距离，wspace、hspace用来控制宽度、高度百分比  
ax.plot(x, y, linestyle= '--', color= 'g')    #依据x,y坐标画图，设置线型、颜色  
ax.set_xticks([...]) ax.set_xticklabels([...])  #设置x轴刻度  
ax.set_xlabel( '...')  #设置x轴名称  
ax.set_title( '....') #设置图名  
ax.legend(loc= 'best')  #设置图例， loc指定将图例放在合适的位置  
ax.text(x,y,  'hello', family= 'monospace', fontsize= 10)  #将注释hello放在x,y处，字体大小为10  
ax.add_patch()  #在图中添加块  
plt.savefig( '...png', dpi= 400, bbox_inches= 'tight')  #保存图片，dpi为分辨率，bbox＝tight表示将裁减空白部分  

```


```python
------------------------------------------
from mpl_toolkits.basemap  import Basemap  
import matplotlib.pyplot  as plt  
#可以用来绘制地图  


-----------------时间序列--------------------------  
pd.to_datetime(datestrs)     #将字符串型日期解析为日期格式  
pd.date_range( '1/1/2000', periods= 1000)     #生成时间序列  
ts.resample( 'D', how= 'mean')    #采样，将时间序列转换成以每天为固定频率的, 并计算均值；how='ohlc'是股票四个指数；  
#重采样会聚合，即将短频率（日）变成长频率（月），对应的值叠加；  
#升采样会插值，即将长频率变为短频率，中间产生新值  
ts.shift( 2, freq= 'D')   ts.shift( -2, freq= 'D')  #后移、前移2天  
now+Day() now+MonthEnd()  

import pytz   pytz.timezone( 'US/Eastern')    #时区操作，需要安装pytz  
pd.Period( '2010', freq= 'A-DEC')   #period表示时间区间，叫做时期  
pd.PeriodIndex     #时期索引  
ts.to_period( 'M')    #时间转换为时期  
pd.rolling_mean(...)    pd.rolling_std(...)    #移动窗口函数－平均值、标准差 

```

