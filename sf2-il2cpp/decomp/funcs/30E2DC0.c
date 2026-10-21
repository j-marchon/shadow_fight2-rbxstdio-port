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

