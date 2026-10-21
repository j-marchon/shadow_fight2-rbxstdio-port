// ABMPAOFAAEI$$DOLDFGHODHL @ RVA 0x312A5A8

void ABMPAOFAAEI__DOLDFGHODHL
               (ABMPAOFAAEI_o *__this,System_String_array *BPMHJKJEALH,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *key;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *OPAEPDIIOEB;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  uint count;
  MethodInfo *pMVar4;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPJIDNBJIBG;
  pMVar4 = method_00;
  while( true ) {
    if ((DAT_0456668a & 1) == 0) {
      FUN_01bab630(&ABMPAOFAAEI_TypeInfo);
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__)
      ;
      FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__);
      FUN_01bab630(&Method_System_Linq_Enumerable_Skip<string>__);
      FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<string>__);
      DAT_0456668a = 1;
    }
    if (BPMHJKJEALH == (System_String_array *)0x0) break;
    uVar1 = (uint)BPMHJKJEALH->max_length;
    count = (uint)pMVar4;
    if (count == uVar1) {
      if ((ABMPAOFAAEI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OPAEPDIIOEB = ABMPAOFAAEI_TypeInfo->static_fields->DHCFDOAFFFO;
LAB_0322a6d8:
      ABMPAOFAAEI__MGHELJOMNIG(__this,OPAEPDIIOEB,method_00);
      return;
    }
    if (uVar1 <= count) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (BPMHJKJEALH->m_Items[(int)count] == (System_String_o *)0x0) break;
    key = System_String__ToLower(BPMHJKJEALH->m_Items[(int)count],(MethodInfo *)0x0);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_ContainsKey__
                      );
    if (!bVar2) {
      method_00 = Method_System_Linq_Enumerable_Skip<string>__;
      source = System_Linq_Enumerable__Skip<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)BPMHJKJEALH,count,
                          (MethodInfo_1EACC9C *)Method_System_Linq_Enumerable_Skip<string>__);
      OPAEPDIIOEB = (System_String_array *)
                    System_Linq_Enumerable__ToArray<object>
                              (source,Method_System_Linq_Enumerable_ToArray<string>__);
      goto LAB_0322a6d8;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).OKGFMGOALJF
    ;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    method_00 = Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__;
                    /* try { // try from 0322a680 to 0332a733 has its CatchHandler @ 0322a680
                       catch() { ... } // from try @ 0322a680 with catch @ 0322a680
                       catch() { ... } // from try @ 0322a754 with catch @ 0322a680
                       catch() { ... } // from try @ 0322a794 with catch @ 0322a680
                       catch() { ... } // from try @ 0322a7bc with catch @ 0322a680
                       catch() { ... } // from try @ 0322a7f4 with catch @ 0322a680 */
    __this = (ABMPAOFAAEI_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,(Il2CppObject *)key,
                        (MethodInfo_2332EA4 *)
                        Method_System_Collections_Generic_Dictionary<string,_ABMPAOFAAEI>_get_Item__
                       );
    if (__this == (ABMPAOFAAEI_o *)0x0) break;
    pMVar4 = (MethodInfo *)(ulong)(count + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

