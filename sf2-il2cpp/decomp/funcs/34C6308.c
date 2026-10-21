// EINKKMIHCHI$$IEIIOHNJOAL @ RVA 0x34C6308

void EINKKMIHCHI__IEIIOHNJOAL(EINKKMIHCHI_o *__this,bool LNGMMFHGAOC,MethodInfo *method)

{
  System_String_o *pSVar1;
  GPFMGALHFJK_o *pGVar2;
  
  if ((DAT_0456863c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&StringLiteral_3646);
    DAT_0456863c = 1;
  }
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = System_Boolean__ToString(true,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(StringLiteral_3646,pSVar1,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
  if (LNGMMFHGAOC) {
    pGVar2 = (__this->fields).KAKIHIMNDAE;
    if (pGVar2 == (GPFMGALHFJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pGVar2->klass->vtable)._43_DJJDKCIDCDJ.methodPtr)
              (pGVar2,(pGVar2->klass->vtable)._43_DJJDKCIDCDJ.method);
  }
  return;
}

