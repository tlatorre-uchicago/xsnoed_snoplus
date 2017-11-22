#ifndef __MENU_H__
#define __MENU_H__

#define MAX_EXTRA_NUM		100 // max 100 extra hit data types

/*
** Menu ID definitions
*/
enum {
	// popup window ID's (note: no #ifdef's here or resources get misaligned!)
	EVT_NUM_WINDOW = 1,
	EVT_INFO_WINDOW,
	HIST_WINDOW,
	FITTER_WINDOW,
	FLAT_WINDOW,
	PROJ_WINDOW,
	CRATE_WINDOW,
	DISP_WINDOW,
	SCALE_WINDOW,
	OPTICAL_WINDOW,
	MONTE_CARLO_WINDOW,
	TIME_WINDOW,
	SETTINGS_WINDOW,
	PRINT_WINDOW,
	SNOMAN_WINDOW,
	RCH_TIME_WINDOW,
	RCH_QHS_WINDOW,
	RCH_QHL_WINDOW,
	RCH_QLX_WINDOW,
	RECORD_INFO_WINDOW,
	HIT_INFO_WINDOW,	// Note: this must come after all projection windows
						// for hit information to be available when window is drawn
	NCD_INFO_WINDOW,
	NCD_SCOPE_WINDOW,
	SCOPE_WINDOW,
	ASCII_WINDOW,
	COLOUR_WINDOW,
	DAMN_WINDOW,
	DUMP_DATA_WINDOW,
	SNODB_WINDOW,
	ANIMATION_WINDOW,
	PASSWORD_WINDOW,
	NCD_MAP_WINDOW,
	NCD_HIST_WINDOW,
	NCD_HIT_INFO_WINDOW,
	CAEN_WINDOW,
	NUM_WINDOWS,
	
