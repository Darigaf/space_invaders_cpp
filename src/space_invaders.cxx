#include <ncurses.h>
#include <string.h>
void start_screen(){
	//start screen with some defined atributes
	initscr();
	raw();	
	noecho();
	keypad(stdscr, TRUE);
	//start default color scheme
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	attron(COLOR_PAIR(1));

}
void end_screen(){
	endwin();
	attroff(COLOR_PAIR(1));
}
int main_screen(){
	int max_rows, max_cols;
	getmaxyx(stdscr, max_rows, max_cols);
	char game_title[]="SPACE INVADERS";
	char game_title_pt_br[]="OS INVASORES DO ESPAÇO";
	mvprintw(0,(max_cols-strlen(game_title))/2,"%s",game_title);
}

int main(){
	start_screen();
	refresh();
	getch();
	main_screen();
	refresh();
	getch();
	end_screen();	
	return 0;
}
