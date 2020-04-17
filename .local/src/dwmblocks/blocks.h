//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"dwmupdates",	10000,	0},
	{"",	"dwmbandwidth",	3,	0},
	{"",	"dwmlan",	30,	0},
	{"",	"dwmwan",	30,	0},
	{"",	"dwmvolume",	0,	10},
	{"",	"dwmweather",	10000,	0},
	/*{"",	"dwmfreespace",	1000,	0},*/
	{"",	"dwmram",	4,	0},
	{"",	"dwmcpu",	4,	0},
	{"",	"dwmbattery",	5,	0},
	{"",	"dwmcorona",	10000,	0},
	{"",	"dwmclock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char* delim = "";
