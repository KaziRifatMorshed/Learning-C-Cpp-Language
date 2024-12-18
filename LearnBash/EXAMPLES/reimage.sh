#! /bin/bash
#
# 	Part of kde-service-menu-reimage Version 2.6.0
# 	Copyright (C) 2018-2019 Giuseppe Benigno <giuseppe.benigno(at)gmail.com>
# 	Copyright (C) 2024 Robert-André Mauchin <zebob.m(at)gmail.com>
#
# 	This program is free software: you can redistribute it and/or modify
# 	it under the terms of the GNU General Public License as published by
# 	the Free Software Foundation, either version 3 of the License, or
# 	(at your option) any later version.
#
# 	This program is distributed in the hope that it will be useful,
# 	but WITHOUT ANY WARRANTY; without even the implied warranty of
# 	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# 	GNU General Public License for more details.
#
# 	You should have received a copy of the GNU General Public License
# 	along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

#### languages strings messages #################
# Syntax for strings name is: msg_[$format]_$window_[$section]
# For languages as sr@Latn use srLatn

new_line="
"

load_language_en_US () {
	msg_common_software_not_found_title="Software not found"
	msg_common_magick_not_found_text="Software ImageMagick not found! Please, install it."
	msg_common_jhead_not_found_text="Software jhead not found! Please, install it."
	msg_common_webp_not_found_text="Software webp not found! Please, install it."
	msg_common_action_not_found_text="The requested action is not implemented."
	msg_common_overwrite_text="In case the images to be saved have the same name as those to be processed,${new_line}do you want to overwrite them?"
	msg_common_abort="Operation interrupted by the user."
	msg_common_file_not_found="File \"${name}\" not found!"
	msg_common_name_error="The file name \"${name}\" does not match a recognized format for a date.${new_line}${new_line}The name must be of the type: YYYY-MM-DD_HHMMSS.jpg"
	msg_common_start="Initialising ... "
	msg_common_progress_text="Processing file $processed of $quantity ($(basename "${input}"))"
	msg_common_finish_ok="Done."
	msg_common_finish_error="An error has occurred."
	msg_common_transparent_unsupported_text="The JPEG format does not support transparency.${new_line}Convert to PNG file."
# 	msg_common_details="Details:"

	msg_agif_title="Convert files into animated GIF"
	msg_agif_delay_input_text="Enter the duration of the single frame, in hundredths of a second:${new_line}(100 = 1 second)"
	msg_agif_loop_input_text="Do you want loop playback?"
	msg_agif_cicles_number_input_text="Type the number of repetitions of the animation:"
	msg_agif_finish_title="Convert files into animated GIF"

	msg_apng_title="Convert files into animated PNG"
	msg_apng_delay_input_text="Enter the duration of the single frame, in hundredths of a second:${new_line}(100 = 1 second)"
	msg_apng_loop_input_text="Do you want loop playback?"
	msg_apng_cicles_number_input_text="Type the number of repetitions of the animation:"
	msg_apng_finish_title="Convert files into animated PNG"

	msg_webp_title="Convert files into animated WEBP"
	msg_webp_delay_input_text="Enter the duration of the single frame, in hundredths of a second:${new_line}(100 = 1 second)"
	msg_webp_loop_input_text="Do you want loop playback?"
	msg_webp_cicles_number_input_text="Type the number of repetitions of the animation:"
	msg_webp_finish_title="Convert files into animated WEBP"

	msg_border_title="Add border"
	msg_border_size_input_text="Type the size of border in percentage or in pixel.${new_line}${new_line}Valid values can be: 10% or 50"
	msg_border_finish_title="Add border to \"${name}\""

	msg_colorspace_title="Changing colorspace to \"${value}\""
	msg_colorspace_finish_title="Changing colorspace of \"${name}\""

	msg_compress_title="Image compression with quality \"${value}\""
	msg_compress_quality_input_text="Type the quality:"
	msg_compress_finish_title="Compression of \"${name}\""

	msg_convert_title="Convert file to \"${value}\" format"
	msg_convert_format_input_text="Type the format you want.${new_line}A complete list can be obtained from the shell with: mogrify -list format${new_line}or by consulting the ImageMagick manual."
	msg_convert_finish_title="Convertion of \"${name}\""

	msg_favicons_title="Favicons generation"
	msg_favicons_finish_title="Generating favicons by \"${name}\""

	msg_montage_title="Append picture"
	msg_montage_finish_title="Append picture to \"${name}\""

	msg_optimize_title="Optimization for web"
	msg_optimize_finish_title="Optimize \"${name}\""

	msg_overturn_title="Overturn file to \"${value}\""
	msg_overturn_finish_title="Overturn \"${name}\""

	msg_resize_title="Resizing image \"${value}\""
	msg_resize_scale_input_text="Type the scale factor in percentage or the maximum size you want for each direction.${new_line}You can choose a percentage or a pixel size.${new_line}${new_line}Valid values can be: 30% or 1024x768"
	msg_resize_finish_title="Resizing of \"${name}\""

	msg_rotate_title="Rotate file with angle of \"${value}\""
	msg_rotate_angle_input_text="Enter the desired rotation angle:"
	msg_rotate_finish_title="Rotation \"${name}\""

	msg_sepia_title="Sepia filter"
	msg_sepia_finish_title="Sepia filter to \"${name}\""

	msg_shadow_title="Drop shadow"
	msg_shadow_finish_title="Drop shadow to \"${name}\""

	msg_timestamp_title="Add timestamp"
	msg_timestamp_finish_title="Add timestamp to \"${name}\""

	msg_transparent2color_title="Changing transparence to color"
	msg_transparent2color_finish_title="Changing transparence to color of \"${name}\""

	msg_rfe_title="Rename file from Exif metadata"
	msg_rfe_no_metadata="Is it possible that the image does not contain metadata."
	msg_rfe_finish_title="Rename file \"${name}\""

	msg_rff_title="Rename file from file's date"
	msg_rff_finish_title="Rename file \"${name}\""

	msg_sffe_title="Setting file date from Exif Metadata"
	msg_sffe_no_metadata="Is it possible that the image does not contain metadata."
	msg_sffe_finish_title="Setting date of \"${name}\""

	msg_sffn_title="Setting file date from file name"
	msg_sffn_finish_title="Setting date of \"${name}\""

	msg_seff_title="Setting Exif date from file date"
	msg_seff_finish_title="Setting date of \"${name}\""

	msg_sefn_title="Setting Exif date from file name"
	msg_sefn_finish_title="Setting date of \"${name}\""

	msg_ac_title="Add comment"
	msg_ac_comment_input_text="Write comment to add:"
	msg_ac_finish_title="Add comment into \"${name}\""

	msg_ve_title="View metadata"
	msg_ve_finish_title="View metadata of \"${name}\""

	msg_ee_title="Extract metadata"
	msg_ee_finish_title="Extract metadata from \"${name}\""

	msg_dc_title="Delete comment"
	msg_dc_finish_title="Delete comment from \"${name}\""

	msg_de_title="Strip Exif section"
	msg_de_finish_title="Strip Exif section from \"${name}\""

	msg_di_title="Delete IPTC section"
	msg_di_finish_title="Delete IPTC section from \"${name}\""

	msg_dx_title="Deletex XMP section"
	msg_dx_finish_title="Deletex XMP section from \"${name}\""

	msg_purejpg_title="Strip all unnecessary data"
	msg_purejpg_finish_title="Strip all unnecessary data from \"${name}\""
}



