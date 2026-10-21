// RaidInfo$$UpdateInfo @ RVA 0x35C9C78

void RaidInfo__UpdateInfo(RaidInfo_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  AFFHKININGD_o *__this_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  int32_t local_24;
  
  if ((DAT_04568f8f & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<AGCDKMOOJGI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&StringLiteral_2436);
    FUN_01bab630(&StringLiteral_21624);
    DAT_04568f8f = 1;
  }
  if (BANHBMINMMP == (OHDDKGHEEPA_o *)0x0) {
    return;
  }
  RaidInfo__CPMHIEJENLD(__this,BANHBMINMMP,method);
  pNVar5 = (__this->fields)._raidSizeLabel;
  local_24 = OHDDKGHEEPA__NLMMJCACKPC(BANHBMINMMP,(MethodInfo *)0x0);
  pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(StringLiteral_2436,pSVar3,(MethodInfo *)0x0);
  if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
              (pNVar5,pSVar3,(pNVar5->klass->vtable)._75_set_text.method);
    __this_00 = (AFFHKININGD_o *)
                (*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                          (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (__this_00 == (AFFHKININGD_o *)0x0) {
      return;
    }
    iVar2 = AFFHKININGD__IKDFBAOFNPB(__this_00,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return;
    }
    __this_01 = (__this_00->fields).MECHOBPGHFJ;
    if ((__this_01 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,0,
                            Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__),
       pIVar4 != (Il2CppObject *)0x0)) {
      pNVar5 = (__this->fields)._shieldValue;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          ((long)&pIVar4[0x21].monitor + 4),(MethodInfo *)0x0);
      if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo);
      }
      pSVar3 = BJFCCEEPHOF__POMAAOILGAL(iVar2,(MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                  (pNVar5,pSVar3,(pNVar5->klass->vtable)._75_set_text.method);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)(__this_00->fields).HFDOEONIBFA,
                           Method_DJNBJHPDKDP_OBECCOPBADO<AGCDKMOOJGI>__);
        if (bVar1) {
          return;
        }
        pNVar5 = (__this->fields)._raidRandomRuleLabel;
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,StringLiteral_21624,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

