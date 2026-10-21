// HPEENDCCJND$$MNAABHNFFGN @ RVA 0x3157E44

int32_t HPEENDCCJND__MNAABHNFFGN
                  (HPEENDCCJND_o *__this,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Random_o *pSVar4;
  
  pSVar4 = (__this->fields).NBAAKDGJIEI;
  if (pSVar4 != (System_Random_o *)0x0) {
    iVar3 = (*(pSVar4->klass->vtable)._5_Next.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable)._5_Next.method);
    iVar2 = DEDNHOELFOD - CKCOLJLFJDB;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar3 / iVar2;
    }
    return (iVar3 - iVar1 * iVar2) + CKCOLJLFJDB;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

