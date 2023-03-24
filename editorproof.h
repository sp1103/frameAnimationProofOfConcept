#ifndef EDITORPROOF_H
#define EDITORPROOF_H

#include <QMainWindow>
#include "timeline.h"

QT_BEGIN_NAMESPACE
namespace Ui { class EditorProof; }
QT_END_NAMESPACE

class EditorProof : public QMainWindow
{
    Q_OBJECT

public:
    EditorProof(Timeline& timeline, QWidget *parent = nullptr);
    ~EditorProof();

private:
    Ui::EditorProof *ui;
};
#endif // EDITORPROOF_H
