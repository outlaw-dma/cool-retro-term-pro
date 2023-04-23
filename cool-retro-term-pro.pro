TEMPLATE = subdirs

CONFIG += ordered

SUBDIRS += qmltermwidget
SUBDIRS += app

desktop.files += cool-retro-term-pro.desktop
desktop.path += /usr/share/applications

INSTALLS += desktop

