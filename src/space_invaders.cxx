#include <ncurses.h>
void iniciar_tela(){
	initscr();
	raw();	
	noecho();
	keypad(stdscr, TRUE);
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	attron(COLOR_PAIR(1));
}
void encerrar_tela(){
	endwin();
	attroff(COLOR_PAIR(1));
}
int main(){
	char nome_jogador;
	iniciar_tela();
	printw("SPACE INVADERS");
	nome_jogador = getch();
	printw("%c", nome_jogador);
	refresh();
	getch();
	encerrar_tela();	
	return 0;
}
