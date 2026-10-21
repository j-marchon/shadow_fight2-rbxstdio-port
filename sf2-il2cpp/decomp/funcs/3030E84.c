// Nekki.SF2.GUI.Shop.ParameterScrollItem$$JDDOJIOMAMI @ RVA 0x3030E84

void Nekki_SF2_GUI_Shop_ParameterScrollItem__JDDOJIOMAMI
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  BHEDGAKGKPO_StaticFields *pBVar1;
  undefined8 *puVar2;
  int iVar3;
  Il2CppObject *arg0;
  UnityEngine_GameObject_o *__this_00;
  BHEDGAKGKPO_StaticFields *pBVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  System_String_o *pSVar9;
  int32_t local_34;
  
  if ((DAT_04565d02 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_1091);
    FUN_01bab630(&StringLiteral_1005);
    DAT_04565d02 = 1;
  }
  (__this->fields).BKNPEHNLJKB = CJNHFNHJHPE;
  puVar2 = &StringLiteral_1005;
  if (CJNHFNHJHPE < 1) {
    puVar2 = &StringLiteral_1091;
  }
  pNVar8 = (__this->fields)._additionalValue;
  pSVar9 = (System_String_o *)*puVar2;
  local_34 = CJNHFNHJHPE;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  pSVar9 = System_String__Format(pSVar9,arg0,(MethodInfo *)0x0);
  if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
              (pNVar8,pSVar9,(pNVar8->klass->vtable)._75_set_text.method);
    pNVar8 = (__this->fields)._additionalValue;
    iVar3 = (__this->fields).BKNPEHNLJKB;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pBVar4 = BHEDGAKGKPO_TypeInfo->static_fields;
    if (iVar3 < 1) {
      lVar6 = 0xc;
      lVar5 = 8;
      lVar7 = 4;
      pBVar1 = pBVar4;
    }
    else {
      pBVar1 = (BHEDGAKGKPO_StaticFields *)&pBVar4->CCMHDEKHFCO;
      lVar6 = 0x1c;
      lVar5 = 0x18;
      lVar7 = 0x14;
    }
    if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar8->klass->vtable)._23_set_color.methodPtr)
                ((pBVar1->GNNEMOOOOCI).fields.r,
                 *(undefined4 *)((long)&(pBVar4->GNNEMOOOOCI).fields.r + lVar7),
                 *(undefined4 *)((long)&(pBVar4->GNNEMOOOOCI).fields.r + lVar5),
                 *(undefined4 *)((long)&(pBVar4->GNNEMOOOOCI).fields.r + lVar6),pNVar8,
                 (pNVar8->klass->vtable)._23_set_color.method);
      pNVar8 = (__this->fields)._additionalValue;
      if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        iVar3 = (__this->fields).BKNPEHNLJKB;
        __this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,iVar3 != 0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

