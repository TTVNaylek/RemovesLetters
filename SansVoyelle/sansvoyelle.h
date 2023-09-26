#ifndef SANSVOYELLE_H
#define SANSVOYELLE_H
#include <QtWidgets/QDialog>
#include <QtWidgets/QApplication>
#include <QString>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QBoxLayout>
#include <iostream>
#include <stdio.h>
#include <QRegularExpression>



class SansVoyelle : public QWidget
{
    Q_OBJECT
private:
    //Creation des attributs
    QPushButton *boutonConvertir;
    QPushButton *boutonQuitter;
    QLineEdit *lineEditSaisie;
    QLineEdit *lineEditResultat;
    QLabel *labelSaisie;
    QLabel *labelResultat;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout2;
    QHBoxLayout *horizontalLayout3;
    QVBoxLayout *verticalLayout;

    //Creation de la méthode suppression voyelle
    QString SuppressionVoyelle();

public:
    SansVoyelle(QWidget *parent = nullptr);
    ~SansVoyelle();

private slots:
    void BoutonConversion();
    void BoutonQuitter();


};
#endif // SANSVOYELLE_H


