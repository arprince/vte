# Terminal With Better Debug Keybindings
Press shift + PgUp and shift + PgDn to skip between the lines where commands were last entered. This is great for debugging
syntax errors in the terminal. No more scrolling up for days in order to find your error! Hope you like it!

### Install
Download files and store in folder in desired location
Unfortunatly, you need to install dev tools to get it running, so for ubuntu:
```
sudo apt-get install gtk-doc-tools autoconf libtool libglib2.0.dev intltool
libcogl-pango-dev libgtk-3-dev libpcre2-dev libgnutls28-dev
gobject-introspection libgirepository1.0-dev valac libxml2-utils
```
```
sudo ./autogen.sh
```
```
sudo make all
```
```
sudo make install
```
Reboot

### Logistics
If you do not like my terminal, uninstall it by downloading the vanilla vte terminal and following the above install steps in the vanilla terminal's folder (if something goes horribly wrong use xterm - I don't think that is a possibility though)

Scroll up by page and scroll down by page were removed to implement this feature