load_language () {
	## Load localized strings AFTER english strings
	## - if localized strings not found use english for default
	## - if localized strings are incomplete use english only fot missing strings :-)
	load_language_en_US && [ "${lang}" != "en_US" ] && load_language_${lang}
}

lang=${LANGUAGE%%:*}
type load_language_${lang} &> /dev/null || lang='en_US'
load_language

################################################################################

help () {
	echo "${0##*/} is a bash script for:"
	echo "- manipulating settings in Exif jpeg headers used by most Digital Cameras."
	echo "- manipulating pictures properties"
	echo
	echo "USE:	${0##*/} action [value] files"
	echo
	echo "Actions on pictures:"
	echo "agif		create animated gif (no value request)"
	echo "apng		create animated png (no value request)"
	echo "webp		create animated webp (no value request)"
	echo "colorspace	change colorspace (currently only gray)"
	echo "compress	change quality (value in percent 1 to 100)"
	echo "convert		change format (value: all formats supported by ImageMagick"
	echo "optimize	Advance auto-optimization for web (no value request)"
	echo "overturn	overturn image (value: flip, flop)"
	echo "resize		resize image (value in percent  or XxY)"
	echo "rotate		rotate image (value is angle of rotation)"
	echo "sepia		sepia filter to image (value is percent of used filter)"
	echo
	echo "Actions with metadata:"
	echo "rfe		rename file with Exif datetime"
	echo "rff		rename file with file's datetime"
	echo "sffe		set file's datetime from Exif date"
	echo "sffn		set file's datetime from file's name"
	echo "seff		set Exif datetime from file's date"
	echo "sefn		set Exif datetime from file's name"
	echo "ac		Add/replace comment"
	echo "ve		View metadata"
	echo "ee		Extract metadata to file"
	echo "dc		Delete comment field"
	echo "de		Strip Exif section"
	echo "di		Delete IPTC section"
	echo "dx		Delete XMP section"
	echo "purejpeg	Strip all unnecessary data"
	echo
	echo
	echo "Examples:"
	echo "${0##*/} optimize /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} compress 70% /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} resize 50% /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} resize 640x480 /home/user/file1.jpg /home/user/file2.jpg"
	echo
	echo "${0##*/} convert png /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} agif /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} apng /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} webp /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} colorspace gray /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} sepia 80% /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} transparent2color /home/user/file1.png /home/user/file2.png"
	echo "${0##*/} border custom /home/user/file1.png /home/user/file2.jpg"
	echo "${0##*/} border transparent /home/user/file1.png /home/user/file2.png"
	echo "${0##*/} shadow /home/user/file1.png /home/user/file2.png"
	echo "${0##*/} rotate 90 /home/user/file1.jpg /home/user/file2.jpg"
	echo "${0##*/} overturn flip /home/user/file1.jpg /home/user/file2.jpg"
	echo
	echo "${0##*/} timestamp /home/user/file1.jpg /home/user/file2.jpg"
	echo
	echo "${0##*/} rfe /home/user/file1.jpg /home/user/file2.jpg"
	echo
	exit 0
}

