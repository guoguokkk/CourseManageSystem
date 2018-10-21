#include"CmdManager.h"

using namespace std;

//初始化函数，初始化支持的命令和课程信息
 void CmdManager::Init()
 {     
     manager.add_course("Linux");//初始化课程列表，加入Linux
     manager.add_course("NodeJS");
     manager.add_course("C++"); 
     manager.add_course("Python"); 
     manager.add_course("Spark");
     manager.add_course("Hadoop");
     manager.add_course("Rubby"); 
     manager.add_course("Java"); 

     cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintHelp,"Help Info"));//初始化命令列表
     cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintCourse,"Course List"));
     cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintCourseNum,"Course Number"));
     cmdMap.insert(pair<CourseCmd,string>(Cmd_PrintLongName,"Longest Course Name"));
     cmdMap.insert(pair<CourseCmd,string>(Cmd_RemoveLastCourse,"Remove Last Course"));
     cmdMap.insert(pair<CourseCmd,string>(Cmd_Exit,"Exit"));
 }

//打印帮助信息
void CmdManager::PrintAllHelp() const
{
    cout<<"cmd List:"<<endl;

    for(auto it=cmdMap.begin();it!=cmdMap.end();++it)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}

//根据命令查询帮助信息
void CmdManager::PrintCmdHelp(const CourseCmd cmd) const
{
    auto it=cmdMap.find(cmd);

    if(it!=cmdMap.end())
        cout<<it->first<<":"<<it->second<<endl;
    else
        cout<<"NOT FOUND"<<endl;
}

//处理命令操作
bool CmdManager::HandleCmd(const CourseCmd cmd)
{
    auto it=cmdMap.find(cmd);//查找命令是否支持
    
    if(it==cmdMap.end())
    {
        cout<<"NOT FOUND"<<endl;
        return true;
    }

    //根据命令选择不同的操纵
    switch(cmd)
    {
        case Cmd_PrintHelp:PrintAllHelp();break;//打印帮助信息
        case Cmd_PrintCourse:manager.print_course_list();break;//打印课程列表
        case Cmd_PrintCourseNum:cout<<manager.get_course_num()<<endl;break;//打印课程数量
        case Cmd_PrintLongName:manager.print_longest_course();break;//打印最长的课程名称
        case Cmd_RemoveLastCourse:manager.del_course();break;//删除最后一个课程
        case Cmd_Exit:return false;//退出
        default:break;
    }
    return true;
}
