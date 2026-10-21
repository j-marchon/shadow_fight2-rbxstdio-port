// GBJGJEGPHKD$$HBCACOFLPCI @ RVA 0x342EE60

int32_t GBJGJEGPHKD__HBCACOFLPCI
                  (GBJGJEGPHKD_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  Il2CppObject *pIVar2;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar3;
  int index;
  
  if ((DAT_04568165 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_04568165 = 1;
  }
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if (pGVar3 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
    index = 0;
    do {
      __this_00 = (pGVar3->fields).DMFCLEMPPIM;
      if (__this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) break;
      if ((__this_00->fields)._size <= index) {
        return -1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      if (pIVar2 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality(KGLJICLJHEL,pIVar2[4].monitor,(MethodInfo *)0x0);
      if (bVar1) {
        return index;
      }
      pGVar3 = (__this->fields).EOIPAPCMGGF;
      index = index + 1;
    } while (pGVar3 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