formats () {
formats="
AAI	AAI Dune image
AI	Adobe Illustrator CS2
ART	PFS: 1st Publisher Clip Art
ARW	Sony Alpha Raw Image Format
AVIF	AVIF image file
AVS	AVS X image
BGR	Raw blue, green, and red samples
BGRA	Raw blue, green, red, and alpha samples
BGRO	Raw blue, green, red, and opacity samples
BIE	Joint Bi-level Image experts Group interchange format (2.1)
BMP	Microsoft Windows bitmap image
BMP2	Microsoft Windows bitmap image (V2)
BMP3	Microsoft Windows bitmap image (V3)
BRF	BRF ASCII Braille format
CAL	Continuous Acquisition and Life-cycle Support Type 1
CALS	Continuous Acquisition and Life-cycle Support Type 1
CANVAS	Constant image uniform color
CIN	Cineon Image File
CIP	Cisco IP phone image format
CLIP	Image Clip Mask
CMYK	Raw cyan, magenta, yellow, and black samples
CMYKA	Raw cyan, magenta, yellow, black, and alpha samples
CR2	Canon Digital Camera Raw Image Format
CRW	Canon Digital Camera Raw Image Format
CUR	Microsoft icon
CUT	DR Halo
DCM	Digital Imaging and Communications in Medicine image
DCR	Kodak Digital Camera Raw Image File
DCX	ZSoft IBM PC multi-page Paintbrush
DDS	Microsoft DirectDraw Surface
DFONT	Multi-face font package (Freetype 2.8.0)
DNG	Digital Negative
DOT	Graphviz
DPX	SMPTE 268M-2003 (DPX 2.0)
DXT1	Microsoft DirectDraw Surface
DXT5	Microsoft DirectDraw Surface
EPDF	Encapsulated Portable Document Format
EPI	Encapsulated PostScript Interchange format
EPS	Encapsulated PostScript
EPS2	Level II Encapsulated PostScript
EPS3	Level III Encapsulated PostScript
EPSF	Encapsulated PostScript
EPSI	Encapsulated PostScript Interchange format
EPT	Encapsulated PostScript with TIFF preview
EPT2	Encapsulated PostScript Level II with TIFF preview
EPT3	Encapsulated PostScript Level III with TIFF preview
ERF	Epson Raw Format
EXR	High Dynamic-range (HDR)
FAX	Group 3 FAX
FILE	Uniform Resource Locator (file://)
FITS	Flexible Image Transport System
FRACTAL	Plasma fractal image
FTP	Uniform Resource Locator (ftp://)
FTS	Flexible Image Transport System
G3	Group 3 FAX
G4	Group 4 FAX
GIF	CompuServe graphics interchange format
GIF87	CompuServe graphics interchange format (version 87a)
GRADIENT	Gradual linear passing from one shade to another
GRAY	Raw gray samples
GROUP4	Raw CCITT Group4
GV	Graphviz
H	Image expressed as a 'C/C++' char array
HALD	Identity Hald color lookup table image
HDR	Radiance RGBE image format
HEIF	HEIF image file
HISTOGRAM	Histogram of the image
HRZ	Slow Scan TeleVision
HTM	Hypertext Markup Language and a client-side image map
HTML	Hypertext Markup Language and a client-side image map
HTTP	Uniform Resource Locator (http://)
HTTPS	Uniform Resource Locator (https://)
ICB	Truevision Targa image
ICO	Microsoft icon
ICON	Microsoft icon
IIQ	Phase One Raw Image Format
INFO	The image format and characteristics
INLINE	Base64-encoded inline images
IPL	IPL Image Sequence
ISOBRL	ISO/TR 11548-1 format
ISOBRL6	ISO/TR 11548-1 format 6dot
JBG	Joint Bi-level Image experts Group interchange format (2.1)
JBIG	Joint Bi-level Image experts Group interchange format (2.1)
JNG	JPEG Network Graphics
JNX	Garmin tile format
JPE	Joint Photographic Experts Group JFIF format (80)
JPEG	Joint Photographic Experts Group JFIF format (80)
JPG	Joint Photographic Experts Group JFIF format (80)
JPS	Joint Photographic Experts Group JFIF format (80)
JSON	The image format and characteristics
JXL	Joint Photographic Experts Group XL format (80)
K25	Kodak Digital Camera Raw Image Format
KDC	Kodak Digital Camera Raw Image Format
LABEL	Image label
M2V	MPEG Video Stream
M4V	Raw MPEG-4 Video
MAC	MAC Paint
MAGICK	Predefined Magick Image (LOGO, ROSE, etc.); output same as 'H'
MAP	Colormap intensities and indices
MASK	Image Clip Mask
MAT	MATLAB level 5 image format
MATTE	MATTE format
MEF	Mamiya Raw Image File
MIFF	Magick Image File Format
MNG	Multiple-image Network Graphics (libpng 1.6.31,1.6.34)
MONO	Raw bi-level bitmap
MPC	Magick Persistent Cache image format
MRW	Sony (Minolta) Raw Image File
MSL	Magick Scripting Language
MSVG	ImageMagick's own SVG internal renderer
MTV	MTV Raytracing image format
MVG	Magick Vector Graphics
NEF	Nikon Digital SLR Camera Raw Image File
NRW	Nikon Digital SLR Camera Raw Image File
NULL	Constant image of uniform color
ORF	Olympus Digital Camera Raw Image File
OTB	On-the-air bitmap
OTF	Open Type font (Freetype 2.8.0)
PAL	16bit/pixel interleaved YUV
PALM	Palm pixmap
PAM	Common 2-dimensional bitmap format
PANGO	Pango Markup Language (Pangocairo 1.40.6)
PATTERN	Predefined pattern
PBM	Portable bitmap format (black and white)
PCD	Photo CD
PCDS	Photo CD
PCL	Printer Control Language
PCT	Apple Macintosh QuickDraw/PICT
PCX	ZSoft IBM PC Paintbrush
PDB	Palm Database ImageViewer Format
PDF	Portable Document Format
PDFA	Portable Document Archive Format
PEF	Pentax Electronic File
PES	Embrid Embroidery Format
PFA	Postscript Type 1 font (ASCII) (Freetype 2.8.0)
PFB	Postscript Type 1 font (binary) (Freetype 2.8.0)
PFM	Portable float format
PGM	Portable graymap format (gray scale)
PICON	Personal Icon
PICT	Apple Macintosh QuickDraw/PICT
PIX	Alias/Wavefront RLE image format
PJPEG	Joint Photographic Experts Group JFIF format (80)
PLASMA	Plasma fractal image
PNG	Portable Network Graphics (libpng 1.6.31,1.6.34)
PNG00	PNG inheriting bit-depth, color-type from original if possible
PNG24	opaque or binary transparent 24-bit RGB (zlib 1.2.11)
PNG32	opaque or transparent 32-bit RGBA
PNG48	opaque or binary transparent 48-bit RGB
PNG64	opaque or transparent 64-bit RGBA
PNG8	8-bit indexed with optional binary transparency
PNM	Portable anymap
PPM	Portable pixmap format (color)
PREVIEW	Show a preview an image enhancement, effect, or f/x
PS	PostScript
PS2	Level II PostScript
PS3	Level III PostScript
PSB	Adobe Large Document Format
PSD	Adobe Photoshop bitmap
PTIF	Pyramid encoded TIFF
PWP	Seattle Film Works
RADIAL-GRADIENT	Gradual radial passing from one shade to another
RAF	Fuji CCD-RAW Graphic File
RAS	SUN Rasterfile
RAW	Raw
RGB	Raw red, green, and blue samples
RGBA	Raw red, green, blue, and alpha samples
RGBO	Raw red, green, blue, and opacity samples
RGF	LEGO Mindstorms EV3 Robot Graphic Format (black and white)
RLA	Alias/Wavefront image
RLE	Utah Run length encoded image
RMF	Raw Media Format
RW2	Panasonic Lumix Raw Image
SCR	ZX-Spectrum SCREEN$
SCT	Scitex HandShake
SFW	Seattle Film Works
SGI	Irix RGB image
SHTML	Hypertext Markup Language and a client-side image map
SIX	DEC SIXEL Graphics Format
SIXEL	DEC SIXEL Graphics Format
SPARSE-COLOR	Sparse Color
SR2	Sony Raw Format 2
SRF	Sony Raw Format
STEGANO	Steganographic image
SUN	SUN Rasterfile
SVG	Scalable Vector Graphics (XML 2.9.4)
SVGZ	Compressed Scalable Vector Graphics (XML 2.9.4)
TEXT	Text
TGA	Truevision Targa image
THUMBNAIL	EXIF Profile Thumbnail
TIF	Tagged Image File Format (LIBTIFF, Version 4.0.8)
TIFF	Tagged Image File Format (LIBTIFF, Version 4.0.8)
TIFF64	Tagged Image File Format (64-bit) (LIBTIFF, Version 4.0.8)
TILE	Tile image with a texture
TIM	PSX TIM
TTC	TrueType font collection (Freetype 2.8.0)
TTF	TrueType font (Freetype 2.8.0)
TXT	Text
UBRL	Unicode Text format
UBRL6	Unicode Text format 6dot
UIL	X-Motif UIL table
UYVY	16bit/pixel interleaved YUV
VDA	Truevision Targa image
VICAR	VICAR rasterfile format
VID	Visual Image Directory
VIFF	Khoros Visualization image
VIPS	VIPS image
VST	Truevision Targa image
WBMP	Wireless Bitmap (level 0) image
WEBP	WEBP image
WMF	Windows Meta File
WMV	Windows Media Video
WMZ	Compressed Windows Meta File
WPG	Word Perfect Graphics
X	X Image
X3F	Sigma Camera RAW Picture File
XBM	X Windows system bitmap (black and white)
XC	Constant image uniform color
XCF	GIMP image
XPM	X Windows system pixmap (color)
XPS	Microsoft XML Paper Specification
XV	Khoros Visualization image
XWD	X Windows system window dump (color)
YCbCr	Raw Y, Cb, and Cr samples
YCbCrA	Raw Y, Cb, Cr, and alpha samples
YUV	CCIR 601 4:1:1 or 4:2:2
"
	kdialog --icon configure --title "${!msg_title}" --msgbox "${formats}"
}

######################################## Run compress and resize

run_compress () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -quality "${quality}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -quality "${quality}" "${dir}/${base}_compressed.${ext}" 2>&1)
	fi

	return $?
}

run_optimize () {
	## https://www.smashingmagazine.com/2015/06/efficient-image-resizing-with-imagemagick/
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -filter Triangle -define filter:support=2 -unsharp 0.25x0.25+8+0.065 -dither None -posterize 136 -quality 82 -define jpeg:fancy-upsampling=off -define png:compression-filter=5 -define png:compression-level=9 -define png:compression-strategy=1 -define png:exclude-chunk=all -colorspace sRGB -strip -interlace Plane "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -filter Triangle -define filter:support=2 -unsharp 0.25x0.25+8+0.065 -dither None -posterize 136 -quality 82 -define jpeg:fancy-upsampling=off -define png:compression-filter=5 -define png:compression-level=9 -define png:compression-strategy=1 -define png:exclude-chunk=all -colorspace sRGB -strip -interlace Plane "${input}"  "${dir}/${base}_optimized.${ext}" 2>&1)
	fi
	return $?
}

run_progressive () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -strip -interlace Plane "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -strip -interlace Plane "${dir}/${base}_progressive.${ext}" 2>&1)
	fi
	return $?
}

run_resize () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -resize "${scale}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -resize "${scale}" "${dir}/${base}_resized.${ext}" 2>&1)
	fi

	return $?
}

######################################## Run convert and rotate

run_agif () {
	msg=$("${magick_bin}" "${input}" -delay ${delay} "${@}" -loop ${loop} "${dir}/animated.gif" 2>&1)
	return $?
}

run_webp () {
	msg=$("${magick_bin}" "${input}" -delay ${delay} "${@}" -loop ${loop} "${dir}/animated.apng" 2>&1)
	return $?
}

run_webp () {
	msg=$("${magick_bin}" "${input}" -delay ${delay} "${@}" -loop ${loop} "${dir}/animated.webp" 2>&1)
	return $?
}

run_border () {
	alpha_support=true
	[ -n "$(file "${input}" | grep JFIF)" ] && alpha_support=false

	if [ "${color}" = "transparent" ] && [ "${alpha_support}" = false ]; then
		"${kdialog_bin}" --icon configure --title "${!msg_finish_title}" --sorry "${msg_common_transparent_unsupported_text}"
		ext=png
	fi

	if [ "${overwrite}" = true ]; then
		output="${dir}/${base}.${ext}"
	else
		output="${dir}/${base}_border.${ext}"
	fi

	msg=$("${magick_bin}" "${input}" -bordercolor "${color}" -border "${size}" "${output}" 2>&1)
	return $?
}

run_colorspace () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -colorspace "${value}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -colorspace "${value}" "${dir}/${base}_colorspace.${ext}" 2>&1)
	fi

	return $?
}

