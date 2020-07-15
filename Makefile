prefix        = /usr/local
exec_prefix   = $(prefix)
libdir        = $(exec_prefix)/lib
includedir    = $(prefix)/include
datarootdir   = $(prefix)/share

HEADERS      := dogma.hpp

# The default target:

all: $(HEADERS)

.PHONY: all

# Rules for verification:

test: check

check: lint

.PHONY: test check

# Rules for installation:

install: installdirs $(HEADERS)
	install -c -m 0644 dogma.hpp $(DESTDIR)$(includedir)

installdirs:
	install -d $(DESTDIR)$(includedir)

installcheck:

.PHONY: install installdirs installcheck

# Rules for uninstallation:

uninstall:
	-rm -f $(DESTDIR)$(includedir)/dogma.hpp

.PHONY: uninstall

# Rules for development:

lint: lint-hpp

lint-hpp:
	@printf '%s\n' $(HEADERS) | sort | xargs -n1 $(CC) -x c++-header -std=c++17 -Wall -Wextra -fsyntax-only

clean:
	@rm -Rf *~

distclean: clean

mostlyclean: clean

maintainer-clean: clean

.PHONY: lint lint-hpp clean distclean mostlyclean maintainer-clean

.SECONDARY:
.SUFFIXES:
