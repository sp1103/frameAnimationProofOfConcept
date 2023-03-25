#include "frame.h"

Frame::Frame()
{
//Nothing right now
}

void Frame::addLayer(QImage image) {
    layers.push_back(image); //Just a simply adds an image to a frame
}

QImage Frame::getLayer() {
    return layers.first();
}
