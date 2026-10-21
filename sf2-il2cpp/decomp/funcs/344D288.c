// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$HMOFDGEDBCL @ RVA 0x344D288

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__HMOFDGEDBCL
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  CHDGOFBHAFI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o **ppAVar2;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_0456827d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_GLAPDHJHCNJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_IDJJMFEFODC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_MHOOOLECDKK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuMoneyPanel_UpdateCoinsIcon__);
    DAT_0456827d = 1;
    method = extraout_x1;
  }
  ppAVar2 = &(__this->fields).OKNKKHGBECG;
  pAVar3 = *ppAVar2;
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
                    /* try { // try from 0354d324 to 0364d34b has its CatchHandler @ 0354d4d8 */
  System_Action___ctor();
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__ICIFIPBHFON(pAVar3,pSVar1,(MethodInfo *)0x0);
    pAVar3 = (__this->fields).OKNKKHGBECG;
    pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__KOHCGAEHDAB(pAVar3,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0354d380 to 0364d3ab has its CatchHandler @ 0354d4d4 */
      pAVar3 = (__this->fields).OKNKKHGBECG;
      pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__KOHCGAEHDAB(pAVar3,pSVar1,(MethodInfo *)0x0);
        pAVar3 = (__this->fields).OKNKKHGBECG;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 0354d3e8 to 0364d3ef has its CatchHandler @ 0354d4d0 */
                    /* try { // try from 0354d3f8 to 0364d417 has its CatchHandler @ 0354d4dc */
          ACHLOMELAJE__FOHAFKJALCO(pAVar3,pSVar1,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 0354d418 to 0364d4a3 has its CatchHandler @ 0354d258 */
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
            CHDGOFBHAFI__PDGPDPGFNPG(__this_00,pSVar1,(MethodInfo *)0x0);
            (__this->fields).OKNKKHGBECG = (ACHLOMELAJE_o *)0x0;
            thunk_FUN_01c20e04(ppAVar2,0);
            Nekki_SF2_GUI_Menu_MenuMoneyPanel__GAFLOAFPCGE(__this,method_00);
            Nekki_SF2_GUI_Menu_MenuMoneyPanel__GOLKBFHLOBJ(__this,method_01);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

