# Ubuntu上的安装

## 1、下载

下载去官网下载，https://cmake.org/download/

也可以用Wget下载：

``` c++
wget https://cmake.org/files/v3.17/cmake-3.17.3.tar.gz
```

## 2、安装
``` 
tar -zxvf cmake-3.9.6.tar.gz

cd cmake-3.9.6/

sudo ./bootstrap

sudo make -j8

sudo make install
```

## 测试

```
cmake --version
```

# Windows上的安装

下载地址 : https://cmake.org/download/

安装完成后记得添加Path路径
