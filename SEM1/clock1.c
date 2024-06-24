#include <stdio.h>
#include <windows.h>
//#include <graphics.h>
void main()
{
	int hours,minutes,seconds;
	int d=1000;
	for(hours=0;hours<24;hours++){
		for(minutes=0;minutes<=60;minutes++){
			for(seconds=0;seconds<=60;seconds++){
				printf("%d : %d : %d\n",hours,minutes,seconds);
				Sleep(d);
				system("cls");
			}
		}
	}
}