QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    form_for_count.cpp \
    main.cpp \
    qcustomplot.cpp \
    smart_calc.cpp \
    ../../s21_smart_calc.c

HEADERS += \
    form_for_count.h \
    qcustomplot.h \
    smart_calc.h \
    ../../s21_smart_calc.h

FORMS += \
    form_for_count.ui \
    smart_calc.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#INCLUDEPATH += $$PWD/../../s21_smart_calc.h
