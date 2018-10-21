#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<string>

using namespace std;

//课程类
class Course{

	//读入新创建的课程
	friend void read(istream& is,Course& course);

public:
	//根据名字创建对象，id自动生成
	Course(string name);

	//拷贝构造
	Course(const Course& course);

	//打印课程信息
	virtual void PrintInfo() const;
	
	//返回课程名称
	inline string get_name() const{return name;}

	//设置课程名称
	inline void set_name(const string& new_name){name=new_name;}

	//返回课程id	
	inline const int get_id() const{return id;} 

	//输出
	friend ostream& operator <<(ostream& os,const Course& course);

protected:
	int id;//课程id
	string name;//课程名称
	static int currentId;//设置静态变量来生成唯一的id值
};

//项目课程添加标签
class ProjectCourse:public Course{
public:
	//设置tage
	inline void set_tag(const string& new_tage){tag=new_tage;}

	//返回标签
	inline string get_tag() const{return tag;}

	//打印课程信息,override重写
	virtual void PrintInfo() const override;
private:
	string tag;//标签
};

//评估课添加时间
class JudgeCourse:public Course{
public:
	//设置时间
	inline void set_time(int new_time){time=new_time;}

	//返回时间
	inline int get_time() const{return time;}

	//打印课程信息
	virtual void PrintInfo() const override;
private:
	int time;
};

#endif