run_convert () {
	if [ "${overwrite}" != true ] && [ "${ext}" = "${format}" ]; then
		msg=$("${magick_bin}" "${input}" -format "${format}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -format "${format}" "${dir}/${base}_converted.${format}" 2>&1)
	fi

	return $?
}

run_favicons () {
	dest_dir="${base}-favicons"

	wxh=$("${magick_bin}" "${input}" -format "%w x %h" info:)
	w=${wxh%% *}
	h=${wxh##* }
	max=$(( w > h ? w : h ))

	SOURCE_IMG="${base}_square.png"
	"${magick_bin}" "${input}" -background transparent \
		-compose Copy -gravity center -extent ${max}x${max} "${SOURCE_IMG}"

	PLATFORMS=(ANDROID APPLE FAVICON MS)
	ANDROID_ICON_NAME='android-icon'
	ANDROID_ICON_SIZES=(36 48 72 96 144 192)
	APPLE_ICON_NAME='apple-icon'
	APPLE_ICON_SIZES=(57 60 72 76 114 120 144 152 180)
	FAVICON_ICON_NAME='favicon'
	FAVICON_ICON_SIZES=(16 32 96)
	MS_ICON_NAME='ms-icon'
	MS_ICON_SIZES=(70 144 150 310)

	BROWSERCONFIG='browserconfig.xml'
	MANIFEST='manifest.json'

	for PLATFORM in ${PLATFORMS[@]}; do
		NAME="${PLATFORM}_ICON_NAME"
		NAME=${!NAME}

		SIZES="${PLATFORM}_ICON_SIZES[@]"
		SIZES=${!SIZES}

		for i in ${SIZES[@]}; do
			mkdir -p "${dest_dir}"
			echo ${NAME}-${i}x${i}.png
			"${magick_bin}" "${input}" -resize "${i}x${i}!" "${SOURCE_IMG}" "${dest_dir}/${NAME}-${i}x${i}.png"
		done
	done

	"${magick_bin}" "${input}" -resize 16x16 "${SOURCE_IMG}" "${dest_dir}/favicon.ico"
	"${magick_bin}" "${input}" -resize 192x192 "${SOURCE_IMG}" "${dest_dir}/apple-icon.png"
	"${magick_bin}" "${input}" -resize 192x192 "${SOURCE_IMG}" "${dest_dir}/apple-icon-precomposed.png"

	yes | rm "${SOURCE_IMG}"

	mkdir -p "${dest_dir}"
	:> "${dest_dir}/${MANIFEST}"
	cat << EOF > "${dest_dir}/${MANIFEST}"
{
 "name": "App",
 "icons": [
  {
   "src": "\/android-icon-36x36.png",
   "sizes": "36x36",
   "type": "image\/png",
   "density": "0.75"
  },
  {
   "src": "\/android-icon-48x48.png",
   "sizes": "48x48",
   "type": "image\/png",
   "density": "1.0"
  },
  {
   "src": "\/android-icon-72x72.png",
   "sizes": "72x72",
   "type": "image\/png",
   "density": "1.5"
  },
  {
   "src": "\/android-icon-96x96.png",
   "sizes": "96x96",
   "type": "image\/png",
   "density": "2.0"
  },
  {
   "src": "\/android-icon-144x144.png",
   "sizes": "144x144",
   "type": "image\/png",
   "density": "3.0"
  },
  {
   "src": "\/android-icon-192x192.png",
   "sizes": "192x192",
   "type": "image\/png",
   "density": "4.0"
  }
 ]
}
EOF

	mkdir -p "${dest_dir}"
	:> "${dest_dir}/${BROWSERCONFIG}"
	cat << EOF > "${dest_dir}/${BROWSERCONFIG}"
<?xml version="1.0" encoding="utf-8"?>
<browserconfig><msapplication><tile><square70x70logo src="/ms-icon-70x70.png"/><square150x150logo src="/ms-icon-150x150.png"/><square310x310logo src="/ms-icon-310x310.png"/><TileColor>#ffffff</TileColor></tile></msapplication></browserconfig>
EOF

	return 0
}

run_montage () {
	msg=$("${magick_bin}" "${img_to_add}" -format "%h" info: 2>&1)
	code=$?
	[ $code -gt 0 ] && return $code

	height=$("${magick_bin}" "${input}" montage "${input}" -format "%h" info: 2>&1)
	msg=$("${montage_bin}" "${input}" -resize x${height} "${img_to_add}" -geometry +0+0 "${dir}/${base}_${img_to_add_base}.${ext}" 2>&1)
	return $?
}

run_overturn () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -"${value}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -"${value}" "${dir}/${base}_${value}.${ext}" 2>&1)
	fi

	return $?
}

run_rotate () {
	if [ "${overwrite}" = true ]; then
		if [ "${angle}" = "auto" ]; then
			msg=$("${magick_bin}" "${input}" -auto-orient "${input}" 2>&1)
		else
			msg=$("${magick_bin}" "${input}" -rotate ${angle} "${input}" 2>&1)
		fi
	else
		if [ "${angle}" = "auto" ]; then
			msg=$("${magick_bin}" "${input}" -auto-orient "${dir}/${base}_rotated.${ext}" 2>&1)
		else
			msg=$("${magick_bin}" "${input}" -rotate ${angle} "${dir}/${base}_rotated.${ext}" 2>&1)
		fi
	fi

	return $?
}

run_sepia () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -sepia-tone "${value}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -sepia-tone "${value}" "${dir}/${base}_sepia.${ext}" 2>&1)
	fi

	return $?
}

