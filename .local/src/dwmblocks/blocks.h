//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"bandwidth",	3,	2},
	{"",	"network",	30,	6},
	{"",	"volume",	0,	10},
	{"",	"weather",	10000,	5},
	{"",	"freespace",	1000,	4},
	{"",	"ram",		4,	4},
	{"",	"cpu",		4,	0},
	{"",	"battery",	5,	0},
	{"",	"clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char* delim = " | ";
