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

