// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$set_CurrentViewMode @ RVA 0x344E42C

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__set_CurrentViewMode
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  
  bVar1 = (__this->fields).super._BOGAKJOFOEK_k__BackingField;
  (__this->fields).CFABKEBDDCF = CJNHFNHJHPE;
  if (bVar1 != false) {
    return;
  }
  __this_00 = (__this->fields)._iconCoins;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE == 0,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._infoCoins;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE == 0,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._coinInfoGroup;
      if ((__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

