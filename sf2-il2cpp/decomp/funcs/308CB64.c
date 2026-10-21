// APDNEHFCNNE$$PPOKEOHAHFG @ RVA 0x308CB64

float APDNEHFCNNE__PPOKEOHAHFG
                (APDNEHFCNNE_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LEPAFKDPIKP__o *pSVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
                    /* try { // try from 0318cb6c to 0328cb77 has its CatchHandler @ 0318cb8c */
                    /* try { // try from 0318cb78 to 0328cb83 has its CatchHandler @ 0318ca28 */
                    /* try { // try from 0318cb84 to 0328cb8b has its CatchHandler @ 0318cb8c */
  if ((DAT_04566064 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0318cb6c with catch @ 0318cb8c
                       catch(type#2 @ 00000000) { ... } // from try @ 0318cb84 with catch @ 0318cb8c
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEPAFKDPIKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEPAFKDPIKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEPAFKDPIKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEPAFKDPIKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEPAFKDPIKP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEPAFKDPIKP>_get_Item__);
    DAT_04566064 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).MNJCMDFOOHH;
  if (pSVar2 != (System_Collections_Generic_List_LEPAFKDPIKP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<LEPAFKDPIKP>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<LEPAFKDPIKP>_MoveNext__
                             ), pIVar3 = local_58.fields._current, bVar1) {
      if ((LEPAFKDPIKP_o *)local_58.fields._current == (LEPAFKDPIKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = LEPAFKDPIKP__IFHLNBHADIG
                        ((LEPAFKDPIKP_o *)local_58.fields._current,ACCIHBHMFPN,(MethodInfo *)0x0);
      if (bVar1) {
        fVar4 = ((LEPAFKDPIKP_Fields *)((long)pIVar3 + 0x10))->JAICMIMBIOA;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<LEPAFKDPIKP>_Dispose__);
        return fVar4;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<LEPAFKDPIKP>_Dispose__);
    pSVar2 = (__this->fields).MNJCMDFOOHH;
    if (pSVar2 != (System_Collections_Generic_List_LEPAFKDPIKP__o *)0x0) {
      if ((pSVar2->fields)._size < 1) {
        return 0.0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,0,
                          Method_System_Collections_Generic_List<LEPAFKDPIKP>_get_Item__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        return *(float *)&pIVar3[1].klass;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

