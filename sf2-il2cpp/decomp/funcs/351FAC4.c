// Nekki.SF2.GUI.Fight.PlayerLifeBar$$PHLFFKHKCMD @ RVA 0x351FAC4

Nekki_SF2_GUI_ResolutionImageSkew_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,int32_t MIKOCHDNFNJ,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImageSkew__o *__this_00;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar1;
  
                    /* try { // try from 0361fac8 to 0371facb has its CatchHandler @ 0361fadc */
                    /* catch() { ... } // from try @ 0361fac8 with catch @ 0361fadc */
  if ((DAT_045689b3 & 1) == 0) {
                    /* try { // try from 0361fae4 to 0371fb4b has its CatchHandler @ 0361fb60 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__);
    DAT_045689b3 = 1;
  }
  __this_00 = (__this->fields).HONNHINBNAJ;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0) {
    if ((-1 < MIKOCHDNFNJ) && (MIKOCHDNFNJ < (__this_00->fields)._size)) {
      pNVar1 = (Nekki_SF2_GUI_ResolutionImageSkew_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,MIKOCHDNFNJ,
                          Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

