<h1>warscript</h1>

Goal of the project is a simulation and training environment for wargames written in c++.

Every service, challenge, exploit etc. can be written as script to provide maximum portability. The language used for scripting is AngelScript.

The following (unfinished) list of functions will be provided by the script engine (checked functions are already implemented):
- [ ] Networking (Virtual)
  - [ ] TCP-like protocol for sending data
  - [ ] Text transfer protocol (to simulate text based protocols e.g.: HTTP)
  - [ ] Messaging system (think message queue)

- [ ] Networking (Real)
  - [ ] Peer-to-peer connections between two or more warscript instances
  - [ ] Client-Server connections (for contests)

- [ ] Filesystem
  - [ ] Sandboxed Filesystem (per simulated machine)
  - [ ] Simple access control system

- [ ] Threading
  - [ ] 

- [ ] Shell
  - [ ] Command Shell for debugging and tinkering
  
- [ ] Debugging interface
