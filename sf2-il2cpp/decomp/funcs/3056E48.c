// NHBBOEHHEKG$$ECPBBMDOEKB @ RVA 0x3056E48

void NHBBOEHHEKG__ECPBBMDOEKB
               (NHBBOEHHEKG_o *__this,System_Byte_array *CLNMDFIMKAK,MethodInfo *method)

{
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_00;
  Il2CppObject *pIVar1;
  ulong uVar2;
  
                    /* try { // try from 03156e4c to 03256e53 has its CatchHandler @ 03156e8c */
                    /* try { // try from 03156e54 to 03256e5b has its CatchHandler @ 03156e90 */
                    /* try { // try from 03156e5c to 03256e67 has its CatchHandler @ 03156e8c */
  if ((DAT_04565e6e & 1) == 0) {
                    /* try { // try from 03156e68 to 03256e73 has its CatchHandler @ 03156e90 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Count__);
                    /* catch() { ... } // from try @ 03156d74 with catch @ 03156e74
                       try { // try from 03156e74 to 03256ea7 has its CatchHandler @ 03156c64 */
                    /* catch() { ... } // from try @ 03156d58 with catch @ 03156e78 */
                    /* catch() { ... } // from try @ 03156d50 with catch @ 03156e7c */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__);
                    /* catch() { ... } // from try @ 03156d38 with catch @ 03156e80 */
                    /* catch() { ... } // from try @ 03156d2c with catch @ 03156e84 */
    DAT_04565e6e = 1;
  }
                    /* catch() { ... } // from try @ 03156d14 with catch @ 03156e88 */
  if (CLNMDFIMKAK != (System_Byte_array *)0x0) {
                    /* catch() { ... } // from try @ 03156d90 with catch @ 03156e8c
                       catch() { ... } // from try @ 03156e4c with catch @ 03156e8c
                       catch() { ... } // from try @ 03156e5c with catch @ 03156e8c */
                    /* catch() { ... } // from try @ 03156dc0 with catch @ 03156e90
                       catch() { ... } // from try @ 03156e54 with catch @ 03156e90
                       catch() { ... } // from try @ 03156e68 with catch @ 03156e90 */
    if (0 < (int)CLNMDFIMKAK->max_length) {
      uVar2 = 0;
      do {
                    /* try { // try from 03156ea8 to 03256ebf has its CatchHandler @ 03157020 */
        __this_00 = (__this->fields).JDLKPFCELNF;
        if (__this_00 == (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0) goto LAB_03156f14;
        if ((long)(__this_00->fields)._size <= (long)uVar2) {
          return;
        }
                    /* try { // try from 03156ec0 to 0325700f has its CatchHandler @ 03156c64 */
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)uVar2,
                            Method_System_Collections_Generic_List<MEHKKHFBNLM>_get_Item__);
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03156f14;
        if ((uint)CLNMDFIMKAK->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (pIVar1[2].monitor == (UnityEngine_GameObject_o *)0x0) goto LAB_03156f14;
        UnityEngine_GameObject__SetActive
                  (pIVar1[2].monitor,CLNMDFIMKAK->m_Items[uVar2] != 0,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)CLNMDFIMKAK->max_length);
    }
    return;
  }
LAB_03156f14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

