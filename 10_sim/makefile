# Author: Hai Cao -- cxhai.sdh221@hcmut.edu.vn
# Copyright 2024

TOP=tbench

## Do NOT change the content below unless you know what you're doing
FLAGS =  --binary --trace --sv --timing --timescale 1ns/100ps
FLAGS += -O3 --compiler gcc -CFLAGS -std=gnu++20
FLAGS += -x-initial unique
FLAGS += -x-assign unique
FLAGS += --assert
FLAGS += --build -j 0 --quiet
RFLAGS =  +verilator+seed+$(SEED)
RFLAGS += +verilator+quiet

TARGET = -f ./flist

.PHONY: all
all: clean sim run

.PHONY: sim
sim:
	@echo "-> SIMULATION"
	@verilator $(FLAGS) $(TARGET)

.PHONY: run
run:
	@echo "-> RUN"
	@./obj_dir/V$(TOP) $(RFLAGS)

.PHONY: wave
wave:
	gtkwave wave.vcd wave.gtkw 2>/dev/null

.PHONY: clean
clean:
	@echo "-> CLEAN"
	@rm -rf ./obj_dir *.vcd
