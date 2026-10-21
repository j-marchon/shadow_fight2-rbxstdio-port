// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$add_OnInput @ RVA 0x344F698

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__add_OnInput
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               System_Action_CPAPMBPHEAB__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_CPAPMBPHEAB__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_CPAPMBPHEAB__o *pSVar5;
  System_Action_CPAPMBPHEAB__o **ppSVar6;
  System_Action_CPAPMBPHEAB__o *a;
  
  if ((DAT_04568299 & 1) == 0) {
    FUN_01bab630(&System_Action<CPAPMBPHEAB>_TypeInfo);
    DAT_04568299 = 1;
  }
  ppSVar6 = &(__this->fields).MFOGEDBHCHA;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<CPAPMBPHEAB>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<CPAPMBPHEAB>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_CPAPMBPHEAB__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

