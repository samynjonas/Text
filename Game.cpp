#include "pch.h"
#include "Game.h"
#include <iostream>
#include <vector>

//Basic game functions
#pragma region gameFunctions											
void Start()
{
	// initialize game resources here
	
}

void Draw()
{
	ClearBackground();
	// Put your own draw statements here
	float letterSize{ 2 };
	float letterOffset{ letterSize * 5.f };
	Point2f location(10, g_WindowHeight - letterSize * 7 - letterOffset);

	int vectorSize{ int(text.size()) };
	for (int i = 0; i < vectorSize; i++)
	{
		if (location.x > g_WindowWidth)
		{
			std::cout << location.x << std::endl;
			int backCounter{ int(text.size()) - 1 };
			std::vector<char> temp;

			while (text[backCounter] != ' ')
			{
				temp.push_back(text[backCounter]);
				text.pop_back();
				backCounter = int(text.size()) - 1;
			}
			text.push_back( '^' );
			for (int i = int(temp.size() - 1); i >= 0; i--)
			{
				text.push_back(temp[i]);
			}
		}		
		
		if (text[i] == ' ')
		{
			location.x = location.x + letterOffset;
		}
		else if (text[i] == '^' )
		{
			location.x = 10;
			location.y = location.y - letterSize * 7 - letterOffset;
		}
		else
		{
			FontLoader(text[i], location, letterSize, letterSize, 1);
			location.x = location.x + letterOffset;
		}
	}
	SetColor(0, 0, 0);
	DrawLine(location.x, location.y + letterSize, location.x, location.y + letterSize * 8);
}

void Update(float elapsedSec)
{
	// process input, do physics
	/*
	for (int i = 0; i < int(text.size()); i++)
	{
		std::cout << text[i];
	}
	std::cout << std::endl;
	*/
}

void End()
{
	// free game resources here
}
#pragma endregion gameFunctions

