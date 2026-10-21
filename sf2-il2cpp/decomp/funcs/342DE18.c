// GBJGJEGPHKD$$IBNCHLIHECC @ RVA 0x342DE18

System_Collections_Generic_List_IEFEBEDLHNN__o *
GBJGJEGPHKD__IBNCHLIHECC(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  long lVar1;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568169 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    DAT_04568169 = 1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar2 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).FMNFMACCAKD,
     pSVar3 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    lVar1 = 0x38;
    if ((pSVar3->fields)._size < 1) {
      lVar1 = 0x28;
    }
    return *(System_Collections_Generic_List_IEFEBEDLHNN__o **)((long)&pGVar2->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}

