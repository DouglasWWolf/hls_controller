@echo off
set solution=solution1
echo Cleaning %solution%
rd/s/q %solution%\.autopilot  
rd/s/q %solution%\.debug
rd/s/q %solution%\.tcls
rd/s/q %solution%\syn         
rd/s/q %solution%\impl      
rd/s/q %solution%\csim
echo  >%solution%\xyzzy.log
del    %solution%\*.log
echo  >.vitis_hls_log_all.xml
del    .vitis_hls_log_all.xml

