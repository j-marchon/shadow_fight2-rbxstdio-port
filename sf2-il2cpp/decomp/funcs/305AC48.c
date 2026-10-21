// ACHLOMELAJE$$RandomizeObscuredVars @ RVA 0x305AC48

void ACHLOMELAJE__RandomizeObscuredVars(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  System_Action_ObscuredUInt__o **ppSVar1;
  GGHCLMEFIGO_o *__this_00;
  System_Action_BNKBGIIJNLF__o **ppSVar2;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *source;
  System_Collections_Generic_List_TSource__o *__this_02;
  System_Action_OLKPEJMEBPJ__o **ppSVar3;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Collections_Generic_List_ObscuredUInt__o *__this_03;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_04;
  System_Action_OLKPEJMEBPJ__o *action;
  System_Action_ObscuredUInt__o *action_00;
  System_Action_BNKBGIIJNLF__o *action_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o __this_05;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_06;
  
  if ((DAT_04565e7d & 1) == 0) {
    FUN_01bab630(&System_Action<BNKBGIIJNLF>_TypeInfo);
    FUN_01bab630(&System_Action<ObscuredUInt>_TypeInfo);
    FUN_01bab630(&System_Action<OLKPEJMEBPJ>_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<OLKPEJMEBPJ>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredUInt>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKPEJMEBPJ>_ForEach__);
    FUN_01bab630(&Method_ACHLOMELAJE_<>c_BPBPFBAFCIC__);
    FUN_01bab630(&Method_ACHLOMELAJE_<>c_KIBLNKGKCIO__);
    FUN_01bab630(&Method_ACHLOMELAJE_<>c_NNKLCEMHKBJ__);
    FUN_01bab630(&ACHLOMELAJE_<>c_TypeInfo);
    DAT_04565e7d = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).HNBDIMMCOHD,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).GMGHJMNBDDJ,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).OGOANIHOCBO,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&(__this->fields).MBINFANFLMC,(MethodInfo *)0x0);
  __this_05.fields.fakeValue = 0;
  __this_05.fields.fakeValueActive = false;
  __this_05.fields.inited = false;
  __this_05.fields._14_2_ = 0;
  __this_05.fields._0_8_ = &(__this->fields).GLFINLJNDPI;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__GPJJDLBJOAL(__this_05,in_x2);
  __this_06.fields.fakeValue = 0;
  __this_06.fields.fakeValueActive = false;
  __this_06.fields.inited = false;
  __this_06.fields._14_2_ = 0;
  __this_06.fields._0_8_ = &(__this->fields).GMCNKDKMHII;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_06,in_x2);
  __this_03 = (__this->fields).BPDLLDECMMN;
  if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action_00 = ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__359_0;
  if (action_00 == (System_Action_ObscuredUInt__o *)0x0) {
    if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = (System_Action_ObscuredUInt__o *)
                thunk_FUN_01bda818(System_Action<ObscuredUInt>_TypeInfo);
    System_Action<ObscuredUInt>___ctor();
    ppSVar1 = &ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__359_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_03 != (System_Collections_Generic_List_ObscuredUInt__o *)0x0) {
    System_Collections_Generic_List<ObscuredUInt>__ForEach
              (__this_03,(System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<ObscuredUInt>_ForEach__);
    __this_00 = (__this->fields).OIDPLCLELEN;
    if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
      GGHCLMEFIGO__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
      __this_04 = (__this->fields).DIELINNGEBJ;
      if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_01 = ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__359_1;
      if (action_01 == (System_Action_BNKBGIIJNLF__o *)0x0) {
        if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action_01 = (System_Action_BNKBGIIJNLF__o *)
                    thunk_FUN_01bda818(System_Action<BNKBGIIJNLF>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar2 = &ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__359_1;
        *ppSVar2 = action_01;
        thunk_FUN_01c20e04(ppSVar2,action_01);
      }
      if (__this_04 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_04,
                   (System_Action_T__o *)action_01,
                   Method_System_Collections_Generic_List<BNKBGIIJNLF>_ForEach__);
        __this_01 = (__this->fields).KBCAIBPDIKB;
        if (__this_01 != (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) {
          source = ACHLOMELAJE_MDHCBOFHAEL__JDHAHDALAOA(__this_01,method_00);
          __this_02 = System_Linq_Enumerable__ToList<object>
                                ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                 Method_System_Linq_Enumerable_ToList<OLKPEJMEBPJ>__);
          if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(ACHLOMELAJE_<>c_TypeInfo);
          }
          action = ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__359_2;
          if (action == (System_Action_OLKPEJMEBPJ__o *)0x0) {
            if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(ACHLOMELAJE_<>c_TypeInfo);
            }
            action = (System_Action_OLKPEJMEBPJ__o *)
                     thunk_FUN_01bda818(System_Action<OLKPEJMEBPJ>_TypeInfo);
            System_Action<object>___ctor();
            ppSVar3 = &ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__359_2;
            *ppSVar3 = action;
            thunk_FUN_01c20e04(ppSVar3,action);
          }
          if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
            System_Collections_Generic_List<object>__ForEach
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (System_Action_T__o *)action,
                       Method_System_Collections_Generic_List<OLKPEJMEBPJ>_ForEach__);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

