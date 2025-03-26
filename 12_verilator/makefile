TOP_MODULE = top
SRC_FILES = $(TOP_MODULE).sv
VCD_FILE = waveform.vcd

all: clean compile run

compile:
	verilator --cc --exe --build --trace $(SRC_FILES) testbench.cpp -o sim

run:
	./sim

sim:
	./sim +trace > $(VCD_FILE)

clean:
	rm -rf obj_dir sim $(VCD_FILE)

view:
	gtkwave $(VCD_FILE) &