run_shadow () {
	jfif=$(file "${input}" | grep JFIF)
	[ -n "${jfif}" ] && "${kdialog_bin}" --icon configure --title "${!msg_finish_title}" --sorry "${msg_common_transparent_unsupported_text}" && return 0

	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" \( +clone -background black -shadow 80x8+8+8 \) +swap -background none -layers merge +repage "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" \( +clone -background black -shadow 80x8+8+8 \) +swap -background none -layers merge +repage "${dir}/${base}_shadow.${ext}" 2>&1)
	fi

	return $?
}

run_timestamp () {
	timestamp=$(jhead -exifmap 01.jpg | grep "Date/Time" | sed "s/^[^:]*:[[:blank:]]*\([[:digit:]]\{4\}\):\([[:digit:]]\{2\}\):\([[:digit:]]\{2\}\)/\1-\2-\3/")

	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -gravity SouthEast -pointsize 30 -fill white -annotate +30+30 "${timestamp}" "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -gravity SouthEast -pointsize 30 -fill white -annotate +30+30 "${timestamp}" "${dir}/${base}_timestamp.${ext}" 2>&1)
	fi

	return $?
}

run_transparent2color () {
	if [ "${overwrite}" = true ]; then
		msg=$("${magick_bin}" "${input}" -background "${color}" -flatten "${input}" 2>&1)
	else
		msg=$("${magick_bin}" "${input}" -background "${color}" -flatten "${dir}/${base}_background.${ext}" 2>&1)
	fi

	return $?
}

