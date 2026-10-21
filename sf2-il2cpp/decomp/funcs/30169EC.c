// ECENNHNBAME$$POFILAAGAAP @ RVA 0x30169EC

void ECENNHNBAME__POFILAAGAAP
               (ECENNHNBAME_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *IBCCCNMHCBP,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565be3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EIEJHJLDGNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&NBOACIABNIG_TypeInfo);
    FUN_01bab630(&StringLiteral_17319);
    FUN_01bab630(&StringLiteral_17321);
    DAT_04565be3 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (IBCCCNMHCBP != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* try { // try from 03116aec to 03216c03 has its CatchHandler @ 03116aec
                       catch() { ... } // from try @ 03116aec with catch @ 03116aec
                       catch() { ... } // from try @ 03116c2c with catch @ 03116aec
                       catch() { ... } // from try @ 03116c5c with catch @ 03116aec
                       catch() { ... } // from try @ 03116cd8 with catch @ 03116aec */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)IBCCCNMHCBP,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      __this_00 = local_80.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
        return;
      }
      if ((EIEJHJLDGNH_o *)local_80.fields._current == (EIEJHJLDGNH_o *)0x0) break;
      iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)local_80.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 2) {
        bVar1 = (EIEJHJLDGNH_TypeInfo->_2).naturalAligment;
        if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)EIEJHJLDGNH_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_17319,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 03116c48 to 03216c5b has its CatchHandler @ 03116cd0 */
          EIEJHJLDGNH__JBICKKIBGDI((EIEJHJLDGNH_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      else {
        iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x15) {
          bVar1 = (NBOACIABNIG_TypeInfo->_2).naturalAligment;
          if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)NBOACIABNIG_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_17319,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 03116c5c to 03216cbb has its CatchHandler @ 03116aec */
            NBOACIABNIG__JBICKKIBGDI((NBOACIABNIG_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        else {
          iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
          if (iVar3 == 8) {
                    /* try { // try from 03116c04 to 03216c2b has its CatchHandler @ 03116c30 */
            bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
            if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
                    /* try { // try from 03116c2c to 03216c47 has its CatchHandler @ 03116aec */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03116c04 with catch @ 03116c30
                        */
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_17321,(MethodInfo *)0x0);
            }
            else {
              ECENNHNBAME__POFILAAGAAP
                        (__this,*(System_Collections_Generic_List_IENLNOEDCFF__o **)
                                 &((EIEJHJLDGNH_Fields *)((long)__this_00 + 0x10))->NMEBNDDAFLJ,
                         method);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

