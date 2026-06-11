# Individual Footprint

## Đỗ Thị Quỳnh Anh - 2313380004

### Vai trò trong dự án

Trong dự án PricePilot, em phụ trách phần **Economic Logic & Pricing Model**. Công việc chính của em là xây dựng các công thức và logic kinh tế giúp hệ thống đánh giá tác động của việc thay đổi giá bán đến nhu cầu, chi phí và lợi nhuận.

---

### Những việc đã thực sự làm

#### Việc 1: Nghiên cứu và xây dựng mô hình Price Elasticity

- Nghiên cứu lý thuyết Price Elasticity of Demand.
- Lựa chọn phương pháp tính elasticity phù hợp với doanh nghiệp cơ khí SME.
- Xây dựng công thức tính elasticity từ dữ liệu lịch sử về giá bán và nhu cầu.

#### Việc 2: Xây dựng mô hình dự báo nhu cầu (Demand Forecast)

- Thiết kế công thức dự báo nhu cầu sau khi thay đổi giá bán.
- Kết hợp các yếu tố:
  - Market Growth
  - Customer Budget Pressure
  - Material Shock
  - Price Elasticity
- Kiểm tra và điều chỉnh công thức để demand phản ứng hợp lý với các mức tăng giá khác nhau.

#### Việc 3: Xây dựng Cost Structure Model

- Xác định các thành phần chi phí:
  - Nguyên vật liệu
  - Nhân công
  - Điện nước và thuê mặt bằng
  - Bảo trì
  - Khấu hao máy móc
- Thiết kế công thức tính:
  - Variable Cost per Order
  - Fixed Cost per Order
  - Current Cost per Order

#### Việc 4: Xây dựng mô hình định giá và lợi nhuận

- Thiết kế công thức Base Price dựa trên Cost per Order và Target Margin.
- Xây dựng công thức tính Current Profit.
- Xây dựng logic tính Expected Profit cho các kịch bản tăng giá khác nhau.

#### Việc 5: Hỗ trợ xây dựng logic recommendation

- Tham gia xây dựng logic đánh giá:
  - Profit Improvement
  - Demand Loss
  - Downside Risk
  - Elasticity Level
  - Fixed Cost Share
- Hỗ trợ xây dựng logic cho các chiến lược:
  - Aggressive
  - Balanced
  - Conservative

#### Việc 6: Hỗ trợ xây dựng phần giải thích kết quả

- Tham gia xây dựng Personalized Insight.
- Tham gia xây dựng Market Condition Analysis.
- Thiết kế cách diễn giải kết quả để người dùng hiểu lý do hệ thống đưa ra recommendation.

---

### File, tính năng và module đã đóng góp

#### Logic và công thức

- Price Elasticity Calculation
- Demand Forecasting Logic
- Cost Structure Model
- Base Price Calculation
- Profit Calculation Model

#### Thể hiện trên sản phẩm

- Historical Data for Fixed Elasticity
- Business Baseline Inputs
- Demand vs Price Increase Chart
- Profit vs Price Increase Chart
- Scenario Comparison
- Recommendation Engine
- Personalized Insight
- Market Condition Analysis

---

### Bằng chứng đóng góp

#### Tài liệu

- Pricing Formula Spreadsheet:
  https://docs.google.com/spreadsheets/d/1YP506e8sjTiZqmOY9fNb6fcVjwMv5qI_kQSa1qlXRuQ/edit

- Task Allocation:
  https://docs.google.com/spreadsheets/d/1p9vzLOrRWNIL22DaK8M-8HWok-ZvLx_OltRTsL_GEoc/edit

#### Trong code

Có thể kiểm tra đóng góp của em tại các hàm:

- classify_profit_improvement(value)
- classify_demand_loss(value)
- classify_risk(value)
- classify_elasticity(value)
- classify_fixed_cost_share(value)
- build_strategy_text(...)
- build_personalized_insight(...)
- compute_result_context(form)

Các hàm trên thể hiện việc em tham gia xây dựng công thức tính toán, logic đánh giá kết quả và cách hệ thống diễn giải recommendation cho người dùng.

Đặc biệt, phần công thức chính được triển khai trong hàm:

compute_result_context(form)

Bao gồm:

- Tính Price Elasticity
- Tính Cost per Order
- Tính Base Price
- Tính Demand Forecast
- Tính Expected Profit
- Tính Probability of Lower Profit
- Tính Demand Loss
- Chọn chiến lược Aggressive / Balanced / Conservative

---

### Phần đóng góp kết nối với sản phẩm cuối cùng như thế nào

Phần việc của em là nền tảng tính toán của toàn bộ hệ thống PricePilot.

Các dữ liệu do người dùng nhập sẽ được chuyển thành các chỉ số kinh doanh thông qua các công thức em xây dựng. Những kết quả này sau đó được sử dụng trong Monte Carlo Simulation và Recommendation Engine để tạo ra các khuyến nghị tăng giá phù hợp với từng mức độ rủi ro.

---

### Điều cá nhân học được

Em học được cách chuyển các khái niệm kinh tế như Price Elasticity, Cost Structure và Profit Analysis thành các mô hình có thể triển khai trong một sản phẩm thực tế.

Em cũng học được cách phối hợp giữa kiến thức kinh tế, phân tích dữ liệu và phát triển sản phẩm để tạo ra một công cụ hỗ trợ ra quyết định.

---

### Khó khăn đã gặp và cách xử lý

Ban đầu, em xây dựng công thức demand dựa trên market growth và elasticity. Tuy nhiên, khi kiểm tra kết quả mô phỏng, có những trường hợp giá tăng đáng kể nhưng demand gần như không thay đổi.

Sau khi rà soát lại công thức và thử nghiệm với nhiều bộ dữ liệu khác nhau, em điều chỉnh lại mô hình để tác động của price increase được phản ánh trực tiếp thông qua elasticity. Đồng thời bổ sung các yếu tố market growth, customer budget pressure và material shock để mô hình phản ánh thực tế tốt hơn.

Sau khi điều chỉnh, kết quả mô phỏng trở nên hợp lý hơn và phù hợp với logic kinh tế.

---

### Lời nhắn cho sinh viên khóa sau

Nếu muốn tiếp tục phát triển phần này, hãy hiểu rõ bài toán pricing trước khi bắt đầu code.

Một mô hình pricing tốt không chỉ cần tính đúng, mà còn phải giải thích được vì sao recommendation được đưa ra. Hãy luôn kiểm tra công thức bằng các tình huống thực tế và các trường hợp cực đoan để đảm bảo mô hình phản ánh đúng hành vi của khách hàng khi giá thay đổi.
