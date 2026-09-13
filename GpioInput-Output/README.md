 # Overview

 ## Goal

 The goal of this little project is to develop input and output drivers for the STM32 board.



## Observations

- When wrting the content contained within this secection I couldn't help, but wonder some of the structuring here. For example, I'm not really sure why we don't just put the other macro defines suchas GPIOAEN within the header file. In theory, the header files is where we want to define all of our interfaces and also constants, such that they can be used within multiple places within the code base. Now obviously this is a small project with the straightforward goal of opperating a GPIO pin, but still I think that its cleaner to have them in the header.  
- The book expected me to use CubeIDE which I was unable to download luckily I was able to use the VScode extension and some cobbling together of the make files and the other needed files to get the program running on the board. Definitly was a proccess to be sure, but I think I have a bit better of an understanding of all the stuff that goes into a bare-metal project. I'm definitly going to need a little cheat sheet since its a lot of things to keep in my head at once.
