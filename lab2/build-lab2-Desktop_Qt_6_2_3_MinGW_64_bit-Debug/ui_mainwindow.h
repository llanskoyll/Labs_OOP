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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *editSearch;
    QPushButton *ButtonFind;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *editName;
    QLabel *label_3;
    QLineEdit *editBrth;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *buttonAdd;
    QPushButton *buttonSave;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setWindowOpacity(5.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        editSearch = new QLineEdit(centralwidget);
        editSearch->setObjectName(QString::fromUtf8("editSearch"));

        horizontalLayout_2->addWidget(editSearch);

        ButtonFind = new QPushButton(centralwidget);
        ButtonFind->setObjectName(QString::fromUtf8("ButtonFind"));

        horizontalLayout_2->addWidget(ButtonFind);


        verticalLayout->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setAutoFormatting(QTextEdit::AutoNone);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        editName = new QLineEdit(centralwidget);
        editName->setObjectName(QString::fromUtf8("editName"));

        horizontalLayout->addWidget(editName);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        editBrth = new QLineEdit(centralwidget);
        editBrth->setObjectName(QString::fromUtf8("editBrth"));

        horizontalLayout->addWidget(editBrth);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        buttonAdd = new QPushButton(centralwidget);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        horizontalLayout->addWidget(buttonAdd);

        buttonSave = new QPushButton(centralwidget);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        horizontalLayout->addWidget(buttonSave);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(ButtonFind, SIGNAL(clicked()), MainWindow, SLOT(findEmploye()));
        QObject::connect(buttonAdd, SIGNAL(clicked()), MainWindow, SLOT(addEmploye()));
        QObject::connect(buttonSave, SIGNAL(clicked()), MainWindow, SLOT(saveEmploye()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        editSearch->setText(QString());
        ButtonFind->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\230\320\274\321\217: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\320\265: ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273: ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Male", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Female", nullptr));

        buttonAdd->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        buttonSave->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
