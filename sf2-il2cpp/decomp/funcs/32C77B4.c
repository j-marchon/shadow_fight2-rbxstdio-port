// PNFHEJAEPHI.OCJAJNLFNCO$$NJDHEOKAMJB @ RVA 0x32C77B4

void PNFHEJAEPHI_OCJAJNLFNCO__NJDHEOKAMJB(PNFHEJAEPHI_OCJAJNLFNCO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *values;
  Unity_Services_LevelPlay_LevelPlayAdError_o *pUVar2;
  System_String_o *pSVar3;
  Unity_Services_LevelPlay_LevelPlayAdInfo_o *pUVar4;
  System_Action_MPAKDCNMLEG__o *pSVar5;
  PNFHEJAEPHI_o *pPVar6;
  
  if ((DAT_045674f7 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1160);
    FUN_01bab630(&StringLiteral_593);
    FUN_01bab630(&StringLiteral_9839);
    FUN_01bab630(&StringLiteral_19927);
    DAT_045674f7 = 1;
  }
  pPVar6 = (__this->fields).__4__this;
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_9839;
      thunk_FUN_01c20e04();
      pUVar4 = (__this->fields).eventInfo.fields.Item1;
      if (pUVar4 == (Unity_Services_LevelPlay_LevelPlayAdInfo_o *)0x0) goto LAB_033c7970;
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (pUVar4->fields).AdNetwork;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_1160;
          thunk_FUN_01c20e04();
          pUVar2 = (__this->fields).eventInfo.fields.Item2;
          pSVar3 = (System_String_o *)0x0;
          if (pUVar2 != (Unity_Services_LevelPlay_LevelPlayAdError_o *)0x0) {
            pSVar3 = (System_String_o *)
                     (*(pUVar2->klass->vtable)._3_ToString.methodPtr)
                               (pUVar2,(pUVar2->klass->vtable)._3_ToString.method);
          }
          pSVar1 = StringLiteral_19927;
          if (pSVar3 != (System_String_o *)0x0) {
            pSVar1 = pSVar3;
          }
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_593;
              thunk_FUN_01c20e04();
              pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
              if (pPVar6 != (PNFHEJAEPHI_o *)0x0) {
                FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)pPVar6,pSVar3,(MethodInfo *)0x0);
                pPVar6 = (__this->fields).__4__this;
                if (pPVar6 != (PNFHEJAEPHI_o *)0x0) {
                  pSVar5 = (pPVar6->fields).super.HABJODEHCNL;
                  (pPVar6->fields).HNIADPLNEII = false;
                  if (pSVar5 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033c7958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(pSVar5->fields).super.super.invoke_impl)
                              ((pSVar5->fields).super.super.method_code,
                               (pPVar6->fields).super.JBNGADJBDHB,
                               (pSVar5->fields).super.super.method);
                    return;
                  }
                  return;
                }
              }
              goto LAB_033c7970;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_033c7970:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

