#ifndef COURSEMANAGER_H
#define COURSEMANAGER_H

#include<vector>
#include"Course.h"

using namespace std;

//课程管理类：维护课程列表，执行课程处理任务
class CourseManager{
public:
    CourseManager()=default;

    CourseManager(const vector<Course>& courselist);

    //获取课程数量
    inline int get_course_num() const{return courselist.size();}

    //添加课程（课程名称）
    inline void add_course(const string& name){courselist.push_back(Course(name));}

    //添加课程（课程对象）
    inline void add_course(const Course& course){courselist.push_back(course);}

    //删除最新课程
    void del_course();

    //删除课程（id)
    void del_course(const int id);

    //删除课程（名称)
    void del_course(const string& name);

    //打印课程列表
    void print_course_list() const;

    //打印制定课程(id)
    void print_course(const int id) const;

    //打印制定课程(名称)
    void print_course(const string& name) const;

    //打印最长名称课程
    void print_longest_course() const;

private:
    vector<Course> courselist;//存储课程列表     
};

#endif