######################################## Run metadata scripts

## rename file with Exif datetime
run_rfe () {
	msg=$("${jhead_bin}" -exonly -q -nf%Y-%m-%d_%H%M%S -ft "${input}" 2>&1)
	code=$?
	[ -z "${msg}" ] && msg=msg_${action}_no_metadata && msg="${!msg}"
	return $code
}

## rename file with file's datetime
run_rff () {
	DATE=$(date -r "${input}" +%Y-%m-%d_%H%M%S)

	if [ "${overwrite}" = true ]; then
		[ "${dir}/${name}" = "${dir}/${DATE}.${ext}" ] && return 0

		msg=$(mv "${dir}/${name}" "${dir}/${DATE}.${ext}" 2>&1)
		return $?
	else
		destination_dir="renamed"
		msg=$(mkdir -p "${destination_dir}" 2>&1 && cp "${dir}/${name}" "${dir}/${destination_dir}/${DATE}.${ext}" 2>&1)
		return $?
	fi
}

########################################

## set file's datetime from Exif date
run_sffe () {
	custom_msg=msg_${action}_no_metadata
	msg=$("${jhead_bin}" -exonly -q -ft "${input}" 2>&1)
	code=$?
	[ -z "${msg}" ] && msg=msg_${action}_no_metadata && msg="${!msg}"
	return $code
}

## set file's datetime from file's name
run_sffn () {
	echo "${input}" | egrep -q "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}_[[:digit:]]{6}" || \
		{ "${kdialog_bin}" --title "${!msg_title}" --icon configure --error "${msg_common_name_error}" && qdbus $dbus_ref close && exit 2; }
	DATE=$(echo "${input}" | sed "s/.*\([[:digit:]]\{4\}\)-\([[:digit:]]\{2\}\)-\([[:digit:]]\{2\}\)_\([[:digit:]]\{2\}\)\([[:digit:]]\{2\}\)\([[:digit:]]\{2\}\).*/\1\2\3\4\5.\6/")

	msg=$(touch -t $DATE "${input}" 2>&1)
	return $?
}

########################################

## set Exif datetime from file's date
run_seff () {
	msg=$("${jhead_bin}" -q -dsft "${input}" 2>&1)
	return $?
}

## set Exif datetime from file's name
run_sefn () {
	echo "${input}" | egrep -q "[[:digit:]]{4}-[[:digit:]]{2}-[[:digit:]]{2}_[[:digit:]]{6}" || \
		{ "${kdialog_bin}" --title "${!msg_title}" --icon configure --error "${msg_common_name_error}" && qdbus $dbus_ref close && exit 2; }
	DATE=$(echo "${input}" | sed "s/.*\([[:digit:]]\{4\}\)-\([[:digit:]]\{2\}\)-\([[:digit:]]\{2\}\)_\([[:digit:]]\{2\}\)\([[:digit:]]\{2\}\)\([[:digit:]]\{2\}\).*/\1:\2:\3-\4:\5:\6/")

	msg=$("${jhead_bin}" -q -ts$DATE "${input}" 2>&1)
	return $?
}

## Add comment
run_ac () {
	msg=$("${jhead_bin}" -q -cl "${comment}" "${input}" 2>&1)
	return $?
}

## Viwe metadata
run_ve () {
	msg=$("${jhead_bin}" -q -exifmap "${input}" | grep -v "^Map" 2>&1)
	$kdialog_bin --msgbox "${msg}"
	return $?
}

## Extract metadata to file
run_ee () {
 	msg=$("${jhead_bin}" -q -exifmap "${input}" | grep -v "^Map" > "${dir}/${base}.txt" 2>&1)
	return $?
}

