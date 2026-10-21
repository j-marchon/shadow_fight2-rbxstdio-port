// Nekki.SF2.Core.Fights.ModelContainer$$CFOFLMBPNOE @ RVA 0x355FA98

void Nekki_SF2_Core_Fights_ModelContainer__CFOFLMBPNOE
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  PKNBJJPHAKI_o *__this_01;
  MethodInfo *method_00;
  OLKKAIFGGAK_array *pOVar3;
  KHEDNGODOIC_o *pKVar4;
  
  if ((DAT_04568bc2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    DAT_04568bc2 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
  __this_00 = (__this->fields).AGOBPAPPBEM;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (OLKKAIFGGAK_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = BCKBBGCOMJD;
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,BCKBBGCOMJD);
      }
      else {
        method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)BCKBBGCOMJD,(MethodInfo_26E4DAC *)method);
      }
      Nekki_SF2_Core_Fights_ModelContainer__LPACIEFGEOB(__this,BCKBBGCOMJD,method);
      pKVar4 = (__this->fields).ANDGPHHMNMC;
      if (((pKVar4 != (KHEDNGODOIC_o *)0x0) && (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0)) &&
         (__this_01 = (pKVar4->fields).BAFJNPPPBMK, __this_01 != (PKNBJJPHAKI_o *)0x0)) {
        PKNBJJPHAKI__OCJCMHLABBF
                  (__this_01,(BCKBBGCOMJD->fields).HMIAFJALFCJ,
                   (UnityEngine_Color_o)(__this->fields).BDOPOCFLMHL.fields,true,(MethodInfo *)0x0);
        pKVar4 = (__this->fields).ANDGPHHMNMC;
        if (pKVar4 != (KHEDNGODOIC_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          KHEDNGODOIC__DFLHLNGDGEP(pKVar4,BCKBBGCOMJD,(MethodInfo *)0x0);
          Nekki_SF2_Core_Fights_ModelContainer__ECCABGPPFBD(__this,BCKBBGCOMJD,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

