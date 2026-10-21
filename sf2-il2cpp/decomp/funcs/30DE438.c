// KIHIPAJGNBF$$PLHJPEHILIJ @ RVA 0x30DE438

void KIHIPAJGNBF__PLHJPEHILIJ(KIHIPAJGNBF_o *__this,System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Byte_array *NMIFKBCCFAE;
  System_Text_Encoding_o *pSVar4;
  System_String_o *__this_00;
  System_String_array *pSVar5;
  System_Collections_Generic_List_long__o *pSVar6;
  ulong uVar7;
  System_Int64_array *pSVar8;
  ulong uVar9;
  int64_t local_38;
  
  if ((DAT_04566382 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Clear__);
    DAT_04566382 = 1;
  }
  local_38 = 0;
  pSVar6 = (__this->fields).LLDABLJEMBM;
  if (pSVar6 != (System_Collections_Generic_List_long__o *)0x0) {
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    bVar3 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NMIFKBCCFAE = System_Convert__FromBase64String(EHNFGMGKCHO,(MethodInfo *)0x0);
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
    }
    EGFFLEKJFGN__OPAMPJJKLGE(NMIFKBCCFAE,(System_Byte_array *)0x0,(MethodInfo *)0x0);
    pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (((pSVar4 != (System_Text_Encoding_o *)0x0) &&
        (__this_00 = (System_String_o *)
                     (*(pSVar4->klass->vtable)._37_GetString.methodPtr)
                               (pSVar4,NMIFKBCCFAE,(pSVar4->klass->vtable)._37_GetString.method),
        __this_00 != (System_String_o *)0x0)) &&
       (pSVar5 = System_String__Split(__this_00,0x2c,0,(MethodInfo *)0x0),
       pSVar5 != (System_String_array *)0x0)) {
      if ((int)pSVar5->max_length < 1) {
        return;
      }
      uVar9 = 0;
      uVar7 = pSVar5->max_length & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        local_38 = 0;
        bVar3 = System_Int64__TryParse(pSVar5->m_Items[uVar9],&local_38,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<long>_Add__;
        if (bVar3) {
          pSVar6 = (__this->fields).LLDABLJEMBM;
          if (pSVar6 == (System_Collections_Generic_List_long__o *)0x0) break;
          pSVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pSVar8 == (System_Int64_array *)0x0) break;
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pSVar8->max_length) {
            (pSVar6->fields)._size = uVar1 + 1;
            pSVar8->m_Items[(int)uVar1] = local_38;
          }
          else {
            System_Collections_Generic_List<long>__AddWithResize
                      (pSVar6,local_38,
                       *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = (uint)pSVar5->max_length;
        uVar7 = (ulong)uVar1;
        uVar9 = uVar9 + 1;
        if ((long)(int)uVar1 <= (long)uVar9) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

