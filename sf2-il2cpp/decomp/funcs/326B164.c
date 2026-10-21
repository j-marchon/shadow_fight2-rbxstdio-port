// Nekki.SF2.GUI.Shop.SidePanel$$set_EnableScrolling @ RVA 0x326B164

void Nekki_SF2_GUI_Shop_SidePanel__set_EnableScrolling
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Button_o *pUVar2;
  
  if ((DAT_045671df & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045671df = 1;
  }
  __this_00 = (__this->fields)._ScrollRect;
  (__this->fields)._EnableScrolling = CJNHFNHJHPE;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._MoveButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pUVar2 = (__this->fields)._MoveButton;
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar2,(__this->fields)._EnableScrolling,
                 (MethodInfo *)0x0);
      pUVar2 = (__this->fields)._MoveButton;
      if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (__this_01,(__this->fields)._EnableScrolling,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

