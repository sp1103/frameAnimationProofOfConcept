#ifndef FRAME_H
#define FRAME_H

#include <QObject>
#include <QVector>
#include <QImage>

class Frame
{
public:
    Frame();
    void addLayer(QImage image);
private:
    QVector<QImage> layers;
};

#endif // FRAME_H
