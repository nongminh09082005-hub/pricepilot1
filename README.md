# PricePilot

## Mã nhóm

G06

## Thành viên

| Họ tên         | Mã sinh viên | Vai trò chính                                                          |
| -------------- | ------------ | ---------------------------------------------------------------------- |
| Đỗ Thị Quỳnh Anh | 2313380004       | Economic Logic & Pricing Model   |
| Trần Hà Dương | 2312380005 | Data & Input  |
| Nguyễn Mai Anh | 2313380002 | Monte Carlo Simulation |
| Đàm Ngọc Hà Phương      | 2313380028 | Advisory Logic & Strategy Engine|
| Nông Đức Minh | 2312380020       | Web & Result Display |

## Mô tả ngắn về sản phẩm

PricePilot là một web app hỗ trợ doanh nghiệp cơ khí vừa và nhỏ đánh giá tác động của việc tăng giá bán. Người dùng có thể nhập dữ liệu chi phí sản xuất, số lượng đơn hàng hiện tại, dữ liệu giá bán và demand trong quá khứ, sau đó hệ thống sẽ mô phỏng nhiều mức tăng giá khác nhau. Sản phẩm sử dụng historical price elasticity để ước tính phản ứng của khách hàng khi giá thay đổi và dùng Monte Carlo simulation để xét các yếu tố thị trường bất định. Kết quả trả về là một dashboard gồm profit, demand, downside risk và ba chiến lược giá: Aggressive, Balanced, Conservative. Mục tiêu của sản phẩm là giúp doanh nghiệp đưa ra quyết định tăng giá có cơ sở hơn thay vì chỉ dựa vào cảm tính.

## Vấn đề sản phẩm giải quyết

Các doanh nghiệp cơ khí SME thường gặp khó khăn khi quyết định có nên tăng giá bán hay không. Nếu tăng giá quá thấp, doanh nghiệp có thể không cải thiện được lợi nhuận. Nếu tăng giá quá cao, khách hàng có thể giảm đơn hàng, trì hoãn đơn hàng hoặc chuyển sang nhà cung cấp khác.

Vấn đề này đặc biệt quan trọng vì quyết định giá bán ảnh hưởng trực tiếp đến lợi nhuận, số lượng đơn hàng, khả năng giữ chân khách hàng và năng lực cạnh tranh của doanh nghiệp. Trong thực tế, nhiều doanh nghiệp nhỏ chưa có công cụ định lượng đơn giản để so sánh giữa lợi nhuận tăng thêm và rủi ro mất demand.

PricePilot giải quyết vấn đề này bằng cách biến quyết định tăng giá thành một mô hình mô phỏng có input, công thức xử lý, kết quả dashboard và recommendation rõ ràng. Người dùng có thể thử nhiều kịch bản khác nhau trước khi đưa ra quyết định kinh doanh.

## Người dùng mục tiêu

Người dùng chính của sản phẩm là: các doanh nghiệp vừa và nhỏ về lĩnh vực gia công cơ khi

Người dùng sử dụng sản phẩm khi muốn kiểm tra một mức tăng giá có hợp lý hay không, hoặc khi muốn so sánh nhiều kịch bản tăng giá trong điều kiện thị trường bất định.

## Tính năng chính

* Nhập dữ liệu chi phí sản xuất hằng tháng, bao gồm nguyên vật liệu, nhân công, điện/nước/thuê mặt bằng, bảo trì và khấu hao máy móc.
* Tính cost per order và base price dựa trên target margin.
* Tính historical price elasticity từ dữ liệu giá bán và demand trong quá khứ.
* Nhập các khoảng bất định của thị trường như market growth, customer budget pressure, material shock impact và material inflation.
* Chạy Monte Carlo simulation cho nhiều mức tăng giá khác nhau.
* Hiển thị dashboard kết quả gồm expected profit, profit improvement, average demand, demand loss và probability of lower profit.
* So sánh ba chiến lược giá: Aggressive, Balanced và Conservative.
* Hiển thị biểu đồ Profit vs. Price Increase và Demand vs. Price Increase.
* Cho phép xem Monte Carlo Profit Distribution theo từng mức tăng giá.
* Tạo Personalized Detailed Insight dựa trên input và kết quả simulation của từng doanh nghiệp.

