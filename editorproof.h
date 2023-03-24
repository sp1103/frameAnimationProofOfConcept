#ifndef EDITORPROOF_H
#define EDITORPROOF_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class EditorProof; }
QT_END_NAMESPACE

class EditorProof : public QMainWindow
{
    Q_OBJECT

public:
    EditorProof(QWidget *parent = nullptr);
    ~EditorProof();

private:
    Ui::EditorProof *ui;
};
#endif // EDITORPROOF_H