## Delete comment field
run_dc () {
	msg=$("${jhead_bin}" -q -dc "${input}" 2>&1)
	return $?
}

## Strip Exif section
run_de () {
	msg=$("${jhead_bin}" -q -de "${input}" 2>&1)
	return $?
}

## Delete IPTC section
run_di () {
	msg=$("${jhead_bin}" -q -di "${input}" 2>&1)
	return $?
}

## Delete XMP section
run_dx () {
	msg=$("${jhead_bin}" -q -dx "${input}" 2>&1)
	return $?
}

## Strip all unnecessary data
run_purejpg () {
	msg=$("${jhead_bin}" -q -purejpg "${input}" 2>&1)
	return $?
}

########################################

do_you_want_to_overwrite () {
	"${kdialog_bin}" --icon configure --title "${!msg_title}" --warningyesno "${msg_common_overwrite_text}" && overwrite=true || \
		{
			[ $? -eq 1 ] && overwrite=false || \
				{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }
		}
}

manage_input_separately () {
	[ ${#} -lt 1 ] && help
	[ ${#} -gt 1 ] && multiple_files=true

	type run_${action} > /dev/null || \
		{ "${kdialog_bin}" --title "${msg_common_software_not_found_title}" --icon configure --error "${msg_common_action_not_found_text}" && exit 2; }

	[ "${ask_overwrite}" = true ] && do_you_want_to_overwrite

	quantity=$#
	dbus_ref=$(kdialog --icon configure --title "${!msg_title}" --progressbar "${msg_common_start}" $quantity)
	qdbus $dbus_ref showCancelButton true
	processed=0

	for input in "$@"; do
		## Check if cancel button has been pushed
		[ "$(qdbus $dbus_ref wasCancelled)" = "true" ] && \
			qdbus $dbus_ref close && "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;

		dir=$(dirname -- "${input}")
		name="${input##*/}"
		base="${name%.*}"
		ext="${name##*.}"

		processed=$(($processed + 1))
		load_language

		[ ! -f "${input}" ] && "${kdialog_bin}" --title --icon configure "${!msg_title}" --error "${msg_common_file_not_found}" && break
		qdbus $dbus_ref setLabelText "${msg_common_progress_text}"

		msg_finish_title=msg_${action}_finish_title
		run_${action} && \
			"${kdialog_bin}" --title "${!msg_finish_title}" --passivepopup "${msg_common_finish_ok}" 5 || \
			{ qdbus $dbus_ref close; "${kdialog_bin}" --icon configure --title "${!msg_finish_title}" --detailederror "${msg_common_finish_error}" "${msg}"; exit 2; }

		qdbus $dbus_ref org.freedesktop.DBus.Properties.Set org.kde.kdialog.ProgressDialog value $processed
	done

	qdbus $dbus_ref close
}

manage_input_at_once () {
	[ ${#} -lt 1 ] && help

	dir=$(dirname -- "${1}")
	name="${1##*/}"
	load_language

	msg_finish_title=msg_${action}_finish_title
	run_${action} "${@}" && \
		"${kdialog_bin}" --title "${!msg_finish_title}" --passivepopup "${msg_common_finish_ok}" 5 || \
		{ qdbus $dbus_ref close; "${kdialog_bin}" --icon configure --title "${!msg_finish_title}" --detailederror "${msg_common_finish_error}" "${msg}"; exit 2; }

}

######################################## Set compress and resize input

set_compress () {
	value="${1}"
	shift

	quality="75%"
	if [ "${value}" = "custom" ]; then
		quality=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_compress_quality_input_text}" "${quality}") || \
			{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }
	else
		quality="${value}"
	fi

	ask_overwrite=true
	manage_input_separately "${@}"
}

set_optimize () {
	ask_overwrite=true
	manage_input_separately "${@}"
}

set_progressive () {
	ask_overwrite=true
	manage_input_separately "${@}"
}

set_resize () {
	value="${1}"
	shift

	if [ "${value}" = "custom" ]; then
		scale=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_resize_scale_input_text}") || \
			{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }
	else
		scale="${value}"
	fi

	ask_overwrite=true
	manage_input_separately "${@}"
}

######################################## Set convert and rotate input

set_agif () {
	[ ${#} -lt 2 ] && help

	default_delay=100
	default_cicles_number=1

	delay=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_agif_delay_input_text}" $default_delay) || {
		"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
	}

	"${kdialog_bin}" --icon configure --title "${!msg_title}" --yesnocancel "${msg_agif_loop_input_text}" && loop=0 || {
		[ $? -eq 1 ] && {
			loop=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_agif_cicles_number_input_text}" $default_cicles_number) || {
				"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
			}
		} || {
			"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
		}
	}

	manage_input_at_once "${@}"
}

set_apng () {
	[ ${#} -lt 2 ] && help

	default_delay=100
	default_cicles_number=1

	delay=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_apng_delay_input_text}" $default_delay) || {
		"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
	}

	"${kdialog_bin}" --icon configure --title "${!msg_title}" --yesnocancel "${msg_apng_loop_input_text}" && loop=0 || {
		[ $? -eq 1 ] && {
			loop=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_apng_cicles_number_input_text}" $default_cicles_number) || {
				"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
			}
		} || {
			"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
		}
	}

	manage_input_at_once "${@}"
}

set_webp () {
	[ ${#} -lt 2 ] && help

	default_delay=100
	default_cicles_number=1

	delay=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_webp_delay_input_text}" $default_delay) || {
		"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
	}

	"${kdialog_bin}" --icon configure --title "${!msg_title}" --yesnocancel "${msg_webp_loop_input_text}" && loop=0 || {
		[ $? -eq 1 ] && {
			loop=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_webp_cicles_number_input_text}" $default_cicles_number) || {
				"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
			}
		} || {
			"${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2;
		}
	}

	manage_input_at_once "${@}"
}

