# Smart Water Level Management System

## Introduction


Water level monitoring is the project which will be helpful in preventing water from wasting due to overflow and water shortage in the tank. This will help in industries where everything is automated and where water is used as a main element for production and manufacturing.

## Features

The main features of this project is , it displays the water level in an LCD display thereby informing the user whether the water must be filled in or not in a tank. The flow of the water stops when it is filled fully automatically thereby helping the user. Hence from the above features this project is user friendly.


## SWOT Analysis

Strengths of this project is water resource is conserved and manpower is reduced.
Weakness of the project is since water is used , maintanance is required. 
Opportunities of this project is, the data that is diplayed in output can be transmitted to the user directly.
Threats is the project is with more different versions.


## 4W's and 1'H
# Who:
This project can be used by any organisation where water is utilised.

# What:
The project helps in filling water in tank and cut off it automatically.

# When:
When water reaches minimum level in tank and when the water reaches maximum level.

# Where:
This project is used in organisations where water is main element.

# How:
This project is controled by atmega328.

## Detail requirements
# High Level Requirements:
| ID | DESCRIPTION | Status |
| ------ | ------ | ------ |
| 1 |Display the level of water| IMPLEMENTED |
| 2 | Filling of water when low level | IMPLEMENTED |
| 3 | Stop water filling when level is reached  | IMPLEMENTED |
# Low Level Requirements:
| ID | DESCRIPTION | Status |
| ------ | ------ | ------ |
| 1 |If low level switch open before uplevel the water won't fill in tank| IMPLEMENTED |

# Architecture
## Block Diagram
![](https://github.com/ShrinathDawari/M2_SmartWaterLevelManagementSystem/blob/e2819ec572de1da7b00ecc10b915f625d80a52d7/2_Architecture/Block%20Diagram/Block_Diagram.jpg)
## Flow chart
![](https://github.com/ShrinathDawari/M2_SmartWaterLevelManagementSystem/blob/e2819ec572de1da7b00ecc10b915f625d80a52d7/2_Architecture/Data%20Flow%20diagram/Flow_Diagram.png)




## Test Plan
# High Level Test Plan:
| ID | DESCRIPTION |Exp I/P|	Exp O/P|	Actual O/P| Status |
| ------ | ------ | ------ | ------ | ------ | ------ |
| 1 |Display Level Of Water|	Nil|	0L - 2500L|	700L	|Implemented|
|2|	LED Glows when both Switches Open|	Nil	|LED Glows	|LED Glows|	Implemented|
|3|	LED OFF when both Switches Closed|	Nil	|LED OFF|	LED OFF	|Implemented|
# Low Level Test Plan:
| ID | DESCRIPTION |Exp I/P	|Exp O/P|	Actual O/P|	 Status |
| ------ | ------ | ------ | ------ | ------ | ------ |
| 1 |LED Glows |	Nil|	LED Glows|	LED Glows|	Implemented|
|2|	Level of water varies from 0L - 2500L|	Nil|	varies from 0L - 2500L|	varies from 0L-2500L|	Implemented|


## Simulation Diagram
![](https://github.com/ShrinathDawari/M2_SmartWaterLevelManagementSystem/blob/3b4c2c8a585758986633c21030e86b9aa2549459/6_ImagesAndVideos/Simulation_Diagram.png)


