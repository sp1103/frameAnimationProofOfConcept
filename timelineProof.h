#ifndef TIMELINEPROOF_H
#define TIMELINEPROOF_H

#include <QObject>
#include <QDebug>
#include "frame.h"

class Timelineproof : public QObject
{
    Q_OBJECT
public:
    explicit Timelineproof(QObject *parent = nullptr); //Note: calling class timeline causes issues
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
    bool loopActive = true;
    int frameIndex;
public slots:
    void changeFrameRate(int newFrameRate);
    void sendFrame();
    void startAnimationLoop();
    void stopLoop();
signals:
    void setImage(QImage image);
};

#endif // TIMELINEPROOF_H
