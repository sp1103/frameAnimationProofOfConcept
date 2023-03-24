#include "editorproof.h"
#include "ui_editorproof.h"

EditorProof::EditorProof(Timeline& timeline, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorProof)
{
    ui->setupUi(this);
}

EditorProof::~EditorProof()
{
    delete ui;
}

