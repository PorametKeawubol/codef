#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdint>

void ieee754SingleToFormula(uint32_t hexValue) {
    // Masking and extracting parts
    int sign = (hexValue >> 31) & 1; // Extract sign bit
    int exponentRaw = (hexValue >> 23) & 0xFF; // Extract 8-bit exponent
    int exponent = exponentRaw - 127; // Adjust with bias
    uint32_t mantissa = hexValue & 0x7FFFFF; // Extract 23-bit mantissa

    // Reconstruct mantissa as 1.M
    double fractionalPart = 1.0; // normalized numbers always start with 1
    for (int i = 0; i < 23; ++i) {
        if (mantissa & (1U << (22 - i))) {
            fractionalPart += std::pow(2, -(i + 1));
        }
    }

    // Sign
    std::string signStr = (sign == 0) ? "+" : "-";

    // Output result in formula format
    std::cout << "Value in IEEE-754 format:\n";
    std::cout << signStr << " 1." << fractionalPart - 1 << " x 2^(" << exponentRaw << " - 127)\n";
    std::cout << "Value in decimal: " << (sign == 1 ? -1 : 1) * fractionalPart * std::pow(2, exponent) << std::endl;
}

int main() {
    uint32_t hexValue = 0x40c80000 ; // Example hex value
    ieee754SingleToFormula(hexValue);

    return 0;
}
