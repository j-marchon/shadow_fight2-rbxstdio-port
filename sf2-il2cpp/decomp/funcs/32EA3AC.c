// KOGMOACEOAM$$AKNJIJEHOBH @ RVA 0x32EA3AC

int32_t KOGMOACEOAM__AKNJIJEHOBH
                  (KOGMOACEOAM_o *__this,System_IO_BinaryReader_o *NLKOFFFAFHM,MethodInfo *method)

{
  int32_t length;
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *item;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if ((DAT_04567631 & 1) == 0) {
    FUN_01bab630(&KJFHBENFBBO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    DAT_04567631 = 1;
  }
  if (NLKOFFFAFHM != (System_IO_BinaryReader_o *)0x0) {
    uVar3 = (*(NLKOFFFAFHM->klass->vtable)._16_ReadUInt32.methodPtr)
                      (NLKOFFFAFHM,(NLKOFFFAFHM->klass->vtable)._16_ReadUInt32.method);
    pSVar4 = (__this->fields).KBPGCNCNJAG;
    if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) {
        iVar7 = 4;
      }
      else {
        iVar7 = 4;
        iVar8 = 1;
        do {
          if ((KJFHBENFBBO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          item = KJFHBENFBBO__IIADICPGOMI(NLKOFFFAFHM,(MethodInfo *)0x0);
          lVar6 = Method_System_Collections_Generic_List<string>_Add__;
          if ((item == (System_String_o *)0x0) ||
             (pSVar4 = (__this->fields).KBPGCNCNJAG,
             pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_033ea528;
          iVar1 = (item->fields)._stringLength;
          pSVar5 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pSVar5 == (System_String_array *)0x0) goto LAB_033ea528;
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = (long)iVar8;
          iVar7 = iVar7 + iVar1 + 1;
          iVar8 = iVar8 + 1;
        } while (lVar6 < (long)(ulong)uVar3);
      }
      return iVar7;
    }
  }
LAB_033ea528:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

