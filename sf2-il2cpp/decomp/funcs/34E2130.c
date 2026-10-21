// IPCACEBFONO$$FAGKGMMBPNG @ RVA 0x34E2130

/* WARNING: Removing unreachable block (ram,0x035e22d4) */

int32_t IPCACEBFONO__FAGKGMMBPNG
                  (IPCACEBFONO_o *__this,System_Collections_Generic_List_int__o *GOAFNAHMHOJ,
                  System_Collections_Generic_List_int__o *AKELCELDNKJ,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_60 [16];
  undefined8 local_50;
  
  if ((DAT_04568741 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    __this = (IPCACEBFONO_o *)FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__)
    ;
    DAT_04568741 = 1;
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
  if (GOAFNAHMHOJ == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if ((GOAFNAHMHOJ->fields)._size == 1) {
    uVar2 = 0;
  }
  else {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,GOAFNAHMHOJ,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_60._8_4_ = local_98.fields._index;
    local_60._12_4_ = local_98.fields._version;
    local_60._0_8_ = local_98.fields._list;
    local_50 = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        iVar3 = 8;
        break;
      }
      if (AKELCELDNKJ == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_50;
      System_Collections_Generic_List<int>__GetEnumerator
                (&local_98,AKELCELDNKJ,Method_System_Collections_Generic_List<int>_GetEnumerator__);
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
          goto LAB_035e2264;
        }
      } while (iVar3 != (int)local_70);
      iVar3 = 7;
LAB_035e2264:
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    } while ((iVar3 == 3) || (iVar3 == 0));
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_60,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    uVar2 = (uint)(iVar3 != 7);
  }
  return uVar2;
}

