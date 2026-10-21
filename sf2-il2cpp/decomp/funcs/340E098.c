// MGNPHCAAEIO$$KMGJDGDIABI @ RVA 0x340E098

System_String_o * MGNPHCAAEIO__KMGJDGDIABI(MethodInfo *method)

{
                    /* try { // try from 0350e098 to 0360e0cb has its CatchHandler @ 0350dfc4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350e064 with catch @ 0350e0b0
                        */
  if ((DAT_0456805e & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0350e044 with catch @ 0350e0b4
                        */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456805e = 1;
  }
                    /* try { // try from 0350e0cc to 0360e0e3 has its CatchHandler @ 0350e13c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0350e0e4 to 0360e12b has its CatchHandler @ 0350dfc4 */
  return MGNPHCAAEIO_TypeInfo->static_fields->_NJLJAAEIDBE_k__BackingField;
}

