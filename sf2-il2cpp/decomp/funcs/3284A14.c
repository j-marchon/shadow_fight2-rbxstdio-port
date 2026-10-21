// CPJDJFPABGI.FGGFAAPJLCN$$KGNDFCKAIHN @ RVA 0x3284A14

void CPJDJFPABGI_FGGFAAPJLCN__KGNDFCKAIHN
               (CPJDJFPABGI_FGGFAAPJLCN_o *__this,
               System_Collections_Generic_KeyValuePair_string__int__o x,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__int__o item;
  long lVar2;
  System_String_o *pSVar3;
  MethodInfo_2639C80 *in_x4;
  System_Collections_Generic_KeyValuePair_string__int__array *pSVar4;
  System_Collections_Generic_List_KeyValuePair_string__int___o *__this_00;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  System_Collections_Generic_KeyValuePair_object__int__o __this_01;
  Il2CppObject local_40;
  
                    /* try { // try from 03384a14 to 03484a1b has its CatchHandler @ 03384a1c */
                    /* catch() { ... } // from try @ 033848f4 with catch @ 03384a1c
                       catch() { ... } // from try @ 03384998 with catch @ 03384a1c
                       catch() { ... } // from try @ 03384a14 with catch @ 03384a1c */
  if ((DAT_045672ab & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_Add__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_045672ab = 1;
  }
  AAJBIMFNMBB = (__this->fields).questParameters;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__LPLONLCAIGL(x.fields.key,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = (__this->fields).tmp;
                    /* try { // try from 03384ac8 to 03484c57 has its CatchHandler @ 03384ac8
                       catch() { ... } // from try @ 03384ac8 with catch @ 03384ac8
                       catch() { ... } // from try @ 03384da8 with catch @ 03384ac8
                       catch() { ... } // from try @ 03384f00 with catch @ 03384ac8
                       catch() { ... } // from try @ 03384f08 with catch @ 03384ac8
                       catch() { ... } // from try @ 03384ff4 with catch @ 03384ac8 */
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (void *)0x0;
  __this_01.fields._8_8_ = pSVar3;
  __this_01.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_int>___ctor
            (__this_01,(Il2CppObject *)(x.fields._8_8_ & 0xffffffff),
             (int32_t)Method_System_Collections_Generic_KeyValuePair<string,_int>__ctor__,in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_int>>_Add__;
  if (__this_00 != (System_Collections_Generic_List_KeyValuePair_string__int___o *)0x0) {
    item.fields._8_8_ = local_40.monitor;
    item.fields.key = (Il2CppObject *)local_40.klass;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_string__int__array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
        *(void **)&pSVar4->m_Items[(int)uVar1].fields.value = local_40.monitor;
        thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_int>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_00,item,
                   *(MethodInfo_266AAC4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

