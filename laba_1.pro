TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../laba_4/build-Library-Desktop-All/release/ -lLibrary
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../laba_4/build-Library-Desktop-All/debug/ -lLibrary
else:unix: LIBS += -L$$PWD/../laba_4/build-Library-Desktop-All/ -lLibrary

INCLUDEPATH += $$PWD/../laba_4/Library
DEPENDPATH += $$PWD/../laba_4/Library

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../laba_4/build-Library-Desktop-All/release/libLibrary.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../laba_4/build-Library-Desktop-All/debug/libLibrary.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../laba_4/build-Library-Desktop-All/release/Library.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../laba_4/build-Library-Desktop-All/debug/Library.lib
else:unix: PRE_TARGETDEPS += $$PWD/../laba_4/build-Library-Desktop-All/libLibrary.a
