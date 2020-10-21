//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	{"", "~/.local/bin/statusbar/cpu",						1,		0},
	{"", "~/.local/bin/statusbar/internet",						10,		0},
	
//	{"\x02🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "~/.local/bin/statusbar/disk",						120,		0},

	//{"", "~/bin/statusbar/volume",						0,		10},
	{"", "~/.local/bin/statusbar/volume",						0,		4},

	{"", "~/.local/bin/statusbar/keyboard",						0,		5},
	

//	{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{/*"📅 "*/"", "~/.local/bin/statusbar/clock",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
