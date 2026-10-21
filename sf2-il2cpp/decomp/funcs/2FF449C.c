// Nekki.SF2.GUI.Scenes.LoaderScreen$$Load @ RVA 0x2FF449C

void Nekki_SF2_GUI_Scenes_LoaderScreen__Load
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o **ppSVar9;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar10;
  Nekki_SF2_GUI_LabelAlias_o **ppNVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04565a89 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_LGJODJDHCJF_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_get_Count__);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&StringLiteral_8574);
    DAT_04565a89 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG !=
      (UnityEngine_Coroutine_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_8574,(MethodInfo *)0x0);
    return;
  }
  (__this->fields).FAGMLMDNEHA = false;
  (__this->fields).DIKILJAKEOG = false;
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    Nekki_SF2_Core_ApplicationController__ClearTextureCache((MethodInfo *)0x0);
    if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CLFCKIFNGHA__ILFKGOLHMBA(false,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b80 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
      DAT_04565b80 = '\x01';
    }
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC == 0) {
      bVar2 = true;
    }
    else {
      if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b80 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
        DAT_04565b80 = '\x01';
      }
      if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BGDMCNDAIDC == 8;
    }
    pUVar4 = (__this->fields)._LoaderType1;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._LoaderType2;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,(bool)(bVar2 ^ 1),(MethodInfo *)0x0);
        if ((MGNPHCAAEIO_LGJODJDHCJF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = MGNPHCAAEIO_LGJODJDHCJF__LDKFHCIMHJE((MethodInfo *)0x0);
        ppSVar9 = &(__this->fields).JPOBFBBGOBC;
        *ppSVar9 = pSVar5;
        thunk_FUN_01c20e04(ppSVar9,pSVar5);
        if (*ppSVar9 != (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)0x0) {
          pUVar4 = (__this->fields)._LoaderType2;
          (__this->fields).GIIFJPPGGON = ((*ppSVar9)->fields)._size + 1;
          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
            bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
            if (!bVar2) {
LAB_030f4828:
              iVar3 = (__this->fields).PGOCNMLFPIJ;
              iVar1 = (__this->fields).GIIFJPPGGON;
              if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar3 = LIIFLGALGNK__HLMBDJOGONJ(iVar3,iVar1 + 1,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Scenes_LoaderScreen__EEJGCKMLOAP
                        (__this,iVar3,(__this->fields)._LoaderHintNext,in_x3);
              method_00 = extraout_x1_01;
              if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                method_00 = extraout_x1_02;
              }
              if (Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BJFGHDKLEKH == 6) {
                routine = Nekki_SF2_GUI_Scenes_LoaderScreen__PGDKFMBIDAI(__this,method_00);
              }
              else {
                routine = Nekki_SF2_GUI_Scenes_LoaderScreen__GPALILACOAP(__this,method_00);
              }
              pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine
                                 ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
              }
              Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG = pUVar7;
              thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields,pUVar7);
              return;
            }
            ppNVar10 = &(__this->fields)._LoaderHint;
            if ((*ppNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0),
               pUVar6 != (UnityEngine_Transform_o *)0x0)) {
              UVar13 = UnityEngine_Transform__get_localPosition(pUVar6,(MethodInfo *)0x0);
              if (*ppNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppNVar10,(MethodInfo *)0x0);
                ppNVar11 = &(__this->fields)._LoaderHintNext;
                if (((*ppNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                    (__this_00 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
                    __this_00 != (UnityEngine_Transform_o *)0x0)) &&
                   (value = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0),
                   pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_localPosition(pUVar6,value,(MethodInfo *)0x0);
                  if ((*ppNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__set_localPosition(pUVar6,UVar13,(MethodInfo *)0x0);
                    pNVar12 = *ppNVar10;
                    *ppNVar10 = *ppNVar11;
                    thunk_FUN_01c20e04(ppNVar10);
                    *ppNVar11 = pNVar12;
                    thunk_FUN_01c20e04(ppNVar11,pNVar12);
                    if (*ppNVar11 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)*ppNVar11,(MethodInfo *)0x0);
                      if (DAT_0455fffb == '\0') {
                        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                        DAT_0455fffb = '\x01';
                      }
                      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                        pUVar8 = UnityEngine_Vector3_TypeInfo->static_fields;
                        UVar13.fields.z = (pUVar8->downVector).fields.z * 9999.0;
                        UVar13.fields.y = (pUVar8->downVector).fields.y * 9999.0;
                        UVar13.fields.x = (pUVar8->downVector).fields.x * 9999.0;
                        UnityEngine_Transform__set_localPosition(pUVar6,UVar13,(MethodInfo *)0x0);
                        goto LAB_030f4828;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

