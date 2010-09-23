NAME	= hid
VERSION	= 1.0.3
SRC	= usr/src
DKMSSRC	= $(SRC)/dkms_source_tree

TARBALL	= $(NAME)-$(VERSION).dkms.tar.gz
PATCH	= ./scripts/patch-name-version.sh $(NAME) $(VERSION)

all:	$(SRC)/$(TARBALL)

$(SRC)/$(TARBALL): $(DKMSSRC)/$(NAME)-input.c
	(cd $(SRC); tar cvfz $(TARBALL) dkms*)

clean:
	rm -f $(SRC)/$(TARBALL)

distclean: clean
	rm -rf *-stamp debian/$(NAME)-dkms debian/*.log debian/files

install: $(SRC)/$(TARBALL)
	install -d "$(DESTDIR)/$(SRC)"
	(cd $(SRC); install -m 644 $(NAME)-$(VERSION).dkms.tar.gz "$(DESTDIR)/$(SRC)")

bump:
	uname -r > $(DKMSSRC)/KERNEL_SOURCE_VERSION
	$(PATCH) debian/postinst
	$(PATCH) debian/postrm
	$(PATCH) debian/prerm
	$(PATCH) debian/rules
	$(PATCH) debian/postinst
	$(PATCH) $(DKMSSRC)/dkms.conf
	chmod 0755 debian/rules
