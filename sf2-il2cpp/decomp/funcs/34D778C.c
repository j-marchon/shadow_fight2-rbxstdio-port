// NKOIBKNPICN$$JGMKBFKGGIL @ RVA 0x34D778C

/* WARNING: Removing unreachable block (ram,0x035d793c) */

void NKOIBKNPICN__JGMKBFKGGIL(NKOIBKNPICN_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  MethodInfo *extraout_x1;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_60 [16];
  undefined8 local_50;
  
  if ((DAT_045686e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    DAT_045686e4 = 1;
    method = extraout_x1;
  }
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_4_ = 0;
  local_60._12_4_ = 0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).OOIGOEAHPMA;
  if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((pSVar2->fields)._size == 1) {
    (__this->fields).BHJAGFIAEAA = 0;
  }
  else {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,pSVar2,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_60._8_4_ = local_98.fields._index;
    local_60._12_4_ = local_98.fields._version;
    local_60._0_8_ = local_98.fields._list;
    local_50 = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<int>__Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                   Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
        (__this->fields).BHJAGFIAEAA = 1;
        return;
      }
      pSVar2 = (__this->fields).KJNPENJKBKD;
      if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_50;
      System_Collections_Generic_List<int>__GetEnumerator
                (&local_98,pSVar2,Method_System_Collections_Generic_List<int>_GetEnumerator__);
      local_80._8_4_ = local_98.fields._index;
      local_80._12_4_ = local_98.fields._version;
      local_80._0_8_ = local_98.fields._list;
      local_70 = local_98.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                           Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
        if (!bVar1) {
          iVar3 = 3;
          goto LAB_035d78c0;
        }
      } while (iVar3 != (int)local_70);
      (__this->fields).BHJAGFIAEAA = 0;
      iVar3 = 7;
LAB_035d78c0:
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    } while ((iVar3 == 3) || (iVar3 == 0));
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
  }
  return;
}

