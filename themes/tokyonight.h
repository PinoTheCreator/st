/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  "#32344a",   /*  0: black    */
  "#f7768e",   /*  1: red      */
  "#9ece6a",   /*  2: green    */
  "#e0af68",   /*  3: yellow   */
  "#7aa2f7",   /*  4: blue     */
  "#ad8ee6",   /*  5: magenta  */
  "#449dab",   /*  6: cyan     */
  "#787c99",   /*  7: white    */
  "#444b6a",   /*  8: brblack  */
  "#ff7a93",   /*  9: brred    */
  "#b9f27c",   /* 10: brgreen  */
  "#ff9e64",   /* 11: bryellow */
  "#7da6ff",   /* 12: brblue   */
  "#bb9af7",   /* 13: brmagenta*/
  "#0db9d7",   /* 14: brcyan   */
  "#acb0d0",   /* 15: brwhite  */

  [256] = "#1a1b26",
  [257] = "#a9b1d6",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 256;
