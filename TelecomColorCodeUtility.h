#include "TelecomColorCode.h"
namespace TelComColorCoder {
    int GetPairNumberFromColorPair(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    ColorPair GetColorPairFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    void printColourCoding() {
        int numberOfPossiblePair = numberOfMajorColors*numberOfMinorColors;
        for(int pairNumber=1;pairNumber<=numberOfPossiblePair;pairNumber++)
        {
            ColorPair colorPair = GetColorPairFromPairNumber(pairNumber);
            std::cout << pairNumber << "  " << colorPair.getColorPairString() << std::endl;
        }

    }
}