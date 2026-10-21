// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ONFMIMKMBFG @ RVA 0x344E4CC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ONFMIMKMBFG
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method);
  Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_00);
  __this_00 = (__this->fields)._picRubySale;
  if ((__this_00 != (CocosAnimation_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

