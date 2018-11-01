# 课程管理系统

## 需求分析

### 课程类Course
#### Course类成员包括：
课程ID（课程对象创建时自动生成）
课程名称
#### Course类成员函数：
构造函数（参数课程名称）
拷贝构造函数
返回和设置课程名称
获得课程ID的函数
打印信息函数（考虑重载 <<）

### 课程管理类CourseManager
#### CourseManager类成员至少包括：
课程列表（可以思考下使用什么数据类型存储？）
#### CourseManager类成员函数：
构造函数（参数为课程对象vector）
获取课程数量函数
添加课程函数（参数为课程名称）
添加课程函数（参数为课程对象）
删除最新课程函数
删除课程函数（指定ID或指定课程名称）
打印课程列表
打印指定课程（指定ID或指定课程名称）
打印最长名称课程函数

### 命令处理类CmdManager
#### CmdManager类成员：
命令列表
课程管理对象（用在需要调用课程管理的地方）
#### CmdManager类成员函数：
初始化函数：课程及命令信息初始化
打印帮助信息
命令处理函数
