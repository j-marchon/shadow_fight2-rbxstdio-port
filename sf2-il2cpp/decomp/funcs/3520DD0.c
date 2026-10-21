// Nekki.SF2.GUI.Scripts.CheckBox$$add_OnChangedState @ RVA 0x3520DD0

void Nekki_SF2_GUI_Scripts_CheckBox__add_OnChangedState
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,
               System_Action_CheckBox_EKFFAMKMBIH__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_CheckBox_EKFFAMKMBIH__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CheckBox_EKFFAMKMBIH__o *pSVar5;
  System_Action_CheckBox_EKFFAMKMBIH__o *a;
  
  if ((DAT_045689bd & 1) == 0) {
    FUN_01bab630(&System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
    DAT_045689bd = 1;
  }
  a = (__this->fields).LCDOFOMLNLI;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CheckBox_EKFFAMKMBIH>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CheckBox_EKFFAMKMBIH__o *)
             FUN_01c07368(&(__this->fields).LCDOFOMLNLI,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

