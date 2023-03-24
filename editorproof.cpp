#include "editorproof.h"
#include "ui_editorproof.h"

EditorProof::EditorProof(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorProof)
{
    ui->setupUi(this);
}

EditorProof::~EditorProof()
{
    delete ui;
}

