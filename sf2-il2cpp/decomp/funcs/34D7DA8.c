// NKOIBKNPICN$$HELJHKONFOI @ RVA 0x34D7DA8

System_String_o * NKOIBKNPICN__HELJHKONFOI(NKOIBKNPICN_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int iVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  undefined8 *puVar8;
  int iVar9;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined8 local_88;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  
  if ((DAT_045686e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&StringLiteral_11505);
    FUN_01bab630(&StringLiteral_3313);
    FUN_01bab630(&StringLiteral_8249);
    FUN_01bab630(&StringLiteral_2486);
    FUN_01bab630(&StringLiteral_341);
    FUN_01bab630(&StringLiteral_510);
    FUN_01bab630(&StringLiteral_1154);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_21213);
    DAT_045686e9 = 1;
  }
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  local_88 = 0;
  pSVar7 = (__this->fields).OOIGOEAHPMA;
  if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
    if ((pSVar7->fields)._size == 0) {
      pSVar7 = (__this->fields).KJNPENJKBKD;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_035d80d4;
      if ((pSVar7->fields)._size == 0) {
        return StringLiteral_1;
      }
    }
    pSVar5 = System_String__Concat(StringLiteral_8249,StringLiteral_21213,(MethodInfo *)0x0);
    pSVar7 = (__this->fields).OOIGOEAHPMA;
    if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List<int>__GetEnumerator
                (&local_a0,pSVar7,Method_System_Collections_Generic_List<int>_GetEnumerator__);
      iVar9 = 0;
      local_80._8_4_ = local_a0.fields._index;
      local_80._12_4_ = local_a0.fields._version;
      local_80._0_8_ = local_a0.fields._list;
      local_70 = local_a0.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                               ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                                Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
            pSVar1 = StringLiteral_1154, pSVar3 = StringLiteral_1, bVar4) {
        local_88 = CONCAT44((int32_t)local_70,(undefined4)local_88);
        pSVar7 = (__this->fields).OOIGOEAHPMA;
        if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = (pSVar7->fields)._size;
        pSVar6 = System_Int32__ToString((int)&local_88 + 4,(MethodInfo *)0x0);
        if (iVar2 + -1 <= iVar9) {
          pSVar1 = pSVar3;
        }
        pSVar5 = System_String__Concat(pSVar5,pSVar6,pSVar1,(MethodInfo *)0x0);
        iVar9 = iVar9 + 1;
      }
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
      pSVar5 = System_String__Concat(pSVar5,StringLiteral_341,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).KJNPENJKBKD;
      if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__GetEnumerator
                  (&local_a0,pSVar7,Method_System_Collections_Generic_List<int>_GetEnumerator__);
        iVar9 = 0;
        local_80._8_4_ = local_a0.fields._index;
        local_80._12_4_ = local_a0.fields._version;
        local_80._0_8_ = local_a0.fields._list;
        local_70 = local_a0.fields._current;
        while( true ) {
          bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                            ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                             Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
          pSVar1 = StringLiteral_1154;
          pSVar3 = StringLiteral_1;
          if (!bVar4) {
            System_Collections_Generic_List_Enumerator<int>__Dispose
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                       Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
            pSVar5 = System_String__Concat(pSVar5,StringLiteral_510,(MethodInfo *)0x0);
            iVar9 = (__this->fields).BHJAGFIAEAA;
            if (iVar9 == 0) {
              puVar8 = &StringLiteral_3313;
            }
            else if (iVar9 == 1) {
              puVar8 = &StringLiteral_11505;
            }
            else {
              puVar8 = &StringLiteral_2486;
            }
            pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar8,(MethodInfo *)0x0);
            return pSVar5;
          }
          local_88 = CONCAT44(local_88._4_4_,(int32_t)local_70);
          pSVar7 = (__this->fields).KJNPENJKBKD;
          if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
          iVar2 = (pSVar7->fields)._size;
          pSVar6 = System_Int32__ToString((int32_t)&local_88,(MethodInfo *)0x0);
          if (iVar2 + -1 <= iVar9) {
            pSVar1 = pSVar3;
          }
          pSVar5 = System_String__Concat(pSVar5,pSVar6,pSVar1,(MethodInfo *)0x0);
          iVar9 = iVar9 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_035d80d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

