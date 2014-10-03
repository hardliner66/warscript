<h1>warscript</h1>

Goal of the project is a simulation and training environment for wargames written in c++.

Every service, challenge, exploit etc. can be written as script to provide maximum portability. The language used for scripting is AngelScript.

The following functions will be provided by the script engine (checked functions are already implemented):
- [ ] Networking
  - [ ] TCP-like protocol for sending data
  - [ ] Text transfer protocol (to simulate text based protocols e.g.: HTTP)
  - [ ] Messaging system (think message queue)

- [ ] Filesystem
  - [ ] Sandboxed Filesystem (per simulated machine)
  - [ ] Simple access control system
