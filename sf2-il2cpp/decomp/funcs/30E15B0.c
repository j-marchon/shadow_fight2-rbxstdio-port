// PKNBJJPHAKI$$HMDJFLDLPMN @ RVA 0x30E15B0

void PKNBJJPHAKI__HMDJFLDLPMN(PKNBJJPHAKI_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_GBJGJEGPHKD__o *pSVar1;
  GBJGJEGPHKD_o *pGVar2;
  GBJGJEGPHKD_o **ppGVar3;
  
  if ((DAT_045663a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GBJGJEGPHKD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBJGJEGPHKD>_get_Item__);
    DAT_045663a5 = 1;
  }
  pSVar1 = (__this->fields).DDOAJGPFCNB;
  if (pSVar1 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
    pGVar2 = (GBJGJEGPHKD_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                        Method_System_Collections_Generic_List<GBJGJEGPHKD>_get_Item__);
    ppGVar3 = &(__this->fields).JBPKNAKOHLP;
    if ((pGVar2 == *ppGVar3) || (ppGVar3 = &(__this->fields).AAJIHJPLHDA, pGVar2 == *ppGVar3)) {
      *ppGVar3 = (GBJGJEGPHKD_o *)0x0;
      thunk_FUN_01c20e04(ppGVar3,0);
    }
    pSVar1 = (__this->fields).DDOAJGPFCNB;
    if (pSVar1 != (System_Collections_Generic_List_GBJGJEGPHKD__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)pSVar1,DPJIDNBJIBG,
                 Method_System_Collections_Generic_List<GBJGJEGPHKD>_RemoveAt__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

