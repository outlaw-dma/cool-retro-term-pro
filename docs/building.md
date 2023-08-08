# Ubuntu, Debian Jessie and above

sudo apt install build-essential qmlscene qt5-qmake qt5-default qtdeclarative5-dev qml-module-qtquick-controls2 qml-module-qtgraphicaleffects qml-module-qtquick-dialogs qml-module-qtquick-localstorage qml-module-qtquick-window2 qml-module-qt-labs-settings qml-module-qt-labs-folderlistmodel qtquickcontrols2-5-dev

# Debian Bullseye

sudo apt install build-essential qmlscene qt5-qmake qtdeclarative5-dev qml-module-qtquick-controls2 qml-module-qtgraphicaleffects qml-module-qtquick-dialogs qml-module-qtquick-localstorage qml-module-qtquick-window2 qml-module-qt-labs-settings qml-module-qt-labs-folderlistmodel qtdeclarative5-dev qtquickcontrols2-5-dev qml-module-qt-labs-platform

# Extra packages needed for at least Ubuntu 20.04

sudo apt install qtquickcontrols2-5-dev qml-module-qt-labs-platform qml-module-qtquick-controls qml-module-qtquick-layouts qml-module-qtquick-localstorage


# Fedora

sudo dnf -y install qt5-qtbase qt5-qtbase-devel qt5-qtdeclarative qt5-qtdeclarative-devel qt5-qtgraphicaleffects qt5-qtquickcontrols qt5-qtquickcontrols2-devel redhat-rpm-config && sudo ln -s /usr/lib64/qt5/bin/qmake /usr/bin/qmake


# Arch Linux

sudo pacman -S qt5-base qt5-declarative qt5-quickcontrols qt5-graphicaleffects