#ifndef TIMELINE_H
#define TIMELINE_H

#include <QObject>
#include <QDebug>
#include "frame.h"

class Timeline : public QObject
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
public slots:
    void changeFrameRate(int newFrameRate);
};

#endif // TIMELINE_H
