// OPNFCOGALLI$$BGJNOONKFCH @ RVA 0x3109DA4

void OPNFCOGALLI__BGJNOONKFCH(OPNFCOGALLI_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *pSVar1;
  System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o **ppSVar2;
  
  if ((DAT_04566524 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_TypeInfo);
    DAT_04566524 = 1;
  }
  ppSVar2 = &(__this->fields).HCDNAGGCLDA;
  pSVar1 = *ppSVar2;
  if (pSVar1 == (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0) {
    pSVar1 = (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)
             thunk_FUN_01bda818(System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_TypeInfo
                               );
    System_Collections_Generic_HashSet<Int32Enum>___ctor
              ((System_Collections_Generic_HashSet_T__o *)pSVar1,
               Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>__ctor__);
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = *ppSVar2;
    if (pSVar1 == (System_Collections_Generic_HashSet_JADGCGOJLJB_IMLPLLLPALI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  System_Collections_Generic_HashSet<Int32Enum>__Add
            ((System_Collections_Generic_HashSet_T__o *)pSVar1,ACCIHBHMFPN,
             Method_System_Collections_Generic_HashSet<JADGCGOJLJB_IMLPLLLPALI>_Add__);
  return;
}

