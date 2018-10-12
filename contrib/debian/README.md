
Debian
====================
This directory contains files used to package mineromd/minerom-qt
for Debian-based Linux systems. If you compile mineromd/minerom-qt yourself, there are some useful files here.

## minerom: URI support ##


minerom-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install minerom-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your minerom-qt binary to `/usr/bin`
and the `../../share/pixmaps/minerom128.png` to `/usr/share/pixmaps`

minerom-qt.protocol (KDE)

