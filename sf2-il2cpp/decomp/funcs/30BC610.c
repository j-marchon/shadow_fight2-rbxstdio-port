// Nekki.SF2.GUI.Common.SceneMenuScroll$$SelectScene @ RVA 0x30BC610

void Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t INLIKJJNIIE,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_Common_SceneSelector_o *ICAMOHMJIMA;
  MethodInfo *method_00;
  System_Collections_Generic_List_SceneSelector__o *__this_01;
  
  if ((DAT_0456624b & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_EPEILCFJLHF__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Find__);
    FUN_01bab630(&System_Predicate<SceneSelector>_TypeInfo);
    DAT_0456624b = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_SceneMenuScroll_KNIEBCNONJG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = INLIKJJNIIE;
    bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MGPKIPFGKHJ(__this,INLIKJJNIIE,method);
    if (!bVar1) {
      return;
    }
    __this_01 = (__this->fields).FGIFPAPGJJN;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<SceneSelector>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<SceneSelector>_Find__;
      ICAMOHMJIMA = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_01,match,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<SceneSelector>_Find__);
                    /* try { // try from 031bc6f0 to 032bc73f has its CatchHandler @ 031bc6f0
                       catch() { ... } // from try @ 031bc6f0 with catch @ 031bc6f0
                       catch() { ... } // from try @ 031bc758 with catch @ 031bc6f0
                       catch() { ... } // from try @ 031bc798 with catch @ 031bc6f0
                       catch() { ... } // from try @ 031bc880 with catch @ 031bc6f0 */
      Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene(__this,ICAMOHMJIMA,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

