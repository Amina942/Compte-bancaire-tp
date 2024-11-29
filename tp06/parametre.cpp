#include <parametre.h>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

Parametres::Parametres(QWidget *parent)
: QWidget(parent)
{
    QPushButton *B1 = new QPushButton("");
    QPushButton *B2 = new QPushButton("");
    QPushButton *B3 = new QPushButton("");
    QPushButton *B4= new QPushButton("");
    QLabel *Virement = new QLabel(tr(""));
    QLabel *Demarrage = new QLabel(tr(""));


    QVBoxLayout *V_layout = new QVBoxLayout;

    V_layout->addWidget(B1);
    V_layout->addWidget(B2);
    V_layout->addWidget(B3);
    V_layout->addWidget(B4);

    setLayout(V_layout);
}
