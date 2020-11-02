/* MODWM - modular dynamic window manager */
/* See LICENSE file for copyright and license details */

/* appearance */
#if ROUNDED_CORNERS_PATCH
static const unsigned int borderpx       = 10;   /* border pixel of windows */
static const int corner_radius           = 10;
#else
static const unsigned int borderpx       = 3;   /* border pixel of windows */
#endif // ROUNDED_CORNERS_PATCH

static const unsigned int snap           = 7;  /* snap pixel */
#if VANITYGAPS_PATCH
static const unsigned int gappih         = 20;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 20;  /* vert inner gap between windows */
static const unsigned int gappoh         = 20;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 20;  /* vert outer gap between windows and screen edge */
static const int smartgaps               = 0;   /* 1 means no outer gap when there is only one window */
#endif // VANITYGAPS_PATCH

#if AUTOSTART_PATCH
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".local/share";
#endif // AUTOSTART_PATCH

#if BAR_HOLDBAR_PATCH
static const int showbar                 = 0;   /* 0 means no bar */
#else
static const int showbar                 = 1;   /* 0 means no bar */
#endif // BAR_HOLDBAR_PATCH
static const int topbar                  = 1;   /* 0 means bottom bar */

#if BAR_HEIGHT_PATCH
static const int bar_height              = 0;   /* 0 means derive from font, >= 1 explicit height */
#endif // BAR_HEIGHT_PATCH

#if BAR_PADDING_PATCH
static const int vertpad                 = 10;  /* vertical padding of bar */
static const int sidepad                 = 20;  /* horizontal padding of bar */
#endif // BAR_PADDING_PATCH

#if FOCUSONCLICK_PATCH
static const int focusonwheel            = 0;
#endif // FOCUSONCLICK_PATCH

#if FLOATPOS_PATCH
static int floatposgrid_x                = 5;  /* float grid columns */
static int floatposgrid_y                = 5;  /* float grid rows */
#endif // FLOATPOS_PATCH

#if BAR_STATUSPADDING_PATCH
static const int horizpadbar             = 0;   /* horizontal padding for statusbar */
static const int vertpadbar              = 0;   /* vertical padding for statusbar */
#endif // BAR_STATUSPADDING_PATCH

#if BAR_STATUSBUTTON_PATCH
static const char buttonbar[]            = "";
#endif // BAR_STATUSBUTTON_PATCH

#if BAR_SYSTRAY_PATCH
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */
#endif // BAR_SYSTRAY_PATCH
static int tagindicatortype              = INDICATOR_NONE; // see patch/bar_indicators.h for options
static int floatindicatortype            = INDICATOR_BOTTOM_BAR; // see patch/bar_indicators.h for options

#if ONLYQUITONEMPTY_PATCH
static const int quit_empty_window_count = 2;   /* only allow dwm to quit if no windows are open, value here represents number of deamons */
#endif // ONLYQUITONEMPTY_PATCH

#if BAR_EXTRASTATUS_PATCH
static const char statussep              = ';'; /* separator between status bars */
#endif // BAR_EXTRASTATUS_PATCH

#if BAR_TABGROUPS_PATCH
static void (*bartabmonfns[])(Monitor *) = { monocle /* , customlayoutfn */ };
#endif // BAR_TABGROUPS_PATCH

#if BAR_PANGO_PATCH
static const char font[]                 = "monospace 10";
#else
static const char *fonts[]               = { "Material Design Icons:size=13:antialias=true:hinting=true", "Caskaydia Cove Nerd Font:size=11:antialias=true:hinting=true", "Joypixels:size=9:antialias=true:hinting=true" };
#endif // BAR_PANGO_PATCH
static const char dmenufont[]            = "mono:size=11";

#if BAR_FLEXWINTITLE_PATCH
static char c000000[]                    = "#000000"; // placeholder value
#endif // BAR_FLEXWINTITLE_PATCH
static char normfgcolor[]                = "#ebdbb2";
static char normbgcolor[]                = "#1d2021";
static char normbordercolor[]            = "#282828";
static char normfloatcolor[]             = "#db8fd9";

static char selfgcolor[]                 = "#FE8019";
static char selbgcolor[]                 = "#0E0708";
static char selbordercolor[]             = "#FE8019";
static char selfloatcolor[]              = "#005577";

static char titlenormfgcolor[]           = "#a89984";
static char titlenormfgcolor2[]           = "#d5c4a1";
static char titlenormfgcolor3[]           = "#504945";
static char titlenormbgcolor[]           = "#000000";
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#db8fd9";

static char titleselfgcolor[]            = "#fbf1c7";
static char titleselbgcolor[]            = "#4A4856";
static char titleselbordercolor[]        = "#005577";
static char titleselfloatcolor[]         = "#005577";

static char tagsnormfgcolor[]            = "#a89984";
static char tagsnormbgcolor[]            = "#1d2021";
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";

static char tagsselfgcolor[]             = "#1d2021";
static char tagsselbgcolor[]             = "#FE8019";
static char tagsselbordercolor[]         = "#458588";
static char tagsselfloatcolor[]          = "#458588";

static char hidfgcolor[]                 = "#458588";
static char hidbgcolor[]                 = "#222222";
static char hidbordercolor[]             = "#458588";
static char hidfloatcolor[]              = "#f76e0c";

static char urgfgcolor[]                 = "#bbbbbb";
static char urgbgcolor[]                 = "#222222";
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9";

#if BAR_FLEXWINTITLE_PATCH
static char normfloatbgcolor[]           = "#83a598";
static char actfloatbgcolor[]            = "#83a598";
static char selTTBbgcolor[]              = "#45707a";
static char selLTRbgcolor[]              = "#458588";
static char selCMbgcolor[]               = "#6c782e";
static char selCFMbgcolor[]              = "#79740e";
static char selMONObgcolor[]             = "#c14a4a";
static char selGRIDbgcolor[]             = "#005500";
static char selGRD1bgcolor[]             = "#005500";
static char selGRD2bgcolor[]             = "#005500";
static char selGRDMbgcolor[]             = "#508822";
static char selHGRDbgcolor[]             = "#b98822";
static char selDWDLbgcolor[]             = "#4c7a5d";
static char selSPRLbgcolor[]             = "#427b58";
static char selDECKbgcolor[]             = "#9F758A";
static char selfloatbgcolor[]            = "#458588";
#endif // BAR_FLEXWINTITLE_PATCH

#if BAR_ALPHA_PATCH
static const unsigned int baralpha = 0xcc;
static const unsigned int baralpha2 = 0x99;
static const unsigned int baralpha3 = 0x70;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
	/*                       fg      bg        border     */
	[SchemeNorm]         = { OPAQUE, baralpha,   borderalpha },
	[SchemeSel]          = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleNorm]    = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleSel]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsNorm]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsSel]      = { OPAQUE, OPAQUE,   borderalpha },
	[SchemeHid]          = { OPAQUE, baralpha, borderalpha },
	[SchemeUrg]          = { OPAQUE, baralpha, borderalpha },
	#if BAR_FLEXWINTITLE_PATCH
	[SchemeFlexActTTB]   = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActLTR]   = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActCM]   = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActCFM]   = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActMONO]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActGRID]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActGRD1]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActGRD2]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActGRDM]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActHGRD]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActDWDL]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActSPRL]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActDECK]  = { OPAQUE, baralpha3, borderalpha },
	[SchemeFlexActFloat] = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexInaTTB]   = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaLTR]   = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaCM]    = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaCFM]   = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaMONO]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaGRID]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaGRD1]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaGRD2]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaGRDM]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaHGRD]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaDWDL]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaSPRL]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaDECK]  = { OPAQUE, baralpha2, borderalpha },
	[SchemeFlexInaFloat] = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelTTB]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelLTR]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelCM]    = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelCFM]   = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelMONO]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRID]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRD1]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRD2]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelGRDM]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelHGRD]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelDWDL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelSPRL]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelDECK]  = { OPAQUE, baralpha, borderalpha },
	[SchemeFlexSelFloat] = { OPAQUE, baralpha, borderalpha },
	#endif // BAR_FLEXWINTITLE_PATCH
};
#endif // BAR_ALPHA_PATCH
#if BAR_VTCOLORS_PATCH
static const char title_bg_dark[]   = "#303030";
static const char title_bg_light[]  = "#fdfdfd";
static const int color_ptrs[][ColCount] = {
	/*                       fg      bg      border  float */
	[SchemeNorm]         = { -1,     -1,     5,      12 },
	[SchemeSel]          = { -1,     -1,     11,     13 },
	[SchemeTitleNorm]    = { 6,      -1,     -1,     -1 },
	[SchemeTitleSel]     = { 6,      -1,     -1,     -1 },
	[SchemeTagsNorm]     = { 2,      0,      0,      -1 },
	[SchemeTagsSel]      = { 6,      5,      5,      -1 },
	[SchemeHid]          = { 5,      0,      0,      -1 },
	[SchemeUrg]          = { 7,      9,      9,      15 },
};
#endif // BAR_VTCOLORS_PATCH

