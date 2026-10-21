// IGJEEGBBNFC$$ANJBOJBFGCJ @ RVA 0x32A2AA8

void IGJEEGBBNFC__ANJBOJBFGCJ
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  NILLKLHKLHG_o *pNVar5;
  MMFIDKMDADC_o *__this_00;
  System_String_o *pSVar6;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar7;
  HJNEOLCKEMD_o *pHVar8;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045673d5 & 1) == 0) {
    FUN_01bab630(&CAJDKNFHABI_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045673d5 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar8 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar8 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (CAJDKNFHABI_TypeInfo->_2).naturalAligment;
    if (((pHVar8->klass->_2).naturalAligment < bVar1) ||
       ((pHVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)CAJDKNFHABI_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar8);
    }
    if (*(char *)&pHVar8[1].monitor != '\0') {
      IGJEEGBBNFC__KOCCDOBJOLI(__this,(MethodInfo *)CAJDKNFHABI_TypeInfo);
    }
    pNVar5 = *(NILLKLHKLHG_o **)&pHVar8[1].fields.super;
    if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
      NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
      pNVar5 = *(NILLKLHKLHG_o **)&pHVar8[1].fields.super;
      if ((pNVar5 != (NILLKLHKLHG_o *)0x0) &&
         (__this_00 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0),
         __this_00 != (MMFIDKMDADC_o *)0x0)) {
        iVar4 = MMFIDKMDADC__JBGCINPPLAC(__this_00,(MethodInfo *)0x0);
        pSVar7 = (__this->fields).AKMNHHKLCKL;
        if (pSVar7 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,(System_Collections_Generic_List_object__o *)pSVar7,
                     Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__
                    );
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          while( true ) {
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                              );
            pIVar2 = local_70.fields._current;
            if (!bVar3) break;
            if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (local_70.fields._current[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = System_String__op_Equality
                              ((System_String_o *)pHVar8[1].klass,
                               *(System_String_o **)
                                ((long)local_70.fields._current[2].monitor + 0x20),(MethodInfo *)0x0
                              );
            if (bVar3) {
              *(undefined4 *)&pIVar2[3].klass = 0;
              *(int32_t *)((long)&pIVar2[3].klass + 4) = iVar4;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                    );
          pSVar6 = (pHVar8->fields)._HFALHOCIDCH_k__BackingField;
          if ((pSVar6 != (System_String_o *)0x0) &&
             (bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_1,(MethodInfo *)0x0), bVar3)
             ) {
            pSVar6 = (pHVar8->fields)._HFALHOCIDCH_k__BackingField;
            if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar7 = MMDDDDFHOLG__HNBACDMIHHO(pSVar6,(MethodInfo *)0x0);
            if (pSVar7 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
            goto LAB_033a2d2c;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)pSVar7,
                       Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__
                      );
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while( true ) {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_70,
                                 Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                                );
              pIVar2 = local_70.fields._current;
              if (!bVar3) break;
              if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (local_70.fields._current[2].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (pHVar8[1].klass == (HJNEOLCKEMD_c *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar3 = System_String__Equals
                                ((System_String_o *)pHVar8[1].klass,
                                 *(System_String_o **)
                                  ((long)local_70.fields._current[2].monitor + 0x20),
                                 (MethodInfo *)0x0);
              if (bVar3) {
                *(undefined4 *)&pIVar2[3].klass = 0;
                *(int32_t *)((long)&pIVar2[3].klass + 4) = iVar4;
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__
                      );
          }
          return;
        }
      }
    }
  }
LAB_033a2d2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

