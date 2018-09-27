for the buttons 268B (Buttons)
    long long buttons; 
    long is equivalent to long int, just like what i read in internet, long long int is a signed integral type is at least 64 bits.
    
    cin >> buttons; (this is when i input how many the buttons are)
    
    cout << (buttons - 1) * buttons * (buttons + 1) / 6 + buttons << endl; 
    
    this is where the algorithm starts, for example :
     if i input 2;
     (2-1)*2*(2+1)/6+2
     =3
    return 0;
    }
