**Individual Footprint**

**Thành viên: Dương – 2312380005**

**1. Vai trò trong dự án**
   
Trong dự án PricePilot, em phụ trách phần M2 – Data & Input. Nói đơn giản, phần việc của em là làm sao để những dữ liệu người dùng nhập vào có thể được hệ thống hiểu, xử lý và chuyển thành dữ liệu đầu vào cho mô hình mô phỏng phía sau.
Cụ thể, em tham gia xây dựng các nhóm input chính của sản phẩm, bao gồm thông tin về chi phí sản xuất, nguyên vật liệu, nhân công, chi phí cố định, nhu cầu hiện tại, giá bán trong quá khứ và các giả định thị trường. Bên cạnh đó, em cũng code các công thức trong Python để lấy dữ liệu từ form, xử lý dữ liệu nhập vào và tính ra các chỉ số nền tảng như chi phí trên mỗi đơn hàng, giá bán cơ sở, lợi nhuận hiện tại và độ co giãn cầu theo giá.

**2. Dấu ấn cá nhân trong sản phẩm**
   
Phần thể hiện rõ đóng góp của em nhất là luồng dữ liệu đầu vào của PricePilot. Người dùng chỉ nhìn thấy một form nhập liệu khá đơn giản, nhưng phía sau đó là các công thức giúp chuyển những con số rời rạc thành dữ liệu có thể dùng để chạy mô phỏng.
Ví dụ, khi người dùng nhập loại vật liệu, sản lượng, tỷ lệ hao hụt, lương công nhân, chi phí điện, chi phí bảo trì, giá trị máy móc, nhu cầu hiện tại và dữ liệu giá – cầu trong quá khứ, hệ thống sẽ tự động tính ra các biến cần thiết cho mô hình. Đây là phần giúp kết nối giữa thông tin kinh doanh thực tế của người dùng và mô hình Monte Carlo ở các bước sau.
Với em, dấu ấn cá nhân không nằm ở việc làm giao diện đẹp, mà nằm ở việc đảm bảo dữ liệu đầu vào được thiết kế hợp lý và các công thức phía sau chạy đúng logic.

**3. Những việc đã thực sự làm**
   
1. Xác định các nhóm dữ liệu người dùng cần nhập để mô hình định giá có thể hoạt động.
2. Chuẩn bị các input về chi phí sản xuất như loại vật liệu, sản lượng theo tháng, tỷ lệ hao hụt, số lượng công nhân, lương bình quân, chi phí điện – thuê mặt bằng, chi phí bảo trì, giá trị máy móc và thời gian sử dụng máy.
3. Chuẩn bị các input về kinh doanh như nhu cầu hiện tại, target margin, giá bán cũ, giá bán mới, nhu cầu cũ và nhu cầu mới.
4. Chuẩn bị các input về bối cảnh thị trường như tăng trưởng thị trường, áp lực ngân sách khách hàng, tác động từ biến động nguyên vật liệu, lạm phát nguyên vật liệu, mức tăng giá tối đa cần kiểm tra và số lần mô phỏng.
5. Code phần lấy dữ liệu người dùng nhập từ form và đưa vào Python để xử lý.
6. Code phần làm sạch dữ liệu số, đặc biệt là các dữ liệu tiền tệ có dấu phẩy như lương, chi phí điện, bảo trì, giá trị máy móc và giá bán.
7. Code công thức tính chi phí nguyên vật liệu theo tháng dựa trên loại vật liệu và sản lượng sử dụng.
8. Code công thức tính chi phí nguyên vật liệu sau khi tính thêm tỷ lệ hao hụt.
9. Code công thức tính chi phí nhân công hằng tháng.
10. Code công thức chuyển các chi phí theo năm như điện, thuê mặt bằng, bảo trì và khấu hao máy móc về chi phí theo tháng.
11. Code công thức tính tổng chi phí hằng tháng, chi phí biến đổi trên mỗi đơn hàng, chi phí cố định trên mỗi đơn hàng và tổng chi phí trên mỗi đơn hàng.
12. Code công thức tính giá bán cơ sở dựa trên chi phí trên mỗi đơn hàng và biên lợi nhuận mục tiêu.
13. Code công thức tính lợi nhuận hiện tại để làm mốc so sánh với các kịch bản tăng giá.
14. Code công thức tính price elasticity từ dữ liệu giá bán và nhu cầu trong quá khứ.
15. Xử lý các khoảng min – max của biến thị trường để dữ liệu đưa vào mô phỏng không bị sai logic.
16. Chuẩn bị bộ dữ liệu đầu vào cuối cùng để chuyển sang phần M3 – Monte Carlo Simulation.

