# Định nghĩa biến
TOP_MODULE = control_unit
SRC_DIR = ./../../00_src
SRC_FILES = $(SRC_DIR)/$(TOP_MODULE).sv $(TOP_MODULE)_tb.sv

# Mục tiêu chính
all: clean compile run

# Kiểm tra cú pháp (không biên dịch)
test:
	@echo "🔍 Kiểm tra cú pháp với Verilator..."
	@verilator --lint-only --timing $(SRC_FILES)

# Biên dịch với Verilator
compile:
	@echo "🚀 Biên dịch với Verilator..."
	@verilator --binary --timing --trace ./../../00_src/immgen.sv tb_immgen.sv

# Chạy mô phỏng và tạo file VCD
run:
	@echo "🎬 Chạy mô phỏng..."
	@make -j -C obj_dir/ -f Vimmgen.mk Vimmgen 
	@./obj_dir/Vimmgen

# Dọn dẹp file biên dịch
clean:
	@echo "🧹 Dọn dẹp thư mục..."
	@rm -rf obj_dir immgen_wave.vcd

# Xem waveform bằng GTKWave
view:
	@echo "👀 Mở GTKWave..."
	gtkwave immgen_wave.vcd &