static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHid]          = { hidfgcolor,       hidbgcolor,       hidbordercolor,       hidfloatcolor },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
	#if BAR_FLEXWINTITLE_PATCH
	[SchemeFlexActTTB]   = { titlenormfgcolor,  titlenormbgcolor, normbordercolor,        c000000 },
	[SchemeFlexActLTR]   = { titlenormfgcolor,  titlenormbgcolor,  normbordercolor,        c000000 },
	[SchemeFlexActCM]   = { titlenormfgcolor,  titlenormbgcolor,  normbordercolor,        c000000 },
	[SchemeFlexActCFM]   = { titlenormfgcolor,  titlenormbgcolor,  normbordercolor,        c000000 },
	[SchemeFlexActMONO]  = { titlenormfgcolor,  titlenormbgcolor,  normbordercolor,       c000000 },
	[SchemeFlexActGRID]  = { titlenormfgcolor,  titlenormbgcolor,  normbordercolor,       c000000 },
	[SchemeFlexActGRD1]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,       c000000 },
	[SchemeFlexActGRD2]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexActGRDM]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexActHGRD]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexActDWDL]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,       c000000 },
	[SchemeFlexActSPRL]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,       c000000 },
	[SchemeFlexActDECK]  = { titlenormfgcolor,  titlenormbgcolor,   normbordercolor,       c000000 },
	[SchemeFlexActFloat] = { titlenormfgcolor,  actfloatbgcolor,  actfloatbgcolor,      c000000 },
	[SchemeFlexInaTTB]   = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,       c000000 },
	[SchemeFlexInaLTR]   = { titlenormfgcolor2, titlenormbgcolor,    normbordercolor,       c000000 },
	[SchemeFlexInaCM]   = { titlenormfgcolor2, titlenormbgcolor,    normbordercolor,       c000000 },
	[SchemeFlexInaCFM]   = { titlenormfgcolor2, titlenormbgcolor,    normbordercolor,       c000000 },
	[SchemeFlexInaMONO]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,     c000000 },
	[SchemeFlexInaGRID]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexInaGRD1]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexInaGRD2]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,     c000000 },
	[SchemeFlexInaGRDM]  = { titlenormfgcolor2, titlenormbgcolor,  normbordercolor,     c000000 },
	[SchemeFlexInaHGRD]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexInaDWDL]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,     c000000 },
	[SchemeFlexInaSPRL]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexInaDECK]  = { titlenormfgcolor2, titlenormbgcolor,   normbordercolor,      c000000 },
	[SchemeFlexInaFloat] = { titlenormfgcolor3, normfloatbgcolor, normfloatbgcolor,     c000000 },
	[SchemeFlexSelTTB]   = { titleselfgcolor,  selTTBbgcolor,    selTTBbgcolor,        c000000 },
	[SchemeFlexSelLTR]   = { titleselfgcolor,  selLTRbgcolor,    selLTRbgcolor,        c000000 },
	[SchemeFlexSelCM]   = { titleselfgcolor,  selCMbgcolor,    selCMbgcolor,        c000000 },
	[SchemeFlexSelCFM]   = { titleselfgcolor,  selCFMbgcolor,    selCFMbgcolor,        c000000 },
	[SchemeFlexSelMONO]  = { titleselfgcolor,  selMONObgcolor,   selMONObgcolor,       c000000 },
	[SchemeFlexSelGRID]  = { titleselfgcolor,  selGRIDbgcolor,   selGRIDbgcolor,       c000000 },
	[SchemeFlexSelGRD1]  = { titleselfgcolor,  selGRD1bgcolor,   selGRD1bgcolor,       c000000 },
	[SchemeFlexSelGRD2]  = { titleselfgcolor,  selGRD2bgcolor,   selGRD2bgcolor,       c000000 },
	[SchemeFlexSelGRDM]  = { titleselfgcolor,  selGRDMbgcolor,   selGRDMbgcolor,       c000000 },
	[SchemeFlexSelHGRD]  = { titleselfgcolor,  selHGRDbgcolor,   selHGRDbgcolor,       c000000 },
	[SchemeFlexSelDWDL]  = { titleselfgcolor,  selDWDLbgcolor,   selDWDLbgcolor,       c000000 },
	[SchemeFlexSelSPRL]  = { titleselfgcolor,  selSPRLbgcolor,   selSPRLbgcolor,       c000000 },
	[SchemeFlexSelDECK]  = { titleselfgcolor,  selDECKbgcolor,   selDECKbgcolor,       c000000 },
	[SchemeFlexSelFloat] = { titleselfgcolor,  selfloatbgcolor,  selfloatbgcolor,      c000000 },
	#endif // BAR_FLEXWINTITLE_PATCH
};

#if BAR_POWERLINE_STATUS_PATCH
static char *statuscolors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHid]          = { hidfgcolor,       hidbgcolor,       hidbordercolor,       hidfloatcolor },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
};
#endif // BAR_POWERLINE_STATUS_PATCH

#if COOL_AUTOSTART_PATCH
static const char *const autostart[] = {
	"st", NULL,
	NULL /* terminate */
};
#endif // COOL_AUTOSTART_PATCH

#if SCRATCHPADS_PATCH
const char *spcmd1[] = {"st", "-n", "spterm", "-g", "120x34", NULL };
const char *spcmd2[] = {"st", "-n", "spcalc", "-f", "monospace:size=16", "-g", "50x20", "-e", "bc", "-lq", NULL };
const char *spcmd3[] = {"st", "-n", "spmusic", "-g", "100x20", "-e", "ncmpcpp-ueberzug", "--ignore-config-errors",  NULL };
static Sp scratchpads[] = {
   /* name          cmd  */
   {"spterm",      spcmd1},
   {"spcalc",	   spcmd2},
   {"spmusic",	   spcmd3},
};
#endif // SCRATCHPADS_PATCH

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
static char *tagicons[][NUMTAGS] = {
	[ALTERNATIVE_TAGS]        = { "", "", "", "", "", "", "", "", "" },
	/*[DEFAULT_TAGS]    = { "", "", "", "", "", "", "", "", "" },*/
	[DEFAULT_TAGS]    = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};

#if BAR_TAGGRID_PATCH
/* grid of tags */
#define SWITCHTAG_UP                1 << 0
#define SWITCHTAG_DOWN              1 << 1
#define SWITCHTAG_LEFT              1 << 2
#define SWITCHTAG_RIGHT             1 << 3
#define SWITCHTAG_TOGGLETAG         1 << 4
#define SWITCHTAG_TAG               1 << 5
#define SWITCHTAG_VIEW              1 << 6
#define SWITCHTAG_TOGGLEVIEW        1 << 7

static const int tagrows = 2;
#endif // BAR_TAGGRID_PATCH

/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:*/
 /*   // class      instance  title  wintype  tags mask  isfloating  monitor
 *   { "Gimp",     NULL,     NULL,  NULL,    4,         0,          -1 },
 *   { "Firefox",  NULL,     NULL,  NULL,    7,         0,          -1 },
 *   { "Hexchat",  NULL,     NULL,  NULL,    8,	       0,          -1 },
 *   { "thunar",   NULL,     NULL,  NULL,    3,	       1,          -1 },
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
	RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
	RULE(.class = "Gimp", .tags = 1 << 6)
	RULE(.class = "Firefox", .tags = 1 << 7)
	RULE(.class = "Hexchat", .tags = 1 << 8)
	RULE(.class = "Pidgin", .tags = 1 << 8)
	RULE(.class = "Thunar", .tags = 1 << 2)
	RULE(.class = "St", .tags = 0, .isterminal = 1)
	#if SCRATCHPADS_PATCH
	RULE(.instance = "spterm", .tags = SPTAG(0), .isfloating = 1)
	RULE(.instance = "spcalc", .tags = SPTAG(1), .isfloating = 1)
	RULE(.instance = "spmusic", .tags = SPTAG(2), .isfloating = 1)
	#endif // SCRATCHPADS_PATCH
};

#if MONITOR_RULES_PATCH
#if PERTAG_PATCH
static const MonitorRule monrules[] = {
	/* monitor  tag   layout  mfact  nmaster  showbar  topbar */
	{   1,      -1,   2,      -1,    -1,      -1,      -1     }, // use a different layout for the second monitor
	{  -1,      -1,   0,      -1,    -1,      -1,      -1     }, // default
};
#else
static const MonitorRule monrules[] = {
	/* monitor  layout  mfact  nmaster  showbar  topbar */
	{  1,       2,      -1,    -1,      -1,      -1     }, // use a different layout for the second monitor
	{  -1,      0,      -1,    -1,      -1,      -1     }, // default
};
#endif // PERTAG_PATCH
#endif // MONITOR_RULES_PATCH

#if INSETS_PATCH
static const Inset default_inset = {
	.x = 0,
	.y = 30,
	.w = 0,
	.h = 0,
};
#endif // INSETS_PATCH

