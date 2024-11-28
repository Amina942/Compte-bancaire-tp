#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QPushButton *buttons[10];
    QGridLayout *Grille_boutons;
    QLabel *label = new QLabel(this);

    QLineEdit *Identi = new QLineEdit();
    QLineEdit *M_passe = new QLineEdit();

    QLabel *ID = new QLabel("Identifiant");
    QLabel *MDP = new QLabel("Mot de passe");


public slots:
    void  buttonClicked();
    void recup_ID();
signals:
void digitClicked(int digit);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
