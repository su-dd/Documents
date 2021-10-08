VSCode　编辑器

打开　Windows PowerShell  执行下面命令：

$env:GO111MODULE = "on"

$env:GOPROXY = "https://goproxy.cn"

go env -w GOPROXY=https://goproxy.cn

 

重启VSCode  Ctrl+ Shift + P  搜索 Go:Install/Update Tools 全选 确定
------------------------------------------------
版权声明：本文为CSDN博主「大脸猫脸大」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/sfmcatl/article/details/109598092

