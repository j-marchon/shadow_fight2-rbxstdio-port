// StepBar$$GetPercentIndex @ RVA 0x352E7DC

int32_t StepBar__GetPercentIndex(StepBar_o *__this,float IPBCCKOHOBD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined1 local_50 [16];
  undefined8 local_40;
  
                    /* try { // try from 0362e7e0 to 0372e7e7 has its CatchHandler @ 0362e7fc */
                    /* try { // try from 0362e7e8 to 0372e7f3 has its CatchHandler @ 0362e3cc */
                    /* try { // try from 0362e7f4 to 0372e7fb has its CatchHandler @ 0362e7fc */
                    /* catch() { ... } // from try @ 0362e730 with catch @ 0362e7fc
                       catch() { ... } // from try @ 0362e7e0 with catch @ 0362e7fc
                       catch() { ... } // from try @ 0362e7f4 with catch @ 0362e7fc */
  if ((DAT_04568a42 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_04568a42 = 1;
    method = extraout_x1;
  }
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_4_ = 0;
  local_50._12_4_ = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  __this_00 = (__this->fields).DLBOAANKFLC;
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<int>__GetEnumerator
            (&local_68,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
  iVar2 = 0;
  local_50._8_4_ = local_68.fields._index;
  local_50._12_4_ = local_68.fields._version;
  local_50._0_8_ = local_68.fields._list;
  local_40 = local_68.fields._current;
  while (bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                           ((System_Collections_Generic_List_Enumerator_int__o *)local_50,
                            Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
        bVar1) {
    if ((float)(int32_t)local_40 == IPBCCKOHOBD) goto LAB_0362e8ac;
    iVar2 = iVar2 + 1;
  }
  iVar2 = -1;
LAB_0362e8ac:
  System_Collections_Generic_List_Enumerator<int>__Dispose
            ((System_Collections_Generic_List_Enumerator_int__o *)local_50,
             Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
  return iVar2;
}

