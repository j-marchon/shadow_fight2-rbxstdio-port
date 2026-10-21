// OPNFCOGALLI$$HIEIGJFFBFA @ RVA 0x3109C00

bool OPNFCOGALLI__HIEIGJFFBFA
               (OPNFCOGALLI_o *__this,System_Collections_Generic_List_string__o *OKAINPMIKKD,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *OONIBCILJBN;
  JADGCGOJLJB_o *pJVar2;
  MethodInfo *method_00;
  int iVar3;
  bool bVar4;
  
  if ((DAT_04566522 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04566522 = 1;
  }
  if (OKAINPMIKKD != (System_Collections_Generic_List_string__o *)0x0) {
    iVar3 = (OKAINPMIKKD->fields)._size;
    bVar4 = 0 < iVar3;
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
        OONIBCILJBN = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)OKAINPMIKKD,iVar3,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        pJVar2 = OPNFCOGALLI__HIMFHBJAEMJ(__this,OONIBCILJBN,method_00);
        if (pJVar2 != (JADGCGOJLJB_o *)0x0) {
          return bVar4;
        }
        iVar1 = (OKAINPMIKKD->fields)._size;
        iVar3 = iVar3 + 1;
        bVar4 = iVar3 < iVar1;
      } while (iVar3 < iVar1);
    }
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

