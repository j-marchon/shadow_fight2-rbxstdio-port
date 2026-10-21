// IGFGDDANEPE$$FOKDEHBAMIG @ RVA 0x30A3AEC

void IGFGDDANEPE__FOKDEHBAMIG
               (IGFGDDANEPE_o *__this,bool DMLNNCDIKGA,bool ADJGJIBCLKA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  System_Action_T__o *action;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 031a3af8 to 032a3afb has its CatchHandler @ 031a3afc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3af8 with catch @ 031a3afc
                       try { // try from 031a3afc to 032a3b1b has its CatchHandler @ 031a39f8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3abc with catch @ 031a3b00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3a9c with catch @ 031a3b04
                        */
                    /* try { // try from 031a3b1c to 032a3b1f has its CatchHandler @ 031a3b40 */
                    /* try { // try from 031a3b20 to 032a3b47 has its CatchHandler @ 031a39f8 */
  if ((DAT_0456616c & 1) == 0) {
    FUN_01bab630(&System_Action<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
                    /* catch() { ... } // from try @ 031a3b1c with catch @ 031a3b40 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
                    /* try { // try from 031a3b48 to 032a3b4f has its CatchHandler @ 031a3b64 */
                    /* try { // try from 031a3b50 to 032a3b5b has its CatchHandler @ 031a39f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
                    /* try { // try from 031a3b5c to 032a3b63 has its CatchHandler @ 031a3b64 */
    FUN_01bab630(&Method_IGFGDDANEPE_JDFPAGJHCKG_KKBIOGGBOIP__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a3b48 with catch @ 031a3b64
                       catch(type#2 @ 00000000) { ... } // from try @ 031a3b5c with catch @ 031a3b64
                        */
    FUN_01bab630(&IGFGDDANEPE_JDFPAGJHCKG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    DAT_0456616c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(IGFGDDANEPE_JDFPAGJHCKG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(bool *)&__this_00[1].monitor = ADJGJIBCLKA;
    __this_01 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_01,Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    __this_02 = (__this->fields).PAPANCDPPIF;
    if (__this_02 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
        if (!bVar3) break;
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((*(int *)((long)&local_70.fields._current[0xd].klass + 4) != 0) || (DMLNNCDIKGA)) {
          if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar4 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = local_70.fields._current;
            thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,local_70.fields._current);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,local_70.fields._current,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  (__this_01,action,Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

