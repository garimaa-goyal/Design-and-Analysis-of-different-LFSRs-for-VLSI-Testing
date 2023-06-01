#include <iostream>
#include <bitset>
using namespace std;

int main() {
    // Initialize variables
    bitset<4> reg_q(1);
    bitset<4> q;
    bool out, e, f;

    // Simulation parameters
    const int numIterations = 15;

    for (int i = 0; i < numIterations; ++i) {
        // Clock edge or reset condition
        bool clk = true; // Assuming positive-edge clock
        bool rst = false; // Assuming reset is inactive

        if (rst) {
            reg_q = bitset<4>(1);
        }
       
         else {
            bitset<4> shiftedBits(1);
           
            shiftedBits[3] = reg_q[0]; 
            shiftedBits[2] = reg_q[3] ^ reg_q[0]; 
            shiftedBits[1] = reg_q[2]; 
            shiftedBits[0] = reg_q[1]; 
            if(shiftedBits[0] == 0) // checking LSB
            {
            bool temp;
            temp = shiftedBits[3];
            shiftedBits[3] = shiftedBits[2];
            shiftedBits[2] = temp;


            }
            q = shiftedBits;
            reg_q = shiftedBits;
            //cout<<"q= "<<q<<endl;
           // cout<<"result"<<!(q[3] & q[2])<<endl;
        }

        // Perform AND gate operations
        e = !(q[3] & q[2]);
        f = !(q[1] | q[0]);
        out = e & f;

        // Print results
       cout << "Iteration " << i + 1 << ": ";
       cout << "q = " << q << ", e = " << e << ", f = " << f << ", out = " << out << std::endl;
    }

    return 0;
}
