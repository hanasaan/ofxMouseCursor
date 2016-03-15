#pragma once

#include "ofMain.h"
#include "ofxMouseCursor.h"

class ofApp : public ofBaseApp {
   public:
    void keyPressed(int key);

   private:
    void changeMouseCursor(int index);
    int mouseCursorIndex = 19;
};
