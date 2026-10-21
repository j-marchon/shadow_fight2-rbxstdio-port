// Nekki.SF2.GUI.Menu.MainMenu$$RestoreParentAndTryShowScroll @ RVA 0x356AE28

void Nekki_SF2_GUI_Menu_MainMenu__RestoreParentAndTryShowScroll
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,UnityEngine_GameObject_o *HODGKDNOHLP,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  System_String_o *pSVar4;
  System_String_o *str3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  NDPMLPGANCI_o *__this_03;
  ACHLOMELAJE_o *__this_04;
  MethodInfo *method_00;
  System_Collections_Generic_List_MainMenu_KCFNDEKJOHK__o **ppSVar5;
  UnityEngine_UI_Slider_o *__this_05;
  System_Collections_Generic_List_MainMenu_KCFNDEKJOHK__o *parent;
  int32_t local_34;
  
  if ((DAT_04568c27 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_CJDBKPEEJIG__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<MainMenu_KCFNDEKJOHK>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MainMenu_KCFNDEKJOHK>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
    FUN_01bab630(&StringLiteral_1189);
    FUN_01bab630(&StringLiteral_458);
    FUN_01bab630(&StringLiteral_8792);
    FUN_01bab630(&StringLiteral_8795);
    DAT_04568c27 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar3 + 1;
    pIVar3->klass = (Il2CppClass *)HODGKDNOHLP;
    thunk_FUN_01c20e04(pIVar3,HODGKDNOHLP);
    if ((__this->fields).super.__IsReleased_k__BackingField != false) {
      return;
    }
    __this_05 = (__this->fields).MLLHHEDCFJH;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<MainMenu_KCFNDEKJOHK>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_05 != (UnityEngine_UI_Slider_o *)0x0) {
      local_34 = System_Collections_Generic_List<object>__RemoveAll
                           ((System_Collections_Generic_List_object__o *)__this_05,match,
                            Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_RemoveAll__
                           );
      if (local_34 != 1) {
        if (local_34 == 0) {
          if (pIVar3->klass != (Il2CppClass *)0x0) {
            pSVar4 = UnityEngine_Object__get_name
                               ((UnityEngine_Object_o *)pIVar3->klass,(MethodInfo *)0x0);
            pSVar4 = System_String__Concat
                               (StringLiteral_8795,pSVar4,StringLiteral_458,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto LAB_0366b1ac;
        }
        if (pIVar3->klass == (Il2CppClass *)0x0) goto LAB_0366b1ac;
        pSVar4 = UnityEngine_Object__get_name
                           ((UnityEngine_Object_o *)pIVar3->klass,(MethodInfo *)0x0);
        str3 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat
                           (StringLiteral_8792,pSVar4,StringLiteral_1189,str3,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
      }
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).MLLHHEDCFJH,
                         Method_DJNBJHPDKDP_OBECCOPBADO<MainMenu_KCFNDEKJOHK>__);
      if (bVar1) {
        ppSVar5 = &(__this->fields).EKDOIPLJFKO;
      }
      else {
        pIVar3 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                           ((System_Collections_Generic_List_T__o *)(__this->fields).MLLHHEDCFJH,
                            Method_DJNBJHPDKDP_KIKGKKGDCKK<MainMenu_KCFNDEKJOHK>__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0366b1ac;
        ppSVar5 = &pIVar3[1].monitor;
      }
      parent = *ppSVar5;
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)(__this->fields).MLLHHEDCFJH,
                           Method_DJNBJHPDKDP_OBECCOPBADO<MainMenu_KCFNDEKJOHK>__);
        if (!bVar1) {
          return;
        }
        if ((__this->fields).NMKOOKOKJMP == false) {
          return;
        }
        __this_01 = (__this->fields)._backgroundPicture;
        if ((__this_01 != (UnityEngine_UI_Image_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
          __this_03 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_03 != (NDPMLPGANCI_o *)0x0) {
            iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_03,(MethodInfo *)0x0);
            if (iVar2 != 3) {
              return;
            }
            Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton(__this,true,method_00);
            Nekki_SF2_GUI_Menu_MainMenu__ShowDojoProgressBar(__this,true,method_00);
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (__this_04 != (ACHLOMELAJE_o *)0x0) {
              bVar1 = ACHLOMELAJE__CIJFNGLHOIF(__this_04,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Menu_MainMenu__ShowDojoDiscipleButton(__this,bVar1,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_0366b1ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

