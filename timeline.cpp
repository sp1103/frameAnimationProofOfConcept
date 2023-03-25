#include "timeline.h"

Timeline::Timeline()
{

}

void Timeline::addFrame() {
    if (frames.size() == 20) { //Some max to be decided
        //Show error message
    }
    Frame newFrame;
    frames.push_back(newFrame); //Otherwise add new frame
}

void Timeline::deleteFrame() {
    if (frames.size() == 1) { //Minimum of 1 frame
        //Show error message
    }
    frames.pop_back(); //Can only delete frame created most recently at this point
}

void Timeline::setFrame(unsigned int size) {
    //Not sure what you want here
    sizeX = size;
    sizeY = size; //Maybe something like this
}

void Timeline::changeFrameRate(int newFrameRate) {
    qInfo()<<frameRate;
    frameRate = newFrameRate;
}
