#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "image.h"
#include "lecteur.h"
#include <QWidget>
#include <vector>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    QTimer *timer = new QTimer(this);

private:
    Ui::LecteurVue *ui;
    Lecteur _lecteur;
    Diaporama _diaporama;

private slots:
    void modeAuto();
    void chargerDiaporama();
    void viderDiaporama();
    void vitesseX0_5();
    void vitesseX1();
    void vitesseX2();
    void aProposDe();
    void passerAuSuivant();
    void passerAuPrecedent();
    void lecture();
    void pause();
    void choisirCategorie();
};
#endif // LECTEURVUE_H