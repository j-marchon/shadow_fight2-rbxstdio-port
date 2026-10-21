// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$OnDestroy @ RVA 0x3172AB8

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__OnDestroy
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03272a80 with catch @ 03272acc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03272a6c with catch @ 03272ad0
                        */
  if ((DAT_04566933 & 1) == 0) {
                    /* try { // try from 03272ae8 to 03372aeb has its CatchHandler @ 03272b14 */
                    /* try { // try from 03272aec to 03372b1b has its CatchHandler @ 032729d8 */
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_NKKEKIKFFCJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo);
    DAT_04566933 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03272ae8 with catch @ 03272b14 */
  Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__Hide(__this,method);
                    /* try { // try from 03272b1c to 03372b23 has its CatchHandler @ 03272b38 */
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03272b24 to 03372b2f has its CatchHandler @ 032729d8 */
  CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
                    /* try { // try from 03272b30 to 03372b37 has its CatchHandler @ 03272b38 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03272b1c with catch @ 03272b38
                       catch(type#2 @ 00000000) { ... } // from try @ 03272b30 with catch @ 03272b38
                        */
  System_Action<object>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__JBFHBECEOAP(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields->FFOLFLCMFCH =
         (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_TypeInfo->static_fields,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

