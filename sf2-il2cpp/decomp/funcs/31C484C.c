// Nekki.SF2.GUI.Fight.ActivePerkModel$$AddEffectPerk @ RVA 0x31C484C

void Nekki_SF2_GUI_Fight_ActivePerkModel__AddEffectPerk
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *DKAENNPDMIH
               ,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  NILLKLHKLHG_o *__this_01;
  MMFIDKMDADC_o *__this_02;
  HJNEOLCKEMD_o *pHVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566c29 & 1) == 0) {
    FUN_01bab630(&ABHILFLLPOD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
    DAT_04566c29 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar6 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar6 != (HJNEOLCKEMD_o *)0x0)) {
    bVar2 = (ABHILFLLPOD_TypeInfo->_2).naturalAligment;
    if (((pHVar6->klass->_2).naturalAligment < bVar2) ||
       ((pHVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)ABHILFLLPOD_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar6);
    }
    __this_00 = (__this->fields).DOKOOFIPJGJ;
    if (__this_00 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
      iVar1 = *(int *)&pHVar6[1].monitor;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<ActivePerkItem>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        while( true ) {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_60,
                               Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_MoveNext__
                              );
            pIVar3 = local_60.fields._current;
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<ActivePerkItem>_Dispose__
                        );
              return;
            }
            if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while (local_60.fields._current[4].klass != (Il2CppClass *)DKAENNPDMIH);
          if (iVar1 == 2) break;
          if (iVar1 == 1) {
            *(int *)((long)&local_60.fields._current[5].monitor + 4) =
                 *(int *)((long)&local_60.fields._current[5].monitor + 4) + 1;
          }
        }
        __this_01 = *(NILLKLHKLHG_o **)&pHVar6[1].fields.super;
        if (__this_01 == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = NILLKLHKLHG__CHKGAHCDFJF(__this_01,false,(MethodInfo *)0x0);
        if (__this_02 == (MMFIDKMDADC_o *)0x0) break;
        iVar5 = MMFIDKMDADC__JBGCINPPLAC(__this_02,(MethodInfo *)0x0);
        *(int32_t *)((long)&pIVar3[6].klass + 4) = iVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

