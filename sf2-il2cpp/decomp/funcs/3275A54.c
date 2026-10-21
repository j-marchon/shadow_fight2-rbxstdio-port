// AJMOIOIBPGP$$MGIGFDAFEMD @ RVA 0x3275A54

bool AJMOIOIBPGP__MGIGFDAFEMD(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  ulong uVar3;
  int64_t iVar4;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *OKBIKHHKOEN;
  
  if ((DAT_04567241 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567241 = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  OKBIKHHKOEN = (pNVar2->fields).QuestParameters;
  uVar3 = (*(NLFMDIGKNGP->klass->vtable)._13_NLMHNIFKDOA.methodPtr)
                    (NLFMDIGKNGP,(NLFMDIGKNGP->klass->vtable)._13_NLMHNIFKDOA.method);
  if ((uVar3 & 1) == 0) {
    iVar4 = OPNMPAJKDMI__JLBCBOACCGB(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (0 < iVar4) {
      iVar4 = OPNMPAJKDMI__JLBCBOACCGB(NLFMDIGKNGP,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM <= iVar4) {
        return false;
      }
    }
    iVar4 = OPNMPAJKDMI__JDAOELAKDPF(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (0 < iVar4) {
      iVar4 = OPNMPAJKDMI__JDAOELAKDPF(NLFMDIGKNGP,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (iVar4 <= NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM) {
        return false;
      }
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = OPNMPAJKDMI__BNNIDPDMOIL(NLFMDIGKNGP,OKBIKHHKOEN,(MethodInfo *)0x0);
    if (bVar1) {
      AJMOIOIBPGP__JMDIHKNADLB(__this,NLFMDIGKNGP,method_00);
      return true;
    }
  }
  return false;
}

