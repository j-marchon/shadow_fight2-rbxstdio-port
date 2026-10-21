// Nekki.SF2.GUI.Dialogs.NotificationsGame$$add_OnClose @ RVA 0x30F7B44

void Nekki_SF2_GUI_Dialogs_NotificationsGame__add_OnClose
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,System_Action_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_0456646f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456646f = 1;
  }
  ppSVar4 = &(__this->fields).DKPPMJCLNAB;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