/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor  bar    alignment         widthfunc                drawfunc                clickfunc                name */
	#if BAR_STATUSBUTTON_PATCH
	{ -1,       0,     BAR_ALIGN_LEFT,   width_stbutton,          draw_stbutton,          click_stbutton,          "statusbutton" },
	#endif // BAR_STATUSBUTTON_PATCH
	#if BAR_POWERLINE_TAGS_PATCH
	{  0,       0,     BAR_ALIGN_LEFT,   width_pwrl_tags,         draw_pwrl_tags,         click_pwrl_tags,         "powerline_tags" },
	#endif // BAR_POWERLINE_TAGS_PATCH
	#if BAR_TAGS_PATCH
	{ -1,       0,     BAR_ALIGN_LEFT,   width_tags,              draw_tags,              click_tags,              "tags" },
	#endif // BAR_TAGS_PATCH
	#if BAR_TAGGRID_PATCH
	{ -1,       0,     BAR_ALIGN_LEFT,   width_taggrid,           draw_taggrid,           click_taggrid,           "taggrid" },
	#endif // BAR_TAGGRID_PATCH
	#if BAR_SYSTRAY_PATCH
	{  0,       0,     BAR_ALIGN_RIGHT,  width_systray,           draw_systray,           click_systray,           "systray" },
	#endif // BAR_SYSTRAY_PATCH
	/*#if BAR_LTSYMBOL_PATCH
	{ -1,       0,     BAR_ALIGN_RIGHT,   width_ltsymbol,          draw_ltsymbol,          click_ltsymbol,          "layout" },
	#endif*/ // BAR_LTSYMBOL_PATCH
	#if BAR_STATUS2D_PATCH && BAR_STATUSCMD_PATCH
	{ 'A',      0,     BAR_ALIGN_RIGHT,  width_status2d,          draw_status2d,          click_statuscmd,         "status2d" },
	#elif BAR_STATUS2D_PATCH
	{ 'A',      0,     BAR_ALIGN_RIGHT,  width_status2d,          draw_status2d,          click_status2d,          "status2d" },
	#elif BAR_POWERLINE_STATUS_PATCH
	{  0,       0,     BAR_ALIGN_RIGHT,  width_pwrl_status,       draw_pwrl_status,       click_pwrl_status,       "powerline_status" },
	#elif BAR_STATUS_PATCH && BAR_STATUSCMD_PATCH
	{  0,       0,     BAR_ALIGN_RIGHT,  width_status,            draw_status,            click_statuscmd,         "status" },
	#elif BAR_STATUS_PATCH
	{ 'A',      0,     BAR_ALIGN_RIGHT,  width_status,            draw_status,            click_status,            "status" },
	#endif // BAR_STATUS2D_PATCH | BAR_STATUSCMD_PATCH
	#if BAR_LTSYMBOL_PATCH
	{ -1,       0,     BAR_ALIGN_LEFT,   width_ltsymbol,          draw_ltsymbol,          click_ltsymbol,          "layout" },
	#endif // BAR_LTSYMBOL_PATCH

	#if BAR_FLEXWINTITLE_PATCH
	{ -1,       0,     BAR_ALIGN_NONE,   width_flexwintitle,      draw_flexwintitle,      click_flexwintitle,      "flexwintitle" },
	#elif BAR_TABGROUPS_PATCH
	{ -1,       0,     BAR_ALIGN_NONE,   width_bartabgroups,      draw_bartabgroups,      click_bartabgroups,      "bartabgroups" },
	#elif BAR_AWESOMEBAR_PATCH
	{ -1,       0,     BAR_ALIGN_NONE,   width_awesomebar,        draw_awesomebar,        click_awesomebar,        "awesomebar" },
	#elif BAR_FANCYBAR_PATCH
	{ -1,       0,     BAR_ALIGN_NONE,   width_fancybar,          draw_fancybar,          click_fancybar,          "fancybar" },
	#elif BAR_WINTITLE_PATCH
	{ -1,       0,     BAR_ALIGN_NONE,   width_wintitle,          draw_wintitle,          click_wintitle,          "wintitle" },
	#endif // BAR_TABGROUPS_PATCH | BAR_AWESOMEBAR_PATCH | BAR_FANCYBAR_PATCH | BAR_WINTITLE_PATCH
	#if BAR_EXTRASTATUS_PATCH
	#if BAR_STATUS2D_PATCH && BAR_STATUSCMD_PATCH
	{ 'A',      1,     BAR_ALIGN_CENTER, width_status2d_es,       draw_status2d_es,       click_statuscmd_es,      "status2d_es" },
	#elif BAR_STATUS2D_PATCH
	{ 'A',      1,     BAR_ALIGN_CENTER, width_status2d_es,       draw_status2d_es,       click_status2d,          "status2d_es" },
	#elif BAR_POWERLINE_STATUS_PATCH
	{  0,       1,     BAR_ALIGN_RIGHT,  width_pwrl_status_es,    draw_pwrl_status_es,    click_pwrl_status,       "powerline_status" },
	#elif BAR_STATUSCMD_PATCH && BAR_STATUS_PATCH
	{ 'A',      1,     BAR_ALIGN_CENTER, width_status_es,         draw_status_es,         click_statuscmd_es,      "status_es" },
	#elif BAR_STATUS_PATCH
	{ 'A',      1,     BAR_ALIGN_CENTER, width_status_es,         draw_status_es,         click_status,            "status_es" },
	#endif // BAR_STATUS2D_PATCH | BAR_STATUSCMD_PATCH
	#endif // BAR_EXTRASTATUS_PATCH
	#if BAR_FLEXWINTITLE_PATCH
	#if BAR_WINTITLE_HIDDEN_PATCH
	{ -1,       1,  BAR_ALIGN_RIGHT_RIGHT, width_wintitle_hidden, draw_wintitle_hidden,   click_wintitle_hidden,   "wintitle_hidden" },
	#endif
	#if BAR_WINTITLE_FLOATING_PATCH
	{ -1,       1,     BAR_ALIGN_LEFT,   width_wintitle_floating, draw_wintitle_floating, click_wintitle_floating, "wintitle_floating" },
	#endif // BAR_WINTITLE_FLOATING_PATCH
	#endif // BAR_FLEXWINTITLE_PATCH
	{ NULL }
};

#if DWMC_PATCH
/* signal definitions */
/* signum must be greater than 0 */
/* trigger signals using `xsetroot -name "fsignal:<signame> [<type> <value>]"` */
static Signal signals[] = {
	/* signum                    function */
	{ "focusstack",              focusstack },
	{ "setmfact",                setmfact },
	{ "togglebar",               togglebar },
	{ "incnmaster",              incnmaster },
	{ "togglefloating",          togglefloating },
	{ "focusmon",                focusmon },
	#if STACKER_PATCH
	{ "pushstack",               pushstack },
	#endif // STACKER_PATCH
	#if FOCUSURGENT_PATCH
	{ "focusurgent",             focusurgent },
	#endif // FOCUSURGENT_PATCH
	#if FOCUSADJACENTTAG_PATCH
	{ "viewtoleft",              viewtoleft },
	{ "viewtoright",             viewtoright },
	{ "tagtoleft",               tagtoleft },
	{ "tagtoright",              tagtoright},
	{ "tagandviewtoleft",        tagandviewtoleft },
	{ "tagandviewtoright",       tagandviewtoright },
	#endif // FOCUSADJACENTTAG_PATCH
	#if SWAPFOCUS_PATCH && PERTAG_PATCH
	{ "swapfocus",               swapfocus },
	#endif // SWAPFOCUS_PATCH
	#if SWITCHCOL_PATCH
	{ "switchcol",               switchcol },
	#endif // SWITCHCOL_PATCH
	#if ROTATESTACK_PATCH
	{ "rotatestack",             rotatestack },
	#endif // ROTATESTACK_PATCH
	#if INPLACEROTATE_PATCH
	{ "inplacerotate",           inplacerotate },
	#endif // INPLACEROTATE_PATCH
	#if PUSH_PATCH || PUSH_NO_MASTER_PATCH
	{ "pushdown",                pushdown },
	{ "pushup",                  pushup },
	#endif // PUSH_PATCH / PUSH_NO_MASTER_PATCH
	#if FLEXTILE_DELUXE_LAYOUT
	{ "incnstack",               incnstack },
	{ "rotatelayoutaxis",        rotatelayoutaxis },
	{ "setlayoutaxisex",         setlayoutaxisex },
	{ "mirrorlayout",            mirrorlayout },
	#endif // FLEXTILE_DELUXE_LAYOUT
	#if CFACTS_PATCH
	{ "setcfact",                setcfact },
	#endif // CFACTS_PATCH
	#if MOVEPLACE_PATCH
	{ "moveplace",               moveplace },
	#endif // MOVEPLACE_PATCH
	#if EXRESIZE_PATCH
	{ "explace",                 explace },
	{ "togglehorizontalexpand",  togglehorizontalexpand },
	{ "toggleverticalexpand",    toggleverticalexpand },
	{ "togglemaximize",          togglemaximize },
	#endif // EXRESIZE_PATCH
	#if KEYMODES_PATCH
	{ "setkeymode",              setkeymode },
	#endif // KEYMODES_PATCH
	#if TRANSFER_PATCH
	{ "transfer",                transfer },
	#endif // TRANSFER_PATCH
	#if TRANSFER_ALL_PATCH
	{ "transferall",             transferall },
	#endif // TRANSFER_ALL_PATCH
	{ "tagmon",                  tagmon },
	{ "zoom",                    zoom },
	#if VANITYGAPS_PATCH
	{ "incrgaps",                incrgaps },
	{ "incrigaps",               incrigaps },
	{ "incrogaps",               incrogaps },
	{ "incrihgaps",              incrihgaps },
	{ "incrivgaps",              incrivgaps },
	{ "incrohgaps",              incrohgaps },
	{ "incrovgaps",              incrovgaps },
	{ "togglegaps",              togglegaps },
	{ "defaultgaps",             defaultgaps },
	{ "setgaps",                 setgapsex },
	#endif // VANITYGAPS_PATCH
	{ "view",                    view },
	{ "viewall",                 viewallex },
	{ "viewex",                  viewex },
	{ "toggleview",              view },
	#if SHIFTVIEW_PATCH
	{ "shiftview",               shiftview },
	#endif // SHIFTVIEW_PATCH
	#if SHIFTVIEW_CLIENTS_PATCH
	{ "shiftviewclients",        shiftviewclients },
	#endif // SHIFTVIEW_CLIENTS_PATCH
	#if SELFRESTART_PATCH
	{ "self_restart",            self_restart },
	#endif // SELFRESTART_PATCH
	#if BAR_TAGGRID_PATCH
	{ "switchtag",               switchtag },
	#endif // BAR_TAGGRID_PATCH
	#if STICKY_PATCH
	{ "togglesticky",            togglesticky },
	#endif // STICKY_PATCH
	#if SETBORDERPX_PATCH
	{ "setborderpx",             setborderpx },
	#endif // SETBORDERPX_PATCH
	#if CYCLELAYOUTS_PATCH
	{ "cyclelayout",             cyclelayout },
	#endif // CYCLELAYOUTS_PATCH
	#if MDPCONTROL_PATCH
	{ "mpdchange",               mpdchange },
	{ "mpdcontrol",              mpdcontrol },
	#endif // MDPCONTROL_PATCH
	{ "toggleviewex",            toggleviewex },
	{ "tag",                     tag },
	{ "tagall",                  tagallex },
	{ "tagex",                   tagex },
	{ "toggletag",               tag },
	{ "toggletagex",             toggletagex },
	#if TAGALLMON_PATCH
	{ "tagallmon",               tagallmon },
	#endif // TAGALLMON_PATCH
	#if TAGSWAPMON_PATCH
	{ "tagswapmon",              tagswapmon},
	#endif // TAGSWAPMON_PATCH
	#if BAR_ALTERNATIVE_TAGS_PATCH
	{ "togglealttag",            togglealttag },
	#endif // BAR_ALTERNATIVE_TAGS_PATCH
	#if TOGGLEFULLSCREEN_PATCH
	{ "togglefullscreen",        togglefullscreen },
	#endif // TOGGLEFULLSCREEN_PATCH
	#if !FAKEFULLSCREEN_PATCH && FAKEFULLSCREEN_CLIENT_PATCH
	{ "togglefakefullscreen",    togglefakefullscreen },
	#endif // FAKEFULLSCREEN_CLIENT_PATCH
	#if FULLSCREEN_PATCH
	{ "fullscreen",              fullscreen },
	#endif // FULLSCREEN_PATCH
	#if MAXIMIZE_PATCH
	{ "togglehorizontalmax",     togglehorizontalmax },
	{ "toggleverticalmax",       toggleverticalmax },
	{ "togglemax",               togglemax },
	#endif // MAXIMIZE_PATCH
	#if SCRATCHPADS_PATCH
	{ "togglescratch",           togglescratch },
	#endif // SCRATCHPADS_PATCH
	#if UNFLOATVISIBLE_PATCH
	{ "unfloatvisible",          unfloatvisible },
	#endif // UNFLOATVISIBLE_PATCH
	{ "killclient",              killclient },
	#if WINVIEW_PATCH
	{ "winview",                 winview },
	#endif // WINVIEW_PATCH
	#if XRDB_PATCH && !BAR_VTCOLORS_PATCH
	{ "xrdb",                    xrdb },
	#endif // XRDB_PATCH
	#if TAGOTHERMONITOR_PATCH
	{ "tagnextmonex",            tagnextmonex },
	{ "tagprevmonex",            tagprevmonex },
	#endif // TAGOTHERMONITOR_PATCH
	{ "quit",                    quit },LKL
	{ "setlayout",               setlayout },
	{ "setlayoutex",             setlayoutex },
};
#elif FSIGNAL_PATCH
/* signal definitions */
/* signum must be greater than 0 */
/* trigger signals using `xsetroot -name "fsignal:<signum>"` */
static Signal signals[] = {
	/* signum       function        argument  */
	{ 1,            setlayout,      {.v = 0} },
};
#endif // DWMC_PATCH

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
#if FLEXTILE_DELUXE_LAYOUT
static const int nstack      = 0;    /* number of clients in primary stack area */
#endif // FLEXTILE_DELUXE_LAYOUT
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
#if DECORATION_HINTS_PATCH
static const int decorhints  = 1;    /* 1 means respect decoration hints */
#endif // DECORATION_HINTS_PATCH

