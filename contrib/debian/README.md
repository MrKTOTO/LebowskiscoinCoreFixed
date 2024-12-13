
Debian
====================
This directory contains files used to package lebowskiscoind/lebowskiscoin-qt
for Debian-based Linux systems. If you compile lebowskiscoind/lebowskiscoin-qt yourself, there are some useful files here.

## lebowskiscoin: URI support ##


lebowskiscoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install lebowskiscoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your lebowskiscoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/lebowskiscoin128.png` to `/usr/share/pixmaps`

lebowskiscoin-qt.protocol (KDE)

