#include <iostream>
#include <string>
void clear_screen(){
	std::cout << std::string( 100,'\n');
}
int main(){

	clear_screen();
	std::cout << "Bem vindo ao melhor space invaders\n";
	return 0;
}
