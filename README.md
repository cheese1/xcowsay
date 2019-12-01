# xcowsay
`fortune | cowsay` as screensaver in XScreenSaver and xfce4-screensaver

xcowsay allows you to run ANY Linux command and display the output as your screensaver.
It supports:
1. Color text output!
2. Refreshing and animations
3. Multiple fonts

## Colors
Xcowsay respects CSI (ANSI escape sequences) so your output can be colored!
Try setup below command in settings:

```fortune -a | fmt -80 -s | $(shuf -n 1 -e cowsay cowthink) -$(shuf -n 1 -e b d g p s t w y) -f $(shuf -n 1 -e $(cowsay -l | tail -n +2)) -n | toilet -F gay -f term```

## Requirements
1. CMake
2. libx11-dev

And one of the screensavers:
- XScreenSaver
- xfce4-screensaver

## Compile xcowsay
1. Compile
To compile xcowsay run:
```
cmake CMakeLists.txt
make
sudo make install
```

## Install xcowsay for XScreenSaver
Add XScreenSaver module by editing `~/.xscreensaver` file and modifying `programs: xcowsay` TODO clarify
*For more info about installing own module see: [http://www.dis.uniroma1.it/~liberato/screensaver/install.html].*

## Install xfce4-screensaver
TODO

## Configuration
Following params can be configured in screensaver settings:
* delay - delay to next command execution in seconds
* comamnd - command to be executed
* font - (advenced) font to be used to display the output of the command. Use [X logical font description (XLFD)](https://en.wikipedia.org/wiki/X_logical_font_description) format to specify the font e.g. `-*-fixed-*-r-*-*-14-*-*-*-*-*-*-*`.
  *Use `xlsfonts` command to list avaliable fonts*
  
# TODO XFCE4 support and instruction
- exec file /usr/libexec/xfce4-screensaver/
- config file /usr/share/applications/screensavers/
- check out https://git.xfce.org/apps/xfce4-screensaver/tree/savers/floaters.c
- how to specify params?
- remove install phase from makefile and add manual instruction
