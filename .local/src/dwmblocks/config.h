//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"music",	0,	11}, */
	{"",	"pacpackages",	0,	8},
	{"",	"bandwidth",	5,	0},
	{"",	"torrent",	20,	7},
	{"",	"news",		0,	6},
	/* {"",	"moonphase",	18000,	5}, */
	{"^c#d3869b^",	"weather",	18000,	5},
	{"",	"mailbox",	180,	12},
	{"^c#b8bb26^",		"volume",	0,	10},
	{"",	"battery | tr \'\n\' \' \'",	5,	0},
	{"^d^",	"clock",	60,	0},
	{"",	"internet",	5,	4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
