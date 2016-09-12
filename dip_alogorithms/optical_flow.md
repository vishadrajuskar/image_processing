**What is optical flow ?**

*Optical flow* or *optic flow* is the pattern of apparent motion of objects, surfaces, and edges in a visual scene
caused by the relative motion between an observer (an eye or a camera) and the scene.

From OpenCV Docs : 

Optical flow is the pattern of apparent motion of image objects between two consecutive frames caused by the movemement of object or camera.
It is 2D vector field where each vector is a displacement vector showing the movement of points from first frame to second.

Consider the image below,

![optical_flow_basic1](https://github.com/prashantchikhalkar/image_processing/blob/master/sample_images/optical_flow_basic1.jpg?raw=true)

It shows a ball moving in 5 consecutive frames. The arrow shows its displacement vector. Optical flow has many applications in areas like :

  ->  Structure from Motion
  ->  Video Compression
  ->  Video Stabilization ...

Optical flow works on several assumptions:

    The pixel intensities of an object do not change between consecutive frames.
    Neighbouring pixels have similar motion.

**Optical flow**

Optical flow is the distribution of the apparent velocities of objects in an image.
By estimating optical flow between video frames, you can measure the velocities of objects in the video.
In general, moving objects that are closer to the camera will display more apparent 
motion than distant objects that are moving at the same speed.

Optical flow estimation is used in computer vision to characterize and quantify the motion of objects in a video stream,
often for motion-based object detection and tracking systems.
