#include <iostream>

char game_dis[3][3] = {
{ '1','2','3' },
{'4', '5', '6'},
{'7', '8', '9'},
};
int input_num = 0;
int loop = 0;
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

char Check_Win() {
	if (game_dis[0][0] == 'X' && game_dis[0][1] == 'X' && game_dis[0][2] == 'X') {
		return 'X';
	}
}
		
void Input() {
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

int main() {
	while (loop < 5) {
		Dis_draw();
		std::cout << "Where do you want to change : " << std::endl;
		std::cin >> input_num;
		Input();
		Change_Player();
		loop++;
	}
	return 0;
}