## Cách 2: Chạy local trên máy tính

Nếu không sử dụng link demo online, người dùng có thể chạy PricePilot trực tiếp trên máy tính bằng Python. Trước hết, máy cần có Python 3. Người dùng có thể mở Command Prompt hoặc Terminal và kiểm tra bằng lệnh `python --version`. Nếu dùng Windows mà lệnh này không chạy, có thể thử `py --version`. Nếu máy chưa có Python, cần cài Python 3 trước và khi cài nên chọn mục **Add Python to PATH** để có thể chạy Python từ Command Prompt.

Sau khi đã có Python, người dùng tải code từ GitHub về máy bằng cách vào repo nhóm, bấm nút **Code**, chọn **Download ZIP**, sau đó giải nén file ZIP vào một thư mục bất kỳ. Hoặc nếu dùng Git, có thể chạy lệnh `git clone https://github.com/FTU-Legacy-62/G06.git`, sau đó vào thư mục project bằng lệnh `cd G06`. Thư mục sau khi tải về cần có các file chính như `pricepilot.py`, `requirements.txt`, `README.md`, `GROUP_FOOTPRINT.md` và `INDIVIDUAL_FOOTPRINT.md`.

Tiếp theo, mở Command Prompt hoặc Terminal trong thư mục chứa các file trên và chạy lệnh `pip install -r requirements.txt` để cài thư viện. Nếu Windows không nhận lệnh `pip`, có thể dùng lệnh `py -m pip install -r requirements.txt`. File `requirements.txt` là file liệt kê các thư viện Python cần thiết để app hoạt động, ví dụ Flask, pandas, numpy, plotly và gunicorn. Người dùng không cần cài từng thư viện riêng lẻ.

Sau khi cài xong thư viện, chạy ứng dụng bằng lệnh `python pricepilot.py`. Nếu dùng Windows và lệnh `python` không chạy, dùng `py pricepilot.py`. Khi chạy thành công, terminal sẽ hiện đường link local, thường là `http://127.0.0.1:5000`. Người dùng mở Chrome, Edge hoặc trình duyệt bất kỳ, nhập đường link này vào thanh địa chỉ và truy cập app.

Quy trình demo sau khi mở app gồm: vào trang intro, bấm **Start**, nhập dữ liệu hoặc giữ dữ liệu mẫu ở trang input, chọn số lần Monte Carlo simulations, bấm **Run Simulation**, chờ trang loading chạy xong và xem trang result. Ở trang kết quả, người dùng có thể xem recommended price range, expected profit, demand loss, downside risk, các biểu đồ phân tích, Monte Carlo Profit Distribution và phần Personalized Detailed Insight.

Nếu app không chạy, lỗi thường gặp nhất là thiếu thư viện. Khi đó, người dùng chỉ cần chạy lại `pip install -r requirements.txt` hoặc `py -m pip install -r requirements.txt`. Nếu không mở được `http://127.0.0.1:5000`, cần kiểm tra xem terminal chạy Flask app còn đang mở không. Nếu terminal đã bị tắt, chạy lại `python pricepilot.py` hoặc `py pricepilot.py`.

Nếu deploy sản phẩm trên Render, vì file chính của nhóm là `pricepilot.py`, Start Command cần là `gunicorn pricepilot:app`. Không dùng `gunicorn app:app` vì repo không có file `app.py`.
