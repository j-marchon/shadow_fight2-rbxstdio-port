// ABNLGBHKOCE$$CEACPADMPKJ @ RVA 0x3193214

void ABNLGBHKOCE__CEACPADMPKJ
               (ABNLGBHKOCE_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
               GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               GBJGJEGPHKD_o *CHBJNMMEAPG,IEFEBEDLHNN_o *IIBPJLKGEBP,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566a4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EIEJHJLDGNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&NBOACIABNIG_TypeInfo);
    FUN_01bab630(&StringLiteral_21286);
    FUN_01bab630(&StringLiteral_21285);
    DAT_04566a4e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                             ), __this_00 = local_80.fields._current, bVar2) {
      if ((EIEJHJLDGNH_o *)local_80.fields._current != (EIEJHJLDGNH_o *)0x0) {
        iVar3 = IENLNOEDCFF__NHGGBEACKBD
                          ((IENLNOEDCFF_o *)local_80.fields._current,(MethodInfo *)0x0);
        if (iVar3 == 2) {
          bVar1 = (EIEJHJLDGNH_TypeInfo->_2).naturalAligment;
          if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)EIEJHJLDGNH_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_21285,(MethodInfo *)0x0);
          }
          else {
            EIEJHJLDGNH__KHKLLNFCMME
                      ((EIEJHJLDGNH_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,
                       CHBJNMMEAPG,(MethodInfo *)0x0);
          }
        }
        iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x15) {
          bVar1 = (NBOACIABNIG_TypeInfo->_2).naturalAligment;
          if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)NBOACIABNIG_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_21285,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 0329349c to 0339373f has its CatchHandler @ 0329349c
                       catch() { ... } // from try @ 0329349c with catch @ 0329349c
                       catch() { ... } // from try @ 03293758 with catch @ 0329349c
                       catch() { ... } // from try @ 032937c8 with catch @ 0329349c
                       catch() { ... } // from try @ 03293808 with catch @ 0329349c */
            NBOACIABNIG__KHKLLNFCMME
                      ((NBOACIABNIG_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,
                       CHBJNMMEAPG,(MethodInfo *)0x0);
          }
        }
        else {
          iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
          if (iVar3 == 8) {
            bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
            if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_21286,(MethodInfo *)0x0);
            }
            else {
              (*(__this->klass->vtable)._6_CEACPADMPKJ.methodPtr)
                        (__this,*(undefined8 *)
                                 &((EIEJHJLDGNH_Fields *)((long)__this_00 + 0x10))->NMEBNDDAFLJ,
                         NCNGALIAHJL,(ulong)FOFCAILEKJD,(ulong)BHKCLMLKLNB,CHBJNMMEAPG,IIBPJLKGEBP,
                         (__this->klass->vtable)._6_CEACPADMPKJ.method);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

