### Penumbra Project - Rocket Boom

# How to compile and run
1. Type 'make' to compile using SFML lib
2. run the output file 'sfml-app'

Install fsml on mac:
    install homebrew from: https://brew.sh/
    'brew install fsml'

Run makefiles on windows:
    1. install choco from https://chocolatey.org/install:
        Eller kjør i powershell som admin: 
        << Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1')) >>

    2. To enable makefile run capability, type: 'choco install make' in powershell
    3. Restart computer to enable all consoles to use 'make'
    4. Type 'make' in directory of makefile. Use 'make clean' to remove compiled files.
