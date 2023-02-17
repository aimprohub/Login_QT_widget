QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    interface.cpp \
    m_c_connected.cpp \
    main.cpp \
    main_menu.cpp \
    mainwindow.cpp \
    template_list.cpp \
    weighning_operation.cpp

HEADERS += \
    interface.h \
    m_c_connected.h \
    main_menu.h \
    mainwindow.h \
    template_list.h \
    weighning_operation.h

FORMS += \
    interface.ui \
    m_c_connected.ui \
    main_menu.ui \
    mainwindow.ui \
    template_list.ui \
    weighning_operation.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
