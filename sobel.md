**SOBEL EDGE DETECTION:**

Edge points are where intensity difference between pixels is significant in an image.

There are many methods of detecting edges.
The majority methods may be grouped into these two categories:

i. Gradient: The gradient method detects the edge by looking for the maximum and minimum in the first derivative of the image.
For example, Roberts, Prewitt, Sobel where features detected have sharp edges.

ii. Laplacian: The Laplacian method searches for the zero crossings in the second derivative of the image to find edges
e.g. Marr-Hildreth, Laplacian of Gaussian, etc. An edge has one-dimensional shape of a ramp and calculating the derivative of the image can highlight its location.

