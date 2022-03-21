OBJS := main.o

box: $(OBJS)
	$(CC) -o box $(CFLAGS) $(LDFLAGS) $(OBJS)

$(OBJS) : %.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

