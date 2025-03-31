

#include <stdio.h>
#include <stdlib.h>


#if __APPLE__
#include </opt/homebrew/include/libusb-1.0/libusb.h>
#elif
#include <libusb.h>
#endif


#define TI_VID 0x0451
#define TI_PID 0xe008

int main()
{
	libusb_context *ctx = NULL;
	libusb_device_handle *hnd = NULL;

	int res;
	res = libusb_init(&ctx);
	if(res < 0)
	{
		perror("[ERROR] libusb could not be init\n");
		exit(1);
	}
	
	hnd = libusb_open_device_with_vid_pid(ctx, TI_VID, TI_PID);
	if(hnd == NULL)
	{
		perror("[ERROR] could not get handle\n");
	}	
}
