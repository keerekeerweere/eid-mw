bin_PROGRAMS = eid-viewer

eid_viewer_SOURCES = oslayer.h \
	gettext.h \
	backend.c \
	gtk/main.c \
	gtk/viewer_glade.h \
	gtk/gtkui.c \
	gtk/gtkui.h \
	gtk/binops.h \
	gtk/gtk_globals.h
eid_viewer_LDADD = ../../cardcomm/pkcs11/src/libbeidpkcs11.la @GTK_LIBS@
eid_viewer_CFLAGS = @GTK_CFLAGS@ -I. -Igtk -DDATAROOTDIR='"$(datarootdir)"'
#SUBDIRS = po
SUBDIRS = test

BUILT_SOURCES = gtk/viewer_glade.h
EXTRA_DIST = gtk/viewer.glade

gtk/viewer_glade.h: gtk/viewer.glade
	$(top_srcdir)/plugins_tools/aboutmw/gtk/gen.sh VIEWER_GLADE_H VIEWER_GLADE_STRING < $^ > $@