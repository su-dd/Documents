# Go安装

1、基于 Debian的 Linux 发行版本都可以使用 apt-get [命令](https://www.linuxcool.com/)来进行安装

```
sudo apt-get install golang
```

2、基于 Red Hat 的 Linux 发行版本都可以使用 yum 命令来进行安装：

```
sudo yum install golang
```

3、手动处理：

# 安装Go环境

------

> Golang官网下载地址：https://golang.org/dl/

1. 打开官网下载地址选择对应的系统版本, 复制下载链接
    这里我选择的是
    `go1.11.5.linux-amd64.tar.gz`：https://dl.google.com/go/go1.11.5.linux-amd64.tar.gz

![img](https:////upload-images.jianshu.io/upload_images/1277729-7d5e14c2c8c994bf.png?imageMogr2/auto-orient/strip|imageView2/2/w/1200/format/webp)

image.png

1. `cd`进入你用来存放安装包的目录，我习惯在`~`下面创建个`go`文件夹。



```shell
# 在 ~ 下创建 go 文件夹，并进入 go 文件夹
mkdir ~/go && cd ~/go
下载的 go 压缩包
wget https://dl.google.com/go/go1.11.5.linux-amd64.tar.gz
```

1. 下载完成

![img](https:////upload-images.jianshu.io/upload_images/1277729-60625ab3615c752e.png?imageMogr2/auto-orient/strip|imageView2/2/w/1128/format/webp)

1. 执行`tar`解压到`/usr/loacl`目录下（官方推荐），得到`go`文件夹等



```shell
tar -C /usr/local -zxvf  go1.11.5.linux-amd64.tar.gz
```

1. 添加`/usr/loacl/go/bin`目录到PATH变量中。添加到`/etc/profile` 或`$HOME/.profile`都可以



```shell
# 习惯用vim，没有的话可以用命令`sudo apt-get install vim`安装一个
vim /etc/profile
# 在最后一行添加
export GOROOT=/usr/local/go
export PATH=$PATH:$GOROOT/bin
# 保存退出后source一下（vim 的使用方法可以自己搜索一下）
source /etc/profile
```

1. 执行

   ```
   go version
   ```

   ，如果现实版本号，则Go环境安装成功。是不是很简单呢？

   ![img](https:////upload-images.jianshu.io/upload_images/1277729-bd36e8e538989c62.png?imageMogr2/auto-orient/strip|imageView2/2/w/584/format/webp)

# 运行第一个程序

------

1. 先创建你的工作空间([Workspaces]([workspace](https://golang.org/doc/code.html#Workspaces)))，官方建议目录`$HOME/go`。



```bash
mkdir $HOME/go
```

1. 将你的工作空间路径声明到环境变量中。和上一部分的第5步相似。



```shell
# 编辑 ~/.bash_profile 文件
vim ~/.bash_profile
# 在最后一行添加下面这句。$HOME/go 为你工作空间的路径，你也可以换成你喜欢的路径
export GOPATH=$HOME/go
# 保存退出后source一下（vim 的使用方法可以自己搜索一下）
source ~/.bash_profile
```

1. 在你的工作空间创建你的第一个工程目录



```shell
# 创建并进入你的第一个工程目录
mkdir -p $GOPATH/src/hello && cd $GOPATH/src/hello
```

1. 在你的工程目录下创建名为`hello.go`的文件



```shell
vim hello.go
```

1. 将下面内容粘贴到 hello.go 文件



```go
package main

import "fmt"

func main() {
    fmt.Printf("hello, world\n")
}
```

1. 好了，工程目录和工程文件都准备好了。现在我们到我们的工程目录(`$GOPATH/src/hello`)下构建我们的工程



```objectivec
# 如果你当前的目录不在 $GOPATH/src/hello， 需要先执行 "cd $GOPATH/src/hello" 进入该目录
# 执行构建工程的命令
go build
```

1. 等一会，命令执行完之后你可以看到目录下会多出一个 hello 的文件，这就是我们编译之后的文件啦。怎么执行我们的程序呢？只需要在当前目录下执行`./xxx`就可以啦！是不是敲鸡煎蛋呢！



```undefined
./hello
```

![img](https:////upload-images.jianshu.io/upload_images/1277729-94425080feff1bbd.png?imageMogr2/auto-orient/strip|imageView2/2/w/650/format/webp)

# 关于Go的一些介绍

------

### 环境变量：

- $GOROOT:
   表示Go的安装目录。也就是上面我们解压出来的文件夹里面的`go`文件夹。
- $GOPATH:
   表示我们的工作空间。用来存放我们的工程目录的地方。

### GOPATH目录：

一般来说GOPATH下面会有三个文件夹：`bin`、`pkg`、`src`，没有的话自己创建。每个文件夹都有其的作用。

- bin：编译后可的执行文件的存放路径
- pkg：编译包时，生成的.a文件的存放路径
- src：源码路径，一般我们的工程就创建在`src`下面。



作者：Mr_Leung
链接：https://www.jianshu.com/p/c43ebab25484
来源：简书
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
