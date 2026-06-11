# Individual Footprint

## Họ và tên

**Nông Đức Minh**

## Mã sinh viên

**2312380020**

## Vai trò trong dự án

Trong dự án PricePilot, em phụ trách chính phần **M5 – Web & Result Display**. Đây là phần liên quan đến giao diện web, cách trình bày kết quả mô phỏng và trải nghiệm người dùng khi sử dụng sản phẩm.

Cụ thể, phần việc của em tập trung vào việc biến các kết quả tính toán từ mô hình mô phỏng Monte Carlo và advisory logic thành một dashboard dễ hiểu, trực quan và có thể dùng để demo. Em không chỉ làm phần hiển thị số liệu, mà còn sắp xếp lại thông tin theo một luồng hợp lý để người dùng có thể hiểu được: nên tăng giá bao nhiêu, lợi nhuận thay đổi thế nào, rủi ro ra sao và nhu cầu có thể bị ảnh hưởng như thế nào.

Các phần em phụ trách bao gồm giao diện trang giới thiệu, trang nhập liệu, trang loading, trang kết quả, các KPI cards, biểu đồ, scenario recommendation cards, phần Monte Carlo Profit Distribution và phần Personalized Detailed Insight.


## Dấu ấn cá nhân trong sản phẩm

Dấu ấn cá nhân rõ nhất của em nằm ở trang **PricePilot Result Dashboard**. Đây là trang kết quả cuối cùng mà người dùng nhìn thấy sau khi nhập dữ liệu và chạy mô phỏng.

Khi làm phần này, em muốn dashboard không chỉ là nơi “đổ số liệu” ra màn hình, mà phải giúp người dùng đọc kết quả nhanh và ra quyết định dễ hơn. Vì vậy, em thiết kế phần đầu trang để người dùng thấy ngay recommendation chính, gồm mức tăng giá được khuyến nghị, lợi nhuận kỳ vọng, mức thay đổi lợi nhuận, xác suất lợi nhuận thấp hơn hiện tại và mức mất nhu cầu trung bình.

Bên dưới phần recommendation, em xây dựng hệ thống KPI cards để tóm tắt các chỉ số quan trọng. Em cũng thêm hai biểu đồ **Profit vs. Price Increase** và **Demand vs. Price Increase** để người dùng nhìn được mối quan hệ giữa quyết định tăng giá, lợi nhuận và nhu cầu.

Một phần em khá chú trọng là cách trình bày ba chiến lược **Aggressive, Balanced và Conservative**. Thay vì chỉ đưa ra một phương án duy nhất, dashboard cho phép người dùng so sánh ba hướng ra quyết định khác nhau. Mỗi scenario card có expected profit, profit improvement hoặc profit gap, risk và demand loss. Cách này giúp sản phẩm nhìn giống một công cụ hỗ trợ quyết định hơn là một bài tính đơn thuần.

Ngoài ra, em cũng làm phần **Monte Carlo Profit Distribution** dưới dạng modal tương tác. Người dùng có thể chọn từng mức tăng giá và xem phân phối lợi nhuận tương ứng. Phần này giúp thể hiện rủi ro trực quan hơn, vì người dùng không chỉ nhìn một con số trung bình mà còn thấy được độ bất định của kết quả.

Về cuối quá trình làm, em tiếp tục chỉnh phần **Quick Personalized Insights**, **Personalized Detailed Insight** và **Market Condition Analysis** để kết quả không bị máy móc. Đặc biệt, khi profit improvement âm, em sửa lại cách hiển thị thành **Defensive Recommendation** để tránh gây hiểu nhầm rằng hệ thống đang khuyên tăng giá để chắc chắn tăng lợi nhuận. Trong trường hợp đó, recommendation được hiểu là phương án phòng thủ tốt hơn trong các giả định hiện tại.

Nhìn chung, đóng góp chính của em là làm cho sản phẩm có một giao diện kết quả hoàn chỉnh, dễ hiểu và đủ thuyết phục khi demo.


## Những việc đã thực sự làm

Trong quá trình làm dự án, em đã thực hiện các phần sau:

* Thiết kế và xây dựng giao diện chính của web PricePilot, bao gồm intro page, input page, loading page và result page.
* Xây dựng dashboard kết quả với các KPI chính như current base price, current expected profit, recommended range, expected profit, best single increase, downside risk và demand loss.
* Thiết kế phần recommendation chính ở đầu trang kết quả để người dùng nhìn vào là thấy ngay mức tăng giá được hệ thống đề xuất.
* Xây dựng ba scenario cards gồm Aggressive, Balanced và Conservative để so sánh các lựa chọn chiến lược.
* Tạo biểu đồ **Profit vs. Price Increase** để thể hiện lợi nhuận kỳ vọng theo từng mức tăng giá.
* Tạo biểu đồ **Demand vs. Price Increase** để thể hiện tác động của tăng giá lên nhu cầu trung bình.
* Xây dựng modal **Monte Carlo Profit Distribution** để người dùng xem phân phối lợi nhuận tại từng mức price increase.
* Thiết kế phần **Quick Personalized Insights** để tóm tắt nhanh các điểm quan trọng của kết quả.
* Xây dựng khu vực hiển thị **Personalized Detailed Insight**, cho phép người dùng bấm để mở phần phân tích chi tiết.
* Thêm phần **Market Condition Analysis** để giải thích market growth, customer budget pressure, material shock impact, net market effect và material inflation.
* Chỉnh logic hiển thị khi profit improvement âm, chuyển từ cách nói “profit improvement” sang hướng “defensive adjustment” hoặc “profit gap vs current” cho hợp lý hơn.
* Thêm các nút điều hướng như Run Again, Try Again, Download Report và View Full Personalized Analysis.
* Chỉnh CSS, màu sắc, spacing, layout, hover effect và responsive design để giao diện nhìn rõ ràng hơn khi demo.
* Chỉnh loading page để quá trình chạy simulation mượt hơn, tránh việc vừa bấm chạy đã nhảy ngay sang trang kết quả.


