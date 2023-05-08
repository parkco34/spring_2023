#!/usr/bin/env python
import sys
from PIL import Image
import pytesseract
import cv2

def preprocess_image(image_path):
    img = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)
    _, img_thresholded = cv2.threshold(img, 0, 255, cv2.THRESH_BINARY | cv2.THRESH_OTSU)
    return Image.fromarray(img_thresholded)

def image_to_text(image_path):
    img = preprocess_image(image_path)
    text = pytesseract.image_to_string(img)
    return text

def main():
    if len(sys.argv) != 2:
        print("Usage: python img_to_text.py <image_path>")
        sys.exit(1)

    image_path = sys.argv[1]
    text = image_to_text(image_path)

    print("The extracted text from the image is:")
    print(text)

if __name__ == "__main__":
    main()

