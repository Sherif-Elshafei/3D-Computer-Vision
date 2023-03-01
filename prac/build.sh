#g++ chapter2.cpp -I/usr/local/include/opencv4/ -lopencv_core -lopencv_videoio -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc
#g++ chapter2.cpp -I/usr/local/include/opencv4 -lopencv_core -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc -lopencv_videoio

# g++ surf.cpp -I/usr/local/include/opencv4 \
# -lopencv_xfeatures2d -lopencv_features2d -lopencv_core -lopencv_videoio \
# -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc

#structureFromStereo:
# g++ structureFromStereo.cpp -o a.out -I/usr/local/include/opencv4 \
# -lopencv_xfeatures2d -lopencv_features2d -lopencv_core -lopencv_videoio \
# -lopencv_highgui -lopencv_imgcodecs -lopencv_imgproc \
# -lopencv_stereo -lopencv_shape -lopencv_calib3d -lopencv_ccalib -lopencv_alphamat -lopencv_hfs \
# -lopencv_stitching -lopencv_gapi -lopencv_flann -lopencv_dpm -lopencv_photo -lopencv_phase_unwrapping \
# -lopencv_surface_matching 

#g++ structureFromStereo.cpp -o a.out -I/usr/local/include/opencv4

g++ structureFromStereo.cpp -I/usr/local/include/opencv4 