// IGJEEGBBNFC$$INNPCPMFLIH @ RVA 0x329FCE8

void IGJEEGBBNFC__INNPCPMFLIH
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *DMJCBDGIGBH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar2;
  System_Collections_Generic_List_string__o *__this_00;
  HJNEOLCKEMD_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045673cf & 1) == 0) {
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
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    DAT_045673cf = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).AKMNHHKLCKL;
  if (pSVar2 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_MoveNext__
                      );
    if (!bVar1) goto LAB_0339fe00;
  } while ((MMDDDDFHOLG_DOCBHLNBECF_o *)local_50.fields._current != DMJCBDGIGBH);
  pSVar2 = (__this->fields).AKMNHHKLCKL;
  if (pSVar2 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)DMJCBDGIGBH
                     ,Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Remove__);
  if (DMJCBDGIGBH == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(bVar1);
  }
  pHVar3 = (DMJCBDGIGBH->fields).EDOEMIDBEGO;
  if (pHVar3 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(bVar1);
  }
  __this_00 = (__this->fields).HFICCAMAMGI;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)__this_00,
             (Il2CppObject *)(pHVar3->fields)._COIPKAKHDFP_k__BackingField,
             Method_System_Collections_Generic_List<string>_Remove__);
LAB_0339fe00:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<MMDDDDFHOLG_DOCBHLNBECF>_Dispose__);
  return;
}

