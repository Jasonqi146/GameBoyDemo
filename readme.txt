The GBA lecture demo is developed in 17 stages. The source code for each stage of development is in a separate file. The files are named main1.c through main17.c, corresponding to the numbers below. Each file builds upon the previous file (fixing a problem, or adding new features).

The makefile expects the code to be in main.c, and uses Mednafen, the GBA emulator. (You can copy any of the 17 iterations of the lecture demo into main.c, and then run them.)

To run a specific version of the GBA Demo, type:
$ cp main1.c main.c
$ make med

Hit CTRL-C to quit the GBA emulator (or any program).
If you have compilation errors, try typing make clean, and then make med.

See Lecture Slides L17 and L18 and the Lab Guides for more detailed info about programming the GBA. Also see the TONC website for GBA documentation.
http://www.coranac.com/tonc/text/


Program versions:

1. Light up a pixel
2. Light up a pixel in the center of the screen
3. Change the pixel color
4. Draw a rectangle
5. Bounce a rectangle -- without blacking
6. Bounce a rectangle -- blacking but without delay
7. Bounce a rectangle -- with delay and blacking
8. Get the bouncing boundaries right
9. Bounce a rectangle -- with vblank delay and blacking
10. Use up-arrow and down-arrow to change the size — issues with holding key
11. Fix button behavior 
12. Add state 
13. Add multiple balls 
14. Allow dynamic ball count changes 
	(dma powerpoint)
15. Add DMA
	(library powerpoint)
16. Split off library (add lib.o to OFILES in Makefile)
	(text powerpoint)
17. Add scoring (add text.o font.o to OFILES in Makefile)
