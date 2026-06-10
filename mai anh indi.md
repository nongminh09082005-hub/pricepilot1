**Individual Footprint**

Thành viên: manh – 2312380005
1. Vai trò trong dự án

Trong dự án PricePilot, em phụ trách phần M2 – Data & Input. Nói đơn giản, phần việc của em là làm sao để những dữ liệu người dùng nhập vào có thể được hệ thống hiểu, xử lý và chuyển thành dữ liệu đầu vào cho mô hình mô phỏng phía sau.
Cụ thể, em tham gia xây dựng các nhóm input chính của sản phẩm, bao gồm thông tin về chi phí sản xuất, nguyên vật liệu, nhân công, chi phí cố định, nhu cầu hiện tại, giá bán trong quá khứ và các giả định thị trường. Bên cạnh đó, em cũng code các công thức trong Python để lấy dữ liệu từ form, xử lý dữ liệu nhập vào và tính ra các chỉ số nền tảng như chi phí trên mỗi đơn hàng, giá bán cơ sở, lợi nhuận hiện tại và độ co giãn cầu theo giá.

3. Những việc đã thực sự làm
Xác định các nhóm dữ liệu người dùng cần nhập để mô hình định giá có thể hoạt động.
Chuẩn bị các input về chi phí sản xuất như loại vật liệu, sản lượng theo tháng, tỷ lệ hao hụt, số lượng công nhân, lương bình quân, chi phí điện – thuê mặt bằng, chi phí bảo trì, giá trị máy móc và thời gian sử dụng máy.
Chuẩn bị các input về kinh doanh như nhu cầu hiện tại, target margin, giá bán cũ, giá bán mới, nhu cầu cũ và nhu cầu mới.
Chuẩn bị các input về bối cảnh thị trường như tăng trưởng thị trường, áp lực ngân sách khách hàng, tác động từ biến động nguyên vật liệu, lạm phát nguyên vật liệu, mức tăng giá tối đa cần kiểm tra và số lần mô phỏng.
Code phần lấy dữ liệu người dùng nhập từ form và đưa vào Python để xử lý.
Code phần làm sạch dữ liệu số, đặc biệt là các dữ liệu tiền tệ có dấu phẩy như lương, chi phí điện, bảo trì, giá trị máy móc và giá bán.
Code công thức tính chi phí nguyên vật liệu theo tháng dựa trên loại vật liệu và sản lượng sử dụng.
Code công thức tính chi phí nguyên vật liệu sau khi tính thêm tỷ lệ hao hụt.
Code công thức tính chi phí nhân công hằng tháng.
Code công thức chuyển các chi phí theo năm như điện, thuê mặt bằng, bảo trì và khấu hao máy móc về chi phí theo tháng.
Code công thức tính tổng chi phí hằng tháng, chi phí biến đổi trên mỗi đơn hàng, chi phí cố định trên mỗi đơn hàng và tổng chi phí trên mỗi đơn hàng.
Code công thức tính giá bán cơ sở dựa trên chi phí trên mỗi đơn hàng và biên lợi nhuận mục tiêu.
