# mujoco-simulate-csv-replay
Video Demonstration
-------------
https://youtu.be/jYlf2gbSums

Prerequisites
-------------

**Install and verify mujoco 2.2.1**

Go to https://pab47.github.io/mujoco.html

Scroll to No. 0 then follow the guide in either video form, or from the “description” tab

I would recommend any debian based linux distribution for using/working on this project

Clone the repository from https://github.com/Trojak0/mujoco-simulate-csv-replay

After Installation
-----------------

In a terminal, navigate to “sample” located in /extended_gui_with_csv_replay/mujoco-2.2.1/sample

Type “make” into terminal and press enter

If some dependencies are not installed, install them. They should be installed if the installation of mujoco 2.2.1 was done properly

This will launch a GLFW window with the a1_arm.xml and data.csv loaded and the following features will be available:

* Time slider, used to scrub through the joint playback

* Play speed, used to set the replay speed of the csv joint movement replay

* A button to go back a frame in the CSV data, marked with “<<”

* A button to go forward a frame in the CSV data, marked with “>>”

* A button to set the play speed to half speed, that plays the replay from where the time slider is set to


Some not so obvious specifics are that the “Play” button is only for playing the replay at the speed set to in the “Play Speed” slider, i.e. playing at half speed, then pressing stop, then pressing play again will result in the player playing at the speed set by the “Play Speed” slider.

To use this program with a different csv, perhaps for replaying a different path or sensor data gathered from somewhere else, simply remove the current data.csv file from the sample folder and place the new one in the sample folder and then run make in the terminal. Do not execute simulate without running make when doing this, because the makefile ensures compatibility with any length of csv file using “slider_size_program”. The makefile can be and should be changed to use any model wanted by changing the path on the makefile that is “../mode/a1_arm.xml” to any xml model.