#if NROWGRID_LAYOUT
#define FORCE_VSPLIT 1
#endif

#if FLEXTILE_DELUXE_LAYOUT
static const Layout layouts[] = {
	/* symbol     arrange function, { nmaster, nstack, layout, master axis, stack axis, secondary stack axis } */
	{ "",  flextile,         { -1, -1, NO_SPLIT, DWINDLE, 0, 0, NULL } }, // fibonacci dwindle
	{ "",      flextile,         { -1, -1, SPLIT_CENTERED_VERTICAL, TOP_TO_BOTTOM, TOP_TO_BOTTOM, TOP_TO_BOTTOM, NULL } }, // centeredmast>
	{ "",      NULL,             {0} },    /* no layout function means floating behavior */
	{ "",      flextile,         { -1, -1, SPLIT_VERTICAL, TOP_TO_BOTTOM, TOP_TO_BOTTOM, 0, NULL } }, // default tile layout
 	{ "",      flextile,         { -1, -1, SPLIT_VERTICAL, LEFT_TO_RIGHT, TOP_TO_BOTTOM, 0, NULL } }, // columns (col) layout
  { "",      flextile,         { -1, -1, FLOATING_MASTER, LEFT_TO_RIGHT, LEFT_TO_RIGHT, 0, NULL } }, // floating master
  { "[M]",      flextile,         { -1, -1, NO_SPLIT, MONOCLE, 0, 0, NULL } }, // monocle
	{ "[D]",      flextile,         { -1, -1, SPLIT_VERTICAL, TOP_TO_BOTTOM, MONOCLE, 0, NULL } }, // deck
	{ "",      flextile,         { -1, -1, SPLIT_HORIZONTAL, LEFT_TO_RIGHT, LEFT_TO_RIGHT, 0, NULL } }, // bstack
	{ "",      flextile,         { -1, -1, SPLIT_HORIZONTAL, LEFT_TO_RIGHT, TOP_TO_BOTTOM, 0, NULL } }, // bstackhoriz
	{ "",      flextile,         { -1, -1, NO_SPLIT, GAPPLESSGRID, 0, 0, NULL } }, // gappless grid
	{ "",      flextile,         { -1, -1, NO_SPLIT, SPIRAL, 0, 0, NULL } }, // fibonacci spiral
	#if FIBONACCI_DWINDLE_LAYOUT
  { "[\\]",     dwindle,          {0} },
  #endif
	#if TILE_LAYOUT
	{ "[]=",      tile,             {0} },
	#endif
	#if MONOCLE_LAYOUT
	{ "[M]",      monocle,          {0} },
	#endif
	#if BSTACK_LAYOUT
	{ "TTT",      bstack,           {0} },
	#endif
	#if BSTACKHORIZ_LAYOUT
	{ "===",      bstackhoriz,      {0} },
	#endif
	#if CENTEREDMASTER_LAYOUT
	{ "|M|",      centeredmaster,   {0} },
	#endif
	#if CENTEREDFLOATINGMASTER_LAYOUT
	{ ">M>",      centeredfloatingmaster, {0} },
	#endif
	#if COLUMNS_LAYOUT
	{ "|||",      col,              {0} },
	#endif
	#if DECK_LAYOUT
	{ "[D]",      deck,             {0} },
	#endif
	#if FIBONACCI_SPIRAL_LAYOUT
	{ "(@)",      spiral,           {0} },
	#endif
	#if GRIDMODE_LAYOUT
	{ "HHH",      grid,             {0} },
	#endif
	#if HORIZGRID_LAYOUT
	{ "---",      horizgrid,        {0} },
	#endif
	#if GAPPLESSGRID_LAYOUT
	{ ":::",      gaplessgrid,      {0} },
	#endif
	#if NROWGRID_LAYOUT
	{ "###",      nrowgrid,         {0} },
	#endif
	#if CYCLELAYOUTS_PATCH
	{ NULL,       NULL,             {0} },
	#endif
};
#else
static const Layout layouts[] = {
	/* symbol     arrange function */
	#if TILE_LAYOUT
	{ "󰙀",      tile },    /* first entry is default */
	#endif
	#if BSTACK_LAYOUT
	{ "󰕪",      bstack },
	#endif
	#if FIBONACCI_DWINDLE_LAYOUT
        { "󰕴",     dwindle },
        #endif
	#if FIBONACCI_SPIRAL_LAYOUT
	{ "(@)",      spiral },
	#endif
	#if DECK_LAYOUT
	{ "[D]",      deck },
	#endif
	#if MONOCLE_LAYOUT
	{ "𧻓",      monocle },
	#endif
	#if CENTEREDMASTER_LAYOUT
        { "頻",      centeredmaster },
        #endif
	#if CENTEREDFLOATINGMASTER_LAYOUT
	{ "恵",     centeredfloatingmaster },
	#endif
	{ "><>",      NULL },    /* no layout function means floating behavior */
	#if BSTACKHORIZ_LAYOUT
	{ "===",      bstackhoriz },
	#endif
	#if COLUMNS_LAYOUT
	{ "|||",      col },
	#endif
	#if GRIDMODE_LAYOUT
	{ "HHH",      grid },
	#endif
	#if HORIZGRID_LAYOUT
	{ "---",      horizgrid },
	#endif
	#if GAPPLESSGRID_LAYOUT
	{ ":::",      gaplessgrid },
	#endif
	#if NROWGRID_LAYOUT
	{ "###",      nrowgrid },
	#endif
	#if CYCLELAYOUTS_PATCH
	{ NULL,       NULL },
	#endif
};
#endif // FLEXTILE_DELUXE_LAYOUT

/* key definitions */
#define MODKEY Mod4Mask
#if COMBO_PATCH && SWAPTAGS_PATCH && TAGOTHERMONITOR_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      comboview,      {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      combotag,       {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ShiftMask,    KEY,      swaptags,       {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask,              KEY,      tagnextmon,     {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ControlMask,  KEY,      tagprevmon,     {.ui = 1 << TAG} },
#elif COMBO_PATCH && SWAPTAGS_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      comboview,      {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      combotag,       {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ShiftMask,    KEY,      swaptags,       {.ui = 1 << TAG} },
#elif COMBO_PATCH && TAGOTHERMONITOR_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      comboview,      {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      combotag,       {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask,              KEY,      tagnextmon,     {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ControlMask,  KEY,      tagprevmon,     {.ui = 1 << TAG} },
#elif COMBO_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      comboview,      {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      combotag,       {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },
#elif SWAPTAGS_PATCH && TAGOTHERMONITOR_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ShiftMask,    KEY,      swaptags,       {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask,              KEY,      tagnextmon,     {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ControlMask,  KEY,      tagprevmon,     {.ui = 1 << TAG} },
#elif SWAPTAGS_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ShiftMask,    KEY,      swaptags,       {.ui = 1 << TAG} },
#elif TAGOTHERMONITOR_PATCH
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask,              KEY,      tagnextmon,     {.ui = 1 << TAG} }, \
	{ MODKEY|Mod4Mask|ControlMask,  KEY,      tagprevmon,     {.ui = 1 << TAG} },
#else
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },
#endif // COMBO_PATCH / SWAPTAGS_PATCH / TAGOTHERMONITOR_PATCH

