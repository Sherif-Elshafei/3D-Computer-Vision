CPP = g++
INCLUDE_DIRECTORY1 = /usr/local/include/
INCLUDE_DIRECTORY2 = /home/sherif/opencv_contrib-4.6.0/modules/sfm/include/
INCLUDE_DIRECTORY3 = /usr/local/include/eigen3/
INCLUDE_DIRECTORY4 = /home/sherif/opencv_contrib-4.6.0/modules/sfm/src/libmv_light/
INCLUDE_DIRECTORY5 = /home/sherif/opencv_contrib-4.6.0/modules/viz/include/

LIBS = -lopencv_calib3d -lopencv_features2d -lopencv_flann -lopencv_core -lopencv_highgui -lopencv_imgcodecs \
 -lopencv_imgproc -lopencv_videoio -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_superres \
 -lopencv_video -lopencv_videostab -lopencv_stereo -lopencv_xfeatures2d

LIBS2 = -lopencv_calib3d -lopencv_features2d -lopencv_flann -lopencv_highgui -lopencv_imgcodecs \
 -lopencv_imgproc -lopencv_videoio -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_superres \
 -lopencv_video -lopencv_videostab -lopencv_stereo -lopencv_xfeatures2d

# find_essential:
# 	$(CPP) structureFromStereo.cpp ~/opencv_contrib/modules/sfm/src/fundamental.cpp ~/opencv_contrib/modules/sfm/src/numeric.cpp \
# 	~/opencv_contrib/modules/sfm/src/reconstruct.cpp ~/opencv_contrib/modules/sfm/src/conditioning.cpp \
# 	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) \
# 	-L/usr/local/lib/ $(LIBS)

ch2:
	$(CPP) chapter2.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) \
	-L/usr/local/lib/ $(LIBS)

surf:
	$(CPP) surf.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) \
	-L/usr/local/lib/ $(LIBS)

surfDiscMatcher:
	$(CPP) surfDiscMatcher.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) \
	-L/usr/local/lib/ $(LIBS)

structureFromStereo:
	$(CPP) structureFromStereo.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) -I$(INCLUDE_DIRECTORY4) \
	-L/usr/local/lib/ $(LIBS) -L/home/sherif/opencv-4.6.0/build/lib/ -lopencv_sfm

findCoordinates:
	$(CPP) findCoordinates.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) \
	-L/usr/local/lib/ $(LIBS)

camCalib:
	$(CPP) camCalib.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) \
	-L/usr/local/lib/ $(LIBS)

sceneReconstruct:
	$(CPP) sceneReconstruct.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) -I$(INCLUDE_DIRECTORY4) -I$(INCLUDE_DIRECTORY5) \
	-L/home/sherif/opencv-4.6.0/build/lib/ -lopencv_sfm -L/usr/lib/x86_64-linux-gnu -lopencv_viz -lopencv_core \
	-L/usr/local/lib/ $(LIBS)
	
launchViz:
	$(CPP) launchViz.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) -I$(INCLUDE_DIRECTORY4) -I$(INCLUDE_DIRECTORY5) \
	-L/home/sherif/opencv-4.6.0/build/lib/ -lopencv_sfm -L/usr/lib/x86_64-linux-gnu -lopencv_viz -lopencv_core \
	-L/usr/local/lib/ $(LIBS)

widgetPose:
	$(CPP) widgetPose.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) -I$(INCLUDE_DIRECTORY4) -I$(INCLUDE_DIRECTORY5) \
	-L/home/sherif/opencv-4.6.0/build/lib/ -lopencv_sfm -L/usr/lib/x86_64-linux-gnu/ -lopencv_viz -lopencv_core \
	-L/usr/local/lib/ $(LIBS)

transformations:
	$(CPP) transformations.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) -I$(INCLUDE_DIRECTORY4) -I$(INCLUDE_DIRECTORY5) \
	-L/home/sherif/opencv-4.6.0/build/lib/ -lopencv_sfm -L/usr/lib/x86_64-linux-gnu/ -lopencv_viz -lopencv_core \
	-L/usr/local/lib/ $(LIBS)

creatingWidgets:
	$(CPP) creatingWidgets.cpp \
	-I$(INCLUDE_DIRECTORY1) -I$(INCLUDE_DIRECTORY2) -I$(INCLUDE_DIRECTORY3) -I$(INCLUDE_DIRECTORY4) -I$(INCLUDE_DIRECTORY5) \
	-L/usr/local/lib/ $(LIBS) \
	-L/home/sherif/opencv-4.6.0/build/lib/ -lopencv_sfm -L/usr/lib/x86_64-linux-gnu/ -lopencv_viz -lopencv_core \
	