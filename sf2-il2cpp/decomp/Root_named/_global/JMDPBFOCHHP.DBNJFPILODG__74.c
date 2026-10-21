// TypeDefIndex 74
// Namespace: 
// public class RaidConfig.DBNJFPILODG
// Fields:
//   public int DDBGOGFKEBF; // 0x10
//   public int NLAKJEHAALI; // 0x14
//   public int IAEGKJLKABO; // 0x18
//   public int KDGECNIDNHI; // 0x1C
//   public List<RaidConfig.LDOMJFAAGAB> GDIJHLHCEDA; // 0x20
//   public Dictionary<KCFAKHLDKJM, RaidConfig.GEHAFAGNJPJ> AFAFAFILGCG; // 0x28
//   public Dictionary<string, RaidConfig.BNKFAJEBNFC> MLONDBMLENH; // 0x30
//   public Dictionary<int, RaidConfig.BFPCOCFHFHF> BCEDGEOHECB; // 0x38
//   public RaidConfig.ONCGGLEAIFH OOFDKPAOGFA; // 0x40

// ===== public void .ctor()  [RVA 0x2FFC028]
// RaidConfig.DBNJFPILODG$$.ctor @ RVA 0x2FFC028

void RaidConfig_DBNJFPILODG___ctor(RaidConfig_DBNJFPILODG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o **ppSVar1;
  System_Collections_Generic_Dictionary_KCFAKHLDKJM__JMDPBFOCHHP_GEHAFAGNJPJ__o *__this_01;
  System_Collections_Generic_Dictionary_KCFAKHLDKJM__JMDPBFOCHHP_GEHAFAGNJPJ__o **ppSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_Collections_Generic_Dictionary_string__JMDPBFOCHHP_BNKFAJEBNFC__o **ppSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_BFPCOCFHFHF__o **ppSVar4;
  RaidConfig_ONCGGLEAIFH_o *__this_04;
  RaidConfig_ONCGGLEAIFH_o **ppJVar5;
  MethodInfo *extraout_x1;
  undefined1 auVar6 [16];
  
  if ((DAT_04565ae4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_TypeInfo);
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>_TypeInfo
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_TypeInfo);
    FUN_01bab630(&RaidConfig_ONCGGLEAIFH_TypeInfo);
    DAT_04565ae4 = 1;
    method = extraout_x1;
  }
  (__this->fields).IAEGKJLKABO = 200;
  (__this->fields).KDGECNIDNHI = 10;
  (__this->fields).DDBGOGFKEBF = 0x32;
  (__this->fields).NLAKJEHAALI = 0x14;
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_LDOMJFAAGAB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidConfig_LDOMJFAAGAB>__ctor__);
  ppSVar1 = &(__this->fields).GDIJHLHCEDA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_KCFAKHLDKJM__JMDPBFOCHHP_GEHAFAGNJPJ__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<KCFAKHLDKJM,_JMDPBFOCHHP_GEHAFAGNJPJ>__ctor__
            );
  ppSVar2 = &(__this->fields).AFAFAFILGCG;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_02,
             Method_System_Collections_Generic_Dictionary<string,_JMDPBFOCHHP_BNKFAJEBNFC>__ctor__);
  ppSVar3 = &(__this->fields).MLONDBMLENH;
  *ppSVar3 = (System_Collections_Generic_Dictionary_string__JMDPBFOCHHP_BNKFAJEBNFC__o *)__this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_03,
             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_BFPCOCFHFHF>__ctor__);
  ppSVar4 = &(__this->fields).BCEDGEOHECB;
  *ppSVar4 = (System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_BFPCOCFHFHF__o *)__this_03;
  thunk_FUN_01c20e04(ppSVar4,__this_03);
  auVar6 = thunk_FUN_01bda818(RaidConfig_ONCGGLEAIFH_TypeInfo);
  __this_04 = auVar6._0_8_;
  RaidConfig_ONCGGLEAIFH___ctor(__this_04,auVar6._8_8_);
  ppJVar5 = &(__this->fields).OOFDKPAOGFA;
  *ppJVar5 = __this_04;
  thunk_FUN_01c20e04(ppJVar5,__this_04);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