#if STACKER_PATCH
#define STACKKEYS(MOD,ACTION) \
	{ MOD, XK_j,     ACTION##stack, {.i = INC(+1) } }, \
	{ MOD, XK_k,     ACTION##stack, {.i = INC(-1) } }, \
	{ MOD, XK_s,     ACTION##stack, {.i = PREVSEL } }, \
	{ MOD, XK_w,     ACTION##stack, {.i = 0 } }, \
	{ MOD, XK_e,     ACTION##stack, {.i = 1 } }, \
	{ MOD, XK_a,     ACTION##stack, {.i = 2 } }, \
	{ MOD, XK_z,     ACTION##stack, {.i = -1 } },
#endif // STACKER_PATCH

#if BAR_HOLDBAR_PATCH
#define HOLDKEY 0 // replace 0 with the keysym to activate holdbar
#endif // BAR_HOLDBAR_PATCH

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
#if !NODMENU_PATCH
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
#endif // NODMENU_PATCH
static const char *dmenucmd[] = {
	"dmen.sh",
	#if !NODMENU_PATCH
	"-m", dmenumon,
	#endif // NODMENU_PATCH
	#if BAR_DMENUMATCHTOP_PATCH
	topbar ? NULL : "-b",
	#endif // BAR_DMENUMATCHTOP_PATCH
	NULL
};
static const char *termcmd[]  = { "st", NULL };

#if BAR_STATUSCMD_PATCH && !BAR_DWMBLOCKS_PATCH
/* commands spawned when clicking statusbar, the mouse button pressed is exported as BUTTON */
static const char *statuscmds[] = { "notify-send Mouse$BUTTON" };
static char *statuscmd[] = { "/bin/sh", "-c", NULL, NULL };
#endif // BAR_STATUSCMD_PATCH | DWMBLOCKS_PATCH
#include <X11/XF86keysym.h>
static Key keys[] = {
	/* modifier                     key            function                argument */
	#if KEYMODES_PATCH
	{ MODKEY,                       XK_Escape,     setkeymode,             {.ui = COMMANDMODE} },
	#endif // KEYMODES_PATCH
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY,		        XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,			XK_d,		spawn,		SHCMD("rofi -show drun") },
	{ MODKEY,                       XK_w,      	spawn,   	SHCMD("$BROWSER") },
        { MODKEY,			XK_minus,	spawn,		SHCMD("pamixer --allow-boost -d 5; kill -44 $(pidof dwmblocks)") },
	{ MODKEY|ShiftMask,		XK_minus,	spawn,		SHCMD("pamixer --allow-boost -d 15; kill -44 $(pidof dwmblocks)") },
	{ MODKEY,			XK_equal,	spawn,		SHCMD("pamixer --allow-boost -i 5; kill -44 $(pidof dwmblocks)") },
	{ MODKEY|ShiftMask,		XK_equal,	spawn,		SHCMD("pamixer --allow-boost -i 15; kill -44 $(pidof dwmblocks)") },
	{ MODKEY,			XK_BackSpace,	spawn,		SHCMD("sysact") },
	{ MODKEY|ShiftMask,		XK_n,		spawn,		SHCMD("st -e newsboat; pkill -RTMIN+6 dwmblocks") },
	{ MODKEY|ShiftMask,		XK_m,		spawn,		SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)") },
	{ MODKEY,			XK_comma,	spawn,		SHCMD("mpc prev") },
	{ MODKEY,			XK_period,	spawn,		SHCMD("mpc next") },
	{ MODKEY,			XK_less,	spawn,		SHCMD("mpc seek +10") },
	{ MODKEY|ShiftMask,		XK_less,	spawn,		SHCMD("mpc seek -10") },
	{ MODKEY,			XK_r,		spawn,		SHCMD("st -e vifmrun") },
	{ MODKEY,			XK_dead_diaeresis,	spawn,		SHCMD("dmenuunicode") },
	{ 0, XF86XK_AudioMute,		spawn,		SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)") },
	{ 0, XF86XK_AudioRaiseVolume,	spawn,		SHCMD("pamixer --allow-boost -i 3; kill -44 $(pidof dwmblocks)") },
	{ 0, XF86XK_AudioLowerVolume,	spawn,		SHCMD("pamixer --allow-boost -d 3; kill -44 $(pidof dwmblocks)") },
	{ 0, XF86XK_AudioPrev,		spawn,		SHCMD("mpc prev") },
	{ 0, XF86XK_AudioNext,		spawn,		SHCMD("mpc next") },
	{ 0, XF86XK_AudioPause,		spawn,		SHCMD("mpc pause") },
	{ 0, XF86XK_AudioPlay,		spawn,		SHCMD("mpc play") },
	{ 0, XF86XK_AudioStop,		spawn,		SHCMD("mpc stop") },
	{ 0, XF86XK_AudioRewind,	spawn,		SHCMD("mpc seek -10") },
	{ 0, XF86XK_AudioForward,	spawn,		SHCMD("mpc seek +10") },
	{ 0, XF86XK_AudioMedia,		spawn,		SHCMD("st -e ncmpcpp") },
	{ 0, XF86XK_AudioMicMute,	spawn,		SHCMD("pactl set-source-mute @DEFAULT_SOURCE@ toggle") },
	{ 0, XF86XK_PowerOff,		spawn,		SHCMD("sysact") },
	{ 0, XF86XK_Calculator,		spawn,		SHCMD("st -e bc -l") },
	{ 0, XF86XK_Sleep,		spawn,		SHCMD("sudo -A zzz") },
	{ 0, XF86XK_WWW,		spawn,		SHCMD("$BROWSER") },
	{ 0, XF86XK_DOS,		spawn,		SHCMD("st") },
	{ 0, XF86XK_ScreenSaver,	spawn,		SHCMD("slock & xset dpms force off; mpc pause; pauseallmpv") },
	{ 0, XF86XK_TaskPane,		spawn,		SHCMD("st -e htop") },
	{ 0, XF86XK_Mail,		spawn,		SHCMD("st -e neomutt ; pkill -RTMIN+12 dwmblocks") },
	{ 0, XF86XK_MyComputer,		spawn,		SHCMD("st -e lf /") },
	/* { 0, XF86XK_Battery,		spawn,		SHCMD("") }, */
	{ 0, XF86XK_Launch1,		spawn,		SHCMD("xset dpms force off") },
	{ 0, XF86XK_TouchpadToggle,	spawn,		SHCMD("(synclient | grep 'TouchpadOff.*1' && synclient TouchpadOff=0) || synclient TouchpadOff=1") },
	{ 0, XF86XK_TouchpadOff,	spawn,		SHCMD("synclient TouchpadOff=1") },
	{ 0, XF86XK_TouchpadOn,		spawn,		SHCMD("synclient TouchpadOff=0") },
	{ 0, XF86XK_MonBrightnessUp,	spawn,		SHCMD("light -A 15") },
	{ 0, XF86XK_MonBrightnessDown,	spawn,		SHCMD("light -U 15") },
	#if FOCUSMASTER_PATCH
	{ MODKEY, 	 	        XK_v,          focusmaster,            {0} },
	#endif // FOCUSMASTER_PATCH
	#if STACKER_PATCH
	STACKKEYS(MODKEY,                              focus)
	STACKKEYS(MODKEY|ShiftMask,                    push)
	#else
	{ MODKEY,                       XK_k,          focusstack,             {.i = +1 } },
	{ MODKEY,                       XK_j,          focusstack,             {.i = -1 } },
	{ MODKEY,                       XK_Right,      focusstack,             {.i = +1 } },
	{ MODKEY,                       XK_Left,       focusstack,             {.i = -1 } },
	#endif // STACKER_PATCH
	#if SWAPFOCUS_PATCH && PERTAG_PATCH
	{ MODKEY,                       XK_s,          swapfocus,              {.i = -1 } },
	#endif // SWAPFOCUS_PATCH

	#if SWITCHCOL_PATCH
	{ MODKEY,                       XK_v,          switchcol,              {0} },
	#endif // SWITCHCOL_PATCH

	#if ROTATESTACK_PATCH
	{ MODKEY|Mod4Mask,              XK_j,          rotatestack,            {.i = +1 } },
	{ MODKEY|Mod4Mask,              XK_k,          rotatestack,            {.i = -1 } },
	#endif // ROTATESTACK_PATCH

	#if INPLACEROTATE_PATCH
	{ MODKEY|Mod4Mask|ShiftMask,    XK_j,          inplacerotate,          {.i = +1} },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_k,          inplacerotate,          {.i = -1} },
	#endif // INPLACEROTATE_PATCH

	#if PUSH_PATCH || PUSH_NO_MASTER_PATCH
	{ MODKEY|ShiftMask,          	XK_k,          pushdown,               {0} },
	{ MODKEY|ShiftMask,      	XK_j,          pushup,                 {0} },
	{ MODKEY|ShiftMask,          	XK_Right,      pushdown,               {0} },
	{ MODKEY|ShiftMask,      	XK_Left,       pushup,                 {0} },
	#endif // PUSH_PATCH / PUSH_NO_MASTER_PATCH
	{ MODKEY,                       XK_o,          incnmaster,             {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_o,          incnmaster,             {.i = -1 } },
	#if FLEXTILE_DELUXE_LAYOUT
	{ MODKEY|ControlMask,           XK_i,          incnstack,              {.i = +1 } },
	{ MODKEY|ControlMask,           XK_u,          incnstack,              {.i = -1 } },
	#endif // FLEXTILE_DELUXE_LAYOUT
	{ MODKEY,                       XK_h,          setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_l,          setmfact,               {.f = +0.05} },
	{ MODKEY,                       XK_Down,       setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_Up,         setmfact,               {.f = +0.05} },
	#if CFACTS_PATCH
	{ MODKEY|ShiftMask,             XK_h,          setcfact,               {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,          setcfact,               {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,          setcfact,               {0} },
	#endif // CFACTS_PATCH
	#if ASPECTRESIZE_PATCH
	{ MODKEY|ControlMask|ShiftMask, XK_e,          aspectresize,           {.i = +24} },
	{ MODKEY|ControlMask|ShiftMask, XK_r,          aspectresize,           {.i = -24} },
	#endif // ASPECTRESIZE_PATCH
	#if MOVERESIZE_PATCH
	{ MODKEY|Mod4Mask,              XK_Down,       moveresize,             {.v = "0x 25y 0w 0h" } },
	{ MODKEY|Mod4Mask,              XK_Up,         moveresize,             {.v = "0x -25y 0w 0h" } },
	{ MODKEY|Mod4Mask,              XK_Right,      moveresize,             {.v = "25x 0y 0w 0h" } },
	{ MODKEY|Mod4Mask,              XK_Left,       moveresize,             {.v = "-25x 0y 0w 0h" } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_Down,       moveresize,             {.v = "0x 0y 0w 25h" } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_Up,         moveresize,             {.v = "0x 0y 0w -25h" } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_Right,      moveresize,             {.v = "0x 0y 25w 0h" } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_Left,       moveresize,             {.v = "0x 0y -25w 0h" } },
	#endif // MOVERESIZE_PATCH
	#if MOVESTACK_PATCH
	{ MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	#endif // MOVESTACK_PATCH
	#if TRANSFER_PATCH
	{ MODKEY,                       XK_x,          transfer,               {0} },
	#endif // TRANSFER_PATCH
	#if TRANSFER_ALL_PATCH
	{ MODKEY|ControlMask,           XK_x,          transferall,            {0} },
	#endif // TRANSFER_ALL_PATCH
	#if REORGANIZETAGS_PATCH
	{ MODKEY|ShiftMask,		XK_r,          reorganizetags,         {0} },
	#endif // REORGANIZETAGS_PATCH
	#if INSETS_PATCH
	{ MODKEY|ShiftMask|ControlMask, XK_a,          updateinset,            {.v = &default_inset } },
	#endif // INSETS_PATCH
	{ MODKEY,                       XK_space,      zoom,                   {0} },
	#if VANITYGAPS_PATCH
	{ MODKEY,			XK_z,          incrgaps,               {.i = +3 } },
	{ MODKEY|ShiftMask,		XK_z,          incrgaps,               {.i = -3 } },
	/*{ MODKEY|Mod4Mask,              XK_i,          incrigaps,            {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_i,          incrigaps,              {.i = -1 } },*/
	{ MODKEY,              		XK_x,          incrogaps,              {.i = +3 } },
	{ MODKEY|ShiftMask,    		XK_x,          incrogaps,              {.i = -3 } },
	/*{ MODKEY|Mod4Mask,              XK_6,          incrihgaps,             {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_6,          incrihgaps,             {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_7,          incrivgaps,             {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_7,          incrivgaps,             {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_8,          incrohgaps,             {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_8,          incrohgaps,             {.i = -1 } },
	{ MODKEY|Mod4Mask,              XK_9,          incrovgaps,             {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_9,          incrovgaps,             {.i = -1 } },*/
	{ MODKEY,              		XK_a,          togglegaps,             {0} },
	{ MODKEY|ShiftMask,    		XK_a,          defaultgaps,            {0} },
	#endif // VANITYGAPS_PATCH
	{ MODKEY,                       XK_Tab,        view,                   {0} },
	#if SHIFTVIEW_PATCH
	{ MODKEY, 	            	XK_g, 	       shiftview,              { .i = -1 } },
	{ MODKEY,       	     	XK_ae,	       shiftview,              { .i = +1 } },
	{ MODKEY|ControlMask,        	XK_Left,       shiftview,              { .i = -1 } },
	{ MODKEY|ControlMask,      	XK_Right,      shiftview,              { .i = +1 } },
  	#endif // SHIFTVIEW_PATCH
  	#if SHIFTVIEW_CLIENTS_PATCH
	{ MODKEY|Mod4Mask,              XK_Tab,        shiftviewclients,       { .i = -1 } },
	{ MODKEY|Mod4Mask,              XK_backslash,  shiftviewclients,       { .i = +1 } },
  	#endif // SHIFTVIEW_CLIENTS_PATCH
	#if BAR_WINTITLEACTIONS_PATCH
	{ MODKEY|ControlMask,           XK_z,          showhideclient,         {0} },
	#endif // BAR_WINTITLEACTIONS_PATCH
	{ MODKEY|ShiftMask,             XK_q,          killclient,             {0} },
	#if KILLUNSEL_PATCH
	{ MODKEY|ShiftMask,             XK_x,          killunsel,              {0} },
	#endif // KILLUNSEL_PATCH
	#if SELFRESTART_PATCH
	{ MODKEY|ShiftMask,             XK_r,          self_restart,           {0} },
	#endif // SELFRESTART_PATCH
	/*{ MODKEY|ShiftMask,             XK_q,          quit,                   {0} },*/
	/*#if RESTARTSIG_PATCH
	{ MODKEY|ControlMask|ShiftMask, XK_q,          quit,                   {1} },
	#endif // RESTARTSIG_PATCH*/
	#if FOCUSURGENT_PATCH
	{ MODKEY,                       XK_u,          focusurgent,            {0} },
	#endif // FOCUSURGENT_PATCH
	#if BAR_HOLDBAR_PATCH
	{ 0,                            HOLDKEY,       holdbar,                {0} },
	#endif // BAR_HOLDBAR_PATCH
	#if WINVIEW_PATCH
	{ MODKEY,                       XK_o,          winview,                {0} },
	#endif // WINVIEW_PATCH
	#if XRDB_PATCH && !BAR_VTCOLORS_PATCH
	{ MODKEY|ShiftMask,             XK_F5,         xrdb,                   {.v = NULL } },
	#endif // XRDB_PATCH
	{ MODKEY,			XK_t,		setlayout,	{.v = &layouts[0]} },
	{ MODKEY|ShiftMask,		XK_t,		setlayout,	{.v = &layouts[1]} },
	{ MODKEY,			XK_y,		setlayout,	{.v = &layouts[2]} },
	{ MODKEY|ShiftMask,		XK_y,		setlayout,	{.v = &layouts[3]} },
	{ MODKEY,			XK_u,		setlayout,	{.v = &layouts[4]} },
	{ MODKEY|ShiftMask,		XK_u,		setlayout,	{.v = &layouts[5]} },
	{ MODKEY,			XK_i,		setlayout,	{.v = &layouts[6]} },
	{ MODKEY|ShiftMask,		XK_i,		setlayout,	{.v = &layouts[7]} },
	#if COLUMNS_LAYOUT
	{ MODKEY,                       XK_c,          setlayout,              {.v = &layouts[3]} },
	#endif // COLUMNS_LAYOUT
	#if FLEXTILE_DELUXE_LAYOUT
	{ MODKEY|ControlMask,           XK_t,          rotatelayoutaxis,       {.i = +1 } },   /* flextile, 1 = layout axis */
	{ MODKEY|ControlMask,           XK_Tab,        rotatelayoutaxis,       {.i = +2 } },   /* flextile, 2 = master axis */
	{ MODKEY|ControlMask|ShiftMask, XK_Tab,        rotatelayoutaxis,       {.i = +3 } },   /* flextile, 3 = stack axis */
	{ MODKEY|ControlMask|Mod1Mask,  XK_Tab,        rotatelayoutaxis,       {.i = +4 } },   /* flextile, 4 = secondary stack axis */
	{ MODKEY|Mod5Mask,              XK_t,          rotatelayoutaxis,       {.i = -1 } },   /* flextile, 1 = layout axis */
	{ MODKEY|Mod5Mask,              XK_Tab,        rotatelayoutaxis,       {.i = -2 } },   /* flextile, 2 = master axis */
	{ MODKEY|Mod5Mask|ShiftMask,    XK_Tab,        rotatelayoutaxis,       {.i = -3 } },   /* flextile, 3 = stack axis */
	{ MODKEY|Mod5Mask|Mod1Mask,     XK_Tab,        rotatelayoutaxis,       {.i = -4 } },   /* flextile, 4 = secondary stack axis */
	{ MODKEY|ControlMask,           XK_Return,     mirrorlayout,           {0} },         /* flextile, flip master and stack areas */
	#endif // FLEXTILE_DELUXE_LAYOUT
	{ MODKEY|ShiftMask,             XK_space,      togglefloating,         {0} },
	#if MAXIMIZE_PATCH
	{ MODKEY|ControlMask|ShiftMask, XK_h,          togglehorizontalmax,    {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_l,          togglehorizontalmax,    {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_j,          toggleverticalmax,      {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_k,          toggleverticalmax,      {0} },
	{ MODKEY|ControlMask,           XK_m,          togglemax,              {0} },
	#endif // MAXIMIZE_PATCH
	#if SCRATCHPADS_PATCH
	{ MODKEY|ShiftMask,             XK_Return,      togglescratch,          {.ui = 0 } },
	{ MODKEY,			XK_apostrophe,	togglescratch,		{.ui = 1 } },
	{ MODKEY,	 	        XK_m,		togglescratch,          {.ui = 2 } },
	#endif // SCRATCHPADS_PATCH
	#if UNFLOATVISIBLE_PATCH
	{ MODKEY|Mod1Mask,              XK_space,      unfloatvisible,         {0} },
	{ MODKEY|ShiftMask,             XK_t,          unfloatvisible,         {.v = &layouts[0]} },
	#endif // UNFLOATVISIBLE_PATCH
	#if TOGGLEFULLSCREEN_PATCH
	{ MODKEY,                       XK_f,          togglefullscreen,       {0} },
	#endif // TOGGLEFULLSCREEN_PATCH
	#if !FAKEFULLSCREEN_PATCH && FAKEFULLSCREEN_CLIENT_PATCH
	{ MODKEY|ShiftMask,             XK_y,          togglefakefullscreen,   {0} },
	#endif // FAKEFULLSCREEN_CLIENT_PATCH
	#if FULLSCREEN_PATCH
	{ MODKEY|ShiftMask,             XK_f,          fullscreen,             {0} },
	#endif // FULLSCREEN_PATCH
	#if STICKY_PATCH
	{ MODKEY, 		        XK_s,          togglesticky,           {0} },
	#endif // STICKY_PATCH
	#if SCRATCHPAD_ALT_1_PATCH
	{ MODKEY,                       XK_minus,      scratchpad_show,        {0} },
	{ MODKEY|ShiftMask,             XK_minus,      scratchpad_hide,        {0} },
	{ MODKEY,                       XK_equal,      scratchpad_remove,      {0} },
	#else
	{ MODKEY,                       XK_0,          view,                   {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~0 } },
	#endif // SCRATCHPAD_ALT_1_PATCH
	{ MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } },
	#if FOCUSADJACENTTAG_PATCH
	{ MODKEY,                       XK_Left,       viewtoleft,             {0} },
	{ MODKEY,                       XK_Right,      viewtoright,            {0} },
	{ MODKEY|ShiftMask,             XK_Left,       tagtoleft,              {0} },
	{ MODKEY|ShiftMask,             XK_Right,      tagtoright,             {0} },
	{ MODKEY|ControlMask,           XK_Left,       tagandviewtoleft,       {0} },
	{ MODKEY|ControlMask,           XK_Right,      tagandviewtoright,      {0} },
	#endif // FOCUSADJACENTTAG_PATCH
	#if TAGALL_PATCH
	{ MODKEY|ShiftMask,             XK_F1,         tagall,                 {.v = "F1"} },
	{ MODKEY|ShiftMask,             XK_F2,         tagall,                 {.v = "F2"} },
	{ MODKEY|ShiftMask,             XK_F3,         tagall,                 {.v = "F3"} },
	{ MODKEY|ShiftMask,             XK_F4,         tagall,                 {.v = "F4"} },
	{ MODKEY|ShiftMask,             XK_F5,         tagall,                 {.v = "F5"} },
	{ MODKEY|ShiftMask,             XK_F6,         tagall,                 {.v = "F6"} },
	{ MODKEY|ShiftMask,             XK_F7,         tagall,                 {.v = "F7"} },
	{ MODKEY|ShiftMask,             XK_F8,         tagall,                 {.v = "F8"} },
	{ MODKEY|ShiftMask,             XK_F9,         tagall,                 {.v = "F9"} },
	{ MODKEY|ControlMask,           XK_F1,         tagall,                 {.v = "1"} },
	{ MODKEY|ControlMask,           XK_F2,         tagall,                 {.v = "2"} },
	{ MODKEY|ControlMask,           XK_F3,         tagall,                 {.v = "3"} },
	{ MODKEY|ControlMask,           XK_F4,         tagall,                 {.v = "4"} },
	{ MODKEY|ControlMask,           XK_F5,         tagall,                 {.v = "5"} },
	{ MODKEY|ControlMask,           XK_F6,         tagall,                 {.v = "6"} },
	{ MODKEY|ControlMask,           XK_F7,         tagall,                 {.v = "7"} },
	{ MODKEY|ControlMask,           XK_F8,         tagall,                 {.v = "8"} },
	{ MODKEY|ControlMask,           XK_F9,         tagall,                 {.v = "9"} },
	#endif // TAGALL_PATCH
	#if TAGALLMON_PATCH
	{ MODKEY|Mod4Mask|ShiftMask,    XK_comma,      tagallmon,              {.i = +1 } },
	{ MODKEY|Mod4Mask|ShiftMask,    XK_period,     tagallmon,              {.i = -1 } },
	#endif // TAGALLMON_PATCH
	#if TAGSWAPMON_PATCH
	{ MODKEY|Mod4Mask|ControlMask,  XK_comma,      tagswapmon,             {.i = +1 } },
	{ MODKEY|Mod4Mask|ControlMask,  XK_period,     tagswapmon,             {.i = -1 } },
	#endif // TAGSWAPMON_PATCH
	#if BAR_ALTERNATIVE_TAGS_PATCH
	{ MODKEY,                       XK_n,          togglealttag,           {0} },
	#endif // BAR_ALTERNATIVE_TAGS_PATCH
	#if BAR_TAGGRID_PATCH
	{ MODKEY|ControlMask,           XK_Up,         switchtag,              { .ui = SWITCHTAG_UP    | SWITCHTAG_VIEW } },
	{ MODKEY|ControlMask,           XK_Down,       switchtag,              { .ui = SWITCHTAG_DOWN  | SWITCHTAG_VIEW } },
	{ MODKEY|ControlMask,           XK_Right,      switchtag,              { .ui = SWITCHTAG_RIGHT | SWITCHTAG_VIEW } },
	{ MODKEY|ControlMask,           XK_Left,       switchtag,              { .ui = SWITCHTAG_LEFT  | SWITCHTAG_VIEW } },
	{ MODKEY|Mod4Mask,              XK_Up,         switchtag,              { .ui = SWITCHTAG_UP    | SWITCHTAG_TAG | SWITCHTAG_VIEW } },
	{ MODKEY|Mod4Mask,              XK_Down,       switchtag,              { .ui = SWITCHTAG_DOWN  | SWITCHTAG_TAG | SWITCHTAG_VIEW } },
	{ MODKEY|Mod4Mask,              XK_Right,      switchtag,              { .ui = SWITCHTAG_RIGHT | SWITCHTAG_TAG | SWITCHTAG_VIEW } },
	{ MODKEY|Mod4Mask,              XK_Left,       switchtag,              { .ui = SWITCHTAG_LEFT  | SWITCHTAG_TAG | SWITCHTAG_VIEW } },
	#endif // BAR_TAGGRID_PATCH
	#if MOVEPLACE_PATCH
	{ MODKEY,                       XK_KP_7,       moveplace,              {.ui = WIN_NW }},   /* XK_KP_Home,  */
	{ MODKEY,                       XK_KP_8,       moveplace,              {.ui = WIN_N  }},   /* XK_KP_Up,    */
	{ MODKEY,                       XK_KP_9,       moveplace,              {.ui = WIN_NE }},   /* XK_KP_Prior, */
	{ MODKEY,                       XK_KP_4,       moveplace,              {.ui = WIN_W  }},   /* XK_KP_Left,  */
	{ MODKEY,                       XK_KP_5,       moveplace,              {.ui = WIN_C  }},   /* XK_KP_Begin, */
	{ MODKEY,                       XK_KP_6,       moveplace,              {.ui = WIN_E  }},   /* XK_KP_Right, */
	{ MODKEY,                       XK_KP_1,       moveplace,              {.ui = WIN_SW }},   /* XK_KP_End,   */
	{ MODKEY,                       XK_KP_2,       moveplace,              {.ui = WIN_S  }},   /* XK_KP_Down,  */
	{ MODKEY,                       XK_KP_3,       moveplace,              {.ui = WIN_SE }},   /* XK_KP_Next,  */
	#endif // MOVEPLACE_PATCH
	#if EXRESIZE_PATCH
	{ MODKEY,                       XK_KP_7,       explace,                {.ui = EX_NW }},   /* XK_KP_Home,  */
	{ MODKEY,                       XK_KP_8,       explace,                {.ui = EX_N  }},   /* XK_KP_Up,    */
	{ MODKEY,                       XK_KP_9,       explace,                {.ui = EX_NE }},   /* XK_KP_Prior, */
	{ MODKEY,                       XK_KP_4,       explace,                {.ui = EX_W  }},   /* XK_KP_Left,  */
	{ MODKEY,                       XK_KP_5,       explace,                {.ui = EX_C  }},   /* XK_KP_Begin, */
	{ MODKEY,                       XK_KP_6,       explace,                {.ui = EX_E  }},   /* XK_KP_Right, */
	{ MODKEY,                       XK_KP_1,       explace,                {.ui = EX_SW }},   /* XK_KP_End,   */
	{ MODKEY,                       XK_KP_2,       explace,                {.ui = EX_S  }},   /* XK_KP_Down,  */
	{ MODKEY,                       XK_KP_3,       explace,                {.ui = EX_SE }},   /* XK_KP_Next,  */

	{ MODKEY|ShiftMask,             XK_KP_8,       exresize,               {.v = (int []){   0,  25 }}},  /* XK_KP_Up,    */
	{ MODKEY|ShiftMask,             XK_KP_2,       exresize,               {.v = (int []){   0, -25 }}},  /* XK_KP_Down,  */
	{ MODKEY|ShiftMask,             XK_KP_6,       exresize,               {.v = (int []){  25,   0 }}},  /* XK_KP_Right, */
	{ MODKEY|ShiftMask,             XK_KP_4,       exresize,               {.v = (int []){ -25,   0 }}},  /* XK_KP_Left,  */
	{ MODKEY|ShiftMask,             XK_KP_5,       exresize,               {.v = (int []){  25,  25 }}},  /* XK_KP_Begin, */
	{ MODKEY|ShiftMask|ControlMask, XK_KP_5,       exresize,               {.v = (int []){ -25, -25 }}},  /* XK_KP_Begin, */

	{ MODKEY|ControlMask,           XK_KP_6,       togglehorizontalexpand, {.i = +1} },  /* XK_KP_Right, */
	{ MODKEY|ControlMask,           XK_KP_3,       togglehorizontalexpand, {.i =  0} },  /* XK_KP_Next,  */
	{ MODKEY|ControlMask,           XK_KP_4,       togglehorizontalexpand, {.i = -1} },  /* XK_KP_Left,  */
	{ MODKEY|ControlMask,           XK_KP_8,       toggleverticalexpand,   {.i = +1} },  /* XK_KP_Up,    */
	{ MODKEY|ControlMask,           XK_KP_1,       toggleverticalexpand,   {.i =  0} },  /* XK_KP_End,   */
	{ MODKEY|ControlMask,           XK_KP_2,       toggleverticalexpand,   {.i = -1} },  /* XK_KP_Down,  */
	{ MODKEY|ControlMask,           XK_KP_9,       togglemaximize,         {.i = -1} },  /* XK_KP_Prior, */
	{ MODKEY|ControlMask,           XK_KP_7,       togglemaximize,         {.i = +1} },  /* XK_KP_Home,  */
	{ MODKEY|ControlMask,           XK_KP_5,       togglemaximize,         {.i =  0} },  /* XK_KP_Begin, */
	#endif // EXRESIZE_PATCH
	#if FLOATPOS_PATCH
	/* Note that due to key limitations the below example kybindings are defined with a Mod3Mask,
	 * which is not always readily available. Refer to the patch wiki for more details. */
	/* Client position is limited to monitor window area */
	{ Mod3Mask,                     XK_u,            floatpos,               {.v = "-26x -26y" } }, // ↖
	{ Mod3Mask,                     XK_i,            floatpos,               {.v = "  0x -26y" } }, // ↑
	{ Mod3Mask,                     XK_o,            floatpos,               {.v = " 26x -26y" } }, // ↗
	{ Mod3Mask,                     XK_j,            floatpos,               {.v = "-26x   0y" } }, // ←
	{ Mod3Mask,                     XK_l,            floatpos,               {.v = " 26x   0y" } }, // →
	{ Mod3Mask,                     XK_m,            floatpos,               {.v = "-26x  26y" } }, // ↙
	{ Mod3Mask,                     XK_comma,        floatpos,               {.v = "  0x  26y" } }, // ↓
	{ Mod3Mask,                     XK_period,       floatpos,               {.v = " 26x  26y" } }, // ↘
	/* Absolute positioning (allows moving windows between monitors) */
	{ Mod3Mask|ControlMask,         XK_u,            floatpos,               {.v = "-26a -26a" } }, // ↖
	{ Mod3Mask|ControlMask,         XK_i,            floatpos,               {.v = "  0a -26a" } }, // ↑
	{ Mod3Mask|ControlMask,         XK_o,            floatpos,               {.v = " 26a -26a" } }, // ↗
	{ Mod3Mask|ControlMask,         XK_j,            floatpos,               {.v = "-26a   0a" } }, // ←
	{ Mod3Mask|ControlMask,         XK_l,            floatpos,               {.v = " 26a   0a" } }, // →
	{ Mod3Mask|ControlMask,         XK_m,            floatpos,               {.v = "-26a  26a" } }, // ↙
	{ Mod3Mask|ControlMask,         XK_comma,        floatpos,               {.v = "  0a  26a" } }, // ↓
	{ Mod3Mask|ControlMask,         XK_period,       floatpos,               {.v = " 26a  26a" } }, // ↘
	/* Resize client, client center position is fixed which means that client expands in all directions */
	{ Mod3Mask|ShiftMask,           XK_u,            floatpos,               {.v = "-26w -26h" } }, // ↖
	{ Mod3Mask|ShiftMask,           XK_i,            floatpos,               {.v = "  0w -26h" } }, // ↑
	{ Mod3Mask|ShiftMask,           XK_o,            floatpos,               {.v = " 26w -26h" } }, // ↗
	{ Mod3Mask|ShiftMask,           XK_j,            floatpos,               {.v = "-26w   0h" } }, // ←
	{ Mod3Mask|ShiftMask,           XK_k,            floatpos,               {.v = "800W 800H" } }, // ·
	{ Mod3Mask|ShiftMask,           XK_l,            floatpos,               {.v = " 26w   0h" } }, // →
	{ Mod3Mask|ShiftMask,           XK_m,            floatpos,               {.v = "-26w  26h" } }, // ↙
	{ Mod3Mask|ShiftMask,           XK_comma,        floatpos,               {.v = "  0w  26h" } }, // ↓
	{ Mod3Mask|ShiftMask,           XK_period,       floatpos,               {.v = " 26w  26h" } }, // ↘
	/* Client is positioned in a floating grid, movement is relative to client's current position */
	{ Mod3Mask|Mod1Mask,            XK_u,            floatpos,               {.v = "-1p -1p" } }, // ↖
	{ Mod3Mask|Mod1Mask,            XK_i,            floatpos,               {.v = " 0p -1p" } }, // ↑
	{ Mod3Mask|Mod1Mask,            XK_o,            floatpos,               {.v = " 1p -1p" } }, // ↗
	{ Mod3Mask|Mod1Mask,            XK_j,            floatpos,               {.v = "-1p  0p" } }, // ←
	{ Mod3Mask|Mod1Mask,            XK_k,            floatpos,               {.v = " 0p  0p" } }, // ·
	{ Mod3Mask|Mod1Mask,            XK_l,            floatpos,               {.v = " 1p  0p" } }, // →
	{ Mod3Mask|Mod1Mask,            XK_m,            floatpos,               {.v = "-1p  1p" } }, // ↙
	{ Mod3Mask|Mod1Mask,            XK_comma,        floatpos,               {.v = " 0p  1p" } }, // ↓
	{ Mod3Mask|Mod1Mask,            XK_period,       floatpos,               {.v = " 1p  1p" } }, // ↘
	#endif // FLOATPOS_PATCH
	#if SETBORDERPX_PATCH
	{ MODKEY|ControlMask,           XK_minus,      setborderpx,            {.i = -1 } },
	{ MODKEY|ControlMask,           XK_plus,       setborderpx,            {.i = +1 } },
	{ MODKEY|ControlMask,           XK_numbersign, setborderpx,            {.i = 0 } },
	#endif // SETBORDERPX_PATCH
	#if CYCLELAYOUTS_PATCH
	{ MODKEY|ControlMask,           XK_comma,      cyclelayout,            {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period,     cyclelayout,            {.i = +1 } },
	#endif // CYCLELAYOUTS_PATCH
	#if MDPCONTROL_PATCH
	{ MODKEY,                       XK_F1,         mpdchange,              {.i = -1} },
	{ MODKEY,                       XK_F2,         mpdchange,              {.i = +1} },
	{ MODKEY,                       XK_Escape,     mpdcontrol,             {0} },
	#endif // MDPCONTROL_PATCH
	TAGKEYS(                        XK_1,                                  0)
	TAGKEYS(                        XK_2,                                  1)
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	TAGKEYS(                        XK_7,                                  6)
	TAGKEYS(                        XK_8,                                  7)
  TAGKEYS(                        XK_9,                                  8)
};

#if KEYMODES_PATCH
static Key cmdkeys[] = {
	/* modifier                    keys                     function         argument */
	{ 0,                           XK_Escape,               clearcmd,        {0} },
	{ ControlMask,                 XK_c,                    clearcmd,        {0} },
	{ 0,                           XK_i,                    setkeymode,      {.ui = INSERTMODE} },
};

static Command commands[] = {
	/* modifier (4 keys)                          keysyms (4 keys)                                function         argument */
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_h,     0,         0},            setlayout,       {.v = &layouts[0]} },
	{ {ControlMask, 0,          0,         0},    {XK_w,      XK_o,     0,         0},            setlayout,       {.v = &layouts[2]} },
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_o,     0,         0},            onlyclient,      {0} },
	{ {ControlMask, 0,          0,         0},    {XK_w,      XK_v,     0,         0},            setlayout,       {.v = &layouts[0]} },
	{ {ControlMask, 0,          0,         0},    {XK_w,      XK_less,  0,         0},            setmfact,        {.f = -0.05} },
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_less,  0,         0},            setmfact,        {.f = +0.05} },
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_0,     0,         0},            setmfact,        {.f = +1.50} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_e,     0,         0},            spawn,           {.v = dmenucmd} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_o,     0,         0},            spawn,           {.v = dmenucmd} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_q,     XK_Return, 0},            quit,            {0} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_b,     XK_d,      XK_Return},    killclient,      {0} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_b,     XK_n,      XK_Return},    focusstack,      {.i = +1} },
	{ {ShiftMask,   0,          ShiftMask, 0},    {XK_period, XK_b,     XK_n,      XK_Return},    focusstack,      {.i = -1} },

};
#endif // KEYMODES_PATCH

