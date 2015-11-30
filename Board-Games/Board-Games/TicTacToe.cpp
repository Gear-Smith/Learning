#include "stdafx.h"
//#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{

}

TicTacToe::~TicTacToe()
{

}

int TicTacToe::Run()
{
	
	TTT.setSize(3, 3);
	drawBoard();
	_player.setState();

	// This is the actual game loop. Total of 9 turns.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			_player.setState(_player._playerState);
			input();
			update();
			drawBoard();

			if (TTT.chkWin(_player.getToken(_player._playerState))) { 
				_gameState = Game::ShowingMenu; 
				std::cin.get(); 
				TTT.ClearScreen();  
				return 1; 
			}
			
			
		}
	}
	return 1;
}

void TicTacToe::input()
{
	do
	{
		_player.whosTurn();
		_player.getMove();
		drawBoard();
	} while (!TTT.isEmpty(_player.getRow(), _player.getCol()));
}

void TicTacToe::update()
{
	TTT.setMove(_player.getRow(), _player.getCol(), _player.getToken(_player._playerState));
}

void TicTacToe::drawBoard()
{
	// TODO:  Make an array to represent the entire board to draw a tile through enum. 
	TTT.ClearScreen();
	char index[3][3]
				{ {'1', '2', '3'},
				  {'4', '5', '6'},
				  {'7', '8', '9'} };
				
				TTT.Color(TTT.DRK_YELLOW);
				cout << "      board index\n";
				TTT.Color(TTT.RED);
				
				// Chose to use a visual index. Made the board look cleaner.
				
				cout << "\n     " << index[0][0] << "  |  " << index[0][1] << "  |  " << index[0][2] << "  \n";
				cout << "\n     " << index[1][0] << "  |  " << index[1][1] << "  |  " << index[1][2] << "  \n";
				cout << "\n     " << index[2][0] << "  |  " << index[2][1] << "  |  " << index[2][2] << "  \n\n";
				TTT.Color(TTT.BRT_GREEN);
				
				cout << "\n";
		
		
				cout << "\t\t        |     |     \n";
				cout << "\t\t     " << TTT.drawTile(0, 0) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  |  " << TTT.drawTile(0, 1) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  |  " << TTT.drawTile(0, 2) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  \n";
				cout << "\t\t   _____|_____|_____\n";
				cout << "\t\t        |     |     \n";
				cout << "\t\t     " << TTT.drawTile(1, 0) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  |  " << TTT.drawTile(1, 1) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  |  " << TTT.drawTile(1, 2) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  \n";
				cout << "\t\t   _____|_____|_____\n";
				cout << "\t\t        |     |     \n";
				cout << "\t\t     " << TTT.drawTile(2, 0) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  |  " << TTT.drawTile(2, 1) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  |  " << TTT.drawTile(2, 2) << ""; TTT.Color(TTT.BRT_GREEN);  cout << "  \n";
				cout << "\t\t        |     |     \n\n";
}

int TicTacToe::alphabeta(int node, int depth, int a, int b, bool maximizingPlayer)
{
	//int val = {};

	//if (depth == 0 || TTT.chkWin(_player.getToken(_player._playerState)))
	//{
	//	// return value for current player, ? = X and ? = O
	//	return /*heuristic value of node*/ 1000 ;
	//}
	//
	//if (maximizingPlayer)
	//{
	//	val = -100;
	//	
	//	for (int child = 0; child < depth; child++)
	//		{
	//			val =	alphabeta(child, depth - 1, a, b, FALSE);
	//			a =		max(a, val);
	//			if (b <= a) { break; }
	//			return val;
	//		}
	//			
	//}

	//else
	//{
	//	val = 100;

	//		for (int child = 0; child < depth; child++)
	//		{
	//			val =	alphabeta(child, depth - 1, a, b, TRUE);
	//			b =		min(b, val);
	//			if (b <= a) { break; }
	//			return val;
	//		}
	//}
	return 42;
}