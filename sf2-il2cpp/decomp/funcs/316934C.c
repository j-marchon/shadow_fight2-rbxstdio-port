// AFIEAGJGHGK$$DIGLGKAPOAB @ RVA 0x316934C

void AFIEAGJGHGK__DIGLGKAPOAB(AFIEAGJGHGK_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_00;
  GBJGJEGPHKD_o *__this_01;
  Il2CppClass *pIVar4;
  System_String_o *message;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045668d8 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11393);
    DAT_045668d8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    pIVar5 = IMMNELPBGIF[3].klass;
    if (pIVar5 != (Il2CppClass *)0x0) {
      (__this->fields).EAMLBCJEKDF = *(float *)&(pIVar5->_1).element_class * -0.5;
      (__this->fields).DLJPCGPGONK = -*(float *)((long)&(pIVar5->_1).this_arg.data + 4);
    }
    iVar1 = (__this->fields).super.super.JGJNBILDCHK;
    if (iVar1 == 2) {
      pIVar6 = IMMNELPBGIF + 1;
    }
    else {
      if (iVar1 != 1) goto LAB_03269530;
      pIVar6 = (Il2CppObject *)&IMMNELPBGIF[1].monitor;
    }
    pIVar5 = pIVar6->klass;
    if (pIVar5 != (Il2CppClass *)0x0) {
      __this_00 = (__this->fields).DIMDJNDKCBG;
      if (__this_00 == (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)0x0)
      goto LAB_0326956c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                          );
        pIVar6 = local_60.fields._current;
        if (!bVar3) break;
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (GBJGJEGPHKD_o *)pIVar5->vtable[0x11].method;
        if (__this_01 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar4 = (Il2CppClass *)
                 GBJGJEGPHKD__OCJAHBKIFNO
                           (__this_01,local_60.fields._current[1].monitor,(MethodInfo *)0x0);
        pIVar7 = pIVar6 + 1;
        pIVar7->klass = pIVar4;
        thunk_FUN_01c20e04(pIVar7);
        if (pIVar7->klass == (Il2CppClass *)0x0) {
          message = System_String__Concat(StringLiteral_11393,pIVar6[1].monitor,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__
                );
    }
LAB_03269530:
    (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
              (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
    return;
  }
LAB_0326956c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

