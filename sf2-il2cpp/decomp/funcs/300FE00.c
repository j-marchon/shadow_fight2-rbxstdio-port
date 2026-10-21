// Nekki.SF2.GUI.Common.MenuControls$$IsKeyUp @ RVA 0x300FE00

bool Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,int32_t AAJGEHHPMGH,int32_t BMPJIDHGCBN,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar2;
  Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_03;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_04;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BMPJIDHGCBN;
  if ((DAT_04565b98 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_ACGEEEMJGPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_JOGLEACDOPD__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__);
    FUN_01bab630(&System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    FUN_01bab630(&System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
    DAT_04565b98 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_MenuControls_IGLINAHPOMM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AAJGEHHPMGH;
    if (BMPJIDHGCBN == -1) {
      bVar1 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp(__this,AAJGEHHPMGH,pMVar3);
      return bVar1;
    }
    __this_04 = (__this->fields).ELOFOCJPGDO;
    pSVar2 = (System_Predicate_T__o *)
             thunk_FUN_01bda818(System_Predicate<MenuControls_KOEABALFPHM>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_04 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_04,pSVar2,
                             Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_Find__
                            );
      if ((__this_01 == (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) ||
         (bVar1 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__HBJIAILBIBE(__this_01,method_00),
         !bVar1)) {
        __this_03 = (__this->fields).CBCDEIKGGDK;
        pSVar2 = (System_Predicate_T__o *)
                 thunk_FUN_01bda818(System_Predicate<MenuControls_ADIEOGDNDIO>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_03 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
        goto LAB_0310ff94;
        pMVar3 = Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__;
        __this_02 = (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                    System_Collections_Generic_List<object>__Find
                              ((System_Collections_Generic_List_object__o *)__this_03,pSVar2,
                               (MethodInfo_26E5414 *)
                               Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_Find__
                              );
        if ((__this_02 == (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) ||
           (bVar1 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
                              (__this_02,BMPJIDHGCBN,pMVar3), !bVar1)) {
          return false;
        }
      }
      return true;
    }
  }
LAB_0310ff94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

