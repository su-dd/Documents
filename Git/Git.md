# Git 使用

创建库 : git init

连接远程库： git remote add origin git@gitee.com:xxxxx/xxxxxx.git

删除本地连接： git remote rm origin

修改本地连接： git remote set-url origin git@gitee.com:xxxxx/xxxxxx.git

克隆： git clone git@gitee.com:xxxxx/xxxxxx.git

提交： git commit

      -a : 提交所有改动
      -m : 加入log信息
      -v : 查看差异

      git commit -am  "xxxx"   加注释,

推送： git push origin master

拉区： git pull origin master

增加文件 ： git add xxxxx

删除文件 ： git rm  xxxxx

查看日志 ： git log, 退出： q

查看不同 ： git diff

# PublicKey 使用

添加用户名信息:   git config --global user.name "xxx"
添加用户邮箱信息: git config --global user.email "xxx@xxx.com"

ssk-keygen生成:   ssh-keygen -t rsa -C "xxx@xxx.com"

## gitee上添加ssh key
网站: https://gitee.com/profile/sshkeys
将 id_rsa.pub文件中的数据粘贴到 SSH公钥 