// GBJGJEGPHKD$$KBGKNOFPPFE @ RVA 0x3430470

void GBJGJEGPHKD__KBGKNOFPPFE(GBJGJEGPHKD_o *__this,CNDPAJOLKFN_o *EMLHFAIPGGA,MethodInfo *method)

{
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar2;
  int index;
  
  method_00 = (MethodInfo *)EMLHFAIPGGA;
  if ((DAT_04568167 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04568167 = 1;
    method_00 = extraout_x1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if (pGVar2 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
    index = 0;
    while (__this_00 = (pGVar2->fields).DMFCLEMPPIM,
          __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      if ((__this_00->fields)._size <= index) {
        GBJGJEGPHKD__KFIBHLNFEHH(__this,method_00);
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      if ((pIVar1 == (Il2CppObject *)0x0) || (pIVar1[3].monitor == (CNDPAJOLKFN_o *)0x0)) break;
      CNDPAJOLKFN__LFENGGKOJDO(pIVar1[3].monitor,EMLHFAIPGGA,(MethodInfo *)0x0);
      if (pIVar1[4].klass == (Il2CppClass *)0x0) break;
      CNDPAJOLKFN__LFENGGKOJDO((CNDPAJOLKFN_o *)pIVar1[4].klass,EMLHFAIPGGA,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).EOIPAPCMGGF;
      index = index + 1;
      method_00 = extraout_x1_00;
      if (pGVar2 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

