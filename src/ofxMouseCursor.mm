#include "ofxMouseCursor.h"

#import <Foundation/Foundation.h>

void ofxMouseCursor::setMouseCursor(ofxMouseCursorType type) throw(string) {
    switch (type) {
        case CURRENT_SYSTEM_CUROR:
            [[NSCursor currentSystemCursor] set];
            return;
        case ARROW_CURSOR:
            [[NSCursor arrowCursor] set];
            return;
        case I_BEAM_CURSOR:
            [[NSCursor IBeamCursor] set];
            return;
        case POINTING_HAND_CURSOR:
            [[NSCursor pointingHandCursor] set];
            return;
        case CLOSED_HAND_CURSOR:
            [[NSCursor closedHandCursor] set];
            return;
        case OPEN_HAND_CURSOR:
            [[NSCursor openHandCursor] set];
            return;
        case RESIZE_LEFT_CURSOR:
            [[NSCursor resizeLeftCursor] set];
            return;
        case RESIZE_RIGHT_CURSOR:
            [[NSCursor resizeRightCursor] set];
            return;
        case RESIZE_LEFT_RIGHT_CURSOR:
            [[NSCursor resizeLeftRightCursor] set];
            return;
        case RESIZE_UP_CURSOR:
            [[NSCursor resizeUpCursor] set];
            return;
        case RESIZE_DOWN_CURSOR:
            [[NSCursor resizeDownCursor] set];
            return;
        case RESIZE_UP_DOWN_CURSOR:
            [[NSCursor resizeUpDownCursor] set];
            return;
        case CROSSHAIR_CURSOR:
            [[NSCursor crosshairCursor] set];
            return;
        case DISAPPEARING_ITEM_CURSOR:
            [[NSCursor disappearingItemCursor] set];
            return;
        case OPERATION_NOT_ALLOWED_CURSOR:
            [[NSCursor operationNotAllowedCursor] set];
            return;
        case DRAG_LINK_CURSOR:
            [[NSCursor dragLinkCursor] set];
            return;
        case DRAG_COPY_CURSOR:
            [[NSCursor dragCopyCursor] set];
            return;
        case CONTEXTUAL_MENU_CURSOR:
            [[NSCursor contextualMenuCursor] set];
            return;
        case I_BEAM_CURSOR_FOR_VERTICAL_LAYOUT:
            [[NSCursor IBeamCursorForVerticalLayout] set];
            return;
    }
    throw "No such cursor.";
}