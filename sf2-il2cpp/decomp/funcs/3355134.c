// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$remove_OnKick @ RVA 0x3355134

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__remove_OnKick
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,
               System_Action_IDGOGBNEGAM__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_IDGOGBNEGAM__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_IDGOGBNEGAM__o *pSVar5;
  System_Action_IDGOGBNEGAM__o *source;
  
  if ((DAT_04567a3a & 1) == 0) {
    FUN_01bab630(&System_Action<IDGOGBNEGAM>_TypeInfo);
    DAT_04567a3a = 1;
  }
  source = (__this->fields).GHKNFLCOBON;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<IDGOGBNEGAM>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<IDGOGBNEGAM>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_IDGOGBNEGAM__o *)
             FUN_01c07368(&(__this->fields).GHKNFLCOBON,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}

