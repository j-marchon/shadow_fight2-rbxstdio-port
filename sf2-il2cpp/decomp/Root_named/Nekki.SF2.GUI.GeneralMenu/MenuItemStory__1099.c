// TypeDefIndex 1099
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class MenuItemStory : MenuItemButton
// Fields:
//   private GameObject _CheckBox; // 0x78
//   private LabelAlias _IndexSlotAlias; // 0x80
//   private Color _CurrentLabelColor; // 0x88
//   private Color _OtherLabelColor; // 0x98
//   private int _CurrentLabelFontSize; // 0xA8
//   private int _OtherLabelFontSize; // 0xAC

// ===== public void SetTextColor(Color EFJKPCADGJH)  [RVA 0x30E2B04]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$SetTextColor @ RVA 0x30E2B04

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetTextColor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
  pNVar1 = (__this->fields).super._label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
              (pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    pNVar1 = (__this->fields)._IndexSlotAlias;
    method = extraout_x1;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e2b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                (CONCAT44((int)((ulong)EFJKPCADGJH.fields._0_8_ >> 0x20),EFJKPCADGJH.fields.r),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._4_8_ >> 0x20),EFJKPCADGJH.fields.g),
                 CONCAT44((int)((ulong)EFJKPCADGJH.fields._8_8_ >> 0x20),EFJKPCADGJH.fields.b),
                 CONCAT44((int)((ulong)register0x00005060 >> 0x20),EFJKPCADGJH.fields.a),pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== protected IEnumerator KJAAMMKGBAL()  [RVA 0x30E2B74]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$KJAAMMKGBAL @ RVA 0x30E2B74

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemStory__KJAAMMKGBAL
          (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663c6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_TypeInfo);
    DAT_045663c6 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_MenuItemStory_HFCPAEEGFKG_TypeInfo,method
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public override void UpdateKunai()  [RVA 0x30E2C08]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$UpdateKunai @ RVA 0x30E2C08

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__UpdateKunai
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045663c7 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045663c7 = 1;
  }
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton__UpdateKunai
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_GeneralMenu_MenuItemStory__KJAAMMKGBAL(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_031e2cb0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_031e2cb0:
                    /* WARNING: Could not recover jumptable at 0x031e2cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}


// ===== public bool get_CheckBoxEnabled()  [RVA 0x30E2CD0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$get_CheckBoxEnabled @ RVA 0x30E2CD0

bool Nekki_SF2_GUI_GeneralMenu_MenuItemStory__get_CheckBoxEnabled
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields)._CheckBox;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetTextFontSize(int PGFAIJMMOHJ)  [RVA 0x30E2CEC]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$SetTextFontSize @ RVA 0x30E2CEC

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetTextFontSize
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,int32_t PGFAIJMMOHJ,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).super._label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,PGFAIJMMOHJ,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._IndexSlotAlias;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,PGFAIJMMOHJ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_CheckBoxEnabled(bool CJNHFNHJHPE)  [RVA 0x30E2D2C]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$set_CheckBoxEnabled @ RVA 0x30E2D2C

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__set_CheckBoxEnabled
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  long lVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_o EFJKPCADGJH;
  
  __this_00 = (__this->fields)._CheckBox;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (CJNHFNHJHPE) {
      pUVar5 = &(__this->fields)._CurrentLabelColor;
      pUVar2 = &(__this->fields)._CurrentLabelColor;
      pUVar3 = &(__this->fields)._CurrentLabelColor;
      pUVar4 = &(__this->fields)._CurrentLabelColor;
    }
    else {
      pUVar5 = &(__this->fields)._OtherLabelColor;
      pUVar2 = &(__this->fields)._OtherLabelColor;
      pUVar3 = &(__this->fields)._OtherLabelColor;
      pUVar4 = &(__this->fields)._OtherLabelColor;
    }
    EFJKPCADGJH.fields.a = (pUVar4->fields).a;
    EFJKPCADGJH.fields.b = (pUVar3->fields).b;
    EFJKPCADGJH.fields.g = (pUVar2->fields).g;
    EFJKPCADGJH.fields.r = (pUVar5->fields).r;
    Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetTextColor(__this,EFJKPCADGJH,method_00);
    lVar1 = 0xa8;
    if (!CJNHFNHJHPE) {
      lVar1 = 0xac;
    }
    Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetTextFontSize
              (__this,*(int32_t *)((long)&__this->klass + lVar1),method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30E2DB8]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$.ctor @ RVA 0x30E2DB8

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetSlotIndex(int NJHAOCDLLJP)  [RVA 0x30E2DC0]
// Nekki.SF2.GUI.GeneralMenu.MenuItemStory$$SetSlotIndex @ RVA 0x30E2DC0

void Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetSlotIndex
               (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *__this,int32_t NJHAOCDLLJP,
               MethodInfo *method)

{
  bool CJNHFNHJHPE;
  NLPJLHOEAOE_o *__this_00;
  System_Xml_XmlNode_o *pSVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  int local_24;
  
  if ((DAT_045663c8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045663c8 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO == NJHAOCDLLJP) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (NLPJLHOEAOE_o *)0x0) goto LAB_031e2ed0;
    method = (MethodInfo *)0x0;
    pSVar1 = NLPJLHOEAOE__MBLEGLIMGHP(__this_00,NJHAOCDLLJP,(MethodInfo *)0x0);
    CJNHFNHJHPE = pSVar1 != (System_Xml_XmlNode_o *)0x0;
  }
  else {
    CJNHFNHJHPE = false;
  }
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory__set_CheckBoxEnabled(__this,CJNHFNHJHPE,method);
  pNVar3 = (__this->fields)._IndexSlotAlias;
  local_24 = NJHAOCDLLJP + 1;
  pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
              (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
    return;
  }
LAB_031e2ed0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

