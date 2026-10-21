// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LOHIKLBCOOH @ RVA 0x3310BB8

bool Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LOHIKLBCOOH
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,System_String_o *MCJKMCKELIN,
               System_String_o **DNIFHHICEDB,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *pEVar2;
  LabelButton_o *pLVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_045677ab & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_6981);
    FUN_01bab630(&StringLiteral_8722);
    FUN_01bab630(&StringLiteral_10045);
    FUN_01bab630(&StringLiteral_1);
    DAT_045677ab = 1;
  }
  ppSVar4 = &(__this->fields).HBJEOMFBMMC;
  *ppSVar4 = MCJKMCKELIN;
  thunk_FUN_01c20e04(ppSVar4,MCJKMCKELIN);
  *DNIFHHICEDB = StringLiteral_1;
  thunk_FUN_01c20e04(DNIFHHICEDB,StringLiteral_1);
  bVar1 = System_String__op_Equality(*ppSVar4,StringLiteral_8722,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar3 = (__this->fields)._consumableButton;
    (__this->fields).PPEHDGLMLNK = 0;
    if (pLVar3 != (LabelButton_o *)0x0) {
      (pLVar3->fields).super.super.ButtonId = 0;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
        ppSVar4 = &(pEVar2->fields).JHMMCCKCFFH;
        goto LAB_03410d60;
      }
    }
  }
  else {
    bVar1 = System_String__op_Equality(*ppSVar4,StringLiteral_10045,(MethodInfo *)0x0);
    if (bVar1) {
      pLVar3 = (__this->fields)._consumableButton;
      (__this->fields).PPEHDGLMLNK = 1;
      if (pLVar3 != (LabelButton_o *)0x0) {
        (pLVar3->fields).super.super.ButtonId = 1;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
          ppSVar4 = &(pEVar2->fields).NBLJHMNHDAE;
LAB_03410d60:
          *DNIFHHICEDB = *ppSVar4;
          thunk_FUN_01c20e04(DNIFHHICEDB);
          return true;
        }
      }
    }
    else {
      bVar1 = System_String__op_Equality(*ppSVar4,StringLiteral_6981,(MethodInfo *)0x0);
      if (!bVar1) {
        return false;
      }
      pLVar3 = (__this->fields)._consumableButton;
      (__this->fields).PPEHDGLMLNK = 2;
      if (pLVar3 != (LabelButton_o *)0x0) {
        (pLVar3->fields).super.super.ButtonId = 2;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar2 != (EEGDOGKBLNG_o *)0x0) {
          ppSVar4 = &(pEVar2->fields).IHLHMKHJPCC;
          goto LAB_03410d60;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

