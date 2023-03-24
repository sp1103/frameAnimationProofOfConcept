#include "editorproof.h"

#include <QApplication>
#include "timeline.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Timeline timeline;
    EditorProof editor(timeline);
    editor.show();
    return a.exec();
}
