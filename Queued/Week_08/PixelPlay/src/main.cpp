#line 1 "PixelPlay"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "PixelPlay"
ofPixels pixels;
ofTexture texture;

void setup() {
	// put your setup code here, to run once:
	
	ofLoadImage(pixels, "download.jpg");

    for (int y = 0; y < pixels.getHeight(); y += 4)
    {
        for (int x = 0; x < pixels.getWidth(); x += 4)
        {
            // int index = (x + y * pixels.getWidth()) * pixels.getNumChannels();
            int index = pixels.getPixelIndex(x, y);
            
            // red pixel 
            pixels[index] = 0;
            pixels[index + 1] = 0;
        }
    }

	
	texture.loadData(pixels);
}

void draw() {
    texture.draw(0, 0);
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

