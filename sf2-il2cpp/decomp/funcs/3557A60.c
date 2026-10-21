// KJFHBENFBBO$$KBOKKKALJIN @ RVA 0x3557A60

void KJFHBENFBBO__KBOKKKALJIN
               (System_IO_BinaryReader_o *GJMMPLCCOAO,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  uint value;
  bool_conflict bVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  System_Char_array *val;
  System_String_o *KGLJICLJHEL;
  ECENNHNBAME_o *item;
  ECENNHNBAME_array *pEVar6;
  ulong uVar7;
  
  if ((DAT_04568b79 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_set_Capacity__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04568b79 = 1;
  }
  if (GJMMPLCCOAO != (System_IO_BinaryReader_o *)0x0) {
    uVar4 = (*(GJMMPLCCOAO->klass->vtable)._14_ReadUInt16.methodPtr)
                      (GJMMPLCCOAO,(GJMMPLCCOAO->klass->vtable)._14_ReadUInt16.method);
    if (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      value = (uint)uVar4;
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,value,
                 Method_System_Collections_Generic_List<ECENNHNBAME>_set_Capacity__);
      lVar5 = (*(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.methodPtr)
                        (GJMMPLCCOAO,(ulong)value,(GJMMPLCCOAO->klass->vtable)._25_ReadBytes.method)
      ;
      if (uVar4 != 0) {
        if (lVar5 == 0) goto LAB_03657c70;
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
          KGLJICLJHEL = System_String__CreateString((System_String_o *)0x0,val,(MethodInfo *)0x0);
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo);
          }
          if (DAT_04568c0e == '\0') {
            FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
            DAT_04568c0e = '\x01';
          }
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = OCMLPCKBHPN_TypeInfo->static_fields->KEMBBOLADAP;
          if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(LDHBHPILNMA_TypeInfo);
          }
          item = LDHBHPILNMA__CCBEONOLBID(KGLJICLJHEL,bVar1 != false,(MethodInfo *)0x0);
          lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
          pEVar6 = (ELAGKBMJCOD->fields)._items;
          (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
          if (pEVar6 == (ECENNHNBAME_array *)0x0) goto LAB_03657c70;
          uVar2 = (ELAGKBMJCOD->fields)._size;
          if (uVar2 < (uint)pEVar6->max_length) {
            (ELAGKBMJCOD->fields)._size = uVar2 + 1;
            pEVar6->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
        } while (value != uVar7);
      }
      return;
    }
  }
LAB_03657c70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

