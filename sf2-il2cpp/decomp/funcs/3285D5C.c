// OOMHDDBCBJP$$PLMHPLMOBIO @ RVA 0x3285D5C

AFFHKININGD_o *
OOMHDDBCBJP__PLMHPLMOBIO
          (OOMHDDBCBJP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t DPJIDNBJIBG,
          MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  NLPJLHOEAOE_o *pNVar1;
  AFFHKININGD_o *__this_00;
  
  if ((DAT_045672b3 & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_TypeInfo,AHDGNOJPPIB,(ulong)(uint)DPJIDNBJIBG);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672b3 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
    (pNVar1->fields).PJLHMJHKJOA = false;
    __this_00 = (AFFHKININGD_o *)thunk_FUN_01bda818(AFFHKININGD_TypeInfo);
    AFFHKININGD___ctor(__this_00,(MethodInfo *)0x0);
    pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    ACCIHBHMFPN = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__GKHEJJOADCD
                (pNVar1,__this_00,AHDGNOJPPIB,ACCIHBHMFPN,(__this->fields).CNHHLPPHNCO,
                 (__this->fields).EEENDKPCOPF,__this,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
                (__this,__this_00,(ulong)(uint)DPJIDNBJIBG,
                 (__this->klass->vtable)._21_GOLLEBBHEHE.method);
      pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
        (pNVar1->fields).PJLHMJHKJOA = true;
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