/* button definitions */
#if STATUSBUTTON_PATCH
/* click can be ClkButton, ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
#else
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
#endif //
static Button buttons[] = {
	/* click                event mask           button          function        argument */
	#if BAR_STATUSBUTTON_PATCH
	{ ClkButton,            0,                   Button1,        spawn,          {.v = dmenucmd } },
	#endif // BAR_STATUSBUTTON_PATCH
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	#if BAR_WINTITLEACTIONS_PATCH
	{ ClkWinTitle,          0,                   Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,                   Button2,        showhideclient, {0} },
	#endif // BAR_WINTITLEACTIONS_PATCH
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	#if BAR_STATUSCMD_PATCH && BAR_DWMBLOCKS_PATCH
	{ ClkStatusText,        0,                   Button1,        sigdwmblocks,   {.i = 1 } },
	{ ClkStatusText,        0,                   Button2,        sigdwmblocks,   {.i = 2 } },
	{ ClkStatusText,        0,                   Button3,        sigdwmblocks,   {.i = 3 } },
	{ ClkStatusText,        0,		     Button4,        sigdwmblocks,   {.i = 4 } },
	{ ClkStatusText,        0,		     Button5,        sigdwmblocks,   {.i = 5 } },
	{ ClkStatusText,        ShiftMask,	     Button1,        sigdwmblocks,   {.i = 6 } },
	#elif BAR_STATUSCMD_PATCH
	{ ClkStatusText,        0,                   Button1,        spawn,          {.v = mpcnxt } },
	{ ClkStatusText,        0,                   Button2,        spawn,          {.v = mpctgl } },
	{ ClkStatusText,        0,                   Button3,        spawn,          {.v = mpcprv } },
	#else
	{ ClkStatusText,        0,                   Button2,        spawn,          {.v = termcmd } },
	#endif // BAR_STATUSCMD_PATCH
	{ ClkClientWin,         MODKEY,              Button1,        movemouse,      {0} },
	/*{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },*/
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	#if DRAGCFACT_PATCH && CFACTS_PATCH
	{ ClkClientWin,         MODKEY|ShiftMask,    Button3,        dragcfact,      {0} },
	#endif // DRAGCFACT_PATCH
	#if DRAGMFACT_PATCH
	{ ClkClientWin,         MODKEY|ShiftMask,    Button1,        dragmfact,      {0} },
	#endif // DRAGMFACT_PATCH
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};