## Cách mở hoặc chạy sản phẩm

Có hai cách để mở hoặc chạy sản phẩm:

1. Mở trực tiếp bằng link demo.
2. Chạy local trên máy tính bằng Python.


## Cách 1: Mở bằng link demo

1. Mở link demo của sản phẩm:

```text
https://pricepilot123.onrender.com/
```

2. Web được deploy bằng Render free service, lần mở đầu có thể mất khoảng 30–60 giây do server cần khởi động lại.
3. Khi trang intro của PricePilot hiện ra, bấm **Start**.
4. Ở trang input, khách hàng nhập dữ liệu input mong muốn.
5. Điều chỉnh các thông số:

   * material type;
   * tons per month;
   * waste rate;
   * labor cost;
   * fixed cost;
   * base demand;
   * target margin;
   * historical price-demand data;
   * market uncertainty ranges;
   * số lần Monte Carlo simulations.
6. Bấm **Run Simulation**.
7. Trang loading sẽ hiển thị tiến trình chạy simulation.
8. Sau khi quá trình tính toán hoàn tất, hệ thống tự chuyển sang trang result.
9. Ở trang result, người dùng có thể xem:

   * recommended price increase range;
   * expected profit;
   * probability of lower profit;
   * average demand;
   * average demand loss;
   * các biểu đồ phân tích;
   * ba strategy: Aggressive, Balanced, Conservative;
   * personalized detailed insight.
10. Có thể bấm **Run again** hoặc **Try Again** để quay lại trang input và chạy lại với assumptions khác.

---

## Cách 2: Chạy local trên máy tính

### Bước 1: Tải code từ GitHub

Cách đơn giản nhất:

1. Vào repo nhóm G06 trên GitHub.
2. Bấm nút màu xanh **Code**.
3. Chọn **Download ZIP**.
4. Giải nén file ZIP vào một thư mục trên máy.

Ví dụ:

```text
C:\Users\YourName\Desktop\G06
```

Hoặc nếu dùng Git, chạy lệnh:

```bash
git clone https://github.com/FTU-Legacy-62/G06.git
```

Sau đó vào thư mục project:

```bash
cd G06
```

---

### Bước 2: Kiểm tra Python

Mở Command Prompt hoặc Terminal và chạy:

```bash
python --version
```

Nếu dùng Windows và lệnh trên không chạy, thử:

```bash
py --version
```

Nếu máy chưa có Python, cần cài Python 3 trước. Khi cài Python trên Windows, nên tick lựa chọn:

```text
Add Python to PATH
```

---

### Bước 3: Kiểm tra các file cần có trong repo

Repo cần có tối thiểu các file sau:

```text
final_pricepilot_3.py
requirements.txt
README.md
GROUP_FOOTPRINT.md
INDIVIDUAL_FOOTPRINT.md
```

Nếu file Python chính của nhóm có tên khác, ví dụ:

```text
finalv5_real_progress_smooth.py
```

thì cần dùng đúng tên file đó khi chạy local và khi deploy.

---

### Bước 4: Cài thư viện cần thiết

Trong thư mục chứa file Python chính, chạy:

```bash
pip install -r requirements.txt
```

Nếu Windows báo không nhận lệnh `pip`, thử:

```bash
py -m pip install -r requirements.txt
```

File `requirements.txt` dùng để liệt kê các thư viện Python cần thiết để chạy app. Người dùng chỉ cần chạy một lệnh trên để cài toàn bộ thư viện.

Ví dụ nội dung `requirements.txt`:

```text
flask
pandas
plotly
numpy
gunicorn
```

Ý nghĩa của các thư viện:

* `flask`: tạo web app và xử lý các route như `/`, `/input`, `/run`, `/loading`, `/result`;
* `pandas`: lưu và xử lý bảng kết quả simulation;
* `numpy`: tính toán số học và random sampling cho Monte Carlo simulation;
* `plotly`: tạo biểu đồ tương tác trong dashboard;
* `gunicorn`: dùng để chạy Flask app khi deploy trên Render.

---

### Bước 5: Chạy ứng dụng

Nếu file chính tên là:

```text
final_pricepilot_3.py
```

thì chạy:

```bash
python final_pricepilot_3.py
```

Nếu dùng Windows và lệnh `python` không chạy, dùng:

