# Caro Game

## 🎮 Giới Thiệu
Dự án này là một trò chơi Caro console viết bằng C++.

## 📥 Cài Đặt & Biên Dịch

### 1️⃣ Yêu Cầu Hệ Thống
- G++ Compiler (MinGW nếu dùng Windows)
- VS Code hoặc bất kỳ trình soạn thảo nào hỗ trợ C++

### 2️⃣ Biên Dịch Dự Án

Mở terminal trong thư mục dự án và chạy lệnh sau:

g++ main.cpp Common.cpp Point.cpp Board.cpp Play.cpp Game.cpp -o caro.exe


### 3️⃣ Chạy Chương Trình

Sau khi biên dịch xong, chạy lệnh sau để mở trò chơi:

./caro.exe  # Trên Linux hoặc Git Bash
caro.exe    # Trên Windows (cmd hoặc PowerShell)


## 🛠 Cấu Trúc Dự Án
- `main.cpp` - Chương trình chính
- `Board.cpp/h` - Xử lý bàn cờ
- `Common.cpp/h` - Các hàm hỗ trợ
- `Game.cpp/h` - Điều khiển trò chơi
- `Play.cpp/h` - Luật chơi
- `Point.cpp/h` - Điểm trên bàn cờ



