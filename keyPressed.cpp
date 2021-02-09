#include "keyPressed.h"
#include "std_lib_facilities.h"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int keyPressed(){
    if (Fl::event_key(FL_KEYUP)){
        return 3;
    } else if (Fl::event_key(FL_Left)){
        return -1;
    } else if (Fl::event_key(FL_Right)) {
        return 1;
    } else if (Fl::event_key(32)) {
        return 2;
    } else {
        return 0;
    }
}