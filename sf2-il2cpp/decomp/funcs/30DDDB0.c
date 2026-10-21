// OCAJCDIOMKB$$BMPAIEMDPIG @ RVA 0x30DDDB0

UnityEngine_Vector2_o OCAJCDIOMKB__BMPAIEMDPIG(MethodInfo *method)

{
  if ((DAT_04566375 & 1) == 0) {
                    /* try { // try from 031dddd4 to 032ddde3 has its CatchHandler @ 031ddde4 */
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_04566375 = 1;
  }
                    /* catch() { ... } // from try @ 031ddd34 with catch @ 031ddde4
                       catch() { ... } // from try @ 031dddd4 with catch @ 031ddde4 */
                    /* try { // try from 031ddde8 to 032dddeb has its CatchHandler @ 031dddf4 */
                    /* try { // try from 031dddec to 032dddf7 has its CatchHandler @ 031ddb74 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031ddde8 with catch @ 031dddf4
                        */
  return (UnityEngine_Vector2_o)
         (OCAJCDIOMKB_TypeInfo->static_fields->_MKEOMKHIEHM_k__BackingField).fields;
}

