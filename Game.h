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
//	��Ϸ���к���

void play();




//--------------------------------------------------
//	Space�ռ䣬����Inbox��Outbox��Floor
struct Space {
	int *value;		//�����ֵ
	char *status;		//��Ӧλ�õ�״̬
	int size;		//�ռ��С
	int head, tail;	//ͷ��β��λ��

	//ͨ���˺�������ṹ��
	// Eg. Space Inbox(5);
	Space(int init_size); 
	~Space();		//������delete�����ͷ��ڴ�
};

//--------------------------------------------------
//	Space�����ӿ�
void put(Space* A, int a, int pos);	//��pos������a
void push(Space* A, int a);			//��ĩβ����a
int pop_head(Space* A);				//��ͷ��ȡ��һ������
int read(Space* A, int pos);		//��ȡpos������

//--------------------------------------------------
//	��һ����Commandָ��
struct Command {
	char com[2];			//���ָ��Ĵ����ַ�������������ס�ĩ�ַ���
	int next;				//ִ���굱ǰ������ִ��rankΪnext�Ĳ���
	
	Command();
};

//--------------------------------------------------
//	С������
struct Robot {
	int value;				//��ǰ����
	char status;			//״̬��'e'Ϊ���У�'f'Ϊ��������

	Robot();
};

//--------------------------------------------------


#endif