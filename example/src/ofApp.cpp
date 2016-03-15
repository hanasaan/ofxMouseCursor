#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    switch (key) {
        case OF_KEY_LEFT:
            mouseCursorIndex = (mouseCursorIndex + 18) % 19;
            break;
        case OF_KEY_RIGHT:
            mouseCursorIndex = (mouseCursorIndex + 1) % 19;
            break;
    }
}

void ofApp::changeMouseCursor(int index) {
    switch (index) {
        case 0:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::CURRENT_SYSTEM_CURSOR);
            break;
        case 1:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::ARROW_CURSOR);
            break;
        case 2:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::I_BEAM_CURSOR);
            break;
        case 3:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::POINTING_HAND_CURSOR);
            break;
        case 4:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::CLOSED_HAND_CURSOR);
            break;
        case 5:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::OPEN_HAND_CURSOR);
            break;
        case 6:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::RESIZE_LEFT_CURSOR);
            break;
        case 7:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::RESIZE_RIGHT_CURSOR);
            break;
        case 8:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::RESIZE_LEFT_RIGHT_CURSOR);
            break;
        case 9:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::RESIZE_UP_CURSOR);
            break;
        case 10:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::RESIZE_DOWN_CURSOR);
            break;
        case 11:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::RESIZE_UP_DOWN_CURSOR);
            break;
        case 12:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::CROSSHAIR_CURSOR);
            break;
        case 13:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::DISAPPEARING_ITEM_CURSOR);
            break;
        case 14:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::OPERATION_NOT_ALLOWED_CURSOR);
            break;
        case 15:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::DRAG_LINK_CURSOR);
            break;
        case 16:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::DRAG_COPY_CURSOR);
            break;
        case 17:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::CONTEXTUAL_MENU_CURSOR);
            break;
        case 18:
            ofxMouseCursor::setMouseCursor(ofxMouseCursorType::I_BEAM_CURSOR_FOR_VERTICAL_LAYOUT);
            break;
    }
}