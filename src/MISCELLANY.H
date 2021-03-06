/********************************************************************************************************************************/
/* Created:  1-FEB-2006 14:49:24 by OpenVMS SDL EV1-69     */
/* Source:   7-DEC-2000 14:09:50 ISK$SYSMAN:[LAISHEV.WORK.SDL]SDLSHR.SDL;1       */
/********************************************************************************************************************************/
/*** MODULE $MISCellany IDENT EV1-65 ***/
#ifndef __MISCELLANY_LOADED
#define __MISCELLANY_LOADED 1
 
#pragma __nostandard			 /* This file uses non-ANSI-Standard features */
#pragma __member_alignment __save
#pragma __nomember_alignment
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __save		 /* Save the previously-defined required ptr size */
#pragma __required_pointer_size __short		 /* And set ptr size default to 32-bit pointers */
#endif
 
#ifdef __cplusplus
    extern "C" {
#define __unknown_params ...
#define __optional_params ...
#else
#define __unknown_params
#define __optional_params ...
#endif
 
#ifndef __struct
#if !defined(__VAXC)
#define __struct struct
#else
#define __struct variant_struct
#endif
#endif
 
#ifndef __union
#if !defined(__VAXC)
#define __union union
#else
#define __union variant_union
#endif
#endif
 
#define LINE_LENGTH 132
#define SDL$K_UNKNOWN_LENGTH -999
#define  sdl$putline  SDL$PUTLINE
	
#ifdef __NEW_STARLET
int sdl$putline(
	unsigned int *,
	struct {short string_length; char string_text[1024];} *,
	int *);
#else	/* __OLD_STARLET */
int sdl$putline(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  sdl$header  SDL$HEADER
	
#ifdef __NEW_STARLET
int sdl$header(
	unsigned int *,
	struct {short string_length; char string_text[2];} *,
	struct {short string_length; char string_text[2];} *,
	int *);
#else	/* __OLD_STARLET */
int sdl$header(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  sdl$getline  SDL$GETLINE
	
#ifdef __NEW_STARLET
int sdl$getline(
	unsigned int *,
	struct {short string_length; char string_text[1024];} *,
	struct {short string_length; char string_text[1024];} *);
#else	/* __OLD_STARLET */
int sdl$getline(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  sdl$writelist  SDL$WRITELIST
	
#ifdef __NEW_STARLET
int sdl$writelist(
	struct {short string_length; char string_text[1024];} *,
	unsigned int *);
#else	/* __OLD_STARLET */
int sdl$writelist(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  trim  TRIM
	
#ifdef __NEW_STARLET
struct {short string_length; char string_text[32];} trim(
	int *);
#else	/* __OLD_STARLET */
struct {short string_length; char string_text[32];} trim(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  fill  FILL
	
#ifdef __NEW_STARLET
struct {short string_length; char string_text[132];} fill(
	void *,
	int *);
#else	/* __OLD_STARLET */
struct {short string_length; char string_text[132];} fill(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  dimension_star_controlling  DIMENSION_STAR_CONTROLLING
	
#ifdef __NEW_STARLET
struct {short string_length; char string_text[132];} dimension_star_controlling(
	struct {short string_length; char string_text[32];} *,
	struct {short string_length; char string_text[32];} *);
#else	/* __OLD_STARLET */
struct {short string_length; char string_text[132];} dimension_star_controlling(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  get_discriminant  GET_DISCRIMINANT
	
#ifdef __NEW_STARLET
int get_discriminant(
	struct {short string_length; char string_text[1024];} *,
	struct {short string_length; char string_text[1024];} *,
	struct {short string_length; char string_text[1024];} *,
	struct {short string_length; char string_text[1024];} *);
#else	/* __OLD_STARLET */
int get_discriminant(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define  sdl$cvtstr  SDL$CVTSTR
	
#ifdef __NEW_STARLET
int sdl$cvtstr(
	struct {short string_length; char string_text[128];} *,
	struct {short string_length; char string_text[128];} *,
	struct {short string_length; char string_text[128];} *);
#else	/* __OLD_STARLET */
int sdl$cvtstr(__unknown_params);
#endif	/* #ifdef __NEW_STARLET */
#define SDL$K_SHRDATA_REV 1
#define SDL$M_ALPHA_OPT 0x1
#define SDL$M_VMS_OPT 0x2
#define SDL$M_PLI_OPT 0x4
#define SDL$M_CC_OPT 0x8
#define SDL$M_LISTING_OPT 0x10
#define SDL$M_NOHEADER_OPT 0x20
#define SDL$M_COPYRIGHT_OPT 0x40
#define SDL$M_GLOBAL_OPT 0x80
#define SDL$M_PARSE_OPT 0x100
#define SDL$M_COMMENT_OPT 0x200
#define SDL$M_MODULE_OPT 0x400
#define SDL$M_LITERAL_ACTIVE 0x800
#define SDL$M_SUPPRESS_PREFIX 0x1000
#define SDL$M_SUPPRESS_TAG 0x2000
#define SDL$M_MEMBER_ALIGN 0x4000
#define SDL$M_CHECK_ALIGN 0x8000
#define SDL$M_SUBFIELD_OPT 0x10000
#define SDL$M_VAX_OPT 0x20000
#define SDL$M_B64_OPT 0x40000
	
#ifdef __NEW_STARLET
typedef struct _sdl$_shr_data {
    __struct  {
        unsigned sdl$v_alpha_opt : 1;   /* lw                               */
        unsigned sdl$v_vms_opt : 1;
        unsigned sdl$v_pli_opt : 1;
        unsigned sdl$v_cc_opt : 1;      /* jak                              */
        unsigned sdl$v_listing_opt : 1;
        unsigned sdl$v_noheader_opt : 1;
        unsigned sdl$v_copyright_opt : 1;
        unsigned sdl$v_global_opt : 1;
        unsigned sdl$v_parse_opt : 1;
        unsigned sdl$v_comment_opt : 1;
        unsigned sdl$v_module_opt : 1;
        unsigned sdl$v_literal_active : 1; /* Set when processing LITERAL   */
/* The above is not a command line option like all the others,              */
/* but this is the only set of common flags available                       */
        unsigned sdl$v_suppress_prefix : 1; /* PG Suppress prefixes         */
        unsigned sdl$v_suppress_tag : 1; /* PG Suppress tags                */
        unsigned sdl$v_member_align : 1; /* Align structure members.  jak   */
        unsigned sdl$v_check_align : 1; /* Check alignment.	     jak    */
        unsigned sdl$v_subfield_opt : 1; /* BLISS_FIELDS extensions jak     */
        unsigned sdl$v_vax_opt : 1;     /* /VAX sets this	EV1-18      */
        unsigned sdl$v_b64_opt : 1;     /* /B64 sets this	EV1-21      */
/* add any new flags here! (take from unused fill below)                    */
        unsigned sdl$v_unused_opt : 13;
        } sdl$gl_options;
    short int shrdata_version;
    short int node_version;
    void *tree_root;
    int outfile;
    int lisfile;
    int infile_var;
    int incl_file;
    int main_return;
    int errorcount;
    int file_level;
    int listline;
    int unused_long [8];
    struct {short string_length; char string_text[132];} sdl_listing_header [2];
    struct {short string_length; char string_text[68];} full_source;
    struct {short string_length; char string_text[128];} vde_lang_file;
    char sdl_version [10];
    } SDL$_SHR_DATA;
 
#if !defined(__VAXC)
#define sdl$v_alpha_opt sdl$gl_options.sdl$v_alpha_opt
#define sdl$v_vms_opt sdl$gl_options.sdl$v_vms_opt
#define sdl$v_pli_opt sdl$gl_options.sdl$v_pli_opt
#define sdl$v_cc_opt sdl$gl_options.sdl$v_cc_opt
#define sdl$v_listing_opt sdl$gl_options.sdl$v_listing_opt
#define sdl$v_noheader_opt sdl$gl_options.sdl$v_noheader_opt
#define sdl$v_copyright_opt sdl$gl_options.sdl$v_copyright_opt
#define sdl$v_global_opt sdl$gl_options.sdl$v_global_opt
#define sdl$v_parse_opt sdl$gl_options.sdl$v_parse_opt
#define sdl$v_comment_opt sdl$gl_options.sdl$v_comment_opt
#define sdl$v_module_opt sdl$gl_options.sdl$v_module_opt
#define sdl$v_literal_active sdl$gl_options.sdl$v_literal_active
#define sdl$v_suppress_prefix sdl$gl_options.sdl$v_suppress_prefix
#define sdl$v_suppress_tag sdl$gl_options.sdl$v_suppress_tag
#define sdl$v_member_align sdl$gl_options.sdl$v_member_align
#define sdl$v_check_align sdl$gl_options.sdl$v_check_align
#define sdl$v_subfield_opt sdl$gl_options.sdl$v_subfield_opt
#define sdl$v_vax_opt sdl$gl_options.sdl$v_vax_opt
#define sdl$v_b64_opt sdl$gl_options.sdl$v_b64_opt
#endif		/* #if !defined(__VAXC) */
 
#else	    /* __OLD_STARLET */
struct sdl$_shr_data {
    __struct  {
        unsigned sdl$v_alpha_opt : 1;   /* lw                               */
        unsigned sdl$v_vms_opt : 1;
        unsigned sdl$v_pli_opt : 1;
        unsigned sdl$v_cc_opt : 1;      /* jak                              */
        unsigned sdl$v_listing_opt : 1;
        unsigned sdl$v_noheader_opt : 1;
        unsigned sdl$v_copyright_opt : 1;
        unsigned sdl$v_global_opt : 1;
        unsigned sdl$v_parse_opt : 1;
        unsigned sdl$v_comment_opt : 1;
        unsigned sdl$v_module_opt : 1;
        unsigned sdl$v_literal_active : 1; /* Set when processing LITERAL   */
/* The above is not a command line option like all the others,              */
/* but this is the only set of common flags available                       */
        unsigned sdl$v_suppress_prefix : 1; /* PG Suppress prefixes         */
        unsigned sdl$v_suppress_tag : 1; /* PG Suppress tags                */
        unsigned sdl$v_member_align : 1; /* Align structure members.  jak   */
        unsigned sdl$v_check_align : 1; /* Check alignment.	     jak    */
        unsigned sdl$v_subfield_opt : 1; /* BLISS_FIELDS extensions jak     */
        unsigned sdl$v_vax_opt : 1;     /* /VAX sets this	EV1-18      */
        unsigned sdl$v_b64_opt : 1;     /* /B64 sets this	EV1-21      */
/* add any new flags here! (take from unused fill below)                    */
        unsigned sdl$v_unused_opt : 13;
        } sdl$gl_options;
    short int shrdata_version;
    short int node_version;
    void *tree_root;
    int outfile;
    int lisfile;
    int infile_var;
    int incl_file;
    int main_return;
    int errorcount;
    int file_level;
    int listline;
    int unused_long [8];
    struct {short string_length; char string_text[132];} sdl_listing_header [2];
    struct {short string_length; char string_text[68];} full_source;
    struct {short string_length; char string_text[128];} vde_lang_file;
    char sdl_version [10];
    } ;
 
#if !defined(__VAXC)
#define sdl$v_alpha_opt sdl$gl_options.sdl$v_alpha_opt
#define sdl$v_vms_opt sdl$gl_options.sdl$v_vms_opt
#define sdl$v_pli_opt sdl$gl_options.sdl$v_pli_opt
#define sdl$v_cc_opt sdl$gl_options.sdl$v_cc_opt
#define sdl$v_listing_opt sdl$gl_options.sdl$v_listing_opt
#define sdl$v_noheader_opt sdl$gl_options.sdl$v_noheader_opt
#define sdl$v_copyright_opt sdl$gl_options.sdl$v_copyright_opt
#define sdl$v_global_opt sdl$gl_options.sdl$v_global_opt
#define sdl$v_parse_opt sdl$gl_options.sdl$v_parse_opt
#define sdl$v_comment_opt sdl$gl_options.sdl$v_comment_opt
#define sdl$v_module_opt sdl$gl_options.sdl$v_module_opt
#define sdl$v_literal_active sdl$gl_options.sdl$v_literal_active
#define sdl$v_suppress_prefix sdl$gl_options.sdl$v_suppress_prefix
#define sdl$v_suppress_tag sdl$gl_options.sdl$v_suppress_tag
#define sdl$v_member_align sdl$gl_options.sdl$v_member_align
#define sdl$v_check_align sdl$gl_options.sdl$v_check_align
#define sdl$v_subfield_opt sdl$gl_options.sdl$v_subfield_opt
#define sdl$v_vax_opt sdl$gl_options.sdl$v_vax_opt
#define sdl$v_b64_opt sdl$gl_options.sdl$v_b64_opt
#endif		/* #if !defined(__VAXC) */
 
#endif	    /* #ifdef __NEW_STARLET */
 
#pragma __member_alignment __restore
#ifdef __INITIAL_POINTER_SIZE			 /* Defined whenever ptr size pragmas supported */
#pragma __required_pointer_size __restore		 /* Restore the previously-defined required ptr size */
#endif
#ifdef __cplusplus
    }
#endif
#pragma __standard
 
#endif /* __MISCELLANY_LOADED */
 
