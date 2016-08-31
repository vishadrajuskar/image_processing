**Histogram equalization**

Histogram equalization is a technique for adjusting image intensities to enhance contrast.

This method usually increases the global contrast of many images, especially when the usable data of the image is represented by close contrast values.

Through this adjustment, the intensities can be better distributed on the histogram.
This allows for areas of lower local contrast to gain a higher contrast.
Histogram equalization accomplishes this by effectively spreading out the most frequent intensity values.
The method is useful in images with backgrounds and foregrounds that are both bright or both dark.

**ADVANTAGE:**

A key advantage of the method is that it is a fairly straightforward technique and an invertible operator.
So in theory, if the histogram equalization function is known, then the original histogram can be recovered.

**DIS-ADVANTAGE:**

A disadvantage of the method is that it is indiscriminate.
It may increase the contrast of background noise, while decreasing the usable signal.
