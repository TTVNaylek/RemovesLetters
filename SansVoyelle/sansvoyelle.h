//This file is part of SansVoyelle
//SansVoyelle is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//SansVoyelle is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with SansVoyelle If not, see <https://www.gnu.org/licenses/>
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


