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

## Bằng chứng đóng góp

Các bằng chứng đóng góp của em tập trung vào phần giao diện web, luồng demo và trang hiển thị kết quả của PricePilot.

* File chính: **pricepilot.py**
* Link web demo: **https://pricepiloot.onrender.com/**
* Module phụ trách chính: **M5 – Web & Result Display**

### 1. Trang Intro

Ảnh minh chứng:


![Intro page](images<img width="1894" height="858" alt="Screenshot (3287)" src="https://github.com/user-attachments/assets/c0593722-3c6d-4543-b3e5-8461b5a78cf0" />)


Trang intro là màn hình đầu tiên của sản phẩm. Phần này giới thiệu ngắn gọn PricePilot, giải thích sản phẩm hỗ trợ quyết định định giá cho doanh nghiệp sản xuất cơ khí và có nút để người dùng bắt đầu nhập dữ liệu.

### 2. Trang Input

Ảnh minh chứng:

```markdown
![Input page](images/input-page.png)
```

Trang input là nơi người dùng nhập dữ liệu chi phí, baseline business, historical price-demand data, market uncertainty ranges và số lần Monte Carlo simulation. Em đóng góp vào cách tổ chức form thành các nhóm thông tin để người dùng nhập dữ liệu theo trình tự dễ hiểu hơn.

### 3. Loading Screen

Ảnh minh chứng:

```markdown
![Loading screen](images/loading-screen.png)
```

Loading screen được dùng khi hệ thống đang chạy simulation. Phần này có progress bar, status text, estimated time remaining và phần “Did you know?”. Em thêm và chỉnh phần này để luồng demo mượt hơn, thay vì người dùng bấm chạy mô phỏng rồi chuyển trang quá đột ngột.

### 4. Result Dashboard / Output Screen

Ảnh minh chứng:

```markdown
![Output screen](images/output-screen.png)
```

Trang output là phần quan trọng nhất trong đóng góp của em. Đây là nơi hiển thị recommendation, KPI cards, biểu đồ, scenario cards và phần phân tích chi tiết. Phần này giúp biến kết quả mô phỏng thành một dashboard trực quan để người dùng có thể hiểu và ra quyết định.

### 5. Một số lỗi đã xử lý trong quá trình làm

Trong quá trình làm phần web và result display, em cũng gặp và xử lý một số lỗi liên quan đến giao diện và trải nghiệm demo, ví dụ:

* Loading page có lúc chuyển sang result quá nhanh, tạo cảm giác bị “vút phát” chứ không giống quá trình mô phỏng thật. Em xử lý bằng cách chỉnh lại logic progress bar để loading mượt hơn và chỉ chuyển trang khi progress đạt 100%.
* Khi profit improvement âm, dashboard ban đầu vẫn có câu kiểu “improves expected profit by -33%”, dễ gây hiểu nhầm. Em chỉnh lại thành **Defensive Recommendation** và **Profit gap vs current** để cách diễn đạt đúng với kết quả mô hình hơn.
* Khi chạy số lượng simulation lớn trên Render, app có thể fail do backend xử lý quá nặng. Nhóm đã điều chỉnh lại cách chạy và giảm việc lưu dữ liệu trung gian quá lớn để sản phẩm phù hợp hơn với môi trường demo.
* Một số phần giao diện ban đầu hơi rối vì có nhiều chỉ số. Em xử lý bằng cách chia lại layout thành recommendation, KPI, chart, scenario và insight.


## Phần đóng góp đó kết nối thế nào với sản phẩm cuối cùng

Phần em làm là lớp hiển thị cuối cùng của toàn bộ sản phẩm. Các module trước như M1, M2, M3 và M4 tạo ra công thức, dữ liệu, kết quả mô phỏng và logic khuyến nghị. Tuy nhiên, nếu không có M5, người dùng sẽ khó hiểu các kết quả đó và sản phẩm cũng khó demo.

Phần **Web & Result Display** giúp người dùng nhập dữ liệu dễ dàng hơn. Các input về chi phí, demand, giá lịch sử và điều kiện thị trường được sắp xếp thành từng nhóm, nên người dùng có thể điền theo một luồng rõ ràng.

Phần này cũng giúp kết quả mô phỏng được trình bày trực quan thay vì chỉ là bảng số. Recommendation được hiển thị rõ ở đầu dashboard để người dùng biết ngay hệ thống đang đề xuất mức tăng giá nào. Sau đó, KPI cards, biểu đồ và scenario cards giúp người dùng hiểu thêm về lợi nhuận, rủi ro và tác động đến nhu cầu.

Ba scenario **Aggressive, Balanced và Conservative** giúp sản phẩm không chỉ đưa ra một kết luận duy nhất, mà còn cho người dùng so sánh các lựa chọn theo mức độ rủi ro khác nhau. Biểu đồ **Profit vs. Price Increase** và **Demand vs. Price Increase** giúp người dùng nhìn thấy tác động của việc tăng giá lên lợi nhuận và nhu cầu.

