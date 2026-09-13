# Bare-Metal-C-Learning
These are just the chapter by chapter projects from the book Bare-Metal Embedded C Programming by Israel Gbati. I'm starting this about half way through the book so the earlier projects aren't here.


## Observations

- When wrting the content contained within this secection I couldn't help, but wonder some of the structuring here. For example, I'm not really sure why we don't just put the other macro defines suchas GPIOAEN within the header file. In theory, the header files is where we want to define all of our interfaces and also constants, such that they can be used within multiple places within the code base. Now obviously this is a small project with the straightforward goal of opperating a GPIO pin, but still I think that its cleaner to have them in the header.  
