Sherlock Instructions
========

Modified BiblioteQ Software for integration with the Sherlock Navigation System

Here are the steps required for making all this stuff work.

Required Programs
--------

1. Download and install Qt SDK.

	http://qt.nokia.com/downloads

2. Download and install YAZ (for Windows) into C:/Program Files

	***It is important that you place it there***

	https://www.indexdata.com/yaz

3. Dont't bother downloading SQLite - it comes with the code.

Getting it to Compile
--------

1. Open Qt Creator.

2. Open Existing Project -> choose biblioteq.win.pro

	**Don't get confused by the presence of biblioteq.win.pro.user - sometimes they can appear the same, BUT IT IS A LIE!**

3. Go to the Projects tab on the Left Side.

4. In Build Steps, if you see (3) "Custom Process Steps", don't change anything. If you don't, delete all the build steps and create 3 new custom commands:

	a. Command: mingw32-make.exe
		Working Directory: [leave this blank]
		Command arguments: clean

	b. Command: qmake.exe
		Working directory: %{buildDir}
		Command arguments: -o Makefile biblioteq.win.pro

	c. Command: mingw32-make.exe
		Working directory: [leave this blank]
		Command arguments: [leave this blank]
	
	***This process guarantees that every time you run, Qt Creator will clean, build, and compile the code.***

5. Change the option in the "Desktop" window to Run.

6. If Run Configurations says: Launch EXE, don't change anything. Anything else, and you must create a new Run configuration.

7. Create a new run configuration by clicking add->custom executable

	a. Executable: [directory where you stored this]\release\BiblioteQ.exe
		Working directory: [this directory]

Everything should run smoothly. If it doesn't, go ahead - be a cockmuncher - and ask me for help, Pat.