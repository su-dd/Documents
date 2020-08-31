# 01、nodejs配置

nodejs插件安装
默认安装好intellij IDEA，在IDEA的file -> setting ->Plugins,点击Browe repositories...



# 02、Vue配置

### 安装Idea的Vue.js插件

找到Idea菜单：

- 选择File -》 Settings -》 Plugins：搜索vue.js，安装Vue.js，注意安装完成后会提示重新IDE

 ![img](img\配置Vue\Vue插件.png)



-  设置JavaScript为ECMAScript 6

  File -》 Settings -》 Languages&Frameworks -》 JavaScript：修改JavaScript language version为**ECMAScript 6**

![img](img\配置Vue\JavaScript的设置.png)



- 在file types的html中添加.*vue

![img](img\配置Vue\文件类型.png)

 

# 3、安装vue

- 全局安装 vue

```cmd
npm install -g vue
cnpm install -g vue
```

检查是否安装成功vue

![img](img\配置Vue\Vue检查.png)



- 全局安装 vue-cli

```cmd
npm install --global vue-cli
npm install --g vue-cli

cnpm install --global vue-cli
cnpm install --g vue-cli
```




- 创建一个基于 webpack 模板的新项目，my-project为项目名称，我这边是test011
```CMD
vue init webpack my-project
```



这里需要进行一些配置，默认回车即可

![img](img\配置Vue\创建Vue工程.png)




- 进入项目安装并运行

```cmd
cd my-project

npm install

npm run dev
```



- 成功运行后，浏览器输入http://localhost:XXXX/可见主页

![img](img\配置Vue\Vue运行.png)

 

 ![img](img\配置Vue\Vue界面.png)

 