//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-bandwidth",			1,	16},
	{"",	"sb-splitter",			0,	0},
	{"",	"sb-nm-intinfo",		20,	8},
	{"",	"sb-nm-laninfo",		20,	8},
	{"",	"sb-nm-waninfo",		20,	8},
	{"",	"sb-splitter",			0,	0},
	{"",	"sb-cpu",			4,	3},
	{"",	"sb-splitter",			0,	0},
	{"",	"sb-ram",			10,	2},
	{"",	"sb-music",			0,	11},
	{"",	"sb-volume",			5,	10},
	{"",	"sb-splitter",			0,	0},
	{"",	"sb-backlight",			0,	1},
	{"",	"sb-battery",			5,	4},
	{"",	"sb-mailbox",			180,	12},
	{"",	"sb-updates",			10000,	0},
	{"",	"sb-clock",			60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
