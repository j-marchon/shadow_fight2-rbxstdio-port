// Nekki.SF2.GUI.Map.ProgressBricksPanel$$Init @ RVA 0x32B64D4

void Nekki_SF2_GUI_Map_ProgressBricksPanel__Init
               (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  float CJNHFNHJHPE;
  int32_t iVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  System_Action_ProgressBricksPanel_ABGKGNLGPKB__o **ppSVar8;
  uint CJNHFNHJHPE_00;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int DFIBGGDJPLM;
  System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *pSVar14;
  System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *pSVar15;
  int EDGFNGCAKGI;
  Nekki_SF2_GUI_Map_IndicatorFight_o *__this_04;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector2_o UVar19;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar20;
  
  if ((DAT_04567459 & 1) == 0) {
    FUN_01bab630(&System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_ForEach__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_get_Item__
                );
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_IHBODMGFKHI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_IPALKFADGLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_LPMJOENNLJO__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567459 = 1;
  }
  pSVar14 = (__this->fields).FBAIPCAJMEN;
  if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar15 = Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_0;
  if (pSVar15 == (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)
              thunk_FUN_01bda818(System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar8 = &Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_0;
    *ppSVar8 = pSVar15;
    thunk_FUN_01c20e04(ppSVar8,pSVar15);
  }
  if (pSVar14 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0)
  goto LAB_033b6b24;
  System_Collections_Generic_List<object>__ForEach
            ((System_Collections_Generic_List_object__o *)pSVar14,(System_Action_T__o *)pSVar15,
             Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_ForEach__);
  pNVar6 = (__this->fields)._lblTour;
  if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033b6b24;
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,StringLiteral_1,(MethodInfo *)0x0);
  pNVar6 = (__this->fields)._lblTour;
  if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033b6b24;
  method_00 = (pNVar6->klass->vtable)._75_set_text.method;
  (*(pNVar6->klass->vtable)._75_set_text.methodPtr)(pNVar6,StringLiteral_1);
  if ((BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  (*(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                            (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.method),
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_033b6b24;
  DFIBGGDJPLM = (__this_00->fields)._size;
  iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
  if ((iVar5 == 2) ||
     ((iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 10 ||
      (iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 0x15)))) {
    DFIBGGDJPLM = DFIBGGDJPLM + -1;
  }
  if (AGONJKOMAAA == (AFFHKININGD_o *)0x0) goto LAB_033b6b24;
  if (((AGONJKOMAAA->fields).HLFBMBHOPMI == DFIBGGDJPLM) &&
     ((iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 2 ||
      (iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar5 == 10)))) {
    pSVar14 = (__this->fields).FBAIPCAJMEN;
    if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_1;
    if (pSVar15 == (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar15 = (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)
                thunk_FUN_01bda818(System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar8 = &Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_1;
      *ppSVar8 = pSVar15;
LAB_033b6ae0:
      thunk_FUN_01c20e04(ppSVar8,pSVar15);
    }
  }
  else {
    Nekki_SF2_GUI_Map_ProgressBricksPanel__GBCCLPCBNPJ(__this,DFIBGGDJPLM,method_00);
    CJNHFNHJHPE = 0.71;
    if (DFIBGGDJPLM < 6) {
      CJNHFNHJHPE = 1.0;
    }
    iVar9 = 8;
    if (DFIBGGDJPLM < 0xd) {
      iVar9 = 6;
    }
    if (DAT_0456033d == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_0456033d = '\x01';
    }
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = -0x80000000;
    if ((float)(int)((float)DFIBGGDJPLM / (float)iVar9) != INFINITY) {
      iVar1 = (int)((float)DFIBGGDJPLM / (float)iVar9);
    }
    __this_01 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((__this_01 == (UnityEngine_RectTransform_o *)0x0) ||
       (__this_01->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_033b6b24;
    fVar18 = CJNHFNHJHPE * 96.0;
    UVar19 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
    value.fields.y = fVar18 * (float)iVar1;
    value.fields.x = UVar19.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      EDGFNGCAKGI = 0;
    }
    else {
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = DFIBGGDJPLM / iVar9;
      }
      iVar11 = 0;
      EDGFNGCAKGI = 0;
      iVar12 = 0;
      fVar16 = fVar18 * ((float)iVar1 * 0.5 + -0.5);
      do {
        iVar10 = iVar9;
        if (iVar12 == iVar1 + -1) {
          iVar10 = DFIBGGDJPLM - iVar4 * iVar9;
        }
        iVar13 = iVar9;
        if (iVar10 != 0) {
          iVar13 = iVar10;
        }
        if (0 < iVar13) {
          fVar17 = fVar18 * 0.5 +
                   (fVar18 * (float)iVar13 + CJNHFNHJHPE * -5.0 * (float)(iVar13 + -1)) * -0.5;
          iVar10 = iVar11;
          do {
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               (__this_00,iVar10,
                                Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033b6b24;
            iVar2 = *(int *)((long)&pIVar7[6].klass + 4);
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               (__this_00,iVar10,
                                Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
            if ((pIVar7 == (Il2CppObject *)0x0) ||
               (pSVar14 = (__this->fields).FBAIPCAJMEN,
               pSVar14 == (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0)
               ) goto LAB_033b6b24;
            cVar3 = *(char *)&pIVar7[6].monitor;
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar14,iVar10,
                                Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_get_Item__
                               );
            if (pIVar7 == (Il2CppObject *)0x0) goto LAB_033b6b24;
            __this_04 = pIVar7[1].monitor;
            *(undefined1 *)&pIVar7[1].klass = 1;
            if (cVar3 == '\0') {
              if (__this_04 == (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0) goto LAB_033b6b24;
              CJNHFNHJHPE_00 = (uint)(iVar2 != 1);
            }
            else {
              if (__this_04 == (Nekki_SF2_GUI_Map_IndicatorFight_o *)0x0) goto LAB_033b6b24;
              CJNHFNHJHPE_00 = 2;
            }
            Nekki_SF2_GUI_Map_IndicatorFight__set_CurrentState
                      (__this_04,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_IndicatorFight__set_Scale(__this_04,CJNHFNHJHPE,(MethodInfo *)0x0);
            __this_02 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            __this_03 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_Transform_o *)0x0) goto LAB_033b6b24;
            UVar20 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_033b6b24;
            UVar20.fields.y = fVar16;
            UVar20.fields.x = fVar17;
            UnityEngine_Transform__set_localPosition(__this_02,UVar20,(MethodInfo *)0x0);
            fVar17 = fVar18 + CJNHFNHJHPE * -5.0 + fVar17;
            if (iVar2 == 1) {
              EDGFNGCAKGI = EDGFNGCAKGI + 1;
            }
            iVar13 = iVar13 + -1;
            iVar10 = iVar10 + 1;
          } while (iVar13 != 0);
        }
        fVar16 = fVar16 - fVar18;
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + iVar9;
      } while (iVar12 != iVar1);
    }
    Nekki_SF2_GUI_Map_ProgressBricksPanel__LBOHIOPPJOF
              (__this,BANHBMINMMP,DFIBGGDJPLM,EDGFNGCAKGI,true,in_x5);
    pSVar14 = (__this->fields).FBAIPCAJMEN;
    if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar15 = Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_2;
    if (pSVar15 == (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar15 = (System_Action_ProgressBricksPanel_ABGKGNLGPKB__o *)
                thunk_FUN_01bda818(System_Action<ProgressBricksPanel_ABGKGNLGPKB>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar8 = &Nekki_SF2_GUI_Map_ProgressBricksPanel_<>c_TypeInfo->static_fields->__9__12_2;
      *ppSVar8 = pSVar15;
      goto LAB_033b6ae0;
    }
  }
  if (pSVar14 != (System_Collections_Generic_List_ProgressBricksPanel_ABGKGNLGPKB__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar14,(System_Action_T__o *)pSVar15,
               Method_System_Collections_Generic_List<ProgressBricksPanel_ABGKGNLGPKB>_ForEach__);
    return;
  }
LAB_033b6b24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

