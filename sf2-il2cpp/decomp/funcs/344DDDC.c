// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$UpdateCoinsIcon @ RVA 0x344DDDC

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__UpdateCoinsIcon
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04568287 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568287 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).OKNKKHGBECG != (ACHLOMELAJE_o *)0x0) {
    pNVar3 = (__this->fields)._iconCoins;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pAVar2 = (__this->fields).OKNKKHGBECG;
      if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
         (pNVar3 = (__this->fields)._iconCoins, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        bVar1 = System_String__op_Inequality
                          ((pAVar2->fields).FAAJGHKHEBI,(pNVar3->fields)._TexturePath,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pAVar2 = (__this->fields).OKNKKHGBECG;
        if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
           (pNVar3 = (__this->fields)._iconCoins, pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
        {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,(pAVar2->fields).FAAJGHKHEBI,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

