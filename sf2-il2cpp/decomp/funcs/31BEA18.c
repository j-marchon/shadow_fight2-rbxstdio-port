// BCPODJMEKMJ$$.ctor @ RVA 0x31BEA18

void BCPODJMEKMJ___ctor(BCPODJMEKMJ_o *__this,BCPODJMEKMJ_o *AAOOKAGABPJ,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *pSVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *collection;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o **ppSVar3;
  
  if ((DAT_04566c07 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    DAT_04566c07 = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  ppSVar1 = &(__this->fields).AGJPNDANDGC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pSVar2 = (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
  ppSVar3 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEFEBEDLHNN___ctor((IEFEBEDLHNN_o *)__this,(IEFEBEDLHNN_o *)AAOOKAGABPJ,(MethodInfo *)0x0);
  if (AAOOKAGABPJ != (BCPODJMEKMJ_o *)0x0) {
    collection = (AAOOKAGABPJ->fields).PLMBJNAAGOI;
    pSVar2 = (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)
             thunk_FUN_01bda818(
                               System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo
                               );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar2,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    (__this->fields).PLMBJNAAGOI = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    IEFEBEDLHNN__GNLPNKGBAFL((IEFEBEDLHNN_o *)__this,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

