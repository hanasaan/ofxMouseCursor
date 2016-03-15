#pragma once

#include "ofMain.h"
#include "ofxMouseCursorType.h"

class ofxMouseCursor {
   public:
    static void setMouseCursor(ofxMouseCursorType type) throw(string);
};