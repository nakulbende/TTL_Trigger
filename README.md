# Arduino TTL Trigger

Make a TTL Trigger using Arduino. Simply writing a 5V voltage to one of the digital pins should do the job. 

This version outputs the ttl signal to a BNC terminal commonly used in scientific instruments. The sketch also includes an option to define duration for which the TTL trigger will be on HIGH.

Bill of materials:

1. [Arduino (any model is fine, this uses Nano)](http://www.amazon.com/SainSmart-Nano-v3-0-Compatible-Arduino/dp/B00761NDHI/ref=sr_1_2?s=electronics&ie=UTF8&qid=1442873593&sr=1-2&keywords=arduino+nano)

2. [Momentary push button](http://www.amazon.com/Panel-Momentary-Tactile-Button-Switch/dp/B005YX046I/ref=sr_1_11?ie=UTF8&qid=1442873639&sr=8-11&keywords=momentary+push+button)

3. [Prototyping breadboard/ PCB](http://www.amazon.com/Solderless-BreadBoard-tie-points-power-rails/dp/B005GYAIES/ref=sr_1_1?s=electronics&ie=UTF8&qid=1442873628&sr=1-1&keywords=solderless+board)

4. [BNC Female terminal](http://www.mouser.com/ProductDetail/Gravitech/BNC-M-TERM/?qs=sGAEpiMZZMvtrnhC60i%252bOjexXRV6VXQ2dg6z78%252bRw6I%3d)

5. [Voltage regulator (positive, 5V)](http://www.amazon.com/Addicore-Positive-Regulator-L7805CV-Antistatic/dp/B00H7KTRO6/ref=sr_1_3?ie=UTF8&qid=1442873567&sr=8-3&keywords=voltage+regulator)

Circuit:
Assemble the circuit according to the following schematics:
![TTL Trigger circuit](/Circuit/BNC TTL trigger.png "TTL Trigger with BNC terminal")

Mount:
![Mount](/3d printed mount/mount.PNG "3D printed mount")
The rep also includes a mount which can be 3d printed for encasing all the components. The mount is compatible with a Nano mounted on breadboard, and has slots for LED and push button. 

