# Điều khiển LED bằng nút nhấn (Arduino + OneButton)

## Giới thiệu
Dự án này minh họa cách sử dụng **thư viện OneButton** để quản lý nút nhấn một cách dễ dàng và rõ ràng.  
Chúng ta điều khiển một LED ngoài bằng **single click** và **double click**:

- **Single click**: Bật/Tắt LED (chế độ ON/OFF thông thường).
- **Double click**: Chuyển LED sang **chế độ nháy** (Blink). Bấm double click thêm lần nữa để thoát khỏi chế độ nháy.
- **Long press** (giữ lâu) **không còn sử dụng** trong phiên bản này.

## Phần cứng
- Module ESP32
- LED + điện trở 
- Nút nhấn (button)
- Dây nối
- Breadboard

### Kết nối
- LED -> GPIO 5 (qua điện trở, về GND)
- Button -> GPIO 4 (kéo xuống GND, sử dụng `INPUT_PULLUP`)

## Cài đặt
1. Clone repo về:
   ```bash
   git clone https://github.com/lethanhtung0711/Week1_BlinkLed.git
