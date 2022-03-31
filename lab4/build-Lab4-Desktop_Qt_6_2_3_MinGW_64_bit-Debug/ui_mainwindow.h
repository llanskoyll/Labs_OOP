/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytextbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editSearch;
    QPushButton *buttonFind;
    MyTextBrowser *textBrowser;
    QHBoxLayout *putForm;
    QLabel *idLabel;
    QLineEdit *putID;
    QLabel *nameLabel;
    QLineEdit *putName;
    QLabel *label;
    QLineEdit *putYear;
    QLabel *label_2;
    QComboBox *genderBox;
    QPushButton *putBut;
    QPushButton *saveBut;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editSearch = new QLineEdit(centralwidget);
        editSearch->setObjectName(QString::fromUtf8("editSearch"));

        horizontalLayout->addWidget(editSearch);

        buttonFind = new QPushButton(centralwidget);
        buttonFind->setObjectName(QString::fromUtf8("buttonFind"));

        horizontalLayout->addWidget(buttonFind);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new MyTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        putForm = new QHBoxLayout();
        putForm->setObjectName(QString::fromUtf8("putForm"));
        idLabel = new QLabel(centralwidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        putForm->addWidget(idLabel);

        putID = new QLineEdit(centralwidget);
        putID->setObjectName(QString::fromUtf8("putID"));

        putForm->addWidget(putID);

        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        putForm->addWidget(nameLabel);

        putName = new QLineEdit(centralwidget);
        putName->setObjectName(QString::fromUtf8("putName"));

        putForm->addWidget(putName);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        putForm->addWidget(label);

        putYear = new QLineEdit(centralwidget);
        putYear->setObjectName(QString::fromUtf8("putYear"));

        putForm->addWidget(putYear);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        putForm->addWidget(label_2);

        genderBox = new QComboBox(centralwidget);
        genderBox->addItem(QString());
        genderBox->addItem(QString());
        genderBox->setObjectName(QString::fromUtf8("genderBox"));

        putForm->addWidget(genderBox);

        putBut = new QPushButton(centralwidget);
        putBut->setObjectName(QString::fromUtf8("putBut"));

        putForm->addWidget(putBut);

        putForm->setStretch(3, 1);

        verticalLayout->addLayout(putForm);

        saveBut = new QPushButton(centralwidget);
        saveBut->setObjectName(QString::fromUtf8("saveBut"));

        verticalLayout->addWidget(saveBut);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(putBut, SIGNAL(clicked()), MainWindow, SLOT(addEmployee()));
        QObject::connect(buttonFind, SIGNAL(clicked()), MainWindow, SLOT(findEmployee()));
        QObject::connect(saveBut, SIGNAL(clicked()), MainWindow, SLOT(saveFile()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonFind->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        idLabel->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "YOB", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        genderBox->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        genderBox->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));

        putBut->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        saveBut->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\236 \320\245 \320\240 \320\220 \320\235 \320\230 \320\242 \320\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
