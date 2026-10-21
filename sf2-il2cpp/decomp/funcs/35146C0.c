// Nekki.SF2.GUI.Common.Hints.HintList$$GetHintGroupByID @ RVA 0x35146C0

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar1;
  System_Collections_Generic_List_HintGroup__o *__this_01;
  
  if ((DAT_04568924 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_Find__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintList_NOKNNEFCPBP_CEFIIBHKFBE__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintList_NOKNNEFCPBP_TypeInfo);
    FUN_01bab630(&System_Predicate<HintGroup>_TypeInfo);
    DAT_04568924 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_Hints_HintList_NOKNNEFCPBP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AEIKGKKKFMM;
    __this_01 = (__this->fields).DEDJHBCOMCJ;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HintGroup>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
      pNVar1 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<HintGroup>_Find__);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

