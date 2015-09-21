# TTL_Trigger

Make a TTL Trigger using Arduino. Simple writing a 5V voltage to one of the digital pins should do the job. 

This version outputs to a BNC terminal commonly used in scientific instruments. The sketch also includes an option to define duration for which the TTL trigger will be on HIGH. 

Bill of materials:

1. Arduino (any model is fine, this uses Nano)
2. Momentary push button
3. Prototyping breadboard/ PCB
4. BNC terminal (http://www.mouser.com/ProductDetail/Gravitech/BNC-M-TERM/?qs=sGAEpiMZZMvtrnhC60i%252bOjexXRV6VXQ2dg6z78%252bRw6I%3d)
5. Voltage regulator (positive, 5V)

Circuit:

Assemble the circuit according to the following schematics:

![TTL Trigger circuit](/Circuit/BNC TTL trigger?raw=true "TTL Trigger with BNC terminal")

The rep also includes a mount which can be 3d printed for encasing all the components. 

