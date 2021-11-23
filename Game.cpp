/******************************************************
 *	@file	Game.cpp
 *	@date	2021-11-21
 *	@author	Zqq
 * 

 ******************************************************
 *	Change History:
 *	<date>		/<author>	/<Description>
 *	2021-11-21	/			/
 ******************************************************/

#include <iostream>
#include <fstream>
#include "Game.h"

using namespace std;

Space *Inbox, *Outbox, *Floor;	//入口、出口、空地指针
Robot robot;					//机器人所持数字
int Game_status;				//游戏状态，1为正常进行，0为正常退出，-1为报错
int command_size;				//总指令数

/*
 *	Space
 */

//构造一个size为init_size的Space
Space::Space(int init_size) {
	size = init_size;
	head = 0;
	tail = 0;
	value = new int[init_size];
	status = new char[init_size];
	for (int i = 0; i < init_size; i++) {
		status[i] = '\0';
	}

	cout << "A Space of size " << size << " is created.\n";	//调试用
}

Space::~Space() {
	delete value;
	delete status;

	cout << "A Space of size " << size << " is deleted.\n";	//调试用
}

//在pos处插入a
void put(Space* A, int a, int pos) {
	A->value[pos] = a;
	A->status[pos] = 'f';
}

//在末尾插入a
void push(Space* A, int a) {
	A->value[A->tail] = a;
	A->status[A->tail] = 'f';
	A->tail++;
}

//从头部取出一个数字
int pop_head(Space* A) {
	int value = A->value[A->head];
	A->status[A->head] = 'e';
	A->head++;
	return value;
}

//读取pos处数字
int read(Space* A, int pos) {
	return A->value[pos];
}

Command::Command(){
	next = -1;
}

Robot::Robot() {
	status = 'e';
}
