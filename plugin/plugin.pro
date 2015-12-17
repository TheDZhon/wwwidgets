include(../wwwidgets_utils.pri)

HEADERS += wwwidgets.h wwinterfaces.h colorlisteditor.h
SOURCES += wwwidgets.cpp wwinterfaces.cpp colorlisteditor.cpp

#for(cls, WWWIDGETS){
#    low = $$lower($$cls)
#    HEADERS += $${low}iface.h
#    SOURCES += $${low}iface.cpp
#}

FORMS += about.ui colorlisteditor.ui

TEMPLATE = lib
TARGET = wwwidgetsplugin
CONFIG += plugin warn_on release

greaterThan(QT_MAJOR_VERSION, 4) {
	QT += designer
} else {
	CONFIG += designer
}

CONFIG -= debug
# deps

unix:QMAKE_CXXFLAGS_RELEASE -= -g
unix:LIBS += -L../widgets

win32 {
    CONFIG(release): LIBS += -L../widgets/release -lwwwidgets$$QT_MAJOR_VERSION
#   CONFIG(debug): LIBS += -L../widgets/debug  
}

greaterThan(QT_MAJOR_VERSION, 4) {
	#FIXME(DZhon): rewrite this ugly stuff
	LIBS += -L../widgets -l:libwwwidgets$${QT_MAJOR_VERSION}.so.1.0.0
} else {
	qtAddLibrary(wwwidgets$$QT_MAJOR_VERSION)
}

# install
target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target
dlltarget.path = $$[QT_INSTALL_PLUGINS]/desiger
INSTALLS += dlltarget

INCLUDEPATH += ../widgets/ .

linux-g++:QMAKE_STRIP = strip

