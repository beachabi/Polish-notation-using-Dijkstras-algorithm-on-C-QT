/********************************************************************************
** Form generated from reading UI file 'smart_calc.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMART_CALC_H
#define UI_SMART_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_smart_calc
{
public:
    QWidget *centralwidget;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QLineEdit *lineEdit;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_0;
    QPushButton *point;
    QPushButton *bADD;
    QPushButton *bSUB;
    QPushButton *bMUL;
    QPushButton *bDIV;
    QPushButton *bSQR;
    QPushButton *bSQRT;
    QPushButton *bSIN;
    QPushButton *bCOS;
    QPushButton *bASIN;
    QPushButton *bACOS;
    QPushButton *bTAN;
    QPushButton *bATAN;
    QPushButton *bLOG;
    QPushButton *bLN;
    QPushButton *bOPEN;
    QPushButton *bCLOSE;
    QPushButton *bEQUAL;
    QPushButton *bUNAR_MIN;
    QPushButton *Back;
    QPushButton *Clear;
    QCustomPlot *widget;
    QPushButton *bX;
    QSpinBox *spinBox_X;
    QSpinBox *spinBox_Y;
    QDoubleSpinBox *bStep;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_deposit;
    QSpinBox *spinBox_mount_deposit;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_perc_deposit;
    QPushButton *b_count_deposit;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_perc_deposit_2;
    QSpinBox *spinBox_deposit_summ;
    QLabel *label_14;
    QWidget *tab;
    QPushButton *b_count_credit;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *lineEdit_credit_summ;
    QLabel *label_6;
    QComboBox *comboBox_credit;
    QSpinBox *spinBox_mount_credit;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_perc_credit;
    QLabel *label_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *smart_calc)
    {
        if (smart_calc->objectName().isEmpty())
            smart_calc->setObjectName(QString::fromUtf8("smart_calc"));
        smart_calc->resize(996, 840);
        centralwidget = new QWidget(smart_calc);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(110, 420, 55, 55));
        Button_1->setIconSize(QSize(20, 20));
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(180, 420, 55, 55));
        Button_2->setIconSize(QSize(20, 20));
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(250, 420, 55, 55));
        Button_3->setIconSize(QSize(20, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 343, 596, 61));
        QFont font;
        font.setPointSize(12);
        lineEdit->setFont(font);
        lineEdit->setMaxLength(255);
        lineEdit->setReadOnly(true);
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(110, 490, 55, 55));
        Button_4->setIconSize(QSize(20, 20));
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(180, 490, 55, 55));
        Button_5->setIconSize(QSize(20, 20));
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(250, 490, 55, 55));
        Button_6->setIconSize(QSize(20, 20));
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(110, 560, 55, 55));
        Button_7->setIconSize(QSize(20, 20));
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(180, 560, 55, 55));
        Button_8->setIconSize(QSize(20, 20));
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(250, 560, 55, 55));
        Button_9->setIconSize(QSize(20, 20));
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(110, 630, 55, 55));
        Button_0->setIconSize(QSize(20, 20));
        point = new QPushButton(centralwidget);
        point->setObjectName(QString::fromUtf8("point"));
        point->setGeometry(QRect(180, 630, 55, 55));
        point->setIconSize(QSize(20, 20));
        bADD = new QPushButton(centralwidget);
        bADD->setObjectName(QString::fromUtf8("bADD"));
        bADD->setGeometry(QRect(343, 420, 55, 55));
        bADD->setIconSize(QSize(20, 20));
        bSUB = new QPushButton(centralwidget);
        bSUB->setObjectName(QString::fromUtf8("bSUB"));
        bSUB->setGeometry(QRect(343, 490, 55, 55));
        bSUB->setIconSize(QSize(20, 20));
        bMUL = new QPushButton(centralwidget);
        bMUL->setObjectName(QString::fromUtf8("bMUL"));
        bMUL->setGeometry(QRect(343, 560, 55, 55));
        bMUL->setIconSize(QSize(20, 20));
        bDIV = new QPushButton(centralwidget);
        bDIV->setObjectName(QString::fromUtf8("bDIV"));
        bDIV->setGeometry(QRect(343, 630, 55, 55));
        bDIV->setIconSize(QSize(20, 20));
        bSQR = new QPushButton(centralwidget);
        bSQR->setObjectName(QString::fromUtf8("bSQR"));
        bSQR->setGeometry(QRect(413, 420, 55, 55));
        bSQR->setIconSize(QSize(20, 20));
        bSQRT = new QPushButton(centralwidget);
        bSQRT->setObjectName(QString::fromUtf8("bSQRT"));
        bSQRT->setGeometry(QRect(483, 420, 66, 55));
        bSQRT->setIconSize(QSize(20, 20));
        bSIN = new QPushButton(centralwidget);
        bSIN->setObjectName(QString::fromUtf8("bSIN"));
        bSIN->setGeometry(QRect(413, 560, 55, 55));
        bSIN->setIconSize(QSize(20, 20));
        bCOS = new QPushButton(centralwidget);
        bCOS->setObjectName(QString::fromUtf8("bCOS"));
        bCOS->setGeometry(QRect(413, 630, 55, 55));
        bCOS->setIconSize(QSize(20, 20));
        bASIN = new QPushButton(centralwidget);
        bASIN->setObjectName(QString::fromUtf8("bASIN"));
        bASIN->setGeometry(QRect(483, 490, 66, 55));
        bASIN->setIconSize(QSize(20, 20));
        bACOS = new QPushButton(centralwidget);
        bACOS->setObjectName(QString::fromUtf8("bACOS"));
        bACOS->setGeometry(QRect(483, 560, 66, 55));
        bACOS->setIconSize(QSize(20, 20));
        bTAN = new QPushButton(centralwidget);
        bTAN->setObjectName(QString::fromUtf8("bTAN"));
        bTAN->setGeometry(QRect(413, 490, 55, 55));
        bTAN->setIconSize(QSize(20, 20));
        bATAN = new QPushButton(centralwidget);
        bATAN->setObjectName(QString::fromUtf8("bATAN"));
        bATAN->setGeometry(QRect(483, 630, 66, 55));
        bATAN->setIconSize(QSize(20, 20));
        bLOG = new QPushButton(centralwidget);
        bLOG->setObjectName(QString::fromUtf8("bLOG"));
        bLOG->setGeometry(QRect(562, 420, 55, 55));
        bLOG->setIconSize(QSize(20, 20));
        bLN = new QPushButton(centralwidget);
        bLN->setObjectName(QString::fromUtf8("bLN"));
        bLN->setGeometry(QRect(562, 490, 55, 55));
        bLN->setIconSize(QSize(20, 20));
        bOPEN = new QPushButton(centralwidget);
        bOPEN->setObjectName(QString::fromUtf8("bOPEN"));
        bOPEN->setGeometry(QRect(562, 560, 55, 55));
        bOPEN->setIconSize(QSize(20, 20));
        bCLOSE = new QPushButton(centralwidget);
        bCLOSE->setObjectName(QString::fromUtf8("bCLOSE"));
        bCLOSE->setGeometry(QRect(562, 630, 55, 55));
        bCLOSE->setIconSize(QSize(20, 20));
        bEQUAL = new QPushButton(centralwidget);
        bEQUAL->setObjectName(QString::fromUtf8("bEQUAL"));
        bEQUAL->setGeometry(QRect(250, 630, 55, 55));
        bEQUAL->setIconSize(QSize(20, 20));
        bUNAR_MIN = new QPushButton(centralwidget);
        bUNAR_MIN->setObjectName(QString::fromUtf8("bUNAR_MIN"));
        bUNAR_MIN->setGeometry(QRect(20, 420, 61, 55));
        bUNAR_MIN->setIconSize(QSize(20, 20));
        Back = new QPushButton(centralwidget);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(20, 490, 61, 55));
        Back->setIconSize(QSize(20, 20));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(20, 560, 61, 55));
        Clear->setIconSize(QSize(20, 20));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 593, 310));
        bX = new QPushButton(centralwidget);
        bX->setObjectName(QString::fromUtf8("bX"));
        bX->setGeometry(QRect(20, 630, 60, 55));
        bX->setIconSize(QSize(20, 20));
        spinBox_X = new QSpinBox(centralwidget);
        spinBox_X->setObjectName(QString::fromUtf8("spinBox_X"));
        spinBox_X->setGeometry(QRect(20, 710, 180, 30));
        spinBox_X->setMinimum(-1000000);
        spinBox_X->setMaximum(-1);
        spinBox_X->setValue(-10);
        spinBox_Y = new QSpinBox(centralwidget);
        spinBox_Y->setObjectName(QString::fromUtf8("spinBox_Y"));
        spinBox_Y->setGeometry(QRect(222, 710, 179, 30));
        spinBox_Y->setMinimum(1);
        spinBox_Y->setMaximum(1000000);
        spinBox_Y->setValue(10);
        bStep = new QDoubleSpinBox(centralwidget);
        bStep->setObjectName(QString::fromUtf8("bStep"));
        bStep->setGeometry(QRect(425, 709, 192, 30));
        bStep->setDecimals(1);
        bStep->setMinimum(0.100000000000000);
        bStep->setMaximum(10.000000000000000);
        bStep->setSingleStep(0.100000000000000);
        bStep->setValue(0.100000000000000);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 740, 191, 21));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(222, 740, 190, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(426, 740, 191, 21));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(630, 19, 341, 721));
        tabWidget->setAutoFillBackground(true);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(27, 335, 241, 21));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(26, 40, 241, 21));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(26, 185, 241, 21));
        comboBox_deposit = new QComboBox(tab_2);
        comboBox_deposit->addItem(QString());
        comboBox_deposit->addItem(QString());
        comboBox_deposit->setObjectName(QString::fromUtf8("comboBox_deposit"));
        comboBox_deposit->setGeometry(QRect(29, 360, 281, 29));
        spinBox_mount_deposit = new QSpinBox(tab_2);
        spinBox_mount_deposit->setObjectName(QString::fromUtf8("spinBox_mount_deposit"));
        spinBox_mount_deposit->setGeometry(QRect(26, 140, 281, 30));
        spinBox_mount_deposit->setFrame(true);
        spinBox_mount_deposit->setMinimum(1);
        spinBox_mount_deposit->setMaximum(300);
        spinBox_mount_deposit->setValue(12);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(26, 113, 241, 21));
        doubleSpinBox_perc_deposit = new QDoubleSpinBox(tab_2);
        doubleSpinBox_perc_deposit->setObjectName(QString::fromUtf8("doubleSpinBox_perc_deposit"));
        doubleSpinBox_perc_deposit->setGeometry(QRect(26, 210, 281, 30));
        doubleSpinBox_perc_deposit->setMaximum(500.000000000000000);
        doubleSpinBox_perc_deposit->setSingleStep(0.010000000000000);
        doubleSpinBox_perc_deposit->setValue(5.000000000000000);
        b_count_deposit = new QPushButton(tab_2);
        b_count_deposit->setObjectName(QString::fromUtf8("b_count_deposit"));
        b_count_deposit->setGeometry(QRect(30, 410, 281, 151));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(29, 260, 241, 21));
        doubleSpinBox_perc_deposit_2 = new QDoubleSpinBox(tab_2);
        doubleSpinBox_perc_deposit_2->setObjectName(QString::fromUtf8("doubleSpinBox_perc_deposit_2"));
        doubleSpinBox_perc_deposit_2->setGeometry(QRect(29, 285, 281, 30));
        doubleSpinBox_perc_deposit_2->setMaximum(500.000000000000000);
        doubleSpinBox_perc_deposit_2->setSingleStep(0.010000000000000);
        doubleSpinBox_perc_deposit_2->setValue(13.000000000000000);
        spinBox_deposit_summ = new QSpinBox(tab_2);
        spinBox_deposit_summ->setObjectName(QString::fromUtf8("spinBox_deposit_summ"));
        spinBox_deposit_summ->setGeometry(QRect(26, 63, 281, 30));
        spinBox_deposit_summ->setFrame(true);
        spinBox_deposit_summ->setMinimum(1);
        spinBox_deposit_summ->setMaximum(300000000);
        spinBox_deposit_summ->setSingleStep(10000);
        spinBox_deposit_summ->setValue(10000);
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(50, 580, 241, 81));
        label_14->setFont(font1);
        label_14->setAcceptDrops(false);
        label_14->setFrameShape(QFrame::NoFrame);
        label_14->setTextFormat(Qt::AutoText);
        label_14->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_14->setWordWrap(true);
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        b_count_credit = new QPushButton(tab);
        b_count_credit->setObjectName(QString::fromUtf8("b_count_credit"));
        b_count_credit->setGeometry(QRect(24, 341, 281, 191));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 249, 241, 21));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 241, 21));
        lineEdit_credit_summ = new QLineEdit(tab);
        lineEdit_credit_summ->setObjectName(QString::fromUtf8("lineEdit_credit_summ"));
        lineEdit_credit_summ->setGeometry(QRect(20, 57, 281, 29));
        lineEdit_credit_summ->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhNoTextHandles|Qt::ImhPreferNumbers);
        lineEdit_credit_summ->setMaxLength(200);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 175, 241, 21));
        comboBox_credit = new QComboBox(tab);
        comboBox_credit->addItem(QString());
        comboBox_credit->addItem(QString());
        comboBox_credit->setObjectName(QString::fromUtf8("comboBox_credit"));
        comboBox_credit->setGeometry(QRect(23, 274, 281, 29));
        spinBox_mount_credit = new QSpinBox(tab);
        spinBox_mount_credit->setObjectName(QString::fromUtf8("spinBox_mount_credit"));
        spinBox_mount_credit->setGeometry(QRect(20, 130, 281, 30));
        spinBox_mount_credit->setFrame(true);
        spinBox_mount_credit->setMinimum(1);
        spinBox_mount_credit->setMaximum(300);
        spinBox_mount_credit->setValue(12);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 103, 241, 21));
        doubleSpinBox_perc_credit = new QDoubleSpinBox(tab);
        doubleSpinBox_perc_credit->setObjectName(QString::fromUtf8("doubleSpinBox_perc_credit"));
        doubleSpinBox_perc_credit->setGeometry(QRect(20, 200, 281, 30));
        doubleSpinBox_perc_credit->setMaximum(500.000000000000000);
        doubleSpinBox_perc_credit->setSingleStep(0.010000000000000);
        doubleSpinBox_perc_credit->setValue(4.000000000000000);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 570, 241, 81));
        label_13->setFont(font1);
        label_13->setAcceptDrops(false);
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setTextFormat(Qt::AutoText);
        label_13->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_13->setWordWrap(true);
        tabWidget->addTab(tab, QString());
        smart_calc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(smart_calc);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 996, 26));
        smart_calc->setMenuBar(menubar);
        statusbar = new QStatusBar(smart_calc);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        smart_calc->setStatusBar(statusbar);

        retranslateUi(smart_calc);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(smart_calc);
    } // setupUi

    void retranslateUi(QMainWindow *smart_calc)
    {
        smart_calc->setWindowTitle(QCoreApplication::translate("smart_calc", "smart_calc", nullptr));
        Button_1->setText(QCoreApplication::translate("smart_calc", "1", nullptr));
        Button_2->setText(QCoreApplication::translate("smart_calc", "2", nullptr));
        Button_3->setText(QCoreApplication::translate("smart_calc", "3", nullptr));
        Button_4->setText(QCoreApplication::translate("smart_calc", "4", nullptr));
        Button_5->setText(QCoreApplication::translate("smart_calc", "5", nullptr));
        Button_6->setText(QCoreApplication::translate("smart_calc", "6", nullptr));
        Button_7->setText(QCoreApplication::translate("smart_calc", "7", nullptr));
        Button_8->setText(QCoreApplication::translate("smart_calc", "8", nullptr));
        Button_9->setText(QCoreApplication::translate("smart_calc", "9", nullptr));
        Button_0->setText(QCoreApplication::translate("smart_calc", "0", nullptr));
        point->setText(QCoreApplication::translate("smart_calc", ".", nullptr));
        bADD->setText(QCoreApplication::translate("smart_calc", " + ", nullptr));
        bSUB->setText(QCoreApplication::translate("smart_calc", " - ", nullptr));
        bMUL->setText(QCoreApplication::translate("smart_calc", " * ", nullptr));
        bDIV->setText(QCoreApplication::translate("smart_calc", " / ", nullptr));
        bSQR->setText(QCoreApplication::translate("smart_calc", " ^ ", nullptr));
        bSQRT->setText(QCoreApplication::translate("smart_calc", "SQRT(", nullptr));
        bSIN->setText(QCoreApplication::translate("smart_calc", "SIN(", nullptr));
        bCOS->setText(QCoreApplication::translate("smart_calc", "COS(", nullptr));
        bASIN->setText(QCoreApplication::translate("smart_calc", "ASIN(", nullptr));
        bACOS->setText(QCoreApplication::translate("smart_calc", "ACOS(", nullptr));
        bTAN->setText(QCoreApplication::translate("smart_calc", "TAN(", nullptr));
        bATAN->setText(QCoreApplication::translate("smart_calc", "ATAN(", nullptr));
        bLOG->setText(QCoreApplication::translate("smart_calc", "LOG(", nullptr));
        bLN->setText(QCoreApplication::translate("smart_calc", "LN(", nullptr));
        bOPEN->setText(QCoreApplication::translate("smart_calc", "(", nullptr));
        bCLOSE->setText(QCoreApplication::translate("smart_calc", ")", nullptr));
        bEQUAL->setText(QCoreApplication::translate("smart_calc", "=", nullptr));
        bUNAR_MIN->setText(QCoreApplication::translate("smart_calc", "unar -", nullptr));
        Back->setText(QCoreApplication::translate("smart_calc", "Back", nullptr));
        Clear->setText(QCoreApplication::translate("smart_calc", "Clear", nullptr));
        bX->setText(QCoreApplication::translate("smart_calc", "X", nullptr));
        spinBox_X->setSpecialValueText(QString());
        label->setText(QCoreApplication::translate("smart_calc", "input range X from:", nullptr));
        label_2->setText(QCoreApplication::translate("smart_calc", "input range X till:", nullptr));
        label_3->setText(QCoreApplication::translate("smart_calc", "input step:", nullptr));
        label_8->setText(QCoreApplication::translate("smart_calc", "\320\241 \320\272\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\265\320\271?", nullptr));
        label_9->setText(QCoreApplication::translate("smart_calc", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\203\320\274\320\274\321\203 \320\262\320\272\320\273\320\260\320\264\320\260:", nullptr));
        label_10->setText(QCoreApplication::translate("smart_calc", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 % \321\201\321\202\320\260\320\262\320\272\321\203:", nullptr));
        comboBox_deposit->setItemText(0, QCoreApplication::translate("smart_calc", "\320\224\320\260", nullptr));
        comboBox_deposit->setItemText(1, QString());

        label_11->setText(QCoreApplication::translate("smart_calc", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\201\321\200\320\276\320\272 (\320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205):", nullptr));
        b_count_deposit->setText(QCoreApplication::translate("smart_calc", "GET TO KNOW DETAILS", nullptr));
        label_12->setText(QCoreApplication::translate("smart_calc", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 % \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_14->setText(QCoreApplication::translate("smart_calc", "*\320\236\321\202\320\272\321\200\320\276\320\265\321\202\321\201\321\217 \320\275\320\276\320\262\320\276\320\265 \320\276\320\272\320\275\320\276 \320\262 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\262\321\213 \321\203\320\262\320\270\320\264\320\270\321\202\320\265 \320\264\320\265\321\202\320\260\320\273\320\270 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("smart_calc", "Count Deposit", nullptr));
        b_count_credit->setText(QCoreApplication::translate("smart_calc", "GET TO KNOW DETAILS", nullptr));
        label_7->setText(QCoreApplication::translate("smart_calc", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\262\321\213\320\277\320\273\320\260\321\202:", nullptr));
        label_4->setText(QCoreApplication::translate("smart_calc", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\203\320\274\320\274\321\203 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        lineEdit_credit_summ->setText(QCoreApplication::translate("smart_calc", "100000", nullptr));
        label_6->setText(QCoreApplication::translate("smart_calc", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 % \321\201\321\202\320\260\320\262\320\272\321\203:", nullptr));
        comboBox_credit->setItemText(0, QCoreApplication::translate("smart_calc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        comboBox_credit->setItemText(1, QCoreApplication::translate("smart_calc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));

        label_5->setText(QCoreApplication::translate("smart_calc", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \321\201\321\200\320\276\320\272 (\320\262 \320\274\320\265\321\201\321\217\321\206\320\260\321\205):", nullptr));
        label_13->setText(QCoreApplication::translate("smart_calc", "*\320\236\321\202\320\272\321\200\320\276\320\265\321\202\321\201\321\217 \320\275\320\276\320\262\320\276\320\265 \320\276\320\272\320\275\320\276 \320\262 \320\272\320\276\321\202\320\276\321\200\320\276\320\274 \320\262\321\213 \321\203\320\262\320\270\320\264\320\270\321\202\320\265 \320\264\320\265\321\202\320\260\320\273\320\270 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("smart_calc", "Count Credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class smart_calc: public Ui_smart_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMART_CALC_H
