// Nekki.SF2.GUI.Map.RaidKey$$GIENGNEGHPJ @ RVA 0x31B3CEC

void Nekki_SF2_GUI_Map_RaidKey__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_RaidKey_o *__this,NPKKNCCEIND_o *BGDNOAFNJGG,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar5;
  NPKKNCCEIND_o **ppNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  
  if ((DAT_04566b97 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566b97 = 1;
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = UnityEngine_RectTransform_TypeInfo;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    (__this->fields).EKOHNMNPCHK = (UnityEngine_RectTransform_o *)0x0;
  }
  else {
    pUVar1 = pUVar3;
    if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
      pUVar1 = (UnityEngine_RectTransform_o *)0x0;
    }
    (__this->fields).EKOHNMNPCHK = pUVar1;
    if (pUVar3->klass != pUVar2) {
      pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).EKOHNMNPCHK,pUVar3);
  ppNVar6 = &(__this->fields).GKENNLODDNO;
  *ppNVar6 = BGDNOAFNJGG;
  thunk_FUN_01c20e04(ppNVar6,BGDNOAFNJGG);
  pNVar7 = (__this->fields)._alias;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar5 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
              ((pBVar5->FHIAKPJBBCB).fields.r,(pBVar5->FHIAKPJBBCB).fields.g,
               (pBVar5->FHIAKPJBBCB).fields.b,(pBVar5->FHIAKPJBBCB).fields.a,pNVar7,
               (pNVar7->klass->vtable)._23_set_color.method);
    if ((BGDNOAFNJGG != (NPKKNCCEIND_o *)0x0) &&
       (__this_00 = (__this->fields)._image, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(BGDNOAFNJGG->fields).OPBJKMDPKLG,(MethodInfo *)0x0);
      pNVar7 = (__this->fields)._alias;
      pSVar4 = System_Int32__ToString((int)BGDNOAFNJGG + 0x28,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                  (pNVar7,pSVar4,(pNVar7->klass->vtable)._75_set_text.method);
        __this_01 = (__this->fields)._button;
        if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)__this_01,false,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._hint;
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._hintAlias;
            if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar7,StringLiteral_1,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

