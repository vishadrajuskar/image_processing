**Canny edge detector**

*The Canny edge detection algorithm : *

The algorithm runs in five separate steps:

i.    Smoothing: Blurring of the image to remove noise. Gaussian filter is used here for smoothing purpose.

ii.   Finding gradients: The edges should be marked where the gradients of the image has large magnitudes(Sobel operator).

iii.  Non-maximum suppression: Only local maxima should be marked as edges.

iv.   Double thresholding: Potential edges are determined by thresholding.

v.    Edge tracking by hysteresis: Final edges are determined by suppressing all edges that are not connected to a very certain        (strong) edge.
