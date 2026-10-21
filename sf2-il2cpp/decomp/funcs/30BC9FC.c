// Nekki.SF2.GUI.Common.SceneMenuScroll$$JHJLELACELF @ RVA 0x30BC9FC

void Nekki_SF2_GUI_Common_SceneMenuScroll__JHJLELACELF
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  System_Predicate_SceneSelector__o **ppSVar1;
  Nekki_SF2_GUI_Common_SceneSelector_o *ICAMOHMJIMA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_SceneSelector__o *__this_00;
  System_Predicate_SceneSelector__o *match;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc940 with catch @ 031bc9fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031bc944 with catch @ 031bca00
                        */
                    /* try { // try from 031bca18 to 032bca2f has its CatchHandler @ 031bcb10 */
  if ((DAT_04566251 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Find__);
                    /* try { // try from 031bca30 to 032bcaff has its CatchHandler @ 031bc88c */
    FUN_01bab630(&System_Predicate<SceneSelector>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_ONANPKJNEOL__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo);
    DAT_04566251 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).FGIFPAPGJJN;
  if ((Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->static_fields->__9__37_0;
  if (match == (System_Predicate_SceneSelector__o *)0x0) {
    if ((Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo,method);
    }
    match = (System_Predicate_SceneSelector__o *)
            thunk_FUN_01bda818(System_Predicate<SceneSelector>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Common_SceneMenuScroll_<>c_TypeInfo->static_fields->__9__37_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<SceneSelector>_Find__;
    ICAMOHMJIMA = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (System_Predicate_T__o *)match,
                             (MethodInfo_26E5414 *)
                             Method_System_Collections_Generic_List<SceneSelector>_Find__);
                    /* try { // try from 031bcb00 to 032bcb0f has its CatchHandler @ 031bcb10 */
    Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene(__this,ICAMOHMJIMA,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

