# Định nghĩa biến
TOP_MODULE = alu
SRC_DIR = ./../../00_src
SRC_FILES = flist.f
VCD_FILE = $(TOP_MODULE)_wave.vcd
FST_FILE = $(TOP_MODULE)_wave.fst
DUMP_VCD = +dumpfile=$(VCD_FILE)

# Mục tiêu chính
all: clean test compile run view

# Kiểm tra cú pháp (không biên dịch)
test:
	@echo "🔍 Kiểm tra cú pháp với Verilator..."
	@verilator --lint-only -f $(SRC_FILES)

# Biên dịch với Verilator
compile:
	@echo "🚀 Biên dịch với Verilator..."
	@verilator --binary --build --trace-fst --timing $(TOP_MODULE)_tb.sv -f $(SRC_FILES) -o sim

# Chạy mô phỏng và tạo file VCD
run:
	@echo "🎬 Chạy mô phỏng..."
	@./sim $(DUMP_VCD)

# Tạo file VCD/FST khi chạy mô phỏng
sim:
	@echo "📡 Chạy mô phỏng với file dump..."
	@./sim $(DUMP_VCD) > verilator.log

# Dọn dẹp file biên dịch
clean:
	@echo "🧹 Dọn dẹp thư mục..."
	@rm -rf obj_dir sim verilator.log $(VCD_FILE) $(FST_FILE)

# Xem waveform bằng GTKWave
view:
	@echo "👀 Mở GTKWave..."
	gtkwave $(VCD_FILE) &
