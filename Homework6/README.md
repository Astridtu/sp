Server Code:

The server initializes a socket and listens for incoming connections.
For each incoming client connection, a new thread is created to handle the client using pthread_create.
The handle_client function reads messages from the client and broadcasts them to all connected clients.
The send_message_to_all_clients function sends a message to all connected clients.
Mutexes are used to protect shared resources (client_sockets array) to prevent race conditions.
Client Code:

The client connects to the server using a socket.
A new thread is created to handle incoming messages from the server using pthread_create.
The main thread reads input from the user and sends it to the server.
By using threads and mutexes, this implementation ensures that multiple clients can connect to the server and see all command operations and results in real time.
