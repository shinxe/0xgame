#include <iostream>

char game_dis[3][3] = {
{ '1','2','3' },
{'4', '5', '6'},
{'7', '8', '9'},
};
int input_num;
char player = 'X';

void Dis_draw() {
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			std::cout << game_dis[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void Change_Player() {
	if (player == 'X') {
		player = 'O';
	}
	else {
		player = 'X';
	}
}

/*1 2 3
* 4 5 6
* 7 8 9*/

void Input() {
	std::cout << "Where do you want to change : ";
	std::cin >> input_num;

	switch (input_num) {
	case 1:
		game_dis[0][0] = player;
		break;
	case 2:
		game_dis[0][1] = player;
		break;
	case 3:
		game_dis[0][2] = player;
		break;
	case 4:
		game_dis[1][0] = player;
		break;
	case 5:
		game_dis[1][1] = player;
		break;
	case 6:
		game_dis[1][2] = player;
		break;
	case 7:
		game_dis[2][0] = player;
		break;
	case 8:
		game_dis[2][1] = player;
		break;
	case 9:
		game_dis[2][2] = player;
		break;
	default:
		break;
	}
}

char Check_Win() {
	//beside
	if (game_dis[0][0] == 'X' && game_dis[1][0] == 'X' && game_dis[2][0] == 'X')
		return 'X';
	if (game_dis[1][0] == 'X' && game_dis[1][1] == 'X' && game_dis[1][2] == 'X') 
		return 'X';
	if (game_dis[2][0] == 'X' && game_dis[2][1] == 'X' && game_dis[2][2] == 'X') 
		return 'X';
	//vertical
	if (game_dis[0][0] == 'X' && game_dis[0][1] == 'X' && game_dis[0][2] == 'X') 
		return 'X';
	if (game_dis[1][0] == 'X' && game_dis[1][1] == 'X' && game_dis[1][2] == 'X') 
		return 'X';
	if (game_dis[2][0] == 'X' && game_dis[2][1] == 'X' && game_dis[2][2] == 'X') 
		return 'X';
	
	//diagonal
	if (game_dis[0][0] == 'X' && game_dis[1][1] == 'X' && game_dis[2][2] == 'X') 
		return 'X';
	if (game_dis[0][2] == 'X' && game_dis[1][1] == 'X' && game_dis[2][0] == 'X') 
		return 'X';
	

	//O beside
	if (game_dis[0][0] == 'O' && game_dis[1][0] == 'O' && game_dis[2][0] == 'O') 
		return 'O';
	if (game_dis[0][1] == 'O' && game_dis[1][1] == 'O' && game_dis[2][1] == 'O') 
		return 'O';
	if (game_dis[0][2] == 'O' && game_dis[1][2] == 'O' && game_dis[2][2] == 'O') 
		return 'O';
	
	//vertical
	if (game_dis[0][0] == 'O' && game_dis[0][1] == 'O' && game_dis[0][2] == 'O') 
		return 'O';
	if (game_dis[1][0] == 'O' && game_dis[1][1] == 'O' && game_dis[1][2] == 'O') 
		return 'O';
	if (game_dis[2][0] == 'O' && game_dis[2][1] == 'O' && game_dis[2][2] == 'O') 
		return 'O';
	
	//diagonal
	if (game_dis[0][0] == 'O' && game_dis[1][1] == 'O' && game_dis[2][2] == 'O') 
		return 'O';
	if (game_dis[0][2] == 'O' && game_dis[1][1] == 'O' && game_dis[2][0] == 'O') 
		return 'O';

	return 'N';
}

int main() {
	Dis_draw();
	while (1) {
		std::cout << std::endl;
		Input();
		Dis_draw();
		if (Check_Win() == 'X') {
			std::cout << std::endl << "X wins" << std::endl;
			break;
		}
		else if (Check_Win() == 'O') {
			std::cout << std::endl << "O wins" << std::endl;
			break;
		}
		Change_Player();
	}
	return 0;
}