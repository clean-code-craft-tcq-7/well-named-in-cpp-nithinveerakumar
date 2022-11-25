#include "TelecomColorCode.h"
using namespace std;
namespace TelComColorCoder {
    // Get the corresponding pair number for the given color pair
    int GetPairNumberFromColorPair(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    // Get the corresponding colour pair for the given pair number
    ColorPair GetColorPairFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    // print the Telecommunication colour code table
    void printColourCoding() {
        int numberOfPossiblePair = (numberOfMajorColors * numberOfMinorColors);
        cout <<"------------------------------------------------------"<<endl;
        for(int pairNumber=1;pairNumber<=numberOfPossiblePair;pairNumber++)
        {
            ColorPair colorPair = GetColorPairFromPairNumber(pairNumber);
            cout << pairNumber << " " << colorPair.getColorPairString() << endl;
        }
        cout <<"------------------------------------------------------"<<endl;
    }
}
