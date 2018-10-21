#include"CourseManager.h"

using namespace std;;

CourseManager::CourseManager(const vector<Course>& courselist)
{

}

//删除最新课程：所有的删除要先判断是不是空！！我忘了
void CourseManager::del_course()
{
    if(courselist.size()==0)
    {
        cout<<"error! no courses!"<<endl;
        return;
    }
        
    courselist.pop_back();
}

//删除课程（id)
void CourseManager::del_course(const int id)
{
    if(courselist.size()==0)
    {
        cout<<"error! no courses!"<<endl;
        return;
    }

    for(int i=0;i<courselist.size();++i)
    {
        if(courselist[i].get_id()==id)
            courselist.erase(courselist.begin()+i);          
    }
}

//删除课程（名称)
void CourseManager::del_course(const string& name)
{
    if(courselist.size()==0)
    {
        cout<<"error! no courses!"<<endl;
        return;
    }

    for(int i=0;i<courselist.size();++i)
    {
        if(courselist[i].get_name()==name)
            courselist.erase(courselist.begin()+i);
    }
}

//打印课程列表
void CourseManager::print_course_list() const
{
    for(auto course:courselist)
        cout<<course<<endl;
}

//打印制定课程(id)
void CourseManager::print_course(const int id) const
{
    for(auto course:courselist)
    {
        if(course.get_id()==id)
            cout<<course<<endl;
    }        
}

//打印制定课程(名称)
void CourseManager::print_course(const string& name) const
{
    for(auto course:courselist)
    {
        if(course.get_name()==name)
            cout<<course<<endl;
    }        
}

//打印最长名称课程
void CourseManager::print_longest_course() const
{
    int max=0;    
    for(auto course:courselist)
    {
        if(course.get_name().size()>max)
            max=course.get_name().size();
    }

    for(auto course:courselist)
    {
        if(course.get_name().size()==max)
            cout<<course<<endl;
    }
}
