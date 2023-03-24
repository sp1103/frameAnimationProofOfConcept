#ifndef TIMELINE_H
#define TIMELINE_H

#include <QObject>
#include "frame.h"

class Timeline
{
public:
    Timeline();
    void addFrame();
    void deleteFrame();
    void setFrame(unsigned int size);
private:
    QVector<Frame> frames;
    QImage activeImage;
    Frame activeFrame;
    unsigned int frameRate;
    unsigned int sizeX;
    unsigned int sizeY;
    bool onionSkinEnabled;
};

#endif // TIMELINE_H
