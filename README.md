# Design-and-Analysis-of-different-LFSRs-for-VLSI-Testing

### Circuit under Test is  
![Circuit_Under_Test](https://github.com/garimaa-goyal/Design-and-Analysis-of-different-LFSRs-for-VLSI-Testing/assets/57147709/d748aa97-aac8-4465-a961-0c3ad3ea1d50)

 | Fault | Test Vectors{a,b,c,d} |
| ------------- | ------------- |
| e_iO Stuck-at 0 | {0,0,x,x},{0,1,x,x},{1,0,x,x} |
| e_iO Stuck-at 1  |{1,1,x,x}  |
|F0_iO Stuck-at 0 | {x,x,0,0}|
|F0_iO Stuck-at 1 |{x,x,0,1},{x,x,1,0},{x,x,1,1}|
|g_iO Stuck-at 0 | {0,0,0,0},{0,1,0,0},{1,0,0,0}|
|g_iO Stuck-at 1| {1,1,0,1},{1,1,1,0},{1,1,1,1}|

#### Test vectors using Dominance: [{1,1,0,0},{0,0,0,1},{1,0,0,0},{0,1,0,0}].

###Results
|Type of LFSR| Number of clock cycles|
|------------|-----------------------|
|Primitive polynomial|12|
|Bit Swapping| 9|
|Bit Reversal|2|

