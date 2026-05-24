DIRTARGETS := rat-info # rat-add rat-search rat-remove rat-update

.PHONY: all clean $(DIRTARGETS)
all: $(DIRTARGETS)

$(DIRTARGETS):
	@$(MAKE) -C $@

clean:
	@for dir in $(DIRTARGETS); do \
		$(MAKE) -C $$dir clean; \
	done
