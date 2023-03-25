#include "editorproof.h"
#include "ui_editorproof.h"

EditorProof::EditorProof(Timeline& timeline, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorProof)
{
    ui->setupUi(this);
    connect(ui->frameRateSlider,
            &QSlider::sliderMoved,
            &timeline,
            &Timeline::changeFrameRate);

    //Just default image for size reference
    QPixmap defaultImgae(":/img/img/Image1.png");
    int width = ui->imageLabel->width();
    int height = ui->imageLabel->height();
    ui->imageLabel->setPixmap(defaultImgae.scaled(width, height, Qt::KeepAspectRatio));
}

EditorProof::~EditorProof()
{
    delete ui;
}

