DIRTARGETS := rat-info rat-remove # rat-add rat-search rat-update

.PHONY: all clean $(DIRTARGETS)
all: $(DIRTARGETS)

$(DIRTARGETS):
	mkdir -p build/$@
	@$(MAKE) -C $@

clean:
	@for dir in $(DIRTARGETS); do \
		$(MAKE) -C $$dir clean; \
	done
