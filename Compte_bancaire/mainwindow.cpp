#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int i = 0; i < 10; ++i) {
    QString text = QString::number(i);
    buttons[i] = new QPushButton(text, this);
    connect(buttons[i], SIGNAL(clicked()), this, SLOT(buttonClicked()));
    }
    // QLabel et QLineEdit id et MDP
    QGridLayout *layout0 = new QGridLayout();
    layout0->addWidget(ID, 0, 0);
    layout0->addWidget(Identi, 0, 2);
    // Connexion siganl-->slot
    connect(Identi, &QLineEdit::textChanged, this,&MainWindow::recup_ID);
    layout0->addWidget(MDP, 1, 0);
    layout0->addWidget(M_passe, 1, 2);
    // Boutons pavé numérique
    QGridLayout *layout = new QGridLayout();
    layout->setMargin(6);
    layout->setSpacing(6);
    for (int i = 0; i<9; ++i)
    {
        layout->addWidget(buttons[0], 3, 1);
        layout->addWidget(buttons[i+1], i / 3, i % 3);
    }

    QVBoxLayout *Vbox = new QVBoxLayout();
    Vbox->addLayout(layout0);
    Vbox->addLayout(layout);

    QWidget *Widget = new QWidget;
    Widget->setLayout(Vbox);
    setCentralWidget(Widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: buttonClicked()
{
    QPushButton *button = (QPushButton *)sender();
    emit digitClicked(button->text()[0].digitValue());
    int N_bouton;
    N_bouton = button->text()[0].digitValue();
    label->setText("Bouton "+ QString::number(N_bouton));
}
void MainWindow::recup_ID()
{
    QString Identifiant = Identi->text();
    qDebug()<<Identifiant;
}

