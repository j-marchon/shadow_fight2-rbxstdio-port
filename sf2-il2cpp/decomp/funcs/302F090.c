// Nekki.SF2.GUI.SimpleScroll$$add_OnScrollEnded @ RVA 0x302F090

void Nekki_SF2_GUI_SimpleScroll__add_OnScrollEnded
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_BaseScrollItem__o *pSVar3;
  System_Action_BaseScrollItem__o *a;
  
  if ((DAT_04565ce1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565ce1 = 1;
  }
  a = (__this->fields).FOKMEOHPDJL;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_BaseScrollItem__o *)FUN_01c07368(&(__this->fields).FOKMEOHPDJL,pSVar2,a)
    ;
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

