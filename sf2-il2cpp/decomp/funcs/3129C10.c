// CPAJCJHOLEJ$$CGPGHOGPJBM @ RVA 0x3129C10

void CPAJCJHOLEJ__CGPGHOGPJBM(CPAJCJHOLEJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  int32_t DPJIDNBJIBG_00;
  uint index;
  uint index_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar1;
  IEFEBEDLHNN_o *pIVar2;
  IEFEBEDLHNN_o **ppIVar3;
  GBJGJEGPHKD_o *__this_00;
  
  if ((DAT_04566686 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04566686 = 1;
  }
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (__this_00 = (BCKBBGCOMJD->fields).HMIAFJALFCJ, __this_00 != (GBJGJEGPHKD_o *)0x0)) {
    DPJIDNBJIBG = GBJGJEGPHKD__HBCACOFLPCI(__this_00,(__this->fields).OEIHJCIGMEE,(MethodInfo *)0x0)
    ;
    DPJIDNBJIBG_00 =
         GBJGJEGPHKD__HBCACOFLPCI(__this_00,(__this->fields).PKNGDBGLNEO,(MethodInfo *)0x0);
    index = GBJGJEGPHKD__HDEBEPGIFCJ(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
    index_00 = GBJGJEGPHKD__HDEBEPGIFCJ(__this_00,DPJIDNBJIBG_00,(MethodInfo *)0x0);
    if ((index & index_00) == 0xffffffff) {
      return;
    }
    pSVar1 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      pIVar2 = (IEFEBEDLHNN_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      (__this->fields).GMAKBKOBGPK = pIVar2;
      thunk_FUN_01c20e04();
      pSVar1 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
        pIVar2 = (IEFEBEDLHNN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index_00,
                            Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
        ppIVar3 = &(__this->fields).NLCJBEOFPKD;
        *ppIVar3 = pIVar2;
        thunk_FUN_01c20e04(ppIVar3,pIVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