//Keyboard and mouse input handling
#pragma region inputHandling											
void OnKeyDownEvent(SDL_Keycode key)
{
	switch (key)
	{
	case SDLK_a:
		if (g_CapsOn == false)
		{
			text.push_back('a');
		}
		else
		{
			text.push_back('A');
		}		
		break;
	case SDLK_b:
		if (g_CapsOn == false)
		{
			text.push_back('b');
		}
		else
		{
			text.push_back('B');
		}		
		break;
	case SDLK_c:
		if (g_CapsOn == false)
		{
			text.push_back('c');
		}
		else
		{
			text.push_back('C');
		}
		break;
	case SDLK_d:
		if (g_CapsOn == false)
		{
			text.push_back('d');
		}
		else
		{
			text.push_back('D');
		}
		break;
	case SDLK_e:
		if (g_CapsOn == false)
		{
			text.push_back('e');
		}
		else
		{
			text.push_back('E');
		}
		break;
	case SDLK_f:
		if (g_CapsOn == false)
		{
			text.push_back('f');
		}
		else
		{
			text.push_back('F');
		}
		break;
	case SDLK_g:
		if (g_CapsOn == false)
		{
			text.push_back('g');
		}
		else
		{
			text.push_back('G');
		}
		break;
	case SDLK_h:
		if (g_CapsOn == false)
		{
			text.push_back('h');
		}
		else
		{
			text.push_back('H');
		}
		break;
	case SDLK_i:
		if (g_CapsOn == false)
		{
			text.push_back('i');
		}
		else
		{
			text.push_back('I');
		}
		break;
	case SDLK_j:
		if (g_CapsOn == false)
		{
			text.push_back('j');
		}
		else
		{
			text.push_back('J');
		}
		break;
	case SDLK_k:
		if (g_CapsOn == false)
		{
			text.push_back('k');
		}
		else
		{
			text.push_back('K');
		}
		break;
	case SDLK_l:
		if (g_CapsOn == false)
		{
			text.push_back('l');
		}
		else
		{
			text.push_back('L');
		}
		break;
	case SDLK_m:
		if (g_CapsOn == false)
		{
			text.push_back('m');
		}
		else
		{
			text.push_back('M');
		}
		break;
	case SDLK_n:
		if (g_CapsOn == false)
		{
			text.push_back('n');
		}
		else
		{
			text.push_back('N');
		}
		break;
	case SDLK_o:
		if (g_CapsOn == false)
		{
			text.push_back('o');
		}
		else
		{
			text.push_back('O');
		}
		break;
	case SDLK_p:
		if (g_CapsOn == false)
		{
			text.push_back('p');
		}
		else
		{
			text.push_back('P');
		}
		break;
	case SDLK_q:
		if (g_CapsOn == false)
		{
			text.push_back('q');
		}
		else
		{
			text.push_back('Q');
		}
		break;
	case SDLK_r:
		if (g_CapsOn == false)
		{
			text.push_back('r');
		}
		else
		{
			text.push_back('R');
		}
		break;
	case SDLK_s:
		if (g_CapsOn == false)
		{
			text.push_back('s');
		}
		else
		{
			text.push_back('S');
		}
		break;
	case SDLK_t:
		if (g_CapsOn == false)
		{
			text.push_back('t');
		}
		else
		{
			text.push_back('T');
		}
		break;
	case SDLK_u:
		if (g_CapsOn == false)
		{
			text.push_back('u');
		}
		else
		{
			text.push_back('U');
		}
		break;
	case SDLK_v:
		if (g_CapsOn == false)
		{
			text.push_back('v');
		}
		else
		{
			text.push_back('V');
		}
		break;
	case SDLK_w:
		if (g_CapsOn == false)
		{
			text.push_back('w');
		}
		else
		{
			text.push_back('W');
		}
		break;
	case SDLK_x:
		if (g_CapsOn == false)
		{
			text.push_back('x');
		}
		else
		{
			text.push_back('X');
		}
		break;
	case SDLK_y:
		if (g_CapsOn == false)
		{
			text.push_back('y');
		}
		else
		{
			text.push_back('Y');
		}
		break;
	case SDLK_z:
		if (g_CapsOn == false)
		{
			text.push_back('z');
		}
		else
		{
			text.push_back('Z');
		}
		break;
	case SDLK_SPACE:
		text.push_back(' ');
		break;
	case SDLK_BACKSPACE:
		if (text.size() != 0) 
		{
			text.pop_back();
		}
		break;
	case SDLK_RETURN:
		text.push_back( '^' );
		break;
	case SDLK_KP_PERIOD: 
		text.push_back('.');
		break;
	case SDLK_KP_0:
		text.push_back('0');
		break;
	case SDLK_0:
		if (g_CapsOn == false)
		{
			text.push_back(')');
		}
		else
		{
			text.push_back('0');
		}
		break;
	case SDLK_KP_1:
		text.push_back('1');
		break;
	case SDLK_KP_2:
		text.push_back('2');
		break;
	case SDLK_KP_3:
		text.push_back('3');
		break;
	case SDLK_KP_4:
		text.push_back('4');
		break;
	case SDLK_KP_5:
		text.push_back('5');
		break;
	case SDLK_5:
		if (g_CapsOn == false)
		{
			text.push_back('(');
		}
		else
		{
			text.push_back('5');
		}
		break;
	case SDLK_KP_6:
		text.push_back('6');
		break;
	case SDLK_KP_7:
		text.push_back('7');
		break;
	case SDLK_KP_8:
		text.push_back('8');
		break;
	case SDLK_KP_9:
		text.push_back('9');
		break;
	case SDLK_KP_PLUS:
		text.push_back('+');
		break;
	case SDLK_KP_MINUS:
		text.push_back('-');
		break;
	case SDLK_KP_MULTIPLY:
		text.push_back('*');
		break;
	case SDLK_KP_DIVIDE:
		text.push_back('/');
		break;
	case SDLK_COLON:
		if (g_CapsOn == false)
		{
			text.push_back(':');
		}
		else
		{
			text.push_back('/');
		}
		break;
	case SDLK_SEMICOLON:
		if (g_CapsOn == false)
		{
			text.push_back(';');
		}
		else
		{
			text.push_back('.');
		}
		break;
	case SDLK_EQUALS:
		if (g_CapsOn == false)
		{
			text.push_back('=');
		}
		else
		{
			text.push_back('+');
		}
		break;
	case SDLK_COMMA:
		if (g_CapsOn == false)
		{
			text.push_back(',');
		}
		else
		{
			text.push_back('?');
		}
		break;
	case SDLK_8:
		if (g_CapsOn == false)
		{
			text.push_back('!');
		}
		else
		{
			text.push_back('8');
		}
		break;
	case SDLK_MINUS:
		if (g_CapsOn == false)
		{
			text.push_back('-');
		}
		else
		{
			text.push_back('_');
		}
		break;
		break;
	case SDLK_CAPSLOCK:
		g_CapsOn = !g_CapsOn;
		if (CAPSLOCK_ON == 1)
		{
			g_CapsOn = true;
		}
		break;
	case SDLK_LSHIFT:
	case SDLK_RSHIFT:
		g_CapsOn = !g_CapsOn;
		break;
	}
}

