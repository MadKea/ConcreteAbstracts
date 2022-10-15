# ConcreteAbstracts
COS 214 Project

## Building

### Option 1

 1. Try running `./build.sh`. If you get a permission denied error, first run `chmod +x build.sh`
 2. Change directory into the `build` directory and run `make`. This will compile the project and 
create an executable in the `build` directory. You can also run it with `make run`

### Option 2 (If option 1 doesn't work)
 1. Create a folder called `build` in the main directory.
 2. Change directory into  `build` and run `cmake ..`
 3. Now you can use `make` or `make run` inside the `build` directory like normal. 