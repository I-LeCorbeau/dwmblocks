//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.build/dwmblocks/modules/mem",			2,		9},
	
	{"", "~/.build/dwmblocks/modules/cpu",			1,		0},

	{"", "~/.build/dwmblocks/modules/network",		5,		8},

	{"", "~/.build/dwmblocks/modules/volume",		0,		10},
	
	{"", "~/.build/dwmblocks/modules/clock",		1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
