//
// Created by Kenneth Balslev on 04/01/2018.
//

#include "XLValueEmpty.h"

using namespace OpenXLSX;
using namespace std;

/**
 * @details
 */
XLValueEmpty::XLValueEmpty(XLCellValue &parent)
    : XLValue(parent)
{

}

/**
 * @details Returns XLValueType::Empty
 */
XLValueType XLValueEmpty::ValueType() const
{
    return XLValueType::Empty;
}

/**
 * @details Returns XLCellType::Empty
 */
XLCellType XLValueEmpty::CellType() const
{
    return XLCellType::Empty;
}

/**
 * @details Returns an empty string, resulting in deletion of the type attribute.
 */
std::string XLValueEmpty::TypeString() const
{
    return "";
}

/**
 * @details Returns an empty string.
 */
std::string XLValueEmpty::AsString() const
{
    return "";
}
