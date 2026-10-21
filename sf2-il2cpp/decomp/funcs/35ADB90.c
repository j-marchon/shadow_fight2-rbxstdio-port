// AJNNHGGLGIF$$OLKDJEKDIJB @ RVA 0x35ADB90

bool AJNNHGGLGIF__OLKDJEKDIJB(AJNNHGGLGIF_o *__this,int32_t ODIAFMNGOLA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if ((DAT_04568e67 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_04568e67 = 1;
  }
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  if ((__this->fields).AIPKOAMHBBP == false) {
    __this_00 = (__this->fields).BPPCPHCDICD;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_58,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_40._8_4_ = local_58.fields._index;
    local_40._12_4_ = local_58.fields._version;
    local_40._0_8_ = local_58.fields._list;
    local_30 = local_58.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        iVar2 = 6;
        goto LAB_036adc60;
      }
    } while ((int32_t)local_30 != ODIAFMNGOLA);
    iVar2 = 5;
LAB_036adc60:
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    bVar1 = bVar1 && iVar2 == 5;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

