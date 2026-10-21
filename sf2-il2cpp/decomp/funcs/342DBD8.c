// GBJGJEGPHKD$$OCJAHBKIFNO @ RVA 0x342DBD8

IEFEBEDLHNN_o *
GBJGJEGPHKD__OCJAHBKIFNO(GBJGJEGPHKD_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar2;
  IEFEBEDLHNN_o *local_28;
  
  if ((DAT_04568157 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_TryGetValue__);
    DAT_04568157 = 1;
  }
  pGVar2 = (__this->fields).EOIPAPCMGGF;
  if (pGVar2 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_0352dc8c;
  if ((pGVar2->fields).LNBKBMNLJNG != (IEFEBEDLHNN_o *)0x0) {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,(__this->fields).HICKHACBDAC,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).EOIPAPCMGGF;
    if (bVar1) {
      if (pGVar2 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) {
        return (pGVar2->fields).LNBKBMNLJNG;
      }
      goto LAB_0352dc8c;
    }
    local_28 = (IEFEBEDLHNN_o *)0x0;
    if (pGVar2 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) goto LAB_0352dc8c;
  }
  local_28 = (IEFEBEDLHNN_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (pGVar2->fields).NHPHHKCGHNM;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_TryGetValue__
                      );
    if (!bVar1) {
      local_28 = (IEFEBEDLHNN_o *)0x0;
    }
    return local_28;
  }
LAB_0352dc8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

