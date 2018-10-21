#ifndef CMDMANAGER_H
#define CMDMANAGER_H

#include"CourseManager.h"
#include"Cmd.h"
#include<map>

using namespace std;
//命令管理类
class CmdManager{
public:
    CmdManager()=default;

    //初始化函数，初始化支持的命令和课程信息
    void Init();

    //打印帮助信息
    void PrintAllHelp() const;

    //根据命令查询帮助信息
    void PrintCmdHelp(const CourseCmd cmd) const;

    //处理命令操作
    bool HandleCmd(const CourseCmd cmd);

    //返回课程管理对象
    CourseManager& GetCourseManager() {return manager;}

private:
    CourseManager manager;//课程管理对象
    map<CourseCmd,string> cmdMap;//使用map存储命令和帮助信息
};

#endif