**4. File, tính năng, dữ liệu, logic, giao diện, tài liệu hoặc phần demo đã đóng góp**

Phần em đóng góp nằm trong file:
pricepilot.py
Các nhóm input em phụ trách gồm:
- Material type
- Tons per month
- Waste rate
- Number of workers
- Monthly salary per worker
- Electricity and rent per year
- Maintenance cost per year
- Machine value
- Machine life years
- Base demand / current monthly orders
- Target margin
- Old selling price
- New selling price
- Old demand
- New demand
- Market growth range
- Customer budget pressure range
- Material shock impact range
- Material inflation range
- Maximum price increase to test
- Number of simulations
Các phần công thức Python em tham gia gồm:
- Lấy dữ liệu từ form người dùng nhập.
- Làm sạch dữ liệu tiền tệ.
- Tính chi phí nguyên vật liệu.
- Tính chi phí sau hao hụt.
- Tính chi phí nhân công.
- Tính chi phí cố định.
- Tính khấu hao máy móc.
- Tính tổng chi phí hằng tháng.
- Tính chi phí trên mỗi đơn hàng.
- Tính giá bán cơ sở.
- Tính lợi nhuận hiện tại.
- Tính độ co giãn cầu theo giá.
- Chuẩn hóa các khoảng dữ liệu thị trường.
- Chuẩn bị dữ liệu đầu vào cho mô phỏng Monte Carlo.
  
**5. Bằng chứng đóng góp**

Bằng chứng có thể kiểm tra được gồm:
- File code chính: pricepilot.py
- Module trong sơ đồ: M2 – Data & Input
- Trang nhập liệu: /input
- Các trường dữ liệu đầu vào trên form.
- Hàm xử lý dữ liệu số: parse_number(value)
- Hàm xử lý khoảng min – max: swap_if_needed(a, b)
- Hàm tính toán chính: compute_result_context(form)
- Trong file code, có thể kiểm tra các phần liên quan đến việc lấy dữ liệu từ form, chuyển dữ liệu tiền tệ về dạng số, tính chi phí sản xuất, tính giá bán cơ sở, tính lợi nhuận hiện tại và tính elasticity. Ngoài ra, có - thể chạy thử sản phẩm, thay đổi input trên trang /input và xem các kết quả phía sau thay đổi theo.

**6. Phần đóng góp đó kết nối thế nào với sản phẩm cuối cùng**
   
Phần của em là bước đầu tiên để sản phẩm có thể chạy được về mặt tính toán. Các module sau như Monte Carlo Simulation, Advisory Logic và Dashboard đều cần dữ liệu đầu vào đã được xử lý từ M2.
Nếu phần input không rõ hoặc công thức tính sai, kết quả mô phỏng phía sau cũng sẽ sai. Vì vậy, phần em làm giúp sản phẩm:
- Nhận dữ liệu kinh doanh từ người dùng.
- Chuyển dữ liệu đó thành các biến tính toán trong Python.
- Tính được chi phí hiện tại của doanh nghiệp.
- Tính được giá bán cơ sở và lợi nhuận hiện tại.
- Tính được mức độ nhạy cảm của nhu cầu với thay đổi giá.
- Tạo bộ dữ liệu đầu vào để M3 tiếp tục chạy mô phỏng.
Nhờ phần này, PricePilot có thể đi từ các thông tin rất thực tế như chi phí, giá bán, nhu cầu và điều kiện thị trường đến kết quả cuối cùng là khuyến nghị tăng giá.

