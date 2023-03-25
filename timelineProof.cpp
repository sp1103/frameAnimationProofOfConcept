#include "timelineproof.h"

Timelineproof::Timelineproof(QObject *parent) : QObject(parent)
{
    Frame img1;
    Frame img2;
    img1.addLayer(QImage(":/img/img/Image1.png"));
    img2.addLayer(QImage(":/img/img/Image2.png"));
}

void Timelineproof::addFrame() {
    if (frames.size() == 20) { //Some max to be decided
        //Show error message
    }
    Frame newFrame;
    frames.push_back(newFrame); //Otherwise add new frame
}

void Timelineproof::deleteFrame() {
    if (frames.size() == 1) { //Minimum of 1 frame
        //Show error message
    }
    frames.pop_back(); //Can only delete frame created most recently at this point
}

void Timelineproof::setFrame(unsigned int size) {
    //Not sure what you want here
    sizeX = size;
    sizeY = size; //Maybe something like this
}

void Timelineproof::changeFrameRate(int newFrameRate) {
    frameRate = newFrameRate;
}
