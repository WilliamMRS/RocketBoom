#include "std_lib_facilities.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include "keyPressed.h"

int main()
{
	bool spacePressed = false;
	while (not spacePressed)
	{
		if(abs(keyPressed()) == 1){
			cout << keyPressed() << endl;
		} else if(keyPressed() == 2){
			spacePressed = true;
		}
	}

	keep_window_open();
}