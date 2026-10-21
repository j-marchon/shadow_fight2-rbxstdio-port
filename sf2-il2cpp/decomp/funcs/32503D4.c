// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KHCLJKKPKNA$$MoveNext @ RVA 0x32503D4

bool Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA__MoveNext
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KHCLJKKPKNA_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  NLPJLHOEAOE_c *pNVar4;
  FGKGKDEJCOG_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  Il2CppObject **ppIVar5;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this_02;
  undefined1 auVar6 [16];
  
  if ((DAT_04567124 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567124 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pIVar3 = (__this->fields).data;
    __this_02 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      auVar6 = thunk_FUN_01bda96c();
      if (*auVar6._0_8_ == 1) {
        iVar2 = (__this->fields).slot;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04566e5b == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04566e5b = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar4 = NLPJLHOEAOE_TypeInfo;
        NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO = iVar2;
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
          pNVar4 = NLPJLHOEAOE_TypeInfo;
        }
        if ((pNVar4->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pNVar4 = NLPJLHOEAOE_TypeInfo;
        }
        __this_00 = pNVar4->static_fields->EIHHKABBIMJ;
        if (__this_00 != (FGKGKDEJCOG_o *)0x0) {
          FGKGKDEJCOG__JDAMFAMMNKM(__this_00,(__this->fields).slot,(MethodInfo *)0x0);
          __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_01 != (NDPMLPGANCI_o *)0x0) {
            NDPMLPGANCI__EKPAFDJIAGI
                      (__this_01,0,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,false,
                       (MethodInfo *)0x0);
            return false;
          }
        }
      }
      else if (__this_02 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DADMLBCLHBI(__this_02,auVar6._8_8_);
        return false;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (iVar1 != 0) {
    return false;
  }
  ppIVar5 = &(__this->fields).__2__current;
  *ppIVar5 = (Il2CppObject *)0x0;
  (__this->fields).__1__state = -1;
  thunk_FUN_01c20e04(ppIVar5,0);
  (__this->fields).__1__state = 1;
  return true;
}

