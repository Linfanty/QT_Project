/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *radiusLable;
    QLabel *areaLable_2;
    QLabel *areaLable_1;
    QLineEdit *radiusLineEdit;
    QPushButton *countBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(844, 519);
        radiusLable = new QLabel(Dialog);
        radiusLable->setObjectName(QStringLiteral("radiusLable"));
        radiusLable->setGeometry(QRect(70, 250, 72, 21));
        radiusLable->setFrameShape(QFrame::NoFrame);
        radiusLable->setFrameShadow(QFrame::Plain);
        areaLable_2 = new QLabel(Dialog);
        areaLable_2->setObjectName(QStringLiteral("areaLable_2"));
        areaLable_2->setGeometry(QRect(401, 250, 91, 20));
        areaLable_2->setFrameShape(QFrame::Panel);
        areaLable_2->setFrameShadow(QFrame::Sunken);
        areaLable_1 = new QLabel(Dialog);
        areaLable_1->setObjectName(QStringLiteral("areaLable_1"));
        areaLable_1->setGeometry(QRect(320, 250, 72, 21));
        radiusLineEdit = new QLineEdit(Dialog);
        radiusLineEdit->setObjectName(QStringLiteral("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(170, 250, 113, 21));
        countBtn = new QPushButton(Dialog);
        countBtn->setObjectName(QStringLiteral("countBtn"));
        countBtn->setGeometry(QRect(370, 330, 93, 28));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        radiusLable->setText(QApplication::translate("Dialog", "\345\215\212\345\276\204:", Q_NULLPTR));
        areaLable_2->setText(QString());
        areaLable_1->setText(QApplication::translate("Dialog", "\351\235\242\347\247\257\357\274\232", Q_NULLPTR));
        countBtn->setText(QApplication::translate("Dialog", "\350\256\241\347\256\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
