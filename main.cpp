#include <iostream>
#include "Game.h"
#include "Command.h"

using namespace std;

//	Ŀǰ������������ȫ�ǵ����õķϻ�
//	���棺�Ե�һ��Ϊ������ʾ�û��������ָ��

/*
ʾ����

*/

extern Space *Inbox;

int main() {
	// select level & load level

	// load inbox
	int a;
	cin >> a;
	for(int i = 0; i < 5; i++) {
		Inbox = new Space(i);
		delete Inbox;
	}

	Command *commands = new Command[a];
	
	// "input" instructions
}