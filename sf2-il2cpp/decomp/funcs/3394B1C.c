// Nekki.SF2.GUI.Profile.ProfileScene$$EIEHBAIIJJI @ RVA 0x3394B1C

JLGNBOILFLN_o *
Nekki_SF2_GUI_Profile_ProfileScene__EIEHBAIIJJI
          (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,int32_t JLAFGLDIFOC,
          HNFFPPPDKDK_o *HPLHPPKHDHK,MethodInfo *method)

{
  bool bVar1;
  EPFMFHDGMCE_o *__this_00;
  EANNACPOJFA_o *pEVar2;
  JLGNBOILFLN_o *pJVar3;
  System_String_o *a;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  int index;
  
  if ((DAT_04567c49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04567c49 = 1;
  }
  __this_00 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
  if (((__this_00 != (EPFMFHDGMCE_o *)0x0) &&
      (pEVar2 = EPFMFHDGMCE__FLCAGIJMPKA(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0),
      pEVar2 != (EANNACPOJFA_o *)0x0)) &&
     (__this_01 = (pEVar2->fields).GJBLBEALOBO,
     __this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) {
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        pJVar3 = (JLGNBOILFLN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
        if ((pJVar3 == (JLGNBOILFLN_o *)0x0) ||
           (a = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0),
           HPLHPPKHDHK == (HNFFPPPDKDK_o *)0x0)) goto LAB_03494c08;
        bVar1 = System_String__op_Inequality(a,(HPLHPPKHDHK->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
        if (bVar1) {
          pJVar3 = (JLGNBOILFLN_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
          return pJVar3;
        }
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    return (JLGNBOILFLN_o *)0x0;
  }
LAB_03494c08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