void OnKeyUpEvent(SDL_Keycode key)
{
	switch (key)
	{
	case SDLK_LSHIFT:
	case SDLK_RSHIFT:
		g_CapsOn = !g_CapsOn;
		break;
	}
}

void OnMouseMotionEvent(const SDL_MouseMotionEvent& e)
{
	//std::cout << "  [" << e.x << ", " << e.y << "]\n";
	//Point2f mousePos{ float( e.x ), float( g_WindowHeight - e.y ) };
}

void OnMouseDownEvent(const SDL_MouseButtonEvent& e)
{

}

void OnMouseUpEvent(const SDL_MouseButtonEvent& e)
{
	////std::cout << "  [" << e.x << ", " << e.y << "]\n";
	//switch (e.button)
	//{
	//case SDL_BUTTON_LEFT:
	//{
	//	//std::cout << "Left mouse button released\n";
	//	//Point2f mousePos{ float( e.x ), float( g_WindowHeight - e.y ) };
	//	break;
	//}
	//case SDL_BUTTON_RIGHT:
	//	//std::cout << "Right mouse button released\n";
	//	break;
	//case SDL_BUTTON_MIDDLE:
	//	//std::cout << "Middle mouse button released\n";
	//	break;
	//}
}
#pragma endregion inputHandling

#pragma region ownDefinitions
// Define your own functions here

