#ifndef EDITORPROOF_H
#define EDITORPROOF_H

#include <QMainWindow>
#include "timelineProof.h"

QT_BEGIN_NAMESPACE
namespace Ui { class EditorProof; }
QT_END_NAMESPACE

class EditorProof : public QMainWindow
{
    Q_OBJECT

public:
    EditorProof(Timelineproof& timeline, QWidget *parent = nullptr);
    ~EditorProof();
public slots:
    void changeImage(QImage image);
private:
    Ui::EditorProof *ui;
};
#endif // EDITORPROOF_H
