//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"music",	0,	11},
	{"",	"updates",	10000,	0},
	{"",	"bandwidth",	1,	16},
	{"",	"ipinfo-nm",	20,	8},
	/*{"",	"dwmweather",	10000,	0},*/
	{"",	"cpu",		4,	3},
	{"",	"volume",	0,	10},
	{"",	"ram",		4,	2},
	/*{"",	"nvidgpu",		4,	9},*/
	/*{"",	"dwmbattery",	5,	0},*/
	{"",	"corona",	10000,	0},
	{"",	"clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
