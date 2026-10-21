// Nekki.SF2.GUI.Profile.UserPerksPanel$$JMMDGEOBMOC @ RVA 0x34A7A18

JLGNBOILFLN_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__JMMDGEOBMOC
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,System_String_o *AFKICLAFDKC,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  JLGNBOILFLN_o *pJVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568500 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_get_Current__);
                    /* try { // try from 035a7a60 to 036a7a8b has its CatchHandler @ 035a7eac */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568500 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MHOLLBLFLAH;
  if (__this_00 == (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EANNACPOJFA>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035a7ac8 to 036a7b3b has its CatchHandler @ 035a7f7c */
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_MoveNext__);
    pIVar1 = local_50.fields._current;
    if (!bVar2) {
      pJVar3 = (JLGNBOILFLN_o *)0x0;
      goto LAB_035a7b98;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pJVar3 = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       (local_50.fields._current[1].monitor,0,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    if (pJVar3 == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar4,AFKICLAFDKC,(MethodInfo *)0x0);
    pSVar5 = pIVar1[1].monitor;
    if (bVar2) break;
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (1 < (pSVar5->fields)._size) {
                    /* try { // try from 035a7b3c to 036a7c5f has its CatchHandler @ 035a7464 */
      pJVar3 = (JLGNBOILFLN_o *)
               System_Collections_Generic_List<object>__get_Item
                         (pSVar5,1,Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      if (pJVar3 == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar4,AFKICLAFDKC,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar5 = pIVar1[1].monitor;
        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar3 = (JLGNBOILFLN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (pSVar5,1,Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__)
        ;
LAB_035a7b98:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_Dispose__);
        return pJVar3;
      }
    }
  }
  if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar3 = (JLGNBOILFLN_o *)
           System_Collections_Generic_List<object>__get_Item
                     (pSVar5,0,Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
  goto LAB_035a7b98;
}

