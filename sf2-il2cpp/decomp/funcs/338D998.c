// AJJPCMDCAOB$$INLAIHLANEL @ RVA 0x338D998

void AJJPCMDCAOB__INLAIHLANEL(AJJPCMDCAOB_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
  if ((DAT_04567bf6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04567bf6 = 1;
  }
  a = (__this->fields).JNBAAFICFDI;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

