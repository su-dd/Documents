# [修复 "System has not been booted with systemd as init system "的错误。](https://www.cnblogs.com/a5idc/p/13752839.html)

如果你按照网上的一些教程，使用systemd命令，如sudo systemctl start。
令你惊讶的是，该命令的结果是这样的错误。
System has not been booted with systemd as init system (PID 1). Can't operate.
原因：您的Linux系统没有使用systemd。
原因是你想用systemd命令来管理Linux上的服务，但你的系统并没有使用systemd，（很可能）使用的是经典的SysV init（sysvinit）系统。
但这怎么可能呢？你使用的是Ubuntu，教程也是针对同一版本的Ubuntu。为什么你不能用呢？
如果你在Windows里面用WSL使用Ubuntu，那么你的系统就会有SysV而不是systemd，当你运行systemctl命令时，你的系统就会抱怨（针对Linux系统的systemd init系统）。
如何知道你使用的是哪个init系统？你可以使用这个命令来知道与PID 1（系统上运行的第一个进程）相关联的进程名称。
ps -p 1 -o comm=
它应该在输出中显示systemd或sysv（或类似的东西）。
如何解决'System has not been booted with systemd'错误？
答案很简单，就是不要使用systemctl命令，而是使用等同的sysvinit命令。相反，可以使用对应的sysvinit命令。
这并不复杂，而且这两个命令的语法有些相似。
这张表应该可以帮助你。

![img](Untitled.assets/1234034-20200930083230253-965519395.jpg)

不管你是按照哪一个教程，试着使用等效的命令，你就不会再看到错误了。A5互联https://www.a5idc.net/