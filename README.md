# App

## Idea

- sử dụng `QThreadPool`, `QRunnable` (giới hạn 4 đến 8 luồng để chia sẻ công việc của 25 camera)
- dùng `GStreamer` kết hợp `QOpenGLWidget` để stream rtsp với độ trễ thấp và tối ưu
- giới hạn fps
- call api với `QtNetwork` `QJsonDocument`
- lưu token với `QSettings`

## Install

### Ubuntu

```shell
sudo apt install -y libgl1-mesa-dev
```