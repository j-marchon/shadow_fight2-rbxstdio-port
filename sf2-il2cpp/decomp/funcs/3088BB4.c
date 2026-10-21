// KPBOJBLLKPJ$$MIDCKCNDGGH @ RVA 0x3088BB4

void KPBOJBLLKPJ__MIDCKCNDGGH
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  long *plVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  long *local_48;
  
  if ((DAT_04566039 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_get_Current__
                );
    FUN_01bab630(&KOPGBBHMPDP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
                );
    DAT_04566039 = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48 = (long *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOBBELCAMJC;
  if (__this_00 == (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
  {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
            );
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                        );
      plVar1 = local_48;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                  );
        return;
      }
    } while ((int)local_60.fields._current != BOFAKAEIMME);
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *local_48;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(KOPGBBHMPDP_c **)(piVar6 + -2) == KOPGBBHMPDP_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_03188cec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(local_48,KOPGBBHMPDP_TypeInfo,3);
LAB_03188cec:
    (*(code *)*puVar3)(plVar1,IHNKCJHDDKD,puVar3[1]);
  } while( true );
}

