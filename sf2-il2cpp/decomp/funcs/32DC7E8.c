// Nekki.SF2.GUI.Dialogs.Raids.SeasFinBaseContent$$add_OnClose @ RVA 0x32DC7E8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__add_OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *__this,
               System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045675c7 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045675c7 = 1;
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

