/***************************************************
 *	@file	Game.h
 *	@date	2021-11-21
 *	@author	Zqq
 * 

 ***************************************************
 *	Change History:
 *	<date>		/<author>	/<Description>
 *	2021_11_21	/			/
 ***************************************************/

#ifndef GAME_H
#define GAME_H

//--------------------------------------------------
//	游戏运行函数

void play();




//--------------------------------------------------
//	Space空间，用于Inbox，Outbox，Floor
struct Space {
	int *value;		//存放数值
	char *status;		//对应位置的状态
	int size;		//空间大小
	int head, tail;	//头、尾的位置

	//通过此函数构造结构体
	// Eg. Space Inbox(5);
	Space(int init_size); 
	~Space();		//析构，delete数组释放内存
};

//--------------------------------------------------
//	Space操作接口
void put(Space* A, int a, int pos);	//在pos处插入a
void push(Space* A, int a);			//在末尾插入a
int pop_head(Space* A);				//从头部取出一个数字
int read(Space* A, int pos);		//读取pos处数字

//--------------------------------------------------
//	“一条”Command指令
struct Command {
	char com[2];			//存放指令的代表字符（明文命令的首、末字符）
	int next;				//执行完当前操作后，执行rank为next的操作
	
	Command();
};

//--------------------------------------------------
//	小机器人
struct Robot {
	int value;				//当前数字
	char status;			//状态，'e'为空闲，'f'为持有数字

	Robot();
};

//--------------------------------------------------


#endif