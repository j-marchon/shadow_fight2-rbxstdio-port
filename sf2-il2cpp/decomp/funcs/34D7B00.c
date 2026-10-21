// NKOIBKNPICN$$INFLJKCCKKI @ RVA 0x34D7B00

void NKOIBKNPICN__INFLJKCCKKI
               (System_Collections_Generic_List_int__o *PBDIPLHDHHD,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int index;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = PBDIPLHDHHD;
  if ((DAT_045686ea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<int>_set_Item__);
    DAT_045686ea = 1;
  }
  if (PBDIPLHDHHD != (System_Collections_Generic_List_int__o *)0x0) {
    if (0 < (PBDIPLHDHHD->fields)._size) {
      index = 0;
      do {
        iVar2 = System_Collections_Generic_List<int>__get_Item
                          (PBDIPLHDHHD,index,Method_System_Collections_Generic_List<int>_get_Item__)
        ;
        uVar1 = iVar2 - 2;
        if ((uVar1 < 7) && ((0x77U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          System_Collections_Generic_List<int>__set_Item
                    (PBDIPLHDHHD,index,*(int32_t *)(&DAT_00e29a3c + (long)(int)uVar1 * 4),
                     Method_System_Collections_Generic_List<int>_set_Item__);
        }
        index = index + 1;
      } while (index < (PBDIPLHDHHD->fields)._size);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

