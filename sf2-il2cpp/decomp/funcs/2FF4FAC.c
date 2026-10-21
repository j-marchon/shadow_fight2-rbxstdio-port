// Nekki.SF2.GUI.Scenes.LoaderScreen$$OnDestroy @ RVA 0x2FF4FAC

void Nekki_SF2_GUI_Scenes_LoaderScreen__OnDestroy
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Scenes_LoaderScreen_o **ppNVar1;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04565a91 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_LoaderScreen_GJBIHHLINEG__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
                    /* catch() { ... } // from try @ 030f5050 with catch @ 030f4ff4
                       catch() { ... } // from try @ 030f5088 with catch @ 030f4ff4
                       catch() { ... } // from try @ 030f50bc with catch @ 030f4ff4
                       catch() { ... } // from try @ 030f513c with catch @ 030f4ff4 */
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_04565a91 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 030f5018 to 031f501f has its CatchHandler @ 030f5050 */
                    /* try { // try from 030f5020 to 031f503f has its CatchHandler @ 030f5058 */
  if (DAT_04565b81 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_04565b81 = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 030f504c to 031f504f has its CatchHandler @ 030f5054 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5018 with catch @ 030f5050
                       try { // try from 030f5050 to 031f506f has its CatchHandler @ 030f4ff4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f504c with catch @ 030f5054
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f5020 with catch @ 030f5058
                        */
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
  }
  ppNVar1 = &Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField
  ;
  *ppNVar1 = (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0;
                    /* try { // try from 030f5070 to 031f5087 has its CatchHandler @ 030f5134 */
  thunk_FUN_01c20e04(ppNVar1,0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 030f5088 to 031f50a3 has its CatchHandler @ 030f4ff4 */
  System_Action___ctor();
  if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 030f50a4 to 031f50bb has its CatchHandler @ 030f5134 */
  WideScreenController__remove_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