	// menu item ID's
	IDM_GEODESIC = 100,
	IDM_POLAR,
	IDM_NO_FRAME,
	IDM_PANE_FLAT,
	IDM_PANE_CRATE,
	IDM_PANE_PROJ,
	IDM_PANE_NCD,
	IDM_WHITE_BKG,
	IDM_GREYSCALE,
	IDM_WATER_LEVEL,
	IDM_ANCHOR_ROPES,
	IDM_PRINT_WINDOW,
	IDM_PRINT_IMAGE,
	IDM_ABOUT,
	IDM_HELP,
	IDM_QUIT,
	IDM_QUIT_SNOMAN,
	IDM_ROOT_CINT,
	IDM_UNIFORM,
	IDM_DUMP_RECORDS,
	IDM_TIME_WALK,
	IDM_LOAD_EVENT,
	IDM_OPEN_RCH,
	IDM_CONNECT,
	IDM_NEW_DISPLAY,
	IDM_CLOSE_FILE,
	IDM_SAVE_SETTINGS,
	IDM_CLEAR_EVENT,
	IDM_SUM_EVENT,
	IDM_FIT_EVENT,
	IDM_MOVE_SPHERE,
	IDM_MOVE_EVENT,
	IDM_MOVE_HOME,
	IDM_MOVE_TOP,
	IDM_MOVE_VERTEX,
	IDM_CUT_ALL,
	IDM_CUT_NONE,
	IDM_CUT_PMT_ONLY,
	IDM_CUT_NCD_ONLY,
	IDM_CUT_NORMAL,
	IDM_CUT_OWL,
	IDM_CUT_LOW_GAIN,
	IDM_CUT_FECD,
	IDM_CUT_BUTTS,
	IDM_CUT_NECK,
	IDM_CUT_SHAPER,
	IDM_CUT_MUX,
	IDM_CUT_SCOPE,
	IDM_CUT_DISCARDED,
	IDM_CUT_OVERSCALE,
	IDM_CUT_UNDERSCALE,
	IDM_TAC,
	IDM_DELTA_T,
	IDM_QHS,
	IDM_QHL,
	IDM_QLX,
	IDM_QHL_QHS,
	IDM_NHIT,
	IDM_NCD_SHAPER_VAL,
	IDM_NCD_SHAPER_HIT,
	IDM_NCD_MUX_HIT,
	IDM_NCD_SCOPE_HIT,
	IDM_DISP_dummy1,
	IDM_DISP_CRATE,
	IDM_DISP_CARD,
	IDM_DISP_CHANNEL,
	IDM_DISP_CELL,
	IDM_DISP_dummy2,
	IDM_CMOS_RATES,
	IDM_DISP_dummy3,
	IDM_DISP_EXTRA_FIRST,
	IDM_DISP_EXTRA_LAST	= IDM_DISP_EXTRA_FIRST + MAX_EXTRA_NUM,
	IDM_UNCALIBRATED,
	IDM_CAL_SIMPLE,
	IDM_CAL_NO_WALK,
#ifdef TITLES_CAL
	IDM_CAL_PETER,
#endif
#ifdef ROOT_FILE
	IDM_CAL_SNODB,
	IDM_CAL_SNOMAN,
#endif
	IDM_PRECALIBRATED,
	IDM_AUTO_VERTEX,
	IDM_AUTO_SUN,
	IDM_NEXT_EVENT,
	IDM_MOVE_SUN,
	IDM_PREV_EVENT,
	IDM_NEXT_VERTEX,
	IDM_REST_EVENT,
	IDM_HIT_LINES,
	IDM_RCON_LINES,
	IDM_FLAT_GEO,
	IDM_VESSEL,
	IDM_FLAT_VW_OUT,
	IDM_FLAT_VW_IN,
	IDM_PROJ_TO_HOME,
	IDM_PROJ_3D,
	IDM_PROJ_FLAT,
	IDM_PROJ_CRATE,
	IDM_PROJ_RECTANGULAR,
	IDM_PROJ_LAMBERT,
	IDM_PROJ_SINUSOID,
	IDM_PROJ_ELLIPTICAL,
	IDM_PROJ_MOLLWEIDE,
	IDM_PROJ_HAMMER,
	IDM_PROJ_EXTENDED_HAMMER,
	IDM_PROJ_POLAR,
//	IDM_PROJ_POLAR_COS,
	IDM_PROJ_POLAR_EQUAL,
	IDM_PROJ_dummy,
	IDM_PROJ_DUAL_SINUSOID,
	IDM_PROJ_DUAL_ELLIPTICAL,
	IDM_PROJ_DUAL_MOLLWEIDE,
	IDM_PROJ_DUAL_HAMMER,
	IDM_PROJ_DUAL_POLAR,
//	IDM_PROJ_DUAL_POLAR_COS,
	IDM_PROJ_DUAL_POLAR_EQUAL,
	IDM_DETECTOR_COORD,
	IDM_FIT_RELATIVE,
	IDM_SCOPE_OPEN,
	IDM_SCOPE_CLOSE,
	IDM_SCOPE_EXIT,
	IDM_SCOPE_CHANGE,
	IDM_SCOPE_LOAD,
	IDM_SCOPE_SAVE,
	IDM_SIZE_FIXED,
	IDM_SIZE_QHS,
	IDM_SIZE_SOLID_ANGLE,
	IDM_HIT_SQUARE,
	IDM_HIT_CIRCLE,
	IDM_MC_ALL_TRACKS,
	IDM_MC_SINGLE_TRACK,
	IDM_MC_SELECTED,
	IDM_HIDE_NAMES,
	IDM_INTERACTION_NAMES,
	IDM_HIGHLIGHTED_NAMES,
	IDM_OPEN_OVERLAY_RCH,
	IDM_CLOSE_OVERLAY_RCH,
	IDM_PROTECT,
	IDM_ECHO_MAIN,
	IDM_DATA_MENU,
	IDM_EXTRAS_MENU,
	IDM_LOGAMP_RAW,  // Note: A lot of code must change if the order of these changes
	IDM_LOGAMP_CAL,
	IDM_CHANNEL_ALL, // Note: A lot of code must change if the order of these changes
	IDM_CHANNEL_0,
	IDM_CHANNEL_1,
	IDM_CHANNEL_2,
	IDM_CHANNEL_3,
	IDM_CHANNEL_AUTO,
	IDM_CAEN_ALL,
	IDM_CAEN_ACTIVE,
	IDM_CAEN_AUTO,
	IDM_CAEN_LOG,
	IDM_CAEN_0,
	IDM_CAEN_1,
	IDM_CAEN_2,
	IDM_CAEN_3,
	IDM_CAEN_4,
	IDM_CAEN_5,
	IDM_CAEN_6,
	IDM_CAEN_7
};

// constants used to range check menu radio settings
#define IMAX_GEO			(IDM_PANE_NCD - IDM_GEODESIC)
#define IMAX_MOVE			(IDM_MOVE_EVENT - IDM_MOVE_SPHERE)

#if defined(ROOT_FILE) || defined(XSNOMAN)
#define IMAX_CALIBRATED		(IDM_PRECALIBRATED - IDM_UNCALIBRATED)
#else
#define IMAX_CALIBRATED		(IDM_CAL_NO_WALK - IDM_UNCALIBRATED)
#endif

#ifndef NO_DISPATCH
#define IMAX_DATATYPE		(IDM_CMOS_RATES - IDM_TAC)
#else
#define IMAX_DATATYPE		(IDM_DISP_CELL - IDM_TAC)
#endif

#define IMAX_PROJTYPE		(IDM_PROJ_DUAL_POLAR_EQUAL - IDM_PROJ_RECTANGULAR)
#define IMAX_PROJCOORDS		(IDM_FIT_RELATIVE - IDM_DETECTOR_COORD)
#define IMAX_SIZEOPTION		(IDM_SIZE_SOLID_ANGLE - IDM_SIZE_FIXED)
#define IMAX_SHAPEOPTION	(IDM_HIT_CIRCLE - IDM_HIT_SQUARE)
#define IMAX_MCTRACK		(IDM_MC_SELECTED - IDM_MC_ALL_TRACKS)
#define IMAX_SCOPE_CAL      (IDM_LOGAMP_CAL - IDM_LOGAMP_RAW)
#define IMAX_SCOPE_CHAN     (IDM_CHANNEL_AUTO - IDM_CHANNEL_ALL)

#endif // __MENU_H__
