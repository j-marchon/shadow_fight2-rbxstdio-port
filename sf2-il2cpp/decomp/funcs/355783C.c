// KJFHBENFBBO$$LFEHAPCICEA @ RVA 0x355783C

void KJFHBENFBBO__LFEHAPCICEA
               (System_IO_BinaryReader_o *GJMMPLCCOAO,
               System_Collections_Generic_List_string__o *KJIFJFDCBOH,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  System_Char_array *val;
  System_String_o *item;
  System_String_array *pSVar6;
  ulong uVar7;
  
  if ((DAT_04568b77 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    DAT_04568b77 = 1;
  }
  if (GJMMPLCCOAO != (System_IO_BinaryReader_o *)0x0) {
    sVar4 = (*(GJMMPLCCOAO->klass->vtable)._13_ReadInt16.methodPtr)
                      (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._13_ReadInt16.method);
    uVar2 = (uint)sVar4;
    lVar5 = (*(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.methodPtr)
                      (GJMMPLCCOAO,(ulong)uVar2,(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.method);
    if (0 < (int)uVar2) {
      if (lVar5 == 0) goto LAB_0365797c;
      uVar7 = 0;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        val = (System_Char_array *)
              (*(GJMMPLCCOAO->klass->vtable)._23_ReadChars.methodPtr)
                        (GJMMPLCCOAO,(ulong)*(byte *)(lVar5 + 0x20 + uVar7),
                         (GJMMPLCCOAO->klass->vtable)._23_ReadChars.method);
        item = System_String__CreateString((System_String_o *)0x0,val,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<string>_Add__;
        if (KJIFJFDCBOH == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0365797c;
        pSVar6 = (KJIFJFDCBOH->fields)._items;
        (KJIFJFDCBOH->fields)._version = (KJIFJFDCBOH->fields)._version + 1;
        if (pSVar6 == (System_String_array *)0x0) goto LAB_0365797c;
        uVar1 = (KJIFJFDCBOH->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (KJIFJFDCBOH->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KJIFJFDCBOH,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    return;
  }
LAB_0365797c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