void FontLoader(char character, Point2f location, float width, float height, int color)
{
	CheckColor(color);

	switch (character)
	{
	case 'a':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0,	0,
						   0, color, color,	0,
						   0, 0, 0,	color,
						   0, color, color, color,
						   color, 0, 0,	color,
						   0, color, color,	color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'A':
	{
		int Letter[28] = { 0,	  color, color, 0,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, color, color, color,
						   color, 0, 0,			color,
						   color, 0, 0,			color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'b':
	{
		int Letter[28] = { color, 0, 0, 0,
						   color, 0, 0,	0,
						   color, 0, 0,	0,
						   color, color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, color, color, 0 };

		LetterDrawer(Letter, width, height, location);

	}
	break;
	case 'B':
	{
		int Letter[28] = { color, color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, color, color, 0 };

		LetterDrawer(Letter, width, height, location);

	}
	break;
	case 'c':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0,	0,
						   0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, 0,
						   color, 0, 0,	color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'C':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0,		color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'd':
	{
		int Letter[28] = { 0, 0, 0,		color,
						   0, 0, 0,		color,
						   0, 0, 0,		color,
						   0, color, color,	color,
						   color, 0, 0,	color,
						   color, 0, 0,	color,
						   0, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'D':
	{
		int Letter[28] = { color, color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, color, color, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'e':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, color, 0,
						   color, 0, 0, color,
						   color, color, color, color,
						   color, 0, 0, 0,
						   0, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'E':
	{
		int Letter[28] = { color, color, color, color,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'f':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, 0,
						   color, color, color, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'F':
	{
		int Letter[28] = { color, color, color, color,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'g':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0,	0,
						   0, color, color,	color,
						   color, 0, 0, color,
						   0, color, color, color,
						   0, 0, 0, color,
						   0, color, color, 0};

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'G':
	{
		int Letter[28] = { 0,	 color, color, 0,
						   color,0,		0,	   color,
						   color,0,		0,	   0,
						   color,0,		0,	   0,
						   color,0,		color, color,
						   color,0,		0,	   color,
						   0,	 color, color, 0, };
		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'h':
	{
		int Letter[28] = { color, 0,	 0,		0,
						   color, 0,	 0,		0,
						   color, 0,	 0,		0,
						   color, color, color, 0,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'H':
	{
		int Letter[28] = { color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   color, color, color, color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'i':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, color, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'I':
	{
		int Letter[28] = { 0, color, color, color,
						   0,	  0, color, 0,
						   0,	  0, color, 0,
						   0,	  0, color, 0,
						   0,	  0, color, 0,
						   0,	  0, color, 0,
						   0, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'j':
	{
		int Letter[28] = { 0,	  0,	 0,	color,
						   0,	  0,	 0,	0,
						   0,	  0,	 0,	color,
						   0,	  0,	 0,	color,
						   0, 0,	 0,		color,
						   0, color,	 0,	color,
						   0,	  0, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'J':
	{
		int Letter[28] = { 0,	  0,	 0,		color,
						   0,	  0,	 0,		color,
						   0,	  0,	 0,		color,
						   0,	  0,	 0,		color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   0,	  color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'k':
	{
		int Letter[28] = { color, 0, 0, 0,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, color, color, 0,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'K':
	{
		int Letter[28] = { color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, color, 0,
						   color, color, 0, 0,
						   color, 0, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'l':
	{
		int Letter[28] = { color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'L':
	{
		int Letter[28] = { color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'm':
	{
		int Letter[28] = { 0, 0, 0,	0,
						   0, 0, 0, 0,
						   color, color, 0,	    color,
						   color, 0,	 color,	color,
						   color, 0,	 color,	color,
						   color, 0,	 color,	color,
						   color, 0,	 color,	color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'M':
	{
		int Letter[28] = { color, 0,	 0,		color,
						   color, color, color, color,
						   color, color, color,	color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color,
						   color, 0,	 0,		color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'n':
	{
		int Letter[28] = { 0, 0, 0,	0,
						   0, 0, 0, 0,
						   color, color, color,  0,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'N':
	{
		int Letter[28] = { color, 0,	0,		color,
						   color, color,0,		color,
						   color, 0,	color,  color,
						   color, 0,	0,		color,
						   color, 0,	0,		color,
						   color, 0,	0,		color,
						   color, 0,	0,		color, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'o':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'O':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'p':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   color, color, color,	0,
						   color, 0, 0, color,
						   color, color, color, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'P':
	{
		int Letter[28] = { color, color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, color, color, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'q':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, color, color,
						   color, 0, 0, color,
						   0, color, color, color,
						   0, 0, 0, color,
						   0, 0, 0, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'Q':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, color, 0,
						   0, color, 0, color, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'r':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0,	0,
						   color, 0, color, color,
						   color, color, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, 0, 0,	0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'R':
	{
		int Letter[28] = { color, color, color, 0,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, color, color, 0,
						   color, 0, 0,		    color,
						   color, 0, 0,			color,
						   color, 0, 0,			color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 's':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0,	0,
						   0, color, color,	color,
						   color, 0, 0, 0,
						   0, color, color,	0,
						   0, 0, 0,	color,
						   color, color, color,	0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'S':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, 0,
						   0, color, color, 0,
						   0, 0, 0,		color,
						   color, 0, 0, color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 't':
	{
		int Letter[28] = { 0, color, 0, 0,
						   0, color, 0, 0,
						   color, color, color, color,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, color,
						   0, 0, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'T':
	{
		int Letter[28] = { 0, color, color, color,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'u':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'U':
	{
		int Letter[28] = { color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'v':
	{
		int Letter[28] = { 0, 0, 0,	0,
						   0, 0, 0,	0,
						   color, 0, 0,	color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, color, color, color,
						   0,	  color, color,	0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'V':
	{
		int Letter[28] = { color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, color, color, color,
						   0,	  color, color,	0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'w':
	{
		int Letter[28] = { 0, 0, 0,	0,
						   0, 0, 0,	0,
						   color, 0, 0,	color,
						   color, 0, 0,	        color,
						   color, 0,     color, color,
						   color, 0,	 color, color,
						   color, color, 0,		color, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'W':
	{
		int Letter[28] = { color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, color, color, color,
						   color, 0, 0,			color, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'x':
	{
		int Letter[28] = { 0, 0, 0,	0,
						   0, 0, 0,	0,
						   color, 0, 0,	color,
						   color, 0, 0, color,
						   0, color, color,	0,
						   color, 0, 0,	color,
						   color, 0, 0,	color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'X':
	{
		int Letter[28] = { color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   0,	color, color, 0,
						   color, 0, 0,		color,
						   color, 0, 0,		color,
						   color, 0, 0,		color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'y':
	{
		int Letter[28] = { 0, 0, 0,	0,
						   0, 0, 0,	0,
						   color, 0, 0,	color,
						   color, 0, 0, color,
						   0, color, color,	color,
						   0, 0, 0,	color,
						   0, color, color,	0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'Y':
	{
		int Letter[28] = { color, 0, 0,			color,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   0,	  color, color, color,
						   0, 0, 0,				color,
						   color, 0, 0,			color,
						   0,	  color, color,	0, };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'z':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0,	0,
						   color, color, color,	color,
						   0, 0, 0, color,
						   0, color, color, 0,
						   color, 0, 0, 0,
						   color, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case 'Z':
	{
		int Letter[28] = { color, color, color, color,
						   0, 0, 0,				color,
						   0, 0, 0,				color,
						   0,	  color, color, 0,
						   color, 0, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, color };

		LetterDrawer( Letter, width, height, location);
	}
	break;	
	case '0':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, color, color,
						   color, color, 0, color,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '1':
	{
		int Letter[28] = { 0, 0,	 color, 0,
						   0, color, color, 0,
						   0, 0,	 color, 0,
						   0, 0,	 color, 0,
						   0, 0,	 color, 0,
						   0, 0,	 color, 0,
						   0, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '2':
	{
		int Letter[28] = { 0,	  color,color, 0,
						   color, 0, 0,		color,
						   0, 0, 0,		color,
						   0, 0,	color, 0,
						   0,	color, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '3':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   0, 0, 0, color,
						   0, color, color, 0,
						   0, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '4':
	{
		int Letter[28] = { 0, 0,		color,	color,
						   0,	  color, 0,		color,
						   color, 0, 0,			color,
						   color, color, color, color,
						   0, 0, 0,				color,
						   0, 0, 0,				color,
						   0, 0, 0,				color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '5':
	{
		int Letter[28] = { color, color, color, color,
						   color, 0, 0, 0,
						   color, color, color, 0,
						   0, 0, 0,				color,
						   0, 0, 0,				color,
						   0, 0, 0,				color,
						   color, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '6':
	{
		int Letter[28] = { 0, 0,		 color, 0,
						   0,	  color, 0, 0,
						   color, 0, 0, 0,
						   color, color, color, 0,
						   color, 0, 0,			color,
						   color, 0, 0,			color,
						   0,	  color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '7':
	{
		int Letter[28] = { color, color, color, color,
						   0, 0, 0,				color,
						   0, 0, 0,				color,
						   0, 0,		 color, 0,
						   0,	  color, 0, 0,
						   0,	  color, 0, 0,
						   0,	  color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '8':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '9':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   color, 0, 0, color,
						   0, color, color, color,
						   0, 0, 0, color,
						   0, 0, color, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '+':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, color, color, color,
						   0, 0, color, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '-':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, color, color,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '*':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, color, 0,
						   0, color, color, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '/':
	{
		int Letter[28] = { 0, 0, 0, color,
						   0, 0, 0, color,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, color, 0, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '=':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, color, color,
						   0, 0, 0, 0,
						   0, color, color, color,
						   0, 0, 0, 0,
						   0, 0, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '?':
	{
		int Letter[28] = { 0, color, color, 0,
						   color, 0, 0, color,
						   0, 0, 0, color,
						   0, 0, color, 0,
						   0, color, 0, 0,
						   0, 0, 0, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '!':
	{
		int Letter[28] = { 0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, 0, 0, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '.':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case ',':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	case ';':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case ':':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, color, 0,
						   0, 0, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '(':
	{
		int Letter[28] = { 0, 0, color, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, color, 0, 0,
						   0, 0, color, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case ')':
	{
		int Letter[28] = { 0, color, 0, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, 0, color, 0,
						   0, color, 0, 0 };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	case '_':
	{
		int Letter[28] = { 0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   0, 0, 0, 0,
						   color, color, color, color };

		LetterDrawer(Letter, width, height, location);
	}
	break;
	}
}

void LetterDrawer(int array[], float width, float height, Point2f location)
{	
	float BlockWidth{ width };
	float BlockHeight{ height };

	int counter{};
	for (int y = 7; y > 0; y--)
	{
		for (int x = 0; x < 4; x++)
		{
			if (array[counter] != 0)
			{
				FillRect(location.x + BlockWidth * x, location.y + BlockHeight * y, BlockWidth, BlockHeight);
			}
			counter++;
		}
	}
}

void CheckColor(int color = 1)
{
	Color4f black( 0/ 255.f, 0/ 255.f, 0/ 255.f, 1);
	Color4f red(255 / 255.f, 0 / 255.f, 0 / 255.f, 1);
	Color4f green(0 / 255.f, 255 / 255.f, 0 / 255.f, 1);
	Color4f blue(0 / 255.f, 0 / 255.f, 255 / 255.f, 1);

	switch (color)
	{
	case 1:
		SetColor(black);
		break;
	case 2:
		SetColor(red);
		break;
	case 3:
		SetColor(green);
		break;
	case 4:
		SetColor(blue);
		break;
	default:
		SetColor(black);
		break;
	}
}
#pragma endregion ownDefinitions