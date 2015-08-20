#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofImage myImage;
        ofxCvColorImage colorImage; //To avoid grayscale image set from ixels error
        ofxCvGrayscaleImage grayImage, grayBg, grayDiff;
        ofxCvContourFinder contourFinder;
        vector<ofPolyline> polylines;
        vector<ofPoint> closestPoints;
        vector<unsigned int> closestIndices;
    
};
