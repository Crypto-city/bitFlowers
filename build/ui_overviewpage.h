/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QGridLayout *gridLayout_11;
    QFrame *frame_5;
    QGridLayout *gridLayout_10;
    QFrame *frame_4;
    QGridLayout *gridLayout_12;
    QFrame *frame_9;
    QGridLayout *gridLayout_5;
    QLabel *label_6;
    QLabel *labelStake;
    QFrame *frame_10;
    QGridLayout *gridLayout_6;
    QLabel *labelUnconfirmed;
    QLabel *label_3;
    QFrame *frame_8;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QLabel *labelBalance;
    QFrame *frame_11;
    QGridLayout *gridLayout_8;
    QLabel *labelImmature;
    QLabel *labelImmatureText;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelTotal;
    QLabel *labelTotalText;
    QFrame *frame_12;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QFrame *frame_7;
    QGridLayout *gridLayout_3;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QFrame *frame_6;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(800, 555);
        OverviewPage->setMinimumSize(QSize(800, 0));
        OverviewPage->setMaximumSize(QSize(800, 600));
        QPalette palette;
        QBrush brush(QColor(41, 191, 109, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(2, 29, 68, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(71, 198, 73, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        QBrush brush4(QColor(159, 158, 158, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        OverviewPage->setPalette(palette);
        OverviewPage->setStyleSheet(QString::fromUtf8("background-color: rgb(2, 29, 68);"));
        gridLayout_11 = new QGridLayout(OverviewPage);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(7, -1, 7, -1);
        frame_5 = new QFrame(OverviewPage);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(0, 201));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_5->setLineWidth(-1);
        gridLayout_10 = new QGridLayout(frame_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame_5);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 150));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        QBrush brush5(QColor(190, 190, 190, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        frame_4->setPalette(palette1);
        frame_4->setStyleSheet(QString::fromUtf8("background-image: url(:/images/wallet);"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setLineWidth(-1);
        gridLayout_12 = new QGridLayout(frame_4);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setStyleSheet(QString::fromUtf8("background:transparent;border:0;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_9);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_6 = new QLabel(frame_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush6(QColor(0, 0, 0, 0));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_6->setPalette(palette2);

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        labelStake = new QLabel(frame_9);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelStake->setPalette(palette3);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelStake->setFont(font);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelStake->setText(QString::fromUtf8("0 CIR"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(labelStake, 1, 0, 1, 1);


        gridLayout_12->addWidget(frame_9, 2, 0, 1, 1);

        frame_10 = new QFrame(frame_4);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        frame_10->setPalette(palette4);
        frame_10->setStyleSheet(QString::fromUtf8("background:transparent;border:0;"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_10);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        labelUnconfirmed = new QLabel(frame_10);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelUnconfirmed->setPalette(palette5);
        labelUnconfirmed->setFont(font);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelUnconfirmed->setText(QString::fromUtf8("0 CIR"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(labelUnconfirmed, 1, 0, 1, 1);

        label_3 = new QLabel(frame_10);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_3->setPalette(palette6);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_12->addWidget(frame_10, 2, 1, 1, 1);

        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setAutoFillBackground(false);
        frame_8->setStyleSheet(QString::fromUtf8("background:transparent;border:0;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_8);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label = new QLabel(frame_8);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label->setPalette(palette7);
        label->setMouseTracking(true);
        label->setAutoFillBackground(false);
        label->setTextFormat(Qt::RichText);

        gridLayout_7->addWidget(label, 0, 1, 1, 1);

        labelBalance = new QLabel(frame_8);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelBalance->setPalette(palette8);
        labelBalance->setFont(font);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelBalance->setText(QString::fromUtf8("0 CIR"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_7->addWidget(labelBalance, 1, 1, 1, 1);


        gridLayout_12->addWidget(frame_8, 2, 2, 1, 1);

        frame_11 = new QFrame(frame_4);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setStyleSheet(QString::fromUtf8("background:transparent;border:0;"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        labelImmature = new QLabel(frame_11);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelImmature->setPalette(palette9);
        labelImmature->setFont(font);
        labelImmature->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelImmature->setText(QString::fromUtf8("0 CIR"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_8->addWidget(labelImmature, 1, 1, 1, 1);

        labelImmatureText = new QLabel(frame_11);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        labelImmatureText->setPalette(palette10);

        gridLayout_8->addWidget(labelImmatureText, 0, 1, 1, 1);


        gridLayout_12->addWidget(frame_11, 2, 3, 1, 1);

        frame = new QFrame(frame_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background:transparent;border:0;"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(-1);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelTotal->setPalette(palette11);
        labelTotal->setFont(font);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setAutoFillBackground(false);
        labelTotal->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labelTotal->setLineWidth(-1);
        labelTotal->setText(QString::fromUtf8("<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">0 CIR</span></p></body></html>"));
        labelTotal->setTextFormat(Qt::RichText);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_4->addWidget(labelTotal, 3, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QString::fromUtf8("labelTotalText"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        labelTotalText->setPalette(palette12);
        labelTotalText->setTextFormat(Qt::RichText);

        gridLayout_4->addWidget(labelTotalText, 3, 0, 1, 1);

        frame_12 = new QFrame(frame);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        frame_12->setPalette(palette13);
        frame_12->setStyleSheet(QString::fromUtf8("background:transparent;border:0;"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        gridLayout_9 = new QGridLayout(frame_12);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        labelWalletStatus = new QLabel(frame_12);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_9->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_12, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 2, 1, 1);


        gridLayout_12->addWidget(frame, 1, 0, 1, 4);


        gridLayout_10->addWidget(frame_4, 0, 0, 1, 1);


        gridLayout_11->addWidget(frame_5, 0, 0, 1, 1);

        frame_7 = new QFrame(OverviewPage);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_7);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(9);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame_7);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(390, 0));
        frame_3->setMaximumSize(QSize(600, 16777215));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(-1);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(frame_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(-1);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_3, 0, 0, 1, 1);

        frame_6 = new QFrame(frame_7);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(390, 256));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_6->setLineWidth(0);
        gridLayout_2 = new QGridLayout(frame_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(frame_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(250, 250));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));
        label_8->setScaledContents(true);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_6, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        gridLayout_11->addWidget(frame_7, 1, 0, 1, 1);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Pending:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OverviewPage", "Available:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:10pt;\">Total:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the bitFlowers network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "<b>Recent transactions</b>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the bitFlowers network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
