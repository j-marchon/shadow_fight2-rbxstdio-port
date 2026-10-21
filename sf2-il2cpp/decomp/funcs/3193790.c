// ABNLGBHKOCE$$POFILAAGAAP @ RVA 0x3193790

void ABNLGBHKOCE__POFILAAGAAP
               (ABNLGBHKOCE_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *IBCCCNMHCBP,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03293750 with catch @ 032937a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03293740 with catch @ 032937ac
                        */
  if ((DAT_04566a51 & 1) == 0) {
                    /* try { // try from 032937c4 to 033937c7 has its CatchHandler @ 032937f0 */
                    /* try { // try from 032937c8 to 033937ff has its CatchHandler @ 0329349c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EIEJHJLDGNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
                    /* catch() { ... } // from try @ 032937c4 with catch @ 032937f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
                    /* try { // try from 03293800 to 03393807 has its CatchHandler @ 0329381c */
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 03293808 to 03393813 has its CatchHandler @ 0329349c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
                    /* try { // try from 03293814 to 0339381b has its CatchHandler @ 0329381c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03293800 with catch @ 0329381c
                       catch(type#2 @ 00000000) { ... } // from try @ 03293814 with catch @ 0329381c
                        */
    FUN_01bab630(&NBOACIABNIG_TypeInfo);
                    /* try { // try from 03293828 to 0339393f has its CatchHandler @ 03293828
                       catch() { ... } // from try @ 03293828 with catch @ 03293828
                       catch() { ... } // from try @ 03293a50 with catch @ 03293828
                       catch() { ... } // from try @ 03293afc with catch @ 03293828
                       catch() { ... } // from try @ 03293b04 with catch @ 03293828
                       catch() { ... } // from try @ 03293bc4 with catch @ 03293828 */
    FUN_01bab630(&StringLiteral_17319);
    FUN_01bab630(&StringLiteral_17321);
    DAT_04566a51 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (IBCCCNMHCBP != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
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
                    /* try { // try from 03293a1c to 03393a27 has its CatchHandler @ 03293b20 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* try { // try from 03293a38 to 03393a43 has its CatchHandler @ 03293b10 */
                    /* try { // try from 03293a44 to 03393a4f has its CatchHandler @ 03293b0c */
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
          EIEJHJLDGNH__JBICKKIBGDI((EIEJHJLDGNH_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      else {
        iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x15) {
                    /* try { // try from 03293940 to 03393967 has its CatchHandler @ 03293b30 */
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
                    /* try { // try from 03293a00 to 03393a0b has its CatchHandler @ 03293b18 */
            NBOACIABNIG__JBICKKIBGDI((NBOACIABNIG_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        else {
          iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0329399c to 033939c7 has its CatchHandler @ 03293b2c */
          if (iVar3 == 8) {
            bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
            if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_17321,(MethodInfo *)0x0);
            }
            else {
                    /* try { // try from 03293a0c to 03393a17 has its CatchHandler @ 03293b1c */
              ABNLGBHKOCE__POFILAAGAAP
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

