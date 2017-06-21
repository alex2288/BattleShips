#include "Controller.h"
#include "Model.h"



Controller::Controller()
{
}


Controller::~Controller()
{
}

void Controller::MainLoop() {
	HANDLE threadHandle;
	unsigned long threadID;
	threadHandle = CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE).Run, (LPVOID)this, 0, &threadID);
	while (1) {
		if (_kbhit()) {
			switch (_getch()) {
			case 115:
				ResumeThread(threadHandle);
				break;
			case 112:
				SuspendThread(threadHandle);
				break;
			case 101:
				exit(0);
			}
		}
	}
}