#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage ("appelbaum1.png");
    //myImage.setImageType (OF_IMAGE_GRAYSCALE);
    //colorImage.setFromPixels(myImage.getPixels(), myImage.getWidth(), myImage.getHeight());
    //grayImage = colorImage;
    grayImage.setFromPixels(myImage.getPixels(), 1039, 585);
    ofPoint ori;
    ori.set(0.0, 0.0);
    grayImage.ofBaseDraws::draw(ori);
    contourFinder.findContours(grayImage, 1039 * 585, ofGetWindowWidth() * ofGetWindowHeight(), 1200, false, true);
    polylines.clear();
    for(unsigned int i = 0; i < contourFinder.blobs.size(); i++) {
        ofPolyline cur;
        // add all the current vertices to cur polyline
        cur.addVertices(contourFinder.blobs[i].pts);
        cur.setClosed(true);
        
        // add the cur polyline to all these vector<ofPolyline>
        polylines.push_back(cur);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
	
	ofSetColor(255);
	//for (int i = 0; i < polylines.size(); ++i) {
        //polylines[i].draw();
    //}
    contourFinder.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
