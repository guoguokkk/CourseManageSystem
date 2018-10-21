#ifndef CMD_H
#define CMD_H

enum CourseCmd//枚举类型第一次用到
{
    //打印帮助
    Cmd_PrintHelp=0,

    //打印课程信息
    Cmd_PrintCourse=1,

    //打印课程数量
    Cmd_PrintCourseNum=2,

    //打印最长的课程名称
    Cmd_PrintLongName=3,

    //删除最后一个课程
    Cmd_RemoveLastCourse=4,

    //退出
    Cmd_Exit=5,
};

#endif