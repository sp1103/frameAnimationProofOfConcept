#include "editorproof.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EditorProof w;
    w.show();
    return a.exec();
}
