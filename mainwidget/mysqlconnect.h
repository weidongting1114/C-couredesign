#pragma once
#include<Windows.h>
#include<mysql.h>
#include<string>

#pragma comment(lib, "libmysql.lib")
using namespace std;

static MYSQL mysql, * sock; //声明MySQL的句柄
static const char* host = "127.0.0.1"; //因为是作为本机测试，所以填写的是本地IP
static const char* user = "root"; //这里改为你的用户名，即连接MySQL的用户名
static const char* passwd = "root"; //这里改为你的用户密码
static const char* db = "test1"; //这里改为你要连接的数据库的名字,一个数据可能有几张表
static unsigned int port = 3306; //这是MySQL的服务器的端口
static const char* unix_socket = NULL; //unix_socket这是unix下的，我在Windows下，所以就把它设置为NULL
static unsigned long client_flag = 0; //这个参数一般为0

static const char* select_student = "select * from student"; //查询数据库中学生信息
static const char* select_teacher = "select * from teacher";//查询数据库中老师信息

static MYSQL_RES* result; //保存结果集的
static MYSQL_ROW row; //代表的是结果集中的一行
static void Connectmysql()
{
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "utf-8");
	mysql_init(&mysql);
	mysql_real_connect(&mysql, host, user, passwd, db, port, unix_socket, client_flag);//连接数据库
}
static void FreeConnect()
{
	mysql_close(&mysql);
}





