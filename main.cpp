#include "editorproof.h"

#include <QApplication>
#include "timelineProof.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Timelineproof timeline;
    EditorProof editor(timeline);
    editor.show();
    return a.exec();
}
