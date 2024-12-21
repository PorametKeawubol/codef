#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdint>

void ieee754ToFormula(uint64_t hexValue)
{
    // Masking and extracting parts
    int sign = (hexValue >> 63) & 1;
    int exponentRaw = (hexValue >> 52) & 0x7FF;     // Extract 11-bit exponent
    int exponent = exponentRaw - 1023;              // Adjust with bias
    uint64_t mantissa = hexValue & 0xFFFFFFFFFFFFF; // Extract 52-bit mantissa

    // Reconstruct mantissa as 1.M
    double fractionalPart = 1.0; // normalized numbers always start with 1
    for (int i = 0; i < 52; ++i)
    {
        if (mantissa & (1ULL << (51 - i)))
        {
            fractionalPart += std::pow(2, -(i + 1));
        }
    }

    // Sign
    std::string signStr = (sign == 0) ? "+" : "-";

    // Output result in formula format
    std::cout << "Value in IEEE-754 format:\n";
    std::cout << signStr << " 1." << fractionalPart - 1 << " x 2^(" << exponentRaw << " - 1023)\n";
    std::cout << "Value in decimal: " << (sign == 1 ? -1 : 1) * fractionalPart * std::pow(2, exponent) << std::endl;
}

int main()
{
    uint64_t hexValue = 0xC039000000000000 ;
    ieee754ToFormula(hexValue);

    return 0;
}