Phần **Personalized Insight** và **Market Condition Analysis** giúp giải thích vì sao hệ thống đưa ra recommendation, chứ không chỉ đưa ra một con số. Nhờ đó, sản phẩm cuối cùng trở thành một web tool hoàn chỉnh, có thể trình bày trong buổi demo theo luồng: nhập dữ liệu → chạy mô phỏng → xem dashboard → giải thích recommendation.

Nói cách khác, phần đóng góp của em là cầu nối giữa kết quả mô hình và trải nghiệm của người dùng cuối.


## Điều cá nhân học được

Qua phần việc này, em học được rằng một sản phẩm phân tích dữ liệu không chỉ cần mô hình đúng, mà còn cần giao diện đủ rõ để người dùng hiểu và tin vào kết quả.

Em học được cách trình bày dữ liệu tài chính theo hướng ra quyết định. Ví dụ, không nên chỉ hiển thị expected profit, mà cần đặt nó cạnh downside risk, demand loss và recommendation range. Khi nhìn các chỉ số này cùng nhau, người dùng mới có thể trả lời được câu hỏi: nên tăng giá bao nhiêu, lợi ích là gì và rủi ro là gì.

Ngoài ra, em học thêm về cách kết hợp **Flask, HTML, CSS, JavaScript và Plotly** trong một web app. Em hiểu hơn cách backend truyền kết quả sang giao diện, cách render biểu đồ, cách tạo modal tương tác và cách tổ chức layout để dashboard dễ đọc hơn.

Một điều quan trọng nữa là em học được rằng cách diễn đạt trong giao diện ảnh hưởng rất nhiều đến cách người dùng hiểu sản phẩm. Khi profit improvement âm, nếu vẫn gọi đó là profit opportunity thì sẽ sai về mặt ý nghĩa. Vì vậy, em phải chỉnh lại wording thành defensive adjustment để dashboard phản ánh đúng logic của mô hình.


## Khó khăn đã gặp và cách xử lý

Khó khăn đầu tiên là kết quả mô phỏng có nhiều chỉ số. Nếu đưa hết lên màn hình cùng lúc, dashboard sẽ bị rối và người dùng không biết nên nhìn vào đâu trước. Em xử lý bằng cách chia thông tin thành nhiều tầng: recommendation chính ở trên cùng, sau đó là KPI, biểu đồ, scenario cards và cuối cùng là detailed insight.

Khó khăn thứ hai là làm sao để người dùng hiểu **Monte Carlo Profit Distribution**. Nếu chỉ đưa một biểu đồ histogram cố định thì chưa đủ. Vì vậy, em tạo modal cho phép chọn từng mức price increase để xem phân phối lợi nhuận, expected profit, lower profit probability và average demand tương ứng. Cách này giúp người dùng kiểm tra rủi ro trực quan hơn.

Khó khăn thứ ba là phải cân bằng giữa giao diện đẹp và tính dễ hiểu. Em xử lý bằng cách dùng card layout, màu sắc nhất quán, label ngắn gọn và chia rõ từng khu vực. Em cũng thêm Quick Personalized Insights và Personalized Detailed Insight để kết quả không chỉ là con số mà còn có giải thích.

Khó khăn cuối cùng là dashboard phải phù hợp để demo. Em thêm loading page, nút Run Again, nút Download Report và các phần trình bày rõ ràng để khi thuyết trình, nhóm có thể đi theo flow: nhập dữ liệu → chạy mô phỏng → xem kết quả → giải thích recommendation.


## Lời nhắn cho sinh viên khóa sau

Nếu sinh viên khóa sau muốn tiếp tục hoặc học từ phần việc này, em nghĩ nên bắt đầu từ việc hiểu rõ người dùng và luồng sử dụng trước khi viết code. Với một sản phẩm decision-support, giao diện không chỉ để nhìn đẹp mà còn quyết định việc người dùng có hiểu và tin kết quả hay không.

Các bạn nên test sản phẩm với nhiều bộ input khác nhau, đặc biệt là các trường hợp xấu như profit improvement âm, downside risk cao hoặc demand loss lớn. Nếu chỉ test với dữ liệu đẹp, dashboard có thể trông ổn nhưng khi gặp tình huống thực tế hơn thì wording và logic hiển thị rất dễ bị sai.

Ngoài ra, nên deploy sản phẩm sớm lên Render hoặc nền tảng tương tự để phát hiện lỗi sớm. Một số lỗi chỉ xuất hiện khi chạy online, ví dụ sai start command, thiếu package trong requirements.txt, loading không mượt hoặc simulation quá nặng.

Nếu tiếp tục phát triển PricePilot, em nghĩ nên thêm database để lưu lịch sử mô phỏng, thêm user account, và kết nối dữ liệu thị trường thật như giá nguyên vật liệu hoặc chỉ số ngành. Phần dashboard cũng có thể phát triển thêm chức năng export report để người dùng tải kết quả thành PDF.


