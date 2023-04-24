# K_Aries

Aries, an OpenHPSDR ATU (kicad version) 
 
 This repository is a fork of the Aries ATU project designed by Kjell Karsten LA2NI and Laurence Barker G8NJJ.
 
 The original work can be downloaded from

https://github.com/LA2NI/

https://github.com/laurencebarker

A French version of the main documentation and user's note could be found in the "Documentation" directory

Main differences are : 

* - dual footprint  for the I2C ram (hard to find in SOIC package)
* - R19 trace bug corrected
* - input-output coax connector changed (Amphenol bnc straight with reference)
* - F-CU ground "forbiden zone" modified around tandem match output (R42-E42-R1-R2 of the original design)
* - dual footprint for 12V input J4 (Molex kk 2.54mm and Phoenix high current "board to wire" connector)
* - same Tianbo TRA2 L-12VDC-S-Z relay used for ATU and antenna switch 
(small mod for the "bypass" relay Total relay count is 22 TRA2 now




# Work under progress
do NOT use these files as long as this footnote hasn't been deleted
schéma totalement saisi