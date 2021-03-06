/* -*-c-*- */

#ifndef _VIRTUAL_
#define _VIRTUAL_

#include "libs/FScreen.h"

int HandlePaging(
	XEvent *pev, int HorWarpSize, int VertWarpSize, int *xl, int *yt,
	int *delta_x, int *delta_y, Bool Grab, Bool fLoop,
	Bool do_continue_previous, int delay);
void checkPanFrames(void);
void raisePanFrames(void);
void initPanFrames(void);
Bool is_pan_frame(Window w);
void MoveViewport(struct monitor *, int newx, int newy,Bool);
void goto_desk(int desk, struct monitor *);
void do_move_window_to_desk(FvwmWindow *fw, int desk);
Bool get_page_arguments(FvwmWindow *, char *action, int *page_x, int *page_y,
    struct monitor **);
char *GetDesktopName(struct monitor *, int desk);

#endif /* _VIRTUAL_ */
