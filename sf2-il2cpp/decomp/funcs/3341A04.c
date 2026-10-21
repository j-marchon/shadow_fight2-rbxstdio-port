// AFFHKININGD$$PJIAIIFIFAF @ RVA 0x3341A04

void AFFHKININGD__PJIAIIFIFAF
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
  
  if ((DAT_04567994 & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_04567994 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (GOAHBPBJCKC != (AJNNHGGLGIF_o *)0x0) {
    uVar4 = AJNNHGGLGIF__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<JCHNBADDBGO>_Add__;
    if (0x15 < (int)uVar4) {
      if (uVar4 == 0x16) {
        bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
        if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
           ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)PNEKMHMACLG_TypeInfo)) goto LAB_03441dfc;
        if (GOAHBPBJCKC[1].klass == (AJNNHGGLGIF_c *)0x0) goto LAB_03441df8;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)GOAHBPBJCKC[1].klass,
                   Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
                    /* try { // try from 03441d98 to 03541d9f has its CatchHandler @ 03441df8 */
                    /* try { // try from 03441da0 to 03541de3 has its CatchHandler @ 03441cf0 */
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
                    /* try { // try from 03441afc to 03541b23 has its CatchHandler @ 03441c54 */
        if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
           ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)HIJGJNFACPG_TypeInfo)) {
LAB_03441dfc:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(GOAHBPBJCKC);
        }
        if (*(char *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH == '\0') {
          return;
        }
        if (GOAHBPBJCKC[1].klass == (AJNNHGGLGIF_c *)0x0) goto LAB_03441df8;
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
                    /* try { // try from 03441b58 to 03541b7f has its CatchHandler @ 03441c50 */
          AFFHKININGD__PKPAGJPFANA
                    (__this,(AJNNHGGLGIF_o *)local_50.fields._current,KENFFDHLNDA,method);
        }
      }
LAB_03441dd0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
                    /* try { // try from 03441de4 to 03541de7 has its CatchHandler @ 03441df4 */
                    /* try { // try from 03441de8 to 03541deb has its CatchHandler @ 03441df0 */
                    /* try { // try from 03441dec to 03541e0f has its CatchHandler @ 03441cf0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441de8 with catch @ 03441df0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441de4 with catch @ 03441df4
                        */
      return;
    }
    if (uVar4 < 3) {
                    /* try { // try from 03441c38 to 03541c63 has its CatchHandler @ 034419c0 */
      if (KENFFDHLNDA != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441c34 with catch @ 03441c40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441b9c with catch @ 03441c44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441c2c with catch @ 03441c48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441c28 with catch @ 03441c4c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441b58 with catch @ 03441c50
                        */
        bVar1 = (JCHNBADDBGO_TypeInfo->_2).naturalAligment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441afc with catch @ 03441c54
                        */
                    /* try { // try from 03441c64 to 03541c67 has its CatchHandler @ 03441c78 */
        if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
           ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)JCHNBADDBGO_TypeInfo)) goto LAB_03441dfc;
                    /* catch() { ... } // from try @ 03441c64 with catch @ 03441c78 */
        pJVar5 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pJVar5 != (JCHNBADDBGO_array *)0x0) {
          uVar4 = (KENFFDHLNDA->fields)._size;
          if (uVar4 < (uint)pJVar5->max_length) {
            (KENFFDHLNDA->fields)._size = uVar4 + 1;
            pJVar5->m_Items[(int)uVar4] = (JCHNBADDBGO_o *)GOAHBPBJCKC;
                    /* try { // try from 03441cb0 to 03541cd7 has its CatchHandler @ 03441cec */
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
    }
    else {
      if (uVar4 != 0x15) {
        return;
      }
      bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03441b9c to 03541ba7 has its CatchHandler @ 03441c44 */
      if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
         ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) goto LAB_03441dfc;
                    /* try { // try from 03441ba8 to 03541c27 has its CatchHandler @ 034419c0 */
      if (GOAHBPBJCKC[1].monitor != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,GOAHBPBJCKC[1].monitor,
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
        goto LAB_03441dd0;
      }
    }
  }
LAB_03441df8:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441d98 with catch @ 03441df8
                        */
  FUN_01bab8c8();
}

