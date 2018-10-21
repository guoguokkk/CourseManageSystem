#include"CmdManager.h"

using namespace std;

int main()
{
    //创建命令管理对象
    CmdManager cmdManager;
    cmdManager.Init();

    //打印帮助信息
    cmdManager.PrintAllHelp();
    

    cout<<"New Command:";

    int  cmd;
    while(cin>>cmd)
    {
        if(cin.good())
        {
            bool exitCode=cmdManager.HandleCmd((CourseCmd)cmd);
            if(!exitCode)
                return 0;
        }
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"New Command:";

        //清理输入流，避免刚才流入的字符影响后续输入
        cin.clear();
        cin.ignore();
    }

    return 0;
}