//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sp-bandwidth",			1,	16},
	{"",	"sp-splitter",			0,	0},
	{"",	"sp-nm-intinfo",		20,	8},
	{"",	"sp-nm-laninfo",		20,	8},
	{"",	"sp-nm-waninfo",		20,	8},
	{"",	"sp-splitter",			0,	0},
	{"",	"sp-cpu",			4,	3},
	{"",	"sp-splitter",			0,	0},
	{"",	"sp-ram",			10,	2},
	{"",	"sp-music",			0,	11},
	{"",	"sp-volume",			5,	10},
	{"",	"sp-splitter",			0,	0},
	{"",	"sp-backlight",			0,	1},
	{"",	"sp-battery",			5,	4},
	{"",	"sb-mailbox",			180,	12},
	{"",	"sp-updates",			10000,	0},
	{"",	"sp-clock",			60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "\0";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
