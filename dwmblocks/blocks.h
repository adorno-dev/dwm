//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	// {"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
    {" ", "dwm-volume_pipewire", 0, 10},
    {" ", "dwm-cpu_usage", 2, 0},
    {" ", "dwm-temperature", 3, 0},
    {" ", "dwm-disk", 20, 0},
    {" ", "dwm-memory", 20, 0},
    {" ", "dwm-datetime", 1, 0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 4;
