// Nekki.SF2.GUI.Fight.ViewerFight$$DLOCFGMOEFN @ RVA 0x35BE910

void Nekki_SF2_GUI_Fight_ViewerFight__DLOCFGMOEFN
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  JIMKCICMMIL_o *pJVar4;
  Il2CppMethodPointer pIVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  uint local_14;
  
  if ((DAT_04568efe & 1) == 0) {
    FUN_01bab630(&StringLiteral_1242);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568efe = 1;
  }
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1 + -1,(MethodInfo *)0x0);
  (__this->fields).GJOBKIBMLHC.fields = CVar7;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar7,(MethodInfo *)0x0);
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1 / 0x3c,(MethodInfo *)0x0)
  ;
  (__this->fields).MOBINBAJICJ.fields = CVar7;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar7,(MethodInfo *)0x0);
  if (iVar1 == (__this->fields).KBFHMLONBPA) {
    return;
  }
  if ((__this->fields)._BBIBLNIKJMG_k__BackingField == false) {
    pJVar4 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
    if (pJVar4 == (JIMKCICMMIL_o *)0x0) goto LAB_036bea78;
    if ((pJVar4->fields).FIICJBPKIJA != false) {
      pNVar6 = (__this->fields).roundTimer;
      if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036bea78;
      pMVar3 = (pNVar6->klass->vtable)._75_set_text.method;
      pIVar5 = (pNVar6->klass->vtable)._75_set_text.methodPtr;
      pSVar2 = StringLiteral_1242;
      goto LAB_036bea68;
    }
  }
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
  CVar7 = (__this->fields).MOBINBAJICJ.fields;
  pNVar6 = (__this->fields).roundTimer;
  (__this->fields).KBFHMLONBPA = iVar1;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar7,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1567;
  if (9 < iVar1) {
    pSVar2 = (System_String_o *)0x0;
  }
  local_14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                        (__this->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
  local_14 = local_14 & ((int)local_14 >> 0x1f ^ 0xffffffffU);
  str1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pIVar5 = (pNVar6->klass->vtable)._75_set_text.methodPtr;
    pMVar3 = (pNVar6->klass->vtable)._75_set_text.method;
LAB_036bea68:
    (*pIVar5)(pNVar6,pSVar2,pMVar3);
    return;
  }
LAB_036bea78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

