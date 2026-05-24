all: make_src

make_src:
	@make -C src/

clean:
	@make -C src/ clean

