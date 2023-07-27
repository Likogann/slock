/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "user";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",   /* after initialization */
	[INPUT] =  "#3c3836",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* Slock default message */
static const char * message = "Suckless: Software that sucks less.";
static const char * text_color = "#ffffff";
static const char * font_name = "6x10";
