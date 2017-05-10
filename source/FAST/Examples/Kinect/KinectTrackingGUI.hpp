#ifndef FAST_KINECT_TRACKING_GUI_HPP_
#define FAST_KINECT_TRACKING_GUI_HPP_

#include "FAST/Visualization/Window.hpp"

class QPushButton;
class QLineEdit;
class QLabel;
class QElapsedTimer;
class QListWidget;

namespace fast {

class KinectStreamer;
class KinectTracking;

class KinectTrackingGUI : public Window {
    FAST_OBJECT(KinectTrackingGUI)
    public:
        void extractPointCloud();
        void restart();
        void toggleRecord();
        void updateMessages();
        void playRecording();
        void refreshRecordingsList();
    private:
        KinectTrackingGUI();

        SharedPointer<KinectStreamer> mStreamer;
        SharedPointer<KinectTracking> mTracking;
        QPushButton* mRecordButton;
        QLineEdit* mStorageDir;
        QLabel* mRecordingInformation;
        QElapsedTimer* mRecordTimer;
        QListWidget* mRecordingsList;

};

}

#endif
