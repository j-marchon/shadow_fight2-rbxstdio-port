// AFFHKININGD$$PKPAGJPFANA @ RVA 0x3341EA8

void AFFHKININGD__PKPAGJPFANA
               (AFFHKININGD_o *__this,AJNNHGGLGIF_o *GOAHBPBJCKC,
               System_Collections_Generic_List_JCHNBADDBGO__o *KENFFDHLNDA,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  JCHNBADDBGO_array *pJVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045679a3 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
                    /* try { // try from 03441efc to 035420a3 has its CatchHandler @ 03441efc
                       catch() { ... } // from try @ 03441efc with catch @ 03441efc
                       catch() { ... } // from try @ 03442134 with catch @ 03441efc
                       catch() { ... } // from try @ 034422f4 with catch @ 03441efc
                       catch() { ... } // from try @ 03442568 with catch @ 03441efc
                       catch() { ... } // from try @ 03442748 with catch @ 03441efc
                       catch() { ... } // from try @ 03442980 with catch @ 03441efc
                       catch() { ... } // from try @ 03442a38 with catch @ 03441efc
                       catch() { ... } // from try @ 03442a48 with catch @ 03441efc
                       catch() { ... } // from try @ 03442a54 with catch @ 03441efc
                       catch() { ... } // from try @ 03442b3c with catch @ 03441efc
                       catch() { ... } // from try @ 03442c00 with catch @ 03441efc
                       catch() { ... } // from try @ 03442cc4 with catch @ 03441efc
                       catch() { ... } // from try @ 03442d58 with catch @ 03441efc
                       catch() { ... } // from try @ 03442e00 with catch @ 03441efc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_045679a3 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (GOAHBPBJCKC == (AJNNHGGLGIF_o *)0x0) goto LAB_034421ec;
  uVar4 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__;
  if (0x15 < (int)uVar4) {
    if (uVar4 == 0x16) {
      bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)PNEKMHMACLG_TypeInfo)) goto LAB_034421f0;
      if (GOAHBPBJCKC[1].klass == (AJNNHGGLGIF_c *)0x0) goto LAB_034421ec;
                    /* try { // try from 034420a4 to 035420cb has its CatchHandler @ 03442cc4 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                 Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                               ), bVar3) {
        AFFHKININGD__PKPAGJPFANA
                  (__this,(AJNNHGGLGIF_o *)local_50.fields._current,KENFFDHLNDA,method);
      }
    }
    else {
      if (uVar4 != 0x29) {
        return;
      }
      bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_034421f0;
      if (*(char *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH == '\0') {
        return;
      }
      if (GOAHBPBJCKC[1].klass == (AJNNHGGLGIF_c *)0x0) goto LAB_034421ec;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                 Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                               ), bVar3) {
        AFFHKININGD__PKPAGJPFANA
                  (__this,(AJNNHGGLGIF_o *)local_50.fields._current,KENFFDHLNDA,method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    return;
                    /* try { // try from 03442100 to 0354212b has its CatchHandler @ 03442c24 */
  }
  if (uVar4 < 3) {
    if (KENFFDHLNDA != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
      bVar1 = (JCHNBADDBGO_TypeInfo->_2).naturalAligment;
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)JCHNBADDBGO_TypeInfo)) goto LAB_034421f0;
      pJVar5 = (KENFFDHLNDA->fields)._items;
      (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
      if (pJVar5 != (JCHNBADDBGO_array *)0x0) {
        uVar4 = (KENFFDHLNDA->fields)._size;
        if (uVar4 < (uint)pJVar5->max_length) {
          (KENFFDHLNDA->fields)._size = uVar4 + 1;
          pJVar5->m_Items[(int)uVar4] = (JCHNBADDBGO_o *)GOAHBPBJCKC;
          thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar4,GOAHBPBJCKC);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                   (Il2CppObject *)GOAHBPBJCKC,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
LAB_034421ec:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (uVar4 != 0x15) {
    return;
  }
  bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
     ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) {
    AFFHKININGD__PKPAGJPFANA(__this,(AJNNHGGLGIF_o *)GOAHBPBJCKC[1].klass,KENFFDHLNDA,method);
    return;
  }
LAB_034421f0:
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(GOAHBPBJCKC);
}

