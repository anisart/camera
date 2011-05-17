TEMPLATE = app
TARGET = camera

CONFIG += mobility
MOBILITY = multimedia \
    systeminfo
SOURCES += \
    main.cpp \
    camera.cpp \
    button.cpp

symbian: {
    TARGET = camera
    TARGET.UID3 = 0xE639CADF

    TARGET.CAPABILITY += ReadUserData \
        WriteUserData \
        LocalServices \
        UserEnvironment
}

RESOURCES += resources.qrc

HEADERS += \
    camera.h \
    button.h
