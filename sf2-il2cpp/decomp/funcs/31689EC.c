// AFIEAGJGHGK$$ANHKDPEGLLF @ RVA 0x31689EC

bool AFIEAGJGHGK__ANHKDPEGLLF(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_00;
  CNDPAJOLKFN_o *__this_01;
  MethodInfo *extraout_x1;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045668d4 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
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
    DAT_045668d4 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIMDJNDKCBG;
  if (__this_00 == (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                      );
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      iVar4 = 7;
      goto LAB_03268b54;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_80.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar3 = *(long *)&((local_80.fields._current[1].klass)->_1).this_arg.bits;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar6 = (__this->fields).EAMLBCJEKDF;
    fVar8 = *(float *)(lVar3 + 0x10);
    fVar7 = *(float *)(lVar3 + 0x14);
    fVar5 = *(float *)(lVar3 + 0x18);
    __this_01 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    CNDPAJOLKFN___ctor(__this_01,fVar8 + fVar6,-fVar7,fVar5,(MethodInfo *)0x0);
    if (__this_01 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar5 = (__this_01->fields).super.OHHDBINAJCB;
  } while ((((*(float *)&pIVar1[2].klass <= fVar5) || (fVar5 <= *(float *)&pIVar1[2].monitor)) ||
           (fVar5 = (__this_01->fields).super.JOLEIODMLFL,
           *(float *)((long)&pIVar1[2].klass + 4) <= fVar5)) ||
          (fVar5 <= *(float *)((long)&pIVar1[2].monitor + 4)));
  iVar4 = 6;
LAB_03268b54:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,
             Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__);
  return iVar4 != 6;
}

