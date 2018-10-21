#include"Course.h"

using namespace std;

//初始化第一个课程
int Course::currentId=1;

//根据名字创建对象，id自动生成
Course::Course(string name=""):name(name){id=currentId++;}

//拷贝构造
Course::Course(const Course& course)
{
	name=course.get_name();
	id=course.get_id();
}

//打印课程信息
void Course::PrintInfo() const
{
	cout<<"Course: "<<id<<":"<<name<<endl;
}

//输出
std::ostream& operator<<(std::ostream& os,const Course& course)
{
	os<<"Course id is "<<course.get_id()<<" , name is "<<course.get_name();
	return os;
}

//读入新创建的课程
void read(std::istream& is,Course& course)
{
	is>>course.name;
}

//////////////////////////////////////////////////////////////////////////////

//打印课程信息
void ProjectCourse::PrintInfo() const 
{
	cout<<"ProjectCourse: "<<id<<":"<<name<<":"<<tag<<endl;
}

//////////////////////////////////////////////////////////////////////////////

//打印课程信息
void JudgeCourse::PrintInfo() const 
{
	cout<<"JudgeCourse: "<<id<<":"<<name<<":"<<time<<endl;
}