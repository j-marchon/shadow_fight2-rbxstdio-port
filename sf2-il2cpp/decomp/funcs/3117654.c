// NGJHCIGFLFD$$EPBENPDCBFE @ RVA 0x3117654

bool NGJHCIGFLFD__EPBENPDCBFE(NGJHCIGFLFD_o *__this,IFBJEEAJGEO_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_List_OANBNKOOJFH__o *__this_00;
  System_String_o *pSVar4;
  undefined1 local_68 [8];
  void *pvStack_60;
  int local_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  undefined8 uStack_48;
  Il2CppObject *local_40;
  
  if ((DAT_045665c2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NGJHCIGFLFD_EOIMBBNLJGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_4572);
    DAT_045665c2 = 1;
  }
  local_50 = (undefined1  [8])0x0;
  uStack_48._0_4_ = 0;
  uStack_48._4_4_ = 0;
  local_40 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
             (System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OANBNKOOJFH>_GetEnumerator__);
  local_40 = (Il2CppObject *)CONCAT44(uStack_54,local_58);
  uStack_48 = pvStack_60;
  local_50 = local_68;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                       Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
      local_58 = (__this->fields).BGHFADDGPAD;
      if (local_58 == 1) {
        bVar2 = false;
      }
      else {
        if (local_58 != 2) {
          local_68 = (undefined1  [8])NGJHCIGFLFD_EOIMBBNLJGI_TypeInfo;
          pvStack_60 = (void *)0xffffffffffffffff;
          pSVar4 = System_Enum__ToString((System_Enum_o *)local_68,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat(StringLiteral_4572,pSVar4,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
          return false;
        }
        bVar2 = true;
      }
      bVar2 = OANBNKOOJFH__PNMBBPHANIK((OANBNKOOJFH_o *)__this,bVar2,(MethodInfo *)0x0);
      return bVar2;
    }
    if (local_40 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar3 = (*local_40->klass->vtable[6].methodPtr)
                      (local_40,AHEFOIOKDOK,local_40->klass->vtable[6].method);
    iVar1 = (__this->fields).BGHFADDGPAD;
    if ((uVar3 & 1) == 0 && iVar1 == 2) break;
    if (iVar1 == 1 && ((uVar3 ^ 0xffffffff) & 1) == 0) {
      bVar2 = OANBNKOOJFH__PNMBBPHANIK((OANBNKOOJFH_o *)__this,true,(MethodInfo *)0x0);
LAB_032177b4:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 Method_System_Collections_Generic_List_Enumerator<OANBNKOOJFH>_Dispose__);
      return bVar2;
    }
  }
  bVar2 = OANBNKOOJFH__PNMBBPHANIK((OANBNKOOJFH_o *)__this,false,(MethodInfo *)0x0);
  goto LAB_032177b4;
}

