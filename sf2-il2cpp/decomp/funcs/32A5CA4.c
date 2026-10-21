// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$LoadWeaponImages @ RVA 0x32A5CA4

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_CharacterSelectModule__LoadWeaponImages
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this_00;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o **ppNVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033a5ca8 to 034a5caf has its CatchHandler @ 033a5fe0 */
  if ((DAT_045673f2 & 1) == 0) {
                    /* try { // try from 033a5cc4 to 034a5ccb has its CatchHandler @ 033a5f8c */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_TypeInfo);
                    /* try { // try from 033a5cd0 to 034a5cdf has its CatchHandler @ 033a5f80 */
    DAT_045673f2 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_TypeInfo,method
                                );
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN___ctor(__this_00,0,(MethodInfo *)0x0);
                    /* try { // try from 033a5cf0 to 034a5cf3 has its CatchHandler @ 033a5f5c */
  if (__this_00 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
                    /* try { // try from 033a5cf4 to 034a5d03 has its CatchHandler @ 033a5f88 */
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

