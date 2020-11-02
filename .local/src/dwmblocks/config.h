//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"",	"seplayout",	0,	0},*/
	{"",	"music",	0,	11},
	/*{"",	"splitter",	0,	0},*/
	{"",	"bandwidth",	1,	16},
	{"",	"splitter",	0,	0},
	{"",	"nm-intinfo",	20,	8},
	{"",	"nm-laninfo",	20,	8},
	{"",	"nm-waninfo",	20,	8},
	{"",	"splitter",	0,	0},
	/*{"",	"dwmweather",	10000,	0},*/
	{"",	"cpu",		4,	3},
	{"",	"splitter",	0,	0},
	{"",	"ram",		10,	2},
	{"",	"splitter",	0,	0},
	/*{"",	"nvidgpu",		4,	9},*/
	{"",	"volume",	5,	10},
	{"",	"splitter",	0,	0},
	{"",	"battery",	5,	4},
	/*{"",	"corona",	10000,	0},*/
	{"",	"backlight",	0,	1},
	{"",	"updates",	10000,	0},
	{"",	"clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
