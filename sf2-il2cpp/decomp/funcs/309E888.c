// FOKJBDHLIMG$$HEDKEHDPKAP @ RVA 0x309E888

void FOKJBDHLIMG__HEDKEHDPKAP
               (FOKJBDHLIMG_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,int32_t JLAFGLDIFOC,
               System_String_o *ONLOEDAIEOJ,System_String_o *OCFNILDEHHP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  HEFOANCOHDC_array *pHVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar7;
  
                    /* try { // try from 0319e88c to 0329e893 has its CatchHandler @ 0319e894 */
                    /* catch() { ... } // from try @ 0319e7b0 with catch @ 0319e894
                       catch() { ... } // from try @ 0319e878 with catch @ 0319e894
                       catch() { ... } // from try @ 0319e88c with catch @ 0319e894 */
  if ((DAT_04566131 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    DAT_04566131 = 1;
  }
  bVar3 = System_String__IsNullOrEmpty(ONLOEDAIEOJ,(MethodInfo *)0x0);
  if (bVar3) {
    CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) goto LAB_0319e9c8;
  }
  else {
    if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) goto LAB_0319e9c8;
    ppSVar4 = &(EIKFGOCCOIE->fields).BPCADJLKKGA;
    *ppSVar4 = ONLOEDAIEOJ;
    thunk_FUN_01c20e04(ppSVar4,ONLOEDAIEOJ);
    CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  }
  (EIKFGOCCOIE->fields).CHLMHEGKKNH.fields = CVar7;
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(JLAFGLDIFOC,(MethodInfo *)0x0);
  ppSVar4 = &(EIKFGOCCOIE->fields).JJONOCGMEMK;
  *ppSVar4 = OCFNILDEHHP;
  (EIKFGOCCOIE->fields).NOPGBJNLFHM.fields = CVar6;
  thunk_FUN_01c20e04(ppSVar4,OCFNILDEHHP);
  lVar2 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
  __this_00 = (__this->fields).CNLHOAHDHCF;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    pHVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar5 != (HEFOANCOHDC_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if ((uint)pHVar5->max_length <= uVar1) {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)EIKFGOCCOIE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_00->fields)._size = uVar1 + 1;
      pHVar5->m_Items[(int)uVar1] = EIKFGOCCOIE;
      thunk_FUN_01c20e04(pHVar5->m_Items + (int)uVar1,EIKFGOCCOIE);
      return;
    }
  }
LAB_0319e9c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

