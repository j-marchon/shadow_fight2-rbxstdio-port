// IEHDDOIHPNI$$EDNBFMMPAHG @ RVA 0x336CFF4

void IEHDDOIHPNI__EDNBFMMPAHG(HOOAAGABMBL_o *HFJDDNBBENI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  ulong uVar4;
  System_Collections_Generic_List_string__o *__this;
  IEHDDOIHPNI_c *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar5;
  HOOAAGABMBL_array *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 0346d000 to 0356d007 has its CatchHandler @ 0346d178 */
  if ((DAT_04567afb & 1) == 0) {
                    /* try { // try from 0346d01c to 0356d023 has its CatchHandler @ 0346d170 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
                    /* try { // try from 0346d02c to 0356d033 has its CatchHandler @ 0346d168 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
                    /* try { // try from 0346d040 to 0356d0a3 has its CatchHandler @ 0346d184 */
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
    DAT_04567afb = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((HFJDDNBBENI == (HOOAAGABMBL_o *)0x0) ||
     (uVar4 = (*(HFJDDNBBENI->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                        (HFJDDNBBENI,(HFJDDNBBENI->klass->vtable)._4_OIEONLNFHKC.method),
     (uVar4 & 1) == 0)) {
    return;
  }
                    /* try { // try from 0346d0a4 to 0356d137 has its CatchHandler @ 0346cc94 */
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = IEHDDOIHPNI_TypeInfo->static_fields->ICLDBBGODHJ;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this,
                       (Il2CppObject *)(HFJDDNBBENI->fields)._COIPKAKHDFP_k__BackingField,
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (bVar3) {
      return;
    }
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (IEHDDOIHPNI_TypeInfo->static_fields->NMFCCFJDDNN == false) {
      method_00 = IEHDDOIHPNI_TypeInfo;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        method_00 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
      }
      IEHDDOIHPNI__GIENGNEGHPJ((MethodInfo *)method_00);
    }
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
    if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* try { // try from 0346d138 to 0356d13f has its CatchHandler @ 0346d194 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
                    /* try { // try from 0346d140 to 0356d143 has its CatchHandler @ 0346d180 */
                    /* try { // try from 0346d144 to 0356d147 has its CatchHandler @ 0346d17c */
                    /* try { // try from 0346d148 to 0356d14b has its CatchHandler @ 0346d16c */
                    /* try { // try from 0346d14c to 0356d153 has its CatchHandler @ 0346d188 */
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
                    /* try { // try from 0346d154 to 0356d157 has its CatchHandler @ 0346cc94 */
      do {
                    /* try { // try from 0346d158 to 0356d15b has its CatchHandler @ 0346d164 */
                    /* try { // try from 0346d15c to 0356d1a3 has its CatchHandler @ 0346cc94 */
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        item = local_50.fields._current;
                    /* catch() { ... } // from try @ 0346d158 with catch @ 0346d164 */
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          goto LAB_0346d1e4;
        }
                    /* catch() { ... } // from try @ 0346d02c with catch @ 0346d168 */
                    /* catch() { ... } // from try @ 0346d148 with catch @ 0346d16c */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0346d01c with catch @ 0346d170 */
                    /* catch() { ... } // from try @ 0346cff0 with catch @ 0346d174 */
                    /* catch() { ... } // from try @ 0346d000 with catch @ 0346d178 */
                    /* catch() { ... } // from try @ 0346d144 with catch @ 0346d17c */
        bVar3 = System_String__op_Equality
                          (local_50.fields._current[1].monitor,
                           (HFJDDNBBENI->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0346d140 with catch @ 0346d180 */
      } while (!bVar3);
                    /* catch() { ... } // from try @ 0346d040 with catch @ 0346d184 */
                    /* catch() { ... } // from try @ 0346d14c with catch @ 0346d188 */
                    /* catch() { ... } // from try @ 0346cf84 with catch @ 0346d18c */
                    /* catch() { ... } // from try @ 0346cf28 with catch @ 0346d190 */
                    /* catch() { ... } // from try @ 0346d138 with catch @ 0346d194 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0346d1a4 to 0356d1a7 has its CatchHandler @ 0346d1b8 */
        thunk_FUN_01ba7564();
      }
      pSVar5 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
      if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* catch() { ... } // from try @ 0346d1a4 with catch @ 0346d1b8 */
                    /* try { // try from 0346d1c0 to 0356d227 has its CatchHandler @ 0346d23c */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar5,item,
                   Method_System_Collections_Generic_List<HOOAAGABMBL>_Remove__);
LAB_0346d1e4:
        if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
        pSVar5 = IEHDDOIHPNI_TypeInfo->static_fields->DPOPJKJLDEE;
        if (pSVar5 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          pHVar6 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pHVar6 != (HOOAAGABMBL_array *)0x0) {
            uVar1 = (pSVar5->fields)._size;
                    /* try { // try from 0346d228 to 0356d233 has its CatchHandler @ 0346cc94 */
            if (uVar1 < (uint)pHVar6->max_length) {
                    /* try { // try from 0346d234 to 0356d23b has its CatchHandler @ 0346d23c */
                    /* catch() { ... } // from try @ 0346d1c0 with catch @ 0346d23c
                       catch() { ... } // from try @ 0346d234 with catch @ 0346d23c */
              (pSVar5->fields)._size = uVar1 + 1;
              pHVar6->m_Items[(int)uVar1] = HFJDDNBBENI;
              thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar1,HFJDDNBBENI);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       (Il2CppObject *)HFJDDNBBENI,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

