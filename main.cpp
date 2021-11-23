#include <iostream>
#include "Game.h"
#include "Command.h"

using namespace std;

//	目前的主函数里面全是调试用的废话
//	初版：以第一关为例，提示用户输入相关指令

/*
示例：

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