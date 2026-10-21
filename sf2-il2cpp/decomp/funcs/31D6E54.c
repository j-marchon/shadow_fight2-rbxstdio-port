// MKFPGMBBGIA$$.ctor @ RVA 0x31D6E54

void MKFPGMBBGIA___ctor(MKFPGMBBGIA_o *__this,int32_t HFBFLHCIGNB,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *str3;
  System_Collections_Generic_List_string__o **ppSVar6;
  uint uVar7;
  System_String_array *pSVar8;
  undefined4 local_68;
  int32_t local_64;
  
  local_64 = HFBFLHCIGNB;
  if ((DAT_04566cef & 1) == 0) {
                    /* try { // try from 032d6e9c to 033d6fcb has its CatchHandler @ 032d6e9c
                       catch() { ... } // from try @ 032d6e9c with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d7104 with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d71a8 with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d71b0 with catch @ 032d6e9c
                       catch() { ... } // from try @ 032d7264 with catch @ 032d6e9c */
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&MKFPGMBBGIA_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_11483);
    FUN_01bab630(&StringLiteral_208);
    FUN_01bab630(&StringLiteral_9300);
    DAT_04566cef = 1;
  }
  local_68 = 0;
  (__this->fields).DBOPNAKLJAL = StringLiteral_9300;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  uVar7 = HFBFLHCIGNB & (HFBFLHCIGNB >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if ((MKFPGMBBGIA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (uVar7 == 0) break;
    pSVar8 = MKFPGMBBGIA_TypeInfo->static_fields->CJBDOFDHLOJ;
    if (pSVar8 == (System_String_array *)0x0) goto LAB_032d7120;
    uVar2 = UnityEngine_Random__Range(0,(int32_t)pSVar8->max_length,(MethodInfo *)0x0);
    if ((uint)pSVar8->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032d7120;
                    /* try { // try from 032d6fcc to 033d6ff3 has its CatchHandler @ 032d71c8 */
    System_Text_StringBuilder__Append(__this_00,pSVar8->m_Items[(int)uVar2],(MethodInfo *)0x0);
    uVar7 = uVar7 - 1;
  }
  pSVar3 = (System_Collections_Generic_List_string__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)
                      MKFPGMBBGIA_TypeInfo->static_fields->CJBDOFDHLOJ,
                      Method_System_Linq_Enumerable_ToList<string>__);
  ppSVar6 = &(__this->fields).PLACDMCGLHA;
  *ppSVar6 = pSVar3;
  thunk_FUN_01c20e04(ppSVar6,pSVar3);
  if (0 < HFBFLHCIGNB) {
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032d7120;
    pSVar3 = *ppSVar6;
    pSVar4 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    lVar1 = Method_System_Collections_Generic_List<string>_Add__;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_032d7120;
    pSVar8 = (pSVar3->fields)._items;
                    /* try { // try from 032d7028 to 033d7053 has its CatchHandler @ 032d71c4 */
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (pSVar8 == (System_String_array *)0x0) goto LAB_032d7120;
    uVar7 = (pSVar3->fields)._size;
    if (uVar7 < (uint)pSVar8->max_length) {
      (pSVar3->fields)._size = uVar7 + 1;
      pSVar8->m_Items[(int)uVar7] = pSVar4;
                    /* try { // try from 032d705c to 033d709f has its CatchHandler @ 032d71d0 */
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_47,(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
  pIVar5 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                     ((System_Collections_Generic_List_T__o *)*ppSVar6,
                      Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
  if (pIVar5 != (Il2CppObject *)0x0) {
    local_68 = *(undefined4 *)&pIVar5[1].klass;
    str3 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                    /* try { // try from 032d70e0 to 033d7103 has its CatchHandler @ 032d71bc */
    pSVar4 = System_String__Concat
                       (StringLiteral_11483,pSVar4,StringLiteral_208,str3,(MethodInfo *)0x0);
    UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 032d7104 to 033d7197 has its CatchHandler @ 032d6e9c */
    return;
  }
LAB_032d7120:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