```bash
py final_pricepilot_3.py
```

Nếu file chính của nhóm đang là:

```text
finalv5_real_progress_smooth.py
```

thì chạy:

```bash
python finalv5_real_progress_smooth.py
```

hoặc:

```bash
py finalv5_real_progress_smooth.py
```

Khi chạy thành công, terminal thường hiện dòng tương tự:

```text
Running on http://127.0.0.1:5000
```

---

### Bước 6: Mở app trên trình duyệt

Mở Chrome, Edge hoặc trình duyệt bất kỳ, sau đó truy cập:

```text
http://127.0.0.1:5000
```

Sau đó demo theo thứ tự:

```text
1. Mở trang intro.
2. Bấm Start.
3. Nhập hoặc giữ dữ liệu mẫu ở trang input.
4. Chọn số lần Monte Carlo simulations.
5. Bấm Run Simulation.
6. Chờ trang loading chạy xong.
7. Xem trang result.
8. Kiểm tra recommended price range.
9. Xem KPI cards và biểu đồ.
10. Mở Monte Carlo Profit Distribution nếu cần.
11. Mở Personalized Detailed Insight để xem phần giải thích chi tiết.
```

---

## Cách chạy nếu gặp lỗi thường gặp

### Lỗi 1: Thiếu thư viện

Nếu gặp lỗi dạng:

```text
ModuleNotFoundError: No module named 'flask'
```

hoặc:

```text
ModuleNotFoundError: No module named 'pandas'
```

thì chạy lại:

```bash
pip install -r requirements.txt
```

hoặc:

```bash
py -m pip install -r requirements.txt
```

---

### Lỗi 2: Không mở được `127.0.0.1:5000`

Kiểm tra terminal xem Flask app còn đang chạy không. Nếu terminal đã bị đóng, chạy lại:

```bash
python final_pricepilot_3.py
```

hoặc đúng tên file Python chính của nhóm.

Sau đó mở lại:

```text
http://127.0.0.1:5000
```

---

### Lỗi 3: Port 5000 đang bị dùng

Nếu port 5000 đang bị dùng bởi một app khác, hãy tắt terminal cũ đang chạy Flask app rồi chạy lại.

---

### Lỗi 4: Render báo lỗi sai Start Command

Nếu deploy trên Render, Start Command phải đúng với tên file Python.

Ví dụ nếu file chính là:

```text
final_pricepilot_3.py
```

thì Start Command là:

```text
gunicorn final_pricepilot_3:app
```

Nếu file chính là:

```text
finalv5_real_progress_smooth.py
```

thì Start Command là:

```text
gunicorn finalv5_real_progress_smooth:app
```

Không dùng:

```text
gunicorn app:app
```

nếu repo không có file `app.py`.

---

## Link demo nếu có

* Link demo: `[Điền link demo Render của nhóm vào đây]`
* Tài khoản demo nếu có: Không cần tài khoản demo.

Không ghi mật khẩu thật, token thật, API key thật hoặc thông tin riêng tư lên GitHub.

## Ghi chú về dữ liệu nếu có

Sản phẩm sử dụng dữ liệu do người dùng nhập và dữ liệu giả lập phục vụ mục đích demo. Các dữ liệu mẫu trong app như chi phí nguyên vật liệu, số lượng đơn hàng, target margin, historical price-demand data và market uncertainty ranges được dùng để minh họa cách mô hình hoạt động.

Các biến thị trường như market growth, customer budget pressure, material shock impact và material inflation được nhập dưới dạng range để phục vụ Monte Carlo simulation. Đây là các giả định mô phỏng, không phải dự báo chắc chắn.

Repo không chứa dữ liệu cá nhân, API key, mật khẩu, token hoặc dữ liệu nội bộ của doanh nghiệp.

## Ghi chú thêm

README là trang giới thiệu nhanh sản phẩm và hướng dẫn người khác mở hoặc chạy app. Phần giải thích chi tiết hơn về logic sản phẩm, công thức xử lý, lựa chọn mô hình, recommendation engine, hạn chế và bài học được trình bày trong file:

```text
GROUP_FOOTPRINT.md
```

Đóng góp cụ thể của từng thành viên được trình bày trong file:

```text
INDIVIDUAL_FOOTPRINT.md
```
