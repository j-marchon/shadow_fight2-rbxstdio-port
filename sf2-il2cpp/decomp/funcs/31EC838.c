// KGLCGFMIEGI.BGGICOOKNAL$$MoveNext @ RVA 0x31EC838

bool KGLCGFMIEGI_BGGICOOKNAL__MoveNext(KGLCGFMIEGI_BGGICOOKNAL_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  System_DateTime_o SVar4;
  undefined8 extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Il2CppObject **ppIVar5;
  System_Action_bool__o *pSVar6;
  KGLCGFMIEGI_o *pKVar7;
  undefined1 auVar8 [16];
  System_TimeSpan_Fields local_18;
  KGLCGFMIEGI_o *__this_00;
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04566dae & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    auVar8 = FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566dae = 1;
  }
  local_18._ticks = 0;
  iVar1 = (__this->fields).__1__state;
  pKVar7 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar4 = System_DateTime__get_Now((MethodInfo *)0x0);
    auVar8._8_8_ = extraout_x1;
    auVar8._0_8_ = SVar4.fields._dateData;
    (__this->fields)._startTime_5__2.fields._dateData = (uint64_t)SVar4.fields._dateData;
  }
  if (pKVar7 != (KGLCGFMIEGI_o *)0x0) {
    bVar2 = KGLCGFMIEGI__EDBFDLIIHGI(auVar8._0_8_,auVar8._8_8_);
    __this_00 = (KGLCGFMIEGI_o *)(ulong)bVar2;
    method_00 = extraout_x1_00;
    if (bVar2) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4 = System_DateTime__get_Now((MethodInfo *)0x0);
      local_18._ticks =
           (int64_t)System_DateTime__op_Subtraction
                              (SVar4,(System_DateTime_o)
                                     (__this->fields)._startTime_5__2.fields._dateData,
                               (MethodInfo *)0x0);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      uVar3 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&local_18,(MethodInfo *)0x0);
      __this_00 = (KGLCGFMIEGI_o *)(ulong)uVar3;
      method_00 = extraout_x1_01;
      if ((int)uVar3 < 10) {
        ppIVar5 = &(__this->fields).__2__current;
        *ppIVar5 = (Il2CppObject *)0x0;
        thunk_FUN_01c20e04(ppIVar5,0);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    pSVar6 = (pKVar7->fields).NEMMLKGAOFE;
    if (pSVar6 != (System_Action_bool__o *)0x0) {
      bVar2 = KGLCGFMIEGI__EDBFDLIIHGI(__this_00,method_00);
      (*(code *)(pSVar6->fields).super.super.invoke_impl)
                ((pSVar6->fields).super.super.method_code,bVar2,(pSVar6->fields).super.super.method)
      ;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

