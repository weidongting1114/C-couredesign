#pragma once
#include<Windows.h>
#include<mysql.h>
#include<string>

#pragma comment(lib, "libmysql.lib")
using namespace std;

static MYSQL mysql, * sock; //����MySQL�ľ��
static const char* host = "127.0.0.1"; //��Ϊ����Ϊ�������ԣ�������д���Ǳ���IP
static const char* user = "root"; //�����Ϊ����û�����������MySQL���û���
static const char* passwd = "root"; //�����Ϊ����û�����
static const char* db = "test1"; //�����Ϊ��Ҫ���ӵ����ݿ������,һ�����ݿ����м��ű�
static unsigned int port = 3306; //����MySQL�ķ������Ķ˿�
static const char* unix_socket = NULL; //unix_socket����unix�µģ�����Windows�£����ԾͰ�������ΪNULL
static unsigned long client_flag = 0; //�������һ��Ϊ0

static const char* select_student = "select * from student"; //��ѯ���ݿ���ѧ����Ϣ
static const char* select_teacher = "select * from teacher";//��ѯ���ݿ�����ʦ��Ϣ

static MYSQL_RES* result; //����������
static MYSQL_ROW row; //������ǽ�����е�һ��
static void Connectmysql()
{
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "utf-8");
	mysql_init(&mysql);
	mysql_real_connect(&mysql, host, user, passwd, db, port, unix_socket, client_flag);//�������ݿ�
}
static void FreeConnect()
{
	mysql_close(&mysql);
}





