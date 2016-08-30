**Morphological Operations**

Mathematical morphology is a tool for extracting image components useful in the represation and description of region shape,
such as boundaries, skeletons and convex hulls. 
The language of mathematical morphology is set theory, and as such it can apply directly to binary (two-level) images: 
a point is either in the set (a pixel is set, or put to foreground) or it isn't (a pixel is reset, or put to background),
and the usual set operators (intersection, union, inclusion, complement) can be applied to them.

Basic operations in mathematical morphology operate on two sets: the first one is the image,
and the second one is the structuring element (sometimes also called the kernel,
although this terminology is generaly reserved for convolutions).
The structuring element used in practice is generally much smaller than the image, often a 3x3 matrix.

