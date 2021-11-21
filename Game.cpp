#include "pch.h"
#include "Game.h"
#include <iostream>

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
