/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;       /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;     /* -c option; centers dmenu on screen */
static int min_width = 500;  /* minimum width when centered */
static int fuzzy = 1;        /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "HackNerdFontMono:pixelsize=18:antialias=true:autohint=true",
    "Hack:pixelsize=28:antialias=true:autohint=true",
    "ConsolasLigaturizedv2:pixelsize=26:antialias=true:autohint=true",
    "Consolas-Regular:pixelsize=30:antialias=true:autohint=true",
    "JetBrainsMonoNL-Regular:pixelsize=28:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#666666", "#19191a" },
	[SchemeSel] = { "#ffffff", "#2C4075" },
	[SchemeSelHighlight] = { "#ffffff", "#4A6A9A" },
	[SchemeNormHighlight] = { "#ffffff", "#19191a" },
    [SchemeMid] = { "#ffffff", "#19191a" },
	[SchemeOut] = { "#ffffff", "#19191a" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;  /* -h option; minimum height of a menu line */
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */

