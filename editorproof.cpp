#include "editorproof.h"
#include "ui_editorproof.h"

EditorProof::EditorProof(Timelineproof& timeline, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditorProof)
{
    ui->setupUi(this);
    connect(ui->frameRateSlider,
            &QSlider::sliderMoved,
            &timeline,
            &Timelineproof::changeFrameRate);
    connect(&timeline,
            &Timelineproof::setImage,
            this,
            &EditorProof::changeImage);

    //Just default image for size reference
    QImage defaultImage(":/img/img/Image1.png");
    QPixmap defaultMap(QPixmap::fromImage(defaultImage));
    int width = ui->imageLabel->width();
    int height = ui->imageLabel->height();
    ui->imageLabel->setPixmap(defaultMap.scaled(width, height, Qt::KeepAspectRatio));
}

EditorProof::~EditorProof()
{
    delete ui;
}

void EditorProof::changeImage(QImage image) {
    QPixmap currentImage(QPixmap::fromImage(image));
    int width = ui->imageLabel->width();
    int height = ui->imageLabel->height();
    ui->imageLabel->setPixmap(currentImage.scaled(width, height, Qt::KeepAspectRatio));
}