set_border () {
	value="${1}"
	shift

	if [ "${value}" = "custom" ]; then
		color=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --getcolor --default "#FFFFFF") || \
			{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }
	else
		color="${value}"
	fi

	size="5%"
	size=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_border_size_input_text}" "${size}") || \
		{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }

	ask_overwrite=true
	manage_input_separately "${@}"
}

set_colorspace () {
	value="${1}"
	shift

	ask_overwrite=true
	manage_input_separately "${@}"
}

set_convert () {
	value="${1}"
	shift

	[ "${value}" = "formats" ] && { formats; exit 0; }

	if [ "${value}" = "custom" ]; then
		format=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_convert_format_input_text}") || \
			{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }
	else
		format="${value}"
	fi

	for arg in "$@"; do
		arg_ext="${arg##*.}"
		[ "${arg_ext}" = "${format}" ] && ask_overwrite=true && break
	done

	manage_input_separately "${@}"
}

set_favicons () {
	value="${1}"
	shift

	for arg in "$@"; do
		arg_ext="${arg##*.}"
		[ "${arg_ext}" = "${format}" ] && ask_overwrite=true && break
	done

	manage_input_separately "${@}"
}

set_montage () {
	img_to_add=$("${kdialog_bin}" --title "${!msg_title}" --icon document-open --getopenfilename " " ) || \
		{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }

	img_to_add_name="${img_to_add##*/}"
	img_to_add_base="${img_to_add_name%.*}"

	manage_input_separately "${@}"
}

set_overturn () {
	value="${1}"
	shift

	ask_overwrite=true
	manage_input_separately "${@}"
}

set_rotate () {
	value="${1}"
	shift

	if [ "${value}" = "custom" ]; then
		angle=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_rotate_angle_input_text}") || \
			{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }
	else
		angle="${value}"
	fi

	ask_overwrite=true
	manage_input_separately "${@}"
}

set_sepia () {
	value="${1}"
	shift

	ask_overwrite=true
	manage_input_separately "${@}"
}

set_shadow () {
	ask_overwrite=true
	manage_input_separately "${@}"
}

set_timestamp () {
	ask_overwrite=true
	manage_input_separately "${@}"
}

set_transparent2color () {
	color=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --getcolor --default "#FFFFFF") || \
		{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }

	ask_overwrite=true
	manage_input_separately "${@}"
}

######################################## Set metadata functions input

## rename file with Exif datetime
set_rfe () {
	manage_input_separately "${@}"
}

## rename file with file's datetime
set_rff () {
	ask_overwrite=true
	manage_input_separately "${@}"
}

## set file's datetime from Exif date
set_sffe () {
	manage_input_separately "${@}"
}

## set file's datetime from file's name
set_sffn () {
	manage_input_separately "${@}"
}

## set Exif datetime from file's date
set_seff () {
	manage_input_separately "${@}"
}

## set Exif datetime from file's name
set_sefn () {
	manage_input_separately "${@}"
}

## Add comment
set_ac () {
	comment=$("${kdialog_bin}" --icon configure --title "${!msg_title}" --inputbox "${msg_ac_comment_input_text}") || \
		{ "${kdialog_bin}" --title "${!msg_title}" --passivepopup "${msg_common_abort}" 5 && exit 2; }

	manage_input_separately "${@}"
}

## Viwe metadata
set_ve () {
	manage_input_separately "${@}"
}

## Extract metadata to file
set_ee () {
	manage_input_separately "${@}"
}

## Delete comment field
set_dc () {
	manage_input_separately "${@}"
}

## Strip Exif section
set_de () {
	manage_input_separately "${@}"
}

## Delete IPTC section
set_di () {
	manage_input_separately "${@}"
}

## Delete XMP section
set_dx () {
	manage_input_separately "${@}"
}

## Strip all unnecessary data
set_purejpg () {
	manage_input_separately "${@}"
}

################################################################################

[ "${1}" = "-h" ] || [ "${1}" = "--help" ] || [ ${#} -lt 2 ] && help

kdialog_bin=$(which kdialog)
[ -z "${kdialog_bin}" ] && echo "kdialog not found!" && exit 1

magick_bin=$(which cjxl)
[ -z "${magick_bin}" "${input}" ] && \
	"${kdialog_bin}" --icon configure --title "${msg_common_software_not_found_title}" --error "${msg_common_cjxl_not_found_text}" && exit 2

magick_bin=$(which djxl)
[ -z "${magick_bin}" "${input}" ] && \
	"${kdialog_bin}" --icon configure --title "${msg_common_software_not_found_title}" --error "${msg_common_cjxl_not_found_text}" && exit 2

magick_bin=$(which magick)
[ -z "${magick_bin}" "${input}" ] && \
	"${kdialog_bin}" --icon configure --title "${msg_common_software_not_found_title}" --error "${msg_common_magick_not_found_text}" && exit 2

jhead_bin=$(which jhead)
[ -z "${jhead_bin}" ] && \
	"${kdialog_bin}" --title "${msg_common_software_not_found_title}" --icon configure --error "${msg_common_jhead_not_found_text}" && exit 2

webp_bin=$(which webpinfo)
[ -z "${webp_bin}" ] && \
	"${kdialog_bin}" --title "${msg_common_software_not_found_title}" --icon configure --error "${msg_common_webp_not_found_text}" && exit 2

action="${1}"
shift

load_language
msg_title=msg_${action}_title

type set_${action} &> /dev/null || \
	{ "${kdialog_bin}" --icon configure --title "${msg_common_software_not_found_title}" --error "${msg_common_action_not_found_text}" && exit 3; }

ask_overwrite=false
set_${action} "${@}"

exit 0
