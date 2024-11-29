#include <generaltab.h>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>

GeneralTab::GeneralTab(QWidget *parent)
: QWidget(parent)
{
    QLabel *fileNameLabel = new QLabel(tr("Nom du ficheir:"));
    QLineEdit *fileNameEdit = new QLineEdit("");
    QLabel *pathLabel = new QLabel(tr("Chemin:"));
    QLabel *pathValueLabel = new QLabel("C:/Users");

    pathValueLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    QLabel *sizeLabel = new QLabel(tr("Taille:"));
    QLabel *sizeValueLabel = new QLabel("24 ko");
    sizeValueLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(fileNameLabel);
    mainLayout->addWidget(fileNameEdit);
    mainLayout->addWidget(pathLabel);
    mainLayout->addWidget(pathValueLabel);
    mainLayout->addWidget(sizeLabel);
    mainLayout->addWidget(sizeValueLabel);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
}
