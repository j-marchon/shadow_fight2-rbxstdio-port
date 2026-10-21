// EPFMFHDGMCE$$BFIMMMKACHP @ RVA 0x3536AD0

void EPFMFHDGMCE__BFIMMMKACHP(EPFMFHDGMCE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  FOKJBDHLIMG_o *pFVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  int index;
  
  if ((DAT_04568a94 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568a94 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar3 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
  if ((pFVar3 != (FOKJBDHLIMG_o *)0x0) &&
     (__this_00 = (pFVar3->fields).CNLHOAHDHCF,
     __this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
                    /* try { // try from 03636b64 to 03736d23 has its CatchHandler @ 03636b64
                       catch() { ... } // from try @ 03636b64 with catch @ 03636b64
                       catch() { ... } // from try @ 03636dd4 with catch @ 03636b64
                       catch() { ... } // from try @ 03636e10 with catch @ 03636b64
                       catch() { ... } // from try @ 03636e4c with catch @ 03636b64
                       catch() { ... } // from try @ 03636e7c with catch @ 03636b64 */
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03636bd8;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pIVar2[4].klass,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar1) {
          System_Collections_Generic_List<object>__RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     Method_System_Collections_Generic_List<HEFOANCOHDC>_RemoveAt__);
          return;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    return;
  }
LAB_03636bd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

