/********************************************************************************
** Form generated from reading UI file 'FirstQtProgram.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTQTPROGRAM_H
#define UI_FIRSTQTPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstQtProgramClass
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFirstName;
    QLineEdit *lineTxtFirstName;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLastName;
    QLineEdit *lineTxtLastName;
    QPushButton *ButtonName;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FirstQtProgramClass)
    {
        if (FirstQtProgramClass->objectName().isEmpty())
            FirstQtProgramClass->setObjectName(QStringLiteral("FirstQtProgramClass"));
        FirstQtProgramClass->resize(1130, 837);
        centralWidget = new QWidget(FirstQtProgramClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 110, 258, 285));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelFirstName = new QLabel(widget);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));
        labelFirstName->setFrameShape(QFrame::NoFrame);
        labelFirstName->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(labelFirstName);

        lineTxtFirstName = new QLineEdit(widget);
        lineTxtFirstName->setObjectName(QStringLiteral("lineTxtFirstName"));

        horizontalLayout_2->addWidget(lineTxtFirstName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelLastName = new QLabel(widget);
        labelLastName->setObjectName(QStringLiteral("labelLastName"));

        horizontalLayout->addWidget(labelLastName);

        lineTxtLastName = new QLineEdit(widget);
        lineTxtLastName->setObjectName(QStringLiteral("lineTxtLastName"));

        horizontalLayout->addWidget(lineTxtLastName);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        ButtonName = new QPushButton(widget);
        ButtonName->setObjectName(QStringLiteral("ButtonName"));

        verticalLayout_2->addWidget(ButtonName);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_4->addWidget(textEdit);

        FirstQtProgramClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FirstQtProgramClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1130, 21));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        FirstQtProgramClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FirstQtProgramClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FirstQtProgramClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FirstQtProgramClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FirstQtProgramClass->setStatusBar(statusBar);

        retranslateUi(FirstQtProgramClass);
        QObject::connect(ButtonName, SIGNAL(clicked(bool)), lineTxtFirstName, SLOT(copy()));
        QObject::connect(ButtonName, SIGNAL(clicked(bool)), lineTxtFirstName, SLOT(clear()));
        QObject::connect(ButtonName, SIGNAL(clicked(bool)), lineTxtLastName, SLOT(paste()));
        QObject::connect(ButtonName, SIGNAL(clicked(bool)), lineTxtLastName, SLOT(copy()));
        QObject::connect(ButtonName, SIGNAL(clicked(bool)), lineTxtLastName, SLOT(clear()));
        QObject::connect(ButtonName, SIGNAL(clicked(bool)), textEdit, SLOT(paste()));

        QMetaObject::connectSlotsByName(FirstQtProgramClass);
    } // setupUi

    void retranslateUi(QMainWindow *FirstQtProgramClass)
    {
        FirstQtProgramClass->setWindowTitle(QApplication::translate("FirstQtProgramClass", "FirstQtProgram", Q_NULLPTR));
        labelFirstName->setText(QApplication::translate("FirstQtProgramClass", "First name", Q_NULLPTR));
        labelLastName->setText(QApplication::translate("FirstQtProgramClass", "Last name", Q_NULLPTR));
        ButtonName->setText(QApplication::translate("FirstQtProgramClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FirstQtProgramClass: public Ui_FirstQtProgramClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTQTPROGRAM_H