**7. Điều cá nhân học được**
   
Qua phần việc này, em học được rằng một mô hình không bắt đầu từ công thức, mà bắt đầu từ việc chọn đúng dữ liệu đầu vào. Nếu input không hợp lý thì dù công thức có phức tạp đến đâu, kết quả cũng khó có ý nghĩa.
Em cũng hiểu rõ hơn cách chuyển một bài toán kinh doanh thành bài toán có thể tính bằng Python. Câu hỏi “có nên tăng giá không” nghe khá đơn giản, nhưng khi làm thật thì phải tách thành nhiều phần nhỏ: chi phí là bao nhiêu, nhu cầu hiện tại thế nào, khách hàng nhạy cảm với giá ra sao, tăng giá ảnh hưởng đến lợi nhuận như thế nào.
Một điều nữa em học được là phải rất cẩn thận với đơn vị dữ liệu. Có dữ liệu nhập theo năm nhưng cần tính theo tháng, có dữ liệu là phần trăm nhưng khi code phải đổi sang dạng thập phân, có dữ liệu tiền tệ có dấu phẩy nên cần làm sạch trước khi tính. Đây là những chi tiết nhỏ nhưng nếu sai thì kết quả cuối cùng có thể lệch rất nhiều.

**8. Khó khăn đã gặp và cách xử lý**

Khó khăn đầu tiên là chọn input. Ban đầu có rất nhiều loại dữ liệu có thể đưa vào mô hình, nhưng nếu đưa quá nhiều thì người dùng sẽ khó nhập, còn nếu đưa quá ít thì mô hình lại thiếu thực tế. Vì vậy, em chọn những input liên quan trực tiếp nhất đến quyết định tăng giá: chi phí, nhu cầu, giá bán lịch sử và điều kiện thị trường.
Khó khăn thứ hai là xử lý dữ liệu tiền tệ và thời gian. Một số chi phí được nhập theo năm, nhưng mô hình lại cần tính theo tháng và theo đơn hàng. Em xử lý bằng cách đưa các chi phí này về monthly cost trước, sau đó mới phân bổ theo số đơn hàng.
Khó khăn thứ ba là tính elasticity từ dữ liệu lịch sử. Nếu dữ liệu người dùng nhập không hợp lý, ví dụ giá gần như không đổi, công thức có thể tạo ra kết quả sai lệch. Để xử lý, em thêm logic kiểm tra và giới hạn elasticity trong khoảng hợp lý để mô hình ổn định hơn.
Khó khăn cuối cùng là đảm bảo dữ liệu từ M2 đủ sạch và đúng định dạng để M3 có thể tiếp tục chạy mô phỏng. Vì vậy, em phải kiểm tra lại cách đặt biến, cách xử lý min – max và cách truyền dữ liệu giữa các bước.

**9. Lời nhắn cho sinh viên khóa sau**
   
Nếu sinh viên khóa sau tiếp tục phát triển phần này, em nghĩ nên bắt đầu bằng việc hiểu rõ từng input trước khi sửa công thức. Với mô hình định giá, không nên thêm biến chỉ vì thấy mô hình còn đơn giản, mà cần hỏi biến đó có thật sự giúp người dùng ra quyết định tốt hơn không.
Ngoài ra, nên kiểm tra rất kỹ đơn vị dữ liệu và logic tính toán. Những lỗi nhỏ như nhầm năm với tháng, phần trăm với số thập phân, hoặc tiền tệ có dấu phẩy đều có thể làm kết quả sai.
<img width="1698" height="926" alt="image" src="https://github.com/user-attachments/assets/9b08cd16-f6ba-40c9-acbe-34eacfcf2b1f" />

Nếu có thời gian phát triển tiếp, nhóm sau có thể thêm tính năng upload file Excel để người dùng nhập dữ liệu nhanh hơn, hoặc lưu lại các bộ input cũ để so sánh nhiều kịch bản định giá khác nhau.

