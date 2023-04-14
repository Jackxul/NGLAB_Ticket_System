//select.c
//For station selection
//Jack_Xul
#include "select.h"
void selection(){
	char *st_info[]={"BR" , "BL" , "G" , "Y" , "R"};
	int st_size = sizeof(st_info)/sizeof(st_info[0]);
	int select_item = 0;
	bool flag = true;
	initscr();//initialize the screen      <===> endwin();
	cbreak();//turn off line buffering     <===> nocbreak();
	noecho();//turn off echoing of typed keys <===> echo();
	keypad(stdscr, TRUE);//turn on keypad mode ==> up down left right  <===> keypad(stdscr, FALSE);
			     //
	while (flag){
		clear();
		
		// Print the list
		printw("Select Info : \n");
		for (int i = 0; i < st_size; i++){
			if (i == select_item){
				printw("-> %s\n", st_info[i]);
			}else{
				printw("   %s\n", st_info[i]);
			}
		}
		int c = getch();	
		switch(c){
			case KEY_UP:
				if (select_item > 0){
					select_item--;
				}
				break;
			case KEY_DOWN:
				if(select_item < st_size - 1){
					select_item++;
				}
				break;
			case '\n': //Enter
				mvprintw(st_size + 2 , 0,"Station Info : %s\n", st_info[select_item]);
				refresh();//For the screen to update ==> used in curses mode
				getch();
				flag = false;
				break;
		}
	}
	endwin();//end curses mode == (nocbreak() + echo() + keypad(stdscr, FALSE))
}