## File, tính năng, giao diện hoặc phần demo đã đóng góp

Phần em đóng góp nằm chủ yếu trong file **pricepilot.py**, đặc biệt là các phần giao diện và hiển thị kết quả.

### 1. RESULT_HTML – Result Dashboard

Đây là phần em dành nhiều thời gian nhất. Em xây dựng giao diện trang kết quả cuối cùng, nơi hiển thị recommendation, KPI, biểu đồ, scenario comparison và insight cho người dùng.

Phần này là trung tâm của sản phẩm, vì sau khi mô hình xử lý xong, tất cả kết quả đều cần được trình bày lại ở đây để người dùng hiểu.

### 2. Top Recommendation Section

Em thiết kế phần khuyến nghị chính ở đầu dashboard. Phần này hiển thị:

* Recommended range.
* Recommended single increase.
* Expected profit.
* Profit improvement hoặc profit gap.
* Probability of lower profit.
* Average demand loss.

Sau các lần kiểm thử, em cũng chỉnh lại phần này để nếu profit improvement âm thì hệ thống không còn hiển thị như một cơ hội tăng lợi nhuận nữa, mà chuyển thành:

**Defensive Recommendation**
**Increase price by X%**
**No fully profitable scenario found under current assumptions...**

Cách sửa này giúp kết quả trung thực và dễ giải thích hơn.

### 3. KPI Cards

Em xây dựng các thẻ KPI để chuyển kết quả mô hình thành thông tin dễ đọc. Các KPI gồm current base price, current expected profit, recommended range, expected profit, best single increase, probability of lower profit, average demand, demand loss và số lần simulation.

### 4. Profit vs. Price Increase Chart

Em trình bày biểu đồ lợi nhuận kỳ vọng theo từng mức tăng giá. Biểu đồ này giúp người dùng thấy mức tăng giá nào tạo expected profit cao hơn, thay vì chỉ nhìn một con số recommendation.

### 5. Demand vs. Price Increase Chart

Em trình bày biểu đồ nhu cầu trung bình theo từng mức tăng giá. Đây là phần quan trọng vì tăng giá không chỉ ảnh hưởng đến profit mà còn có thể làm giảm số lượng đơn hàng.

### 6. Monte Carlo Profit Distribution Modal

Em xây dựng phần pop-up/modal để người dùng chọn từng mức price increase và xem phân phối lợi nhuận tương ứng. Phần này giúp kết quả Monte Carlo dễ hiểu hơn, vì người dùng có thể thấy expected profit, lower profit probability và average demand tại từng mức giá.

### 7. Scenario Recommendation Cards

Em thiết kế ba thẻ so sánh chiến lược:

* Aggressive.
* Balanced.
* Conservative.

Mỗi thẻ có expected profit, profit improvement hoặc profit gap, risk, demand loss và đoạn advisory text riêng. Sau khi kiểm tra các trường hợp profit âm, em chỉnh lại để tên scenario vẫn giữ nguyên, nhưng label “Profit improvement” sẽ đổi thành “Profit gap vs current” nếu số đó âm.

### 8. Quick Personalized Insights

Em xây dựng phần insight ngắn để tóm tắt nhanh ba điểm chính: profit, risk và demand impact. Khi profit improvement âm, em chỉnh lại title và nội dung để không còn câu kiểu “improves expected profit by -33%”, mà chuyển sang cách giải thích đây là defensive adjustment.

### 9. Personalized Detailed Insight Display

Em xây dựng khu vực hiển thị phần phân tích chi tiết cá nhân hóa. Người dùng có thể bấm **View Full Personalized Analysis** để mở hoặc đóng phần này. Phần này giúp dashboard không bị quá dài ngay từ đầu, nhưng vẫn có đủ giải thích khi cần.

### 10. Market Condition Analysis

Em thêm block **Market Condition Analysis** trong Personalized Detailed Insight. Block này phân tích các yếu tố thị trường:

* Market growth hỗ trợ demand bao nhiêu.
* Customer budget pressure gây áp lực lên demand bao nhiêu.
* Material shock impact gây áp lực lên demand bao nhiêu.
* Net market effect trước price elasticity.
* Material inflation ảnh hưởng đến chi phí, không trực tiếp ảnh hưởng đến demand.
* Nếu profit improvement âm, phần này giải thích recommendation đang mang tính defensive adjustment.

### 11. JavaScript interaction

Em viết và chỉnh các phần JavaScript cho trang kết quả, gồm:

* Mở modal phân phối lợi nhuận.
* Đóng modal.
* Chọn price increase trong dropdown.
* Render lại biểu đồ distribution.
* Toggle phần detailed insight.
* Dùng phím Escape để đóng modal.

### 12. CSS, layout và responsive design

Em chỉnh bố cục dashboard theo dạng card layout, dùng grid, spacing, màu sắc và hover effect để giao diện nhìn gọn hơn. Em cũng chỉnh responsive design để giao diện vẫn dùng được trên các kích thước màn hình khác nhau.

### 13. Loading screen

Em xây dựng và chỉnh loading screen khi hệ thống chạy simulation. Trang này có progress bar, status text, estimated time remaining

