CC = gcc
CFLAGS = -Wall -Wextra -O2
OUTDIR = ../build/rat-info
OUT = $(OUTDIR)/rat-info
SRC = main.c pfon.c p_installed.c
OBJ = $(patsubst %.c,$(OUTDIR)/%.o,$(SRC))

all: $(OUTDIR) $(OUT)

$(OUTDIR):
	mkdir -p $@

$(OUT): $(OBJ)
	$(CC) $(OBJ) -o $@ $(CFLAGS)

$(OUTDIR)/%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f $(OUTDIR)/*.o $(OUT)
