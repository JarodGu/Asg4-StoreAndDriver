//
// Created by Kaib Cropley on 3/4/2019.
//

#include "media.h"

// Constructor
Media::Media(char mediaType, int stock) : mediaType{mediaType}, stock{stock}  {

}

// Destructor
Media::~Media() {

}

// Returns media type
char Media::getMediaType() const {
    return mediaType;
}

// Returns current stock
int Media::getStock() const {
    return stock;
}

/*
 * Cannot set to negative stock
 */
void Media::setStock(int newStock)
{
    if(newStock > -1)
    {
        stock = newStock;
    }
}

bool Media::operator>(const Media &other) const {
    return mediaType > other.getMediaType();
}

bool Media::operator<(const Media &other) const {
    return mediaType < other.getMediaType();
}

bool Media::operator>=(const Media &other) const {
    return mediaType >= other.getMediaType();
}

bool Media::operator<=(const Media &other) const {
    return mediaType <= other.getMediaType();
}

bool Media::operator==(const Media &other) const {
    return mediaType == other.getMediaType();
}

bool Media::operator!=(const Media &other) const {
    return mediaType != other.getMediaType();
}



