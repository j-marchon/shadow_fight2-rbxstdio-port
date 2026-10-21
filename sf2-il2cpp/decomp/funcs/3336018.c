// OHDDKGHEEPA$$PLMHPLMOBIO @ RVA 0x3336018

AFFHKININGD_o *
OHDDKGHEEPA__PLMHPLMOBIO
          (OHDDKGHEEPA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t DPJIDNBJIBG,
          MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t ACCIHBHMFPN;
  NLPJLHOEAOE_o *pNVar2;
  CNLGMNIEGFG_o *__this_00;
  
  if ((DAT_0456794d & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo,AHDGNOJPPIB,(ulong)(uint)DPJIDNBJIBG);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456794d = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
    bVar1 = (pNVar2->fields).PJLHMJHKJOA;
    pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
      (pNVar2->fields).PJLHMJHKJOA = false;
      __this_00 = (CNLGMNIEGFG_o *)thunk_FUN_01bda818(CNLGMNIEGFG_TypeInfo);
      CNLGMNIEGFG___ctor(__this_00,(MethodInfo *)0x0);
      pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      ACCIHBHMFPN = OOMHDDBCBJP__NHGGBEACKBD((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
      if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
        NLPJLHOEAOE__GKHEJJOADCD
                  (pNVar2,(AFFHKININGD_o *)__this_00,AHDGNOJPPIB,ACCIHBHMFPN,
                   (__this->fields).super.CNHHLPPHNCO,(__this->fields).super.EEENDKPCOPF,
                   (OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
                  (__this,__this_00,(ulong)(uint)DPJIDNBJIBG,
                   (__this->klass->vtable)._21_GOLLEBBHEHE.method);
        pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
          (pNVar2->fields).PJLHMJHKJOA = bVar1;
          return (AFFHKININGD_o *)__this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

