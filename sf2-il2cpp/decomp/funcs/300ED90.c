// Nekki.SF2.GUI.Common.MenuControls$$IsKeyDown @ RVA 0x300ED90

bool Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar4;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this_02;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_04;
  int OPHMGAKOJLP;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_05;
  
  if ((DAT_04565b8d & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_APILIOKLILP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_HNAFBBDFKDC__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__);
    FUN_01bab630(&System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
    DAT_04565b8d = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_LEPMLFJMACH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AAJGEHHPMGH;
    __this_05 = (__this->fields).ELOFOCJPGDO;
    pSVar4 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_05 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_05,pSVar4,
                             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__
                            );
      if ((__this_01 == (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) ||
         (bVar2 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__BHHIIBFHBFK(__this_01,method_00),
         !bVar2)) {
        __this_04 = (__this->fields).CBCDEIKGGDK;
        pSVar4 = (System_Predicate_T__o *)
                 thunk_FUN_01bda818(System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_04 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
        goto LAB_0310ef3c;
        method_01 = Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__;
        __this_02 = (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_04,pSVar4,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__
                              );
        bVar2 = false;
        if (__this_02 != (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) {
          __this_03 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current
                                ((MethodInfo *)0x0);
          if (__this_03 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0)
          goto LAB_0310ef3c;
          iVar3 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                            (__this_03,(MethodInfo *)0x0);
          if (iVar3 < 1) {
            bVar2 = false;
          }
          else {
            OPHMGAKOJLP = 0;
            do {
              bVar2 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__BHHIIBFHBFK
                                (__this_02,OPHMGAKOJLP,method_01);
              if (bVar2) {
                return true;
              }
              bVar1 = iVar3 + -1 != OPHMGAKOJLP;
              OPHMGAKOJLP = OPHMGAKOJLP + 1;
              bVar2 = false;
            } while (bVar1);
          }
        }
      }
      else {
        bVar2 = true;
      }
      return bVar2;
    }
  }
LAB_0310ef3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

