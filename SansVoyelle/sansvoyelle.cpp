//This file is part of SansVoyelle
//SansVoyelle is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//SansVoyelle is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along with SansVoyelle If not, see <https://www.gnu.org/licenses/>
#include "sansvoyelle.h"

SansVoyelle::SansVoyelle(QWidget *parent):QWidget(parent)
{
    //Paramètres de la fenetre
    setFixedSize(400,150);
    setWindowTitle("Sans Voyelle");

    //Création desz objets label et lineEdit
    labelSaisie = new QLabel("Saisie:", this);
    lineEditSaisie = new QLineEdit(this);

    //Création de l'objet layout horizontal + ajouts de widgets dans celui-ci
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->addWidget(labelSaisie);
    horizontalLayout->addWidget(lineEditSaisie);

    //Création des objets boutons
    boutonConvertir = new QPushButton("Convertir", this);
    boutonQuitter = new QPushButton("Quitter", this);

    //Coloring buttons
    boutonConvertir->setStyleSheet("*:hover{background-color: #44CF6C}");
    boutonQuitter->setStyleSheet("*:hover{background-color: #E94F37}");

    //Création de l'objet layout horizontal + ajouts de widgets dans celui-ci
    horizontalLayout2 = new QHBoxLayout();
    horizontalLayout2->addWidget(boutonConvertir);
    horizontalLayout2->addWidget(boutonQuitter);

    //Création de l'objet lineEditResultat
    labelResultat = new QLabel("Résultat:", this);
    lineEditResultat = new QLineEdit(this);

    //Coloring label
    labelResultat->setStyleSheet("*{color: #2A9134}");

    //Création de l'objet layout horizontal + ajouts de widgets dans celui-ci
    horizontalLayout3 = new QHBoxLayout();
    horizontalLayout3->addWidget(labelResultat);
    horizontalLayout3->addWidget(lineEditResultat);

    //Création de l'objet layout vertical + ajouts des layouts horizontaux dans celui-ci
    verticalLayout = new QVBoxLayout(this);
    verticalLayout->addLayout(horizontalLayout);
    verticalLayout->addLayout(horizontalLayout2);
    verticalLayout->addLayout(horizontalLayout3);

    //Connection des boutons
    connect(boutonConvertir,SIGNAL(clicked()), this, SLOT(BoutonConversion()));
    connect(boutonQuitter,SIGNAL(clicked()), this, SLOT(BoutonQuitter()));

}

SansVoyelle::~SansVoyelle(){

}


QString SansVoyelle::SuppressionVoyelle()
{
    QString textValue = lineEditSaisie->text();

    //Remove consomne
    textValue.remove(QRegularExpression("[AEIOUYaeiouyéèàù]"));
    lineEditResultat->setText(textValue);

    return("worked");
}

void SansVoyelle::BoutonConversion()
{
    SuppressionVoyelle();
}

void SansVoyelle::BoutonQuitter()
{
    QApplication::quit();
}

