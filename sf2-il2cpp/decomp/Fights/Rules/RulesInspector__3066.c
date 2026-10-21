// Original name: Nekki.SF2.Core.Fights.Rules.RulesInspector  (obfuscated KAHMAJKJMBK)
// TypeDefIndex 3066
// Namespace: 
// public class RulesInspector : OMLLDCIMLBB<object>
// Fields:
//   public const float FNLKMGBDCAO = 0;
//   public const float KDCAOGLPKCO = -220;
//   private Fight HPKHMGLOLPJ; // 0x18
//   private List<PerkInfoItem> EOFEIIFFHCN; // 0x20
//   private List<PerkInfoItem> PFFILFBOODM; // 0x28
//   private List<NoPerksRule> JJPFOPGHLOD; // 0x30
//   private List<NoPerksRule> OHDBJEGKGLL; // 0x38
//   private List<InFightRule> AJIJMKENBMO; // 0x40
//   private List<InFightRule> CKMPEMHHNCI; // 0x48
//   private List<InFightRule> FBHMGCAMFKN; // 0x50
//   private List<InFightRule> JDILFKPDENK; // 0x58
//   private List<InFightRule> PKMNBFPALAM; // 0x60
//   private List<InFightRule> CFCENPHNNAB; // 0x68
//   private List<InFightRule> EJPFDNLPLNG; // 0x70
//   private List<InFightRule> JJNMICKPIFL; // 0x78
//   private List<InFightRule> AJOJJAMODCB; // 0x80
//   private List<InFightRule> ENDAHIICPMO; // 0x88
//   private List<InFightRule> LKNFJJLFJFD; // 0x90
//   private List<InFightRule> OIJDFMHDHHK; // 0x98
//   private List<ItemRule> DKGFCNANCMN; // 0xA0
//   private List<ItemRule> LNHNEEKANMO; // 0xA8
//   private List<ItemRule> FPKAGJKKCIN; // 0xB0
//   private List<NoButtonRule> BJCIIJEPGFL; // 0xB8
//   private List<JFAGMCHGOEH> DABLKOLPECH; // 0xC0
//   private List<ECGPIFIJMFF> DCJDAHONBJI; // 0xC8
//   private List<RandomRule> POPEMFAKCLL; // 0xD0
//   private List<EFNDJJDBNFN> BMHBDANJFFJ; // 0xD8
//   private List<ONMBPNGKBBO> DPAPFKANFNK; // 0xE0
//   private List<Rule> LJNCACBBIBD; // 0xE8
//   public bool JIKKMEONEDH; // 0xF0
//   public int MMCCGGNADOK; // 0xF4
//   private int KOANEAEMOOP; // 0xF8
//   private bool CCMCDKDBNON; // 0xFC

// ===== public void CLAONOCPIHH(ECGPIFIJMFF GOAHBPBJCKC, FightList FBFPLEFCDOK)  [RVA 0x34BD1B4]
// RulesInspector$$CLAONOCPIHH @ RVA 0x34BD1B4

void RulesInspector__CLAONOCPIHH
               (RulesInspector_o *__this,ECGPIFIJMFF_o *GOAHBPBJCKC,FightList_o *FBFPLEFCDOK,
               MethodInfo *method)

{
  int32_t iVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  CVar2._8_8_ = GOAHBPBJCKC;
  CVar2._0_8_ = __this;
  if (GOAHBPBJCKC != (ECGPIFIJMFF_o *)0x0) {
    iVar1 = (GOAHBPBJCKC->fields).DKGMKHOOHBI;
    if (0 < iVar1) {
      CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
      if (FBFPLEFCDOK == (FightList_o *)0x0) goto LAB_035bd214;
      (FBFPLEFCDOK->fields).GENLHJOKOIJ.fields = CVar2;
    }
    iVar1 = (GOAHBPBJCKC->fields).FGPEKOKDCNB;
    if (0 < iVar1) {
      CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
      if (FBFPLEFCDOK == (FightList_o *)0x0) goto LAB_035bd214;
      (FBFPLEFCDOK->fields).NHNNEADDBDB.fields = CVar2;
    }
    return;
  }
LAB_035bd214:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CVar2._0_8_);
}


// ===== protected void GMFBLDENDIM(List<InFightRule> FAAMECCDGJM)  [RVA 0x34BD218]
// RulesInspector$$GMFBLDENDIM @ RVA 0x34BD218

void RulesInspector__GMFBLDENDIM
               (RulesInspector_o *__this,System_Collections_Generic_List_CNIGOFCKBGI__o *FAAMECCDGJM,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045685f8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    DAT_045685f8 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (FAAMECCDGJM != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)FAAMECCDGJM,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__
                             ), bVar1) {
      RulesInspector__JDMMBLAGLKD(__this,(InFightRule_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void IGKMMHADIAK()  [RVA 0x34BD95C]
// RulesInspector$$IGKMMHADIAK @ RVA 0x34BD95C

void RulesInspector__IGKMMHADIAK(RulesInspector_o *__this,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  Fight_o *pFVar5;
  Model_o *__this_00;
  Model_o *__this_01;
  AKADDLNNLKH_o *__this_02;
  Roster_o *pAVar6;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_03;
  Il2CppClass *KGLJICLJHEL;
  float fVar7;
  float fVar8;
  float CJNHFNHJHPE;
  float CJNHFNHJHPE_00;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  
  if ((DAT_045685f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&ResistanceRule_TypeInfo);
    DAT_045685f9 = 1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  pFVar5 = (__this->fields).HPKHMGLOLPJ;
  if (pFVar5 != (Fight_o *)0x0) {
    __this_00 = Fight__HJFOLPOINNH(pFVar5,1,(MethodInfo *)0x0);
    pFVar5 = (__this->fields).HPKHMGLOLPJ;
    if (pFVar5 != (Fight_o *)0x0) {
      __this_01 = Fight__HJFOLPOINNH(pFVar5,2,(MethodInfo *)0x0);
      __this_03 = (__this->fields).LKNFJJLFJFD;
      if (__this_03 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_03,
                   Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
        CJNHFNHJHPE = 1.0;
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        CJNHFNHJHPE_00 = 1.0;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__
                                 ), bVar3) {
          if (local_a0.fields._current != (Il2CppObject *)0x0) {
            bVar2 = (ResistanceRule_TypeInfo->_2).naturalAligment;
            if ((bVar2 <= ((local_a0.fields._current)->klass->_2).naturalAligment) &&
               (((local_a0.fields._current)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)ResistanceRule_TypeInfo)) {
              KGLJICLJHEL = local_a0.fields._current[7].klass;
              iVar1 = *(int *)&local_a0.fields._current[7].monitor;
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar6 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              __this_02 = (pAVar6->fields).MLNLNNNNPGH;
              if (__this_02 == (AKADDLNNLKH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar4 = AKADDLNNLKH__CBGJMMDIFGA
                                (__this_02,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
              if (iVar4 < iVar1) {
                if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                fVar7 = GameUtils__NEOLDJIJDFP((MethodInfo *)0x0);
                fVar8 = GameUtils__NEOLDJIJDFP((MethodInfo *)0x0);
                fVar7 = exp2f((float)(iVar1 - iVar4) / fVar7);
                fVar8 = exp2f((float)(iVar4 - iVar1) / fVar8);
                CJNHFNHJHPE_00 = CJNHFNHJHPE_00 * fVar8;
                CJNHFNHJHPE = CJNHFNHJHPE * fVar7;
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
        if ((__this_00 != (Model_o *)0x0) &&
           (Model__JLOBFPEOCCO(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0),
           __this_01 != (Model_o *)0x0)) {
          Model__JLOBFPEOCCO(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MBOJKFMFLOI(FightList FBFPLEFCDOK)  [RVA 0x34BDC80]
// RulesInspector$$MBOJKFMFLOI @ RVA 0x34BDC80

void RulesInspector__MBOJKFMFLOI(RulesInspector_o *__this,FightList_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ECGPIFIJMFF__o *pSVar2;
  RulesInspector_o *__this_00;
  MethodInfo *in_x3;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045685fa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_get_Item__);
    DAT_045685fa = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).DCJDAHONBJI;
  if (pSVar2 == (System_Collections_Generic_List_ECGPIFIJMFF__o *)0x0) {
LAB_035bddb4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (pSVar2->fields)._size) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ECGPIFIJMFF>_GetEnumerator__);
    pIVar3 = (Il2CppObject *)0x0;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_MoveNext__
                             ), bVar1) {
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(char *)((long)&local_48.fields._current[3].monitor + 4) != '\0') {
        pIVar3 = local_48.fields._current;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_Dispose__);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pSVar2 = (__this->fields).DCJDAHONBJI;
      if (pSVar2 == (System_Collections_Generic_List_ECGPIFIJMFF__o *)0x0) goto LAB_035bddb4;
      __this_00 = (RulesInspector_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,
                             (pSVar2->fields)._size + -1,
                             Method_System_Collections_Generic_List<ECGPIFIJMFF>_get_Item__);
      RulesInspector__CLAONOCPIHH(__this_00,(ECGPIFIJMFF_o *)__this_00,FBFPLEFCDOK,in_x3);
    }
  }
  return;
}


// ===== public void DGMPCAMKCHI(ModelParameters NDOMOKBINFD)  [RVA 0x34BDE30]
// RulesInspector$$DGMPCAMKCHI @ RVA 0x34BDE30

void RulesInspector__DGMPCAMKCHI(RulesInspector_o *__this,ModelParameters_o *NDOMOKBINFD,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_Collections_Generic_List_EFNDJJDBNFN__o *__this_00;
  System_Collections_Generic_List_ONMBPNGKBBO__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045685fb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11463/*"RulesInspector::ApplyAvatarAndNameRules ERROR - modelParameters is NULL"*/);
    DAT_045685fb = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD == (ModelParameters_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11463/*"RulesInspector::ApplyAvatarAndNameRules ERROR - modelParameters is NULL"*/,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).BMHBDANJFFJ;
  if (__this_00 != (System_Collections_Generic_List_EFNDJJDBNFN__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EFNDJJDBNFN>_GetEnumerator__);
    ppSVar1 = &(NDOMOKBINFD->fields).NILOEHGNJNL;
    local_70.fields._index = local_a0.fields._index;
    local_70.fields._version = local_a0.fields._version;
    local_70.fields._list = local_a0.fields._list;
    local_70.fields._current = local_a0.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_MoveNext__);
      if (!bVar2) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (NDOMOKBINFD == (ModelParameters_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *ppSVar1 = local_70.fields._current[5].monitor;
      thunk_FUN_01c20e04(ppSVar1);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<EFNDJJDBNFN>_Dispose__);
    __this_01 = (__this->fields).DPAPFKANFNK;
    if (__this_01 != (System_Collections_Generic_List_ONMBPNGKBBO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ONMBPNGKBBO>_GetEnumerator__);
      ppSVar1 = &(NDOMOKBINFD->fields).NBPNHMKOJKB;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_88,
                           Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_88,
                     Method_System_Collections_Generic_List_Enumerator<ONMBPNGKBBO>_Dispose__);
          return;
        }
        if (local_88.fields._current == (Il2CppObject *)0x0) break;
        if (NDOMOKBINFD == (ModelParameters_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *ppSVar1 = local_88.fields._current[5].monitor;
        thunk_FUN_01c20e04(ppSVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void JIPKIDBNLAD(Rule GOAHBPBJCKC)  [RVA 0x34BE118]
// RulesInspector$$JIPKIDBNLAD @ RVA 0x34BE118

void RulesInspector__JIPKIDBNLAD(RulesInspector_o *__this,Rule_o *GOAHBPBJCKC,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  bool GKAFKJNCMFJ;
  MethodInfo_26E62D4 *method_00;
  MethodInfo *in_x3;
  undefined8 *puVar4;
  
  if ((DAT_045685fc & 1) == 0) {
    FUN_01bab630(&InFightRule_TypeInfo);
    FUN_01bab630(&ECGPIFIJMFF_TypeInfo);
                    /* try { // try from 035be154 to 036be1e3 has its CatchHandler @ 035be154
                       catch() { ... } // from try @ 035be154 with catch @ 035be154
                       catch() { ... } // from try @ 035be354 with catch @ 035be154
                       catch() { ... } // from try @ 035be3c0 with catch @ 035be154
                       catch() { ... } // from try @ 035be4ac with catch @ 035be154 */
    FUN_01bab630(&EFNDJJDBNFN_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&JFAGMCHGOEH_TypeInfo);
    FUN_01bab630(&NoButtonRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>_Remove__);
                    /* try { // try from 035be1e4 to 036be207 has its CatchHandler @ 035be390 */
    FUN_01bab630(&ONMBPNGKBBO_TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_045685fc = 1;
  }
  if (GOAHBPBJCKC == (Rule_o *)0x0) goto LAB_035be5ac;
  iVar2 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
                    /* try { // try from 035be210 to 036be217 has its CatchHandler @ 035be380 */
                    /* try { // try from 035be228 to 036be22f has its CatchHandler @ 035be37c */
  switch(iVar2) {
  case 0:
  case 1:
  case 2:
    pSVar3 = (__this->fields).DKGFCNANCMN;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
                    /* try { // try from 035be2c0 to 036be2c7 has its CatchHandler @ 035be35c */
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035be2d8 to 036be2df has its CatchHandler @ 035be358 */
                    /* try { // try from 035be2e0 to 036be2ef has its CatchHandler @ 035be354 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035be5b0;
                    /* try { // try from 035be2f4 to 036be317 has its CatchHandler @ 035be38c */
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
               Method_System_Collections_Generic_List<ItemRule>_Remove__);
    pSVar3 = (__this->fields).LNHNEEKANMO;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035be320 to 036be32f has its CatchHandler @ 035be388 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035be5b0;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
               Method_System_Collections_Generic_List<ItemRule>_Remove__);
                    /* try { // try from 035be348 to 036be34b has its CatchHandler @ 035be384 */
    pSVar3 = (__this->fields).FPKAGJKKCIN;
                    /* try { // try from 035be34c to 036be34f has its CatchHandler @ 035be38c */
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
                    /* try { // try from 035be350 to 036be353 has its CatchHandler @ 035be388 */
                    /* catch() { ... } // from try @ 035be2e0 with catch @ 035be354
                       try { // try from 035be354 to 036be3a7 has its CatchHandler @ 035be154 */
                    /* catch() { ... } // from try @ 035be2d8 with catch @ 035be358 */
                    /* catch() { ... } // from try @ 035be2c0 with catch @ 035be35c */
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035be2b4 with catch @ 035be360 */
                    /* catch() { ... } // from try @ 035be29c with catch @ 035be364 */
                    /* catch() { ... } // from try @ 035be288 with catch @ 035be368 */
                    /* catch() { ... } // from try @ 035be26c with catch @ 035be36c */
                    /* catch() { ... } // from try @ 035be264 with catch @ 035be370 */
                    /* catch() { ... } // from try @ 035be24c with catch @ 035be374 */
                    /* catch() { ... } // from try @ 035be240 with catch @ 035be378 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       (method_00 = Method_System_Collections_Generic_List<ItemRule>_Remove__,
       (GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035be5b0;
    goto LAB_035be538;
  case 3:
                    /* catch() { ... } // from try @ 035be348 with catch @ 035be384 */
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).BJCIIJEPGFL;
                    /* catch() { ... } // from try @ 035be320 with catch @ 035be388
                       catch() { ... } // from try @ 035be350 with catch @ 035be388 */
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
                    /* catch() { ... } // from try @ 035be2f4 with catch @ 035be38c
                       catch() { ... } // from try @ 035be34c with catch @ 035be38c */
                    /* catch() { ... } // from try @ 035be1e4 with catch @ 035be390 */
    bVar1 = (NoButtonRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035be3a8 to 036be3bf has its CatchHandler @ 035be4a4 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)NoButtonRule_TypeInfo)) goto LAB_035be5b0;
                    /* try { // try from 035be3c0 to 036be493 has its CatchHandler @ 035be154 */
    puVar4 = &Method_System_Collections_Generic_List<NoButtonRule>_Remove__;
    break;
  case 4:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).DABLKOLPECH;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (JFAGMCHGOEH_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JFAGMCHGOEH_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<JFAGMCHGOEH>_Remove__;
    break;
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x22:
  case 0x24:
  case 0x28:
                    /* try { // try from 035be240 to 036be247 has its CatchHandler @ 035be378 */
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035be24c to 036be253 has its CatchHandler @ 035be374 */
                    /* try { // try from 035be264 to 036be26b has its CatchHandler @ 035be370 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)InFightRule_TypeInfo)) goto LAB_035be5b0;
                    /* try { // try from 035be26c to 036be27b has its CatchHandler @ 035be36c */
    GKAFKJNCMFJ = false;
    goto LAB_035be274;
  case 6:
  case 0x12:
  case 0x1f:
  case 0x20:
                    /* try { // try from 035be288 to 036be293 has its CatchHandler @ 035be368 */
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035be29c to 036be2a3 has its CatchHandler @ 035be364 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)InFightRule_TypeInfo)) goto LAB_035be5b0;
    GKAFKJNCMFJ = true;
                    /* try { // try from 035be2b4 to 036be2bb has its CatchHandler @ 035be360 */
LAB_035be274:
    RulesInspector__DNKKBDLAGHG(__this,(InFightRule_o *)GOAHBPBJCKC,GKAFKJNCMFJ,in_x3);
  default:
    goto switchD_035be238_caseD_15;
  case 0x16:
    bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)PNEKMHMACLG_TypeInfo)) {
      RulesInspector__ACOIAOCFPKA(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,method);
      return;
    }
LAB_035be5b0:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(GOAHBPBJCKC);
  case 0x1d:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).DCJDAHONBJI;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ECGPIFIJMFF_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035be494 to 036be4a3 has its CatchHandler @ 035be4a4 */
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ECGPIFIJMFF_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<ECGPIFIJMFF>_Remove__;
                    /* catch() { ... } // from try @ 035be3a8 with catch @ 035be4a4
                       catch() { ... } // from try @ 035be494 with catch @ 035be4a4 */
    break;
  case 0x26:
                    /* try { // try from 035be4a8 to 036be4ab has its CatchHandler @ 035be4b4 */
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).BMHBDANJFFJ;
                    /* try { // try from 035be4ac to 036be4b7 has its CatchHandler @ 035be154 */
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
                    /* catch() { ... } // from try @ 035be4a8 with catch @ 035be4b4 */
    bVar1 = (EFNDJJDBNFN_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)EFNDJJDBNFN_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<EFNDJJDBNFN>_Remove__;
    break;
  case 0x27:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).DPAPFKANFNK;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ONMBPNGKBBO_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ONMBPNGKBBO_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<ONMBPNGKBBO>_Remove__;
    break;
  case 0x29:
    bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_035be5b0;
    RulesInspector__ACOIAOCFPKA(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,method);
    goto switchD_035be238_caseD_15;
  }
  method_00 = (MethodInfo_26E62D4 *)*puVar4;
LAB_035be538:
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
             method_00);
switchD_035be238_caseD_15:
  __this_00 = (__this->fields).LJNCACBBIBD;
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)GOAHBPBJCKC,
               Method_System_Collections_Generic_List<Rule>_Remove__);
    return;
  }
LAB_035be5ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void IEPLAMBNBJN(ItemRule KDFALPIMMMI)  [RVA 0x34BE8A8]
// RulesInspector$$IEPLAMBNBJN @ RVA 0x34BE8A8

void RulesInspector__IEPLAMBNBJN(RulesInspector_o *__this,ItemRule_o *KDFALPIMMMI,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar4;
  ItemRule_array *pJVar5;
  
  if ((DAT_045685fd & 1) == 0) {
                    /* catch() { ... } // from try @ 035be8e4 with catch @ 035be8cc
                       catch() { ... } // from try @ 035be924 with catch @ 035be8cc
                       catch() { ... } // from try @ 035bea18 with catch @ 035be8cc */
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_Add__);
    DAT_045685fd = 1;
  }
  lVar3 = Method_System_Collections_Generic_List<ItemRule>_Add__;
  if (KDFALPIMMMI == (ItemRule_o *)0x0) goto LAB_035bea44;
  iVar1 = (KDFALPIMMMI->fields).IDNBELKLCEL;
                    /* try { // try from 035be8e0 to 036be8e3 has its CatchHandler @ 035be8f4 */
                    /* try { // try from 035be8e4 to 036be90b has its CatchHandler @ 035be8cc */
  if (iVar1 == 3) {
                    /* try { // try from 035be90c to 036be923 has its CatchHandler @ 035bea10 */
    pSVar4 = (__this->fields).LNHNEEKANMO;
    if (pSVar4 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035bea44;
    pJVar5 = (pSVar4->fields)._items;
                    /* try { // try from 035be924 to 036be9ff has its CatchHandler @ 035be8cc */
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pJVar5 == (ItemRule_array *)0x0) goto LAB_035bea44;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pJVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      pJVar5->m_Items[(int)uVar2] = KDFALPIMMMI;
      thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar2,KDFALPIMMMI);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KDFALPIMMMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
LAB_035be970:
    pSVar4 = (__this->fields).FPKAGJKKCIN;
    lVar3 = Method_System_Collections_Generic_List<ItemRule>_Add__;
joined_r0x035be974:
    Method_System_Collections_Generic_List<ItemRule>_Add__ = lVar3;
    if (pSVar4 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035bea44;
    pJVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pJVar5 == (ItemRule_array *)0x0) goto LAB_035bea44;
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pJVar5->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      pJVar5->m_Items[(int)uVar2] = KDFALPIMMMI;
      thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar2,KDFALPIMMMI);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KDFALPIMMMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035be8e0 with catch @ 035be8f4
                        */
    if (iVar1 == 2) goto LAB_035be970;
    if (iVar1 == 1) {
      pSVar4 = (__this->fields).LNHNEEKANMO;
      goto joined_r0x035be974;
    }
  }
  lVar3 = Method_System_Collections_Generic_List<ItemRule>_Add__;
  pSVar4 = (__this->fields).DKGFCNANCMN;
  if (pSVar4 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
    pJVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pJVar5 != (ItemRule_array *)0x0) {
      uVar2 = (pSVar4->fields)._size;
                    /* try { // try from 035bea00 to 036bea0f has its CatchHandler @ 035bea10 */
      if (uVar2 < (uint)pJVar5->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
                    /* catch() { ... } // from try @ 035be90c with catch @ 035bea10
                       catch() { ... } // from try @ 035bea00 with catch @ 035bea10 */
        pJVar5->m_Items[(int)uVar2] = KDFALPIMMMI;
                    /* try { // try from 035bea14 to 036bea17 has its CatchHandler @ 035bea20 */
                    /* try { // try from 035bea18 to 036bea23 has its CatchHandler @ 035be8cc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035bea14 with catch @ 035bea20
                        */
        thunk_FUN_01c20e04(pJVar5->m_Items + (int)uVar2,KDFALPIMMMI);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)KDFALPIMMMI,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_035bea44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DBLLCDJCJIJ()  [RVA 0x34BEA48]
// RulesInspector$$DBLLCDJCJIJ @ RVA 0x34BEA48

void RulesInspector__DBLLCDJCJIJ(RulesInspector_o *__this,MethodInfo *method)

{
  int32_t PKLFFPEBBDA;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((DAT_045685fe & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_045685fe = 1;
    method = extraout_x1;
  }
  RulesInspector__LLNDEKACMIL(__this,method);
  if ((__this->fields).MMCCGGNADOK == 1) {
    if ((__this->fields).CCMCDKDBNON == false) {
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
    }
    else {
      PKLFFPEBBDA = (__this->fields).KOANEAEMOOP;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LIIFLGALGNK__DHPFKHMDEDG(PKLFFPEBBDA,(MethodInfo *)0x0);
    }
    RulesInspector__DBLLCDJCJIJ(__this,1,in_x2);
  }
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
  RulesInspector__DBLLCDJCJIJ(__this,2,in_x2);
  RulesInspector__DMADJBBJLCA(__this,method_00);
  return;
}


// ===== public void JMMGBCEIKIL()  [RVA 0x34BEF50]
// RulesInspector$$JMMGBCEIKIL @ RVA 0x34BEF50

void RulesInspector__JMMGBCEIKIL(RulesInspector_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  Fight_o *pFVar9;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045685ff & 1) == 0) {
    FUN_01bab630(&HotGroundRule_TypeInfo);
    FUN_01bab630(&PointsRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    FUN_01bab630(&RingOutRule_TypeInfo);
    DAT_045685ff = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OIJDFMHDHHK;
  if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
      pIVar6 = local_80.fields._current;
      if (!bVar7) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
        return;
      }
      if ((Rule_o *)local_80.fields._current == (Rule_o *)0x0) break;
      if (((Rule_Fields *)((long)local_80.fields._current + 0x10))->
          _BDDBFNHFMBC_k__BackingField != false) {
        iVar8 = Rule__NHGGBEACKBD
                          ((Rule_o *)local_80.fields._current,(MethodInfo *)0x0);
        if (iVar8 < 0x10) {
          if (iVar8 < 7) {
            if (iVar8 == 5) {
              bVar7 = !bVar4;
              bVar4 = true;
              if (bVar7) {
                bVar1 = (RingOutRule_TypeInfo->_2).naturalAligment;
                if (((((Rule_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
                   ((((Rule_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)RingOutRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pIVar6);
                }
                pFVar9 = (__this->fields).HPKHMGLOLPJ;
                if (pFVar9 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar4 = true;
                Fight__MBAMHICCADK
                          (pFVar9,(float)(((Rule_o *)((long)pIVar6 + 0x58))->fields).
                                         PJEIFMBEAKH,
                           *(float *)&(((Rule_o *)((long)pIVar6 + 0x58))->fields).
                                      _BDDBFNHFMBC_k__BackingField,
                           *(float *)&(((Rule_o *)((long)pIVar6 + 0x58))->fields).BPPCPHCDICD
                           ,*(System_String_o **)
                             &(((Rule_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB.fields,
                           (MethodInfo *)0x0);
              }
            }
            else if ((iVar8 == 6) && (bVar7 = !bVar2, bVar2 = true, bVar7)) {
              pFVar9 = (__this->fields).HPKHMGLOLPJ;
              if (pFVar9 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar2 = true;
              Fight__KCHJHDCDKGB(pFVar9,(MethodInfo *)0x0);
            }
          }
          else if (iVar8 == 7) {
            bVar7 = !bVar5;
            bVar5 = true;
            if (bVar7) {
              bVar1 = (HotGroundRule_TypeInfo->_2).naturalAligment;
              if (((((Rule_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
                 ((((Rule_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)HotGroundRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pIVar6);
              }
              bVar5 = true;
              if ((char)(((Rule_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB.fields.
                        fakeValue != '\0') {
                pFVar9 = (__this->fields).HPKHMGLOLPJ;
                if (pFVar9 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar5 = true;
                Fight__IGGGBNLBJPI
                          (pFVar9,*(System_String_o **)
                                   &(((Rule_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB.
                                    fields,
                           *(float *)&(((Rule_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB
                                      .fields.fakeValueActive,(MethodInfo *)0x0);
              }
            }
          }
          else if (iVar8 == 0xf) {
            pFVar9 = (__this->fields).HPKHMGLOLPJ;
            if (pFVar9 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            Fight__NPGJDKCAEHN
                      (pFVar9,*(int32_t *)&((Rule_o *)((long)pIVar6 + 0x58))->klass,false,
                       (MethodInfo *)0x0);
          }
        }
        else if (iVar8 == 0x12) {
          bVar7 = !bVar3;
          bVar3 = true;
          if (bVar7) {
            bVar1 = (PointsRule_TypeInfo->_2).naturalAligment;
            if (((((Rule_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
               ((((Rule_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)PointsRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pIVar6);
            }
            pFVar9 = (__this->fields).HPKHMGLOLPJ;
            if (pFVar9 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = true;
            Fight__FPBGLCDHHFH
                      (pFVar9,0.0,-220.0,
                       *(int32_t *)
                        ((long)&(((Rule_o *)((long)pIVar6 + 0x58))->fields).super.GMPFJFBFHCH
                        + 4),*(int32_t *)
                              ((long)&(((Rule_o *)((long)pIVar6 + 0x58))->fields).HIJMBHIMFBB
                              + 4),100.0,(MethodInfo *)0x0);
          }
        }
        else if (iVar8 == 0x28) {
          pFVar9 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar9 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Fight__PCKDILILPBJ(pFVar9,3,true,(MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== protected void CPOOGAMMCEB(InFightRule HHDLPCHGBHM, bool GKAFKJNCMFJ = False)  [RVA 0x34BF420]
// RulesInspector$$CPOOGAMMCEB @ RVA 0x34BF420

void RulesInspector__CPOOGAMMCEB
               (RulesInspector_o *__this,InFightRule_o *HHDLPCHGBHM,bool GKAFKJNCMFJ,MethodInfo *method
               )

{
  InFightRule_o *GOAHBPBJCKC;
  InFightRule_o *pCVar1;
  Rule_o **ppAVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)GKAFKJNCMFJ;
  if (!GKAFKJNCMFJ) {
    if (HHDLPCHGBHM == (InFightRule_o *)0x0) {
LAB_035bf4e0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((HHDLPCHGBHM->fields).JGJNBILDCHK == 3) {
      GOAHBPBJCKC = (InFightRule_o *)
                    (*(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.methodPtr)
                              (HHDLPCHGBHM,(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.method);
      pCVar1 = (InFightRule_o *)
               (*(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.methodPtr)
                         (HHDLPCHGBHM,(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.method);
      if ((GOAHBPBJCKC == (InFightRule_o *)0x0) ||
         ((GOAHBPBJCKC->fields).JGJNBILDCHK = 1, pCVar1 == (InFightRule_o *)0x0)) goto LAB_035bf4e0;
      (pCVar1->fields).JGJNBILDCHK = 2;
      ppAVar2 = &(GOAHBPBJCKC->fields).super.LKKBHIEHNAM;
      *ppAVar2 = (Rule_o *)HHDLPCHGBHM;
      thunk_FUN_01c20e04(ppAVar2,HHDLPCHGBHM);
      ppAVar2 = &(pCVar1->fields).super.LKKBHIEHNAM;
      *ppAVar2 = (Rule_o *)HHDLPCHGBHM;
      thunk_FUN_01c20e04(ppAVar2,HHDLPCHGBHM);
      RulesInspector__JDMMBLAGLKD(__this,GOAHBPBJCKC,method_00);
      HHDLPCHGBHM = pCVar1;
    }
  }
  RulesInspector__JDMMBLAGLKD(__this,HHDLPCHGBHM,method_00);
  return;
}


// ===== public void GIFMLFBHKFH(int ODIAFMNGOLA)  [RVA 0x34BF4E4]
// RulesInspector$$GIFMLFBHKFH @ RVA 0x34BF4E4

void RulesInspector__GIFMLFBHKFH(RulesInspector_o *__this,int32_t ODIAFMNGOLA,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  RulesInspector__NBFBDCDCFPP(__this,(MethodInfo *)(ulong)(uint)ODIAFMNGOLA);
  (__this->fields).MMCCGGNADOK = ODIAFMNGOLA;
  RulesInspector__HLPNMHKHKOK(__this,method_00);
  RulesInspector__DBLLCDJCJIJ(__this,method_01);
  RulesInspector__JAFLDLGLANF(__this,method_02);
  return;
}


// ===== public void .ctor(Fight MHOFCOHFCGL, FightList FBFPLEFCDOK)  [RVA 0x34C0030]
// RulesInspector$$.ctor @ RVA 0x34C0030

void RulesInspector___ctor(RulesInspector_o *__this,Fight_o *MHOFCOHFCGL,FightList_o *FBFPLEFCDOK,
                       MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar2;
  System_Collections_Generic_List_CCAEOJMALLA__o *pSVar3;
  System_Collections_Generic_List_CCAEOJMALLA__o **ppSVar4;
  System_Collections_Generic_List_CNIGOFCKBGI__o *pSVar5;
  System_Collections_Generic_List_CNIGOFCKBGI__o **ppSVar6;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar7;
  System_Collections_Generic_List_JCHNBADDBGO__o **ppSVar8;
  System_Collections_Generic_List_KMFIGBGAKNL__o *__this_00;
  System_Collections_Generic_List_KMFIGBGAKNL__o **ppSVar9;
  System_Collections_Generic_List_JFAGMCHGOEH__o *__this_01;
  System_Collections_Generic_List_JFAGMCHGOEH__o **ppSVar10;
  System_Collections_Generic_List_ECGPIFIJMFF__o *__this_02;
  System_Collections_Generic_List_ECGPIFIJMFF__o **ppSVar11;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_03;
  System_Collections_Generic_List_AGCDKMOOJGI__o **ppSVar12;
  System_Collections_Generic_List_EFNDJJDBNFN__o *__this_04;
  System_Collections_Generic_List_EFNDJJDBNFN__o **ppSVar13;
  System_Collections_Generic_List_ONMBPNGKBBO__o *__this_05;
  System_Collections_Generic_List_ONMBPNGKBBO__o **ppSVar14;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_06;
  System_Collections_Generic_List_AJNNHGGLGIF__o **ppSVar15;
  Fight_o **ppFVar16;
  
  if ((DAT_04568600 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoPerksRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ItemRule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<EFNDJJDBNFN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Rule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ECGPIFIJMFF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<InFightRule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ONMBPNGKBBO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JFAGMCHGOEH>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<RandomRule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NoButtonRule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NoPerksRule>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_04568600 = 1;
  }
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  ppSVar2 = &(__this->fields).EOFEIIFFHCN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PerkInfoItem>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PerkInfoItem>__ctor__);
  ppSVar2 = &(__this->fields).PFFILFBOODM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar3 = (System_Collections_Generic_List_CCAEOJMALLA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NoPerksRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NoPerksRule>__ctor__);
  ppSVar4 = &(__this->fields).JJPFOPGHLOD;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_CCAEOJMALLA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NoPerksRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<NoPerksRule>__ctor__);
  ppSVar4 = &(__this->fields).OHDBJEGKGLL;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).AJIJMKENBMO;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).CKMPEMHHNCI;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).FBHMGCAMFKN;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).JDILFKPDENK;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).PKMNBFPALAM;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).CFCENPHNNAB;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).EJPFDNLPLNG;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).JJNMICKPIFL;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).AJOJJAMODCB;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).ENDAHIICPMO;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).LKNFJJLFJFD;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Collections_Generic_List_CNIGOFCKBGI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<InFightRule>__ctor__);
  ppSVar6 = &(__this->fields).OIJDFMHDHHK;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar7 = (System_Collections_Generic_List_JCHNBADDBGO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ItemRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             Method_System_Collections_Generic_List<ItemRule>__ctor__);
  ppSVar8 = &(__this->fields).DKGFCNANCMN;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8,pSVar7);
  pSVar7 = (System_Collections_Generic_List_JCHNBADDBGO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ItemRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             Method_System_Collections_Generic_List<ItemRule>__ctor__);
  ppSVar8 = &(__this->fields).LNHNEEKANMO;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8,pSVar7);
  pSVar7 = (System_Collections_Generic_List_JCHNBADDBGO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ItemRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             Method_System_Collections_Generic_List<ItemRule>__ctor__);
  ppSVar8 = &(__this->fields).FPKAGJKKCIN;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8,pSVar7);
  __this_00 = (System_Collections_Generic_List_KMFIGBGAKNL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NoButtonRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NoButtonRule>__ctor__);
  ppSVar9 = &(__this->fields).BJCIIJEPGFL;
  *ppSVar9 = __this_00;
  thunk_FUN_01c20e04(ppSVar9,__this_00);
  __this_01 = (System_Collections_Generic_List_JFAGMCHGOEH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JFAGMCHGOEH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<JFAGMCHGOEH>__ctor__);
  ppSVar10 = &(__this->fields).DABLKOLPECH;
  *ppSVar10 = __this_01;
  thunk_FUN_01c20e04(ppSVar10,__this_01);
  __this_02 = (System_Collections_Generic_List_ECGPIFIJMFF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECGPIFIJMFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<ECGPIFIJMFF>__ctor__);
  ppSVar11 = &(__this->fields).DCJDAHONBJI;
  *ppSVar11 = __this_02;
  thunk_FUN_01c20e04(ppSVar11,__this_02);
  __this_03 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RandomRule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             Method_System_Collections_Generic_List<RandomRule>__ctor__);
  ppSVar12 = &(__this->fields).POPEMFAKCLL;
  *ppSVar12 = __this_03;
  thunk_FUN_01c20e04(ppSVar12,__this_03);
  __this_04 = (System_Collections_Generic_List_EFNDJJDBNFN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EFNDJJDBNFN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_04,
             Method_System_Collections_Generic_List<EFNDJJDBNFN>__ctor__);
  ppSVar13 = &(__this->fields).BMHBDANJFFJ;
  *ppSVar13 = __this_04;
  thunk_FUN_01c20e04(ppSVar13,__this_04);
  __this_05 = (System_Collections_Generic_List_ONMBPNGKBBO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ONMBPNGKBBO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             Method_System_Collections_Generic_List<ONMBPNGKBBO>__ctor__);
  ppSVar14 = &(__this->fields).DPAPFKANFNK;
  *ppSVar14 = __this_05;
  thunk_FUN_01c20e04(ppSVar14,__this_05);
  __this_06 = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Rule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_06,
             Method_System_Collections_Generic_List<Rule>__ctor__);
  ppSVar15 = &(__this->fields).LJNCACBBIBD;
  *ppSVar15 = __this_06;
  thunk_FUN_01c20e04(ppSVar15,__this_06);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  ppFVar16 = &(__this->fields).HPKHMGLOLPJ;
  *ppFVar16 = (Fight_o *)0x0;
  thunk_FUN_01c20e04(ppFVar16,0);
  (__this->fields).JIKKMEONEDH = false;
  (__this->fields).CCMCDKDBNON = false;
  (__this->fields).MMCCGGNADOK = 1;
  (__this->fields).KOANEAEMOOP = 0;
  RulesInspector__GIENGNEGHPJ(__this,MHOFCOHFCGL,FBFPLEFCDOK,method);
  return;
}


// ===== public void PIFKCAHHGIO()  [RVA 0x34C07C4]
// RulesInspector$$PIFKCAHHGIO @ RVA 0x34C07C4

void RulesInspector__PIFKCAHHGIO(RulesInspector_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  Fight_o *__this_02;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568601 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    DAT_04568601 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).OIJDFMHDHHK;
  if (__this_01 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
      __this_00 = local_50.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
        return;
      }
      if ((Rule_o *)local_50.fields._current == (Rule_o *)0x0) break;
      if (((Rule_Fields *)((long)local_50.fields._current + 0x10))->
          _BDDBFNHFMBC_k__BackingField != false) {
        (*((Rule_c *)(local_50.fields._current)->klass)[1]._1.generic_class)
                  (local_50.fields._current,
                   ((Rule_c *)(local_50.fields._current)->klass)[1]._1.typeMetadataHandle);
        iVar2 = Rule__NHGGBEACKBD((Rule_o *)__this_00,(MethodInfo *)0x0);
        if (iVar2 == 6) {
          __this_02 = (__this->fields).HPKHMGLOLPJ;
          if (__this_02 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Fight__GHCGOFHFBGO(__this_02,0.0,(MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== protected void LMBIDDJLDDJ(InFightRule GOAHBPBJCKC)  [RVA 0x34C0964]
// RulesInspector$$LMBIDDJLDDJ @ RVA 0x34C0964

void RulesInspector__LMBIDDJLDDJ(RulesInspector_o *__this,InFightRule_o *GOAHBPBJCKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_CNIGOFCKBGI__o *pSVar2;
  
  if ((DAT_04568602 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_Remove__);
    DAT_04568602 = 1;
  }
  if (GOAHBPBJCKC != (InFightRule_o *)0x0) {
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,1,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).AJIJMKENBMO;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).CKMPEMHHNCI;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,5,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).FBHMGCAMFKN;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,4,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).PKMNBFPALAM;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,7,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).CFCENPHNNAB;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,8,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).EJPFDNLPLNG;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,6,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).JDILFKPDENK;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,9,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).JJNMICKPIFL;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,10,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).AJOJJAMODCB;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,0xb,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).ENDAHIICPMO;
      if (pSVar2 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035c0bbc;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
    }
    bVar1 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,0xc,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).LKNFJJLFJFD;
    if (pSVar2 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GOAHBPBJCKC,
                 Method_System_Collections_Generic_List<InFightRule>_Remove__);
      return;
    }
  }
LAB_035c0bbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void DBLLCDJCJIJ(RandomRule.GNLLDBAEBDI ACCIHBHMFPN)  [RVA 0x34BEC8C]
// RulesInspector$$DBLLCDJCJIJ @ RVA 0x34BEC8C

void RulesInspector__DBLLCDJCJIJ(RulesInspector_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568603 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    DAT_04568603 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).POPEMFAKCLL;
  if (__this_00 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
        return;
      }
      if ((RandomRule_o *)local_38.fields._current == (RandomRule_o *)0x0) break;
      if (((((RandomRule_Fields *)((long)local_38.fields._current + 0x10))->super).
           _BDDBFNHFMBC_k__BackingField != false) &&
         (((RandomRule_Fields *)((long)local_38.fields._current + 0x10))->EIMDJHJAHKK ==
          ACCIHBHMFPN)) {
        RandomRule__KACMDIEPEMF((RandomRule_o *)local_38.fields._current,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLLDBDDBAJG()  [RVA 0x34C0BC0]
// RulesInspector$$LLLDBDDBAJG @ RVA 0x34C0BC0

void RulesInspector__LLLDBDDBAJG(RulesInspector_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KMFIGBGAKNL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *x;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568604 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_11466/*"RulesInspector::checkButtonRules ERROR - gameController is NULL"*/);
    DAT_04568604 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo,method);
    DAT_04565c84 = '\x01';
  }
  x = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11466/*"RulesInspector::checkButtonRules ERROR - gameController is NULL"*/,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (__this->fields).BJCIIJEPGFL;
    if (__this_00 == (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<NoButtonRule>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_MoveNext__);
      if (!bVar1) break;
      if ((NoButtonRule_o *)local_38.fields._current == (NoButtonRule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((((NoButtonRule_Fields *)((long)local_38.fields._current + 0x10))->super).
          _BDDBFNHFMBC_k__BackingField != false) {
        RulesInspector__MBNDHAPLBCC
                  ((RulesInspector_o *)(ulong)bVar1,(NoButtonRule_o *)local_38.fields._current,method_00
                  );
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_Dispose__);
  }
  return;
}


// ===== public void NBFBDCDCFPP()  [RVA 0x34BF51C]
// RulesInspector$$NBFBDCDCFPP @ RVA 0x34BF51C

void RulesInspector__NBFBDCDCFPP(RulesInspector_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568605 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    DAT_04568605 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).EOFEIIFFHCN;
  if (pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).PFFILFBOODM;
    if (pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).OIJDFMHDHHK;
      if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_38,
                             Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__
                            );
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
            return;
          }
          if (local_38.fields._current == (Il2CppObject *)0x0) break;
          (*(local_38.fields._current)->klass->vtable[0x12].methodPtr)
                    (local_38.fields._current,(local_38.fields._current)->klass->vtable[0x12].method
                    );
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ItemRule> OKBOBNGCDOG()  [RVA 0x34C0F68]
// RulesInspector$$OKBOBNGCDOG @ RVA 0x34C0F68

System_Collections_Generic_List_JCHNBADDBGO__o *
RulesInspector__OKBOBNGCDOG(RulesInspector_o *__this,MethodInfo *method)

{
  return (__this->fields).FPKAGJKKCIN;
}


// ===== protected void JDMMBLAGLKD(InFightRule GOAHBPBJCKC)  [RVA 0x34BD354]
// RulesInspector$$JDMMBLAGLKD @ RVA 0x34BD354

void RulesInspector__JDMMBLAGLKD(RulesInspector_o *__this,InFightRule_o *GOAHBPBJCKC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_CNIGOFCKBGI__o *pSVar4;
  InFightRule_array *pCVar5;
  
  if ((DAT_04568606 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<InFightRule>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_Add__);
    DAT_04568606 = 1;
  }
  if (GOAHBPBJCKC == (InFightRule_o *)0x0) goto LAB_035bd958;
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,1,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).AJIJMKENBMO;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,2,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).CKMPEMHHNCI;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).FBHMGCAMFKN;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,4,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).PKMNBFPALAM;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,7,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).CFCENPHNNAB;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,8,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).EJPFDNLPLNG;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,6,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).JDILFKPDENK;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,9,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).JJNMICKPIFL;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,10,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).AJOJJAMODCB;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,0xb,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).ENDAHIICPMO;
    if (pSVar4 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035bd958;
    pCVar5 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pCVar5 == (InFightRule_array *)0x0) goto LAB_035bd958;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pCVar5->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar3 = InFightRule__AOJKGAKBCFK(GOAHBPBJCKC,0xc,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<InFightRule>_Add__;
  if (bVar3) {
    pSVar4 = (__this->fields).LKNFJJLFJFD;
    if (pSVar4 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
      pCVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pCVar5 != (InFightRule_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pCVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pCVar5->m_Items[(int)uVar1] = GOAHBPBJCKC;
          thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,GOAHBPBJCKC);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)GOAHBPBJCKC
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_035bd920;
      }
    }
LAB_035bd958:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035bd920:
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).OIJDFMHDHHK,
             (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<InFightRule>__);
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).LJNCACBBIBD,
             (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
  return;
}


// ===== protected void DMADJBBJLCA()  [RVA 0x34BEDF4]
// RulesInspector$$DMADJBBJLCA @ RVA 0x34BEDF4

void RulesInspector__DMADJBBJLCA(RulesInspector_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568607 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    DAT_04568607 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).POPEMFAKCLL;
  if (__this_00 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      if (*(char *)((long)&local_38.fields._current[3].monitor + 4) != '\0') {
        RulesInspector__ANCGCCEOBAA(__this,local_38.fields._current[5].monitor,false,in_x3);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void IHBHONOEBKF(object IMMNELPBGIF)  [RVA 0x34C15A8]
// RulesInspector$$IHBHONOEBKF @ RVA 0x34C15A8

void RulesInspector__IHBHONOEBKF(RulesInspector_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  MethodInfo *method_00;
  Fight_o *pFVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568608 & 1) == 0) {
    FUN_01bab630(&TacticRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    DAT_04568608 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).OIJDFMHDHHK;
  if (__this_01 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
      __this_00 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
        RulesInspector__ELANNLDAPMK(__this,3,method);
        RulesInspector__IGKMMHADIAK(__this,method_00);
        return;
      }
      if ((Rule_o *)local_60.fields._current == (Rule_o *)0x0) break;
      if (((Rule_Fields *)((long)local_60.fields._current + 0x10))->
          _BDDBFNHFMBC_k__BackingField != false) {
        method = *(MethodInfo **)
                  &((Rule_c *)(local_60.fields._current)->klass)[1]._1.this_arg.bits;
        (*((Rule_c *)(local_60.fields._current)->klass)[1]._1.this_arg.data)
                  (local_60.fields._current,IMMNELPBGIF);
        iVar3 = Rule__NHGGBEACKBD((Rule_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x13) {
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method = (MethodInfo *)0x0;
          Fight__HOCANPAALBC
                    (pFVar4,*(int32_t *)&((Rule_o *)((long)__this_00 + 0x58))->klass,
                     (MethodInfo *)0x0);
        }
        else if (iVar3 == 0x1e) {
          bVar1 = (TacticRule_TypeInfo->_2).naturalAligment;
          if (((((Rule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((Rule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TacticRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_00);
          }
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method = (MethodInfo *)0x0;
          Fight__JLANOIEIDGO
                    (pFVar4,(System_String_o *)
                            (((Rule_o *)((long)__this_00 + 0x58))->fields).LKKBHIEHNAM,
                     (MethodInfo *)0x0);
        }
        else if (iVar3 == 0x1f) {
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (pFVar4->fields).EPKNDHOGELF = true;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HLPNMHKHKOK()  [RVA 0x34BF6D4]
// RulesInspector$$HLPNMHKHKOK @ RVA 0x34BF6D4

void RulesInspector__HLPNMHKHKOK(RulesInspector_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  System_Collections_Generic_List_KMFIGBGAKNL__o *__this_01;
  System_Collections_Generic_List_JFAGMCHGOEH__o *__this_02;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_03;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_04;
  ulong uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_110;
  System_Collections_Generic_List_Enumerator_T__o local_f8;
  System_Collections_Generic_List_Enumerator_T__o local_e0;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568609 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RandomRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    DAT_04568609 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  local_e0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e0.fields._index = 0;
  local_e0.fields._version = 0;
  local_e0.fields._current = (Il2CppObject *)0x0;
  local_f8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OIJDFMHDHHK;
  if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_110,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    local_80.fields._index = local_110.fields._index;
    local_80.fields._version = local_110.fields._version;
    local_80.fields._list = local_110.fields._list;
    local_80.fields._current = local_110.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
      pIVar1 = local_80.fields._current;
      if (!bVar2) break;
      if ((Rule_o *)local_80.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Rule__OLKDJEKDIJB
                        ((Rule_o *)local_80.fields._current,(__this->fields).MMCCGGNADOK,
                         (MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = Rule__BNNIDPDMOIL((Rule_o *)pIVar1,(MethodInfo *)0x0);
        uVar3 = (ulong)bVar2;
      }
      else {
        uVar3 = 0;
      }
      (*(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.methodPtr)
                (pIVar1,uVar3,(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    __this_01 = (__this->fields).BJCIIJEPGFL;
    if (__this_01 != (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_110,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<NoButtonRule>_GetEnumerator__);
      local_a0.fields._index = local_110.fields._index;
      local_a0.fields._version = local_110.fields._version;
      local_a0.fields._list = local_110.fields._list;
      local_a0.fields._current = local_110.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_MoveNext__
                          );
        pIVar1 = local_a0.fields._current;
        if (!bVar2) break;
        if ((Rule_o *)local_a0.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = Rule__OLKDJEKDIJB
                          ((Rule_o *)local_a0.fields._current,(__this->fields).MMCCGGNADOK,
                           (MethodInfo *)0x0);
        if (bVar2) {
          bVar2 = Rule__BNNIDPDMOIL((Rule_o *)pIVar1,(MethodInfo *)0x0);
          uVar3 = (ulong)bVar2;
        }
        else {
          uVar3 = 0;
        }
        (*(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.methodPtr)
                  (pIVar1,uVar3,(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_Dispose__)
      ;
      __this_02 = (__this->fields).DABLKOLPECH;
      if (__this_02 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_110,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
        local_c0.fields._index = local_110.fields._index;
        local_c0.fields._version = local_110.fields._version;
        local_c0.fields._list = local_110.fields._list;
        local_c0.fields._current = local_110.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_c0,
                             Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__
                            );
          pIVar1 = local_c0.fields._current;
          if (!bVar2) break;
          if ((Rule_o *)local_c0.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = Rule__OLKDJEKDIJB
                            ((Rule_o *)local_c0.fields._current,(__this->fields).MMCCGGNADOK,
                             (MethodInfo *)0x0);
          if (bVar2) {
            bVar2 = Rule__BNNIDPDMOIL((Rule_o *)pIVar1,(MethodInfo *)0x0);
            uVar3 = (ulong)bVar2;
          }
          else {
            uVar3 = 0;
          }
          (*(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.methodPtr)
                    (pIVar1,uVar3,(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.method);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_c0,
                   Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
        __this_03 = (__this->fields).DKGFCNANCMN;
        if (__this_03 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_110,(System_Collections_Generic_List_object__o *)__this_03,
                     Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
          local_e0.fields._index = local_110.fields._index;
          local_e0.fields._version = local_110.fields._version;
          local_e0.fields._list = local_110.fields._list;
          local_e0.fields._current = local_110.fields._current;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_e0,
                               Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__
                              );
            pIVar1 = local_e0.fields._current;
            if (!bVar2) break;
            if ((Rule_o *)local_e0.fields._current == (Rule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = Rule__OLKDJEKDIJB
                              ((Rule_o *)local_e0.fields._current,
                               (__this->fields).MMCCGGNADOK,(MethodInfo *)0x0);
            if (bVar2) {
              bVar2 = Rule__BNNIDPDMOIL((Rule_o *)pIVar1,(MethodInfo *)0x0);
              uVar3 = (ulong)bVar2;
            }
            else {
              uVar3 = 0;
            }
            (*(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.methodPtr)
                      (pIVar1,uVar3,(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.method
                      );
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_e0,
                     Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
          __this_04 = (__this->fields).POPEMFAKCLL;
          if (__this_04 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_f8,(System_Collections_Generic_List_object__o *)__this_04,
                       Method_System_Collections_Generic_List<RandomRule>_GetEnumerator__);
            while( true ) {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_f8,
                                 Method_System_Collections_Generic_List_Enumerator<RandomRule>_MoveNext__
                                );
              pIVar1 = local_f8.fields._current;
              if (!bVar2) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_f8,
                           Method_System_Collections_Generic_List_Enumerator<RandomRule>_Dispose__)
                ;
                return;
              }
              if ((Rule_o *)local_f8.fields._current == (Rule_o *)0x0) break;
              bVar2 = Rule__OLKDJEKDIJB
                                ((Rule_o *)local_f8.fields._current,
                                 (__this->fields).MMCCGGNADOK,(MethodInfo *)0x0);
              if (bVar2) {
                bVar2 = Rule__BNNIDPDMOIL((Rule_o *)pIVar1,(MethodInfo *)0x0);
                uVar3 = (ulong)bVar2;
              }
              else {
                uVar3 = 0;
              }
              (*(((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.methodPtr)
                        (pIVar1,uVar3,
                         (((Rule_c *)pIVar1->klass)->vtable)._9_AFBEEALKOPE.method);
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void FPNABLENJEN(PerkRule GOAHBPBJCKC)  [RVA 0x34C1A38]
// RulesInspector$$FPNABLENJEN @ RVA 0x34C1A38

void RulesInspector__FPNABLENJEN(RulesInspector_o *__this,PerkRule_o *GOAHBPBJCKC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  PerkInfoItem_o *item;
  PerkInfoItem_array *pHVar6;
  int32_t local_24;
  
  if ((DAT_0456860a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Add__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11467/*"RulesInspector::putPerkFromRule ERROR - wrong rule appliance {0}"*/);
    DAT_0456860a = 1;
  }
  lVar4 = Method_System_Collections_Generic_List<PerkInfoItem>_Add__;
  if (GOAHBPBJCKC != (PerkRule_o *)0x0) {
    iVar1 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
    if (iVar1 == 2) {
      __this_00 = (__this->fields).PFFILFBOODM;
    }
    else {
      if (iVar1 != 1) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_24 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
        pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0
             )) {
            uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar5,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar3;
            thunk_FUN_01c20e04(args->m_Items,pIVar3);
                    /* try { // try from 035c1b90 to 036c1d13 has its CatchHandler @ 035c1b90
                       catch() { ... } // from try @ 035c1b90 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2000 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2054 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2128 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c2170 with catch @ 035c1b90
                       catch() { ... } // from try @ 035c21b0 with catch @ 035c1b90 */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_11467/*"RulesInspector::putPerkFromRule ERROR - wrong rule appliance {0}"*/,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_035c1be8;
      }
      __this_00 = (__this->fields).EOFEIIFFHCN;
    }
    if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      item = (GOAHBPBJCKC->fields).LENFGEAJDMN;
      pHVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pHVar6 != (PerkInfoItem_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pHVar6->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pHVar6->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
LAB_035c1be8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<PerkInfoItem> BEOOAEFAHCP()  [RVA 0x34C1BFC]
// RulesInspector$$BEOOAEFAHCP @ RVA 0x34C1BFC

System_Collections_Generic_List_HEFOANCOHDC__o *
RulesInspector__BEOOAEFAHCP(RulesInspector_o *__this,MethodInfo *method)

{
  return (__this->fields).EOFEIIFFHCN;
}


// ===== protected void FLOIKFAGLKM(List<RandomRule> GKIHMHOKFKN)  [RVA 0x34C1C04]
// RulesInspector$$FLOIKFAGLKM @ RVA 0x34C1C04

void RulesInspector__FLOIKFAGLKM
               (RulesInspector_o *__this,System_Collections_Generic_List_AGCDKMOOJGI__o *GKIHMHOKFKN,
               MethodInfo *method)

{
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  
  if ((DAT_0456860b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_AddRange__);
    DAT_0456860b = 1;
  }
  __this_00 = (__this->fields).POPEMFAKCLL;
  if (__this_00 != (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)GKIHMHOKFKN,
               Method_System_Collections_Generic_List<RandomRule>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BKBHKFCCKDO(OHFNEFFMKIA ELCBIMMGAFJ, HEDFKJBDBFN HEHMPFLAEGE, object IMMNELPBGIF)  [RVA 0x34C1C5C]
// RulesInspector$$BKBHKFCCKDO @ RVA 0x34C1C5C

void RulesInspector__BKBHKFCCKDO
               (RulesInspector_o *__this,int32_t ELCBIMMGAFJ,int32_t HEHMPFLAEGE,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  ulong uVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_CNIGOFCKBGI__o **ppSVar7;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  int32_t local_34;
  
  if ((DAT_0456860c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InFightRule>_TypeInfo);
    FUN_01bab630(&OHFNEFFMKIA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_5842/*"Error - RulesInspector::checkEvent - unknown event {0}"*/);
    DAT_0456860c = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 035c1d14 to 036c1d1b has its CatchHandler @ 035c214c */
  if ((__this->fields).JIKKMEONEDH == false) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InFightRule>_TypeInfo);
                    /* try { // try from 035c1d34 to 036c1d3b has its CatchHandler @ 035c2138 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<InFightRule>__ctor__);
                    /* try { // try from 035c1d48 to 036c1d4b has its CatchHandler @ 035c2148 */
  switch(ELCBIMMGAFJ) {
  case 1:
    __this_01 = (__this->fields).AJIJMKENBMO;
    RulesInspector__JHIKFGHPAOF(__this,method_00);
    goto LAB_035c1dc0;
  case 2:
    ppSVar7 = &(__this->fields).CKMPEMHHNCI;
    break;
  default:
                    /* try { // try from 035c1e7c to 036c1e83 has its CatchHandler @ 035c2028 */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* try { // try from 035c1e8c to 036c1e97 has its CatchHandler @ 035c2010 */
    local_34 = ELCBIMMGAFJ;
                    /* try { // try from 035c1e9c to 036c1eab has its CatchHandler @ 035c200c */
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(OHFNEFFMKIA_TypeInfo,&local_34);
    if (args != (System_Object_array *)0x0) {
                    /* try { // try from 035c1ebc to 036c1f47 has its CatchHandler @ 035c2008 */
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items,pIVar4);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_5842/*"Error - RulesInspector::checkEvent - unknown event {0}"*/,args,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    goto LAB_035c1f14;
  case 4:
    ppSVar7 = &(__this->fields).PKMNBFPALAM;
    break;
  case 5:
    ppSVar7 = &(__this->fields).FBHMGCAMFKN;
    break;
  case 6:
    ppSVar7 = &(__this->fields).JDILFKPDENK;
    break;
  case 7:
    ppSVar7 = &(__this->fields).CFCENPHNNAB;
                    /* try { // try from 035c1d84 to 036c1dab has its CatchHandler @ 035c2030 */
    break;
  case 8:
    ppSVar7 = &(__this->fields).EJPFDNLPLNG;
    break;
  case 9:
  case 0xd:
    ppSVar7 = &(__this->fields).JJNMICKPIFL;
    break;
  case 10:
    ppSVar7 = &(__this->fields).AJOJJAMODCB;
    break;
  case 0xb:
    ppSVar7 = &(__this->fields).ENDAHIICPMO;
    break;
  case 0xc:
    ppSVar7 = &(__this->fields).LKNFJJLFJFD;
  }
  __this_01 = *ppSVar7;
LAB_035c1dc0:
  if (__this_01 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
                    /* try { // try from 035c1de0 to 036c1e0b has its CatchHandler @ 035c202c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
      pIVar4 = local_58.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
                    /* try { // try from 035c1e60 to 036c1e67 has its CatchHandler @ 035c2020 */
                    /* try { // try from 035c1e70 to 036c1e77 has its CatchHandler @ 035c2024 */
        return;
      }
      if ((InFightRule_o *)local_58.fields._current == (InFightRule_o *)0x0) break;
      if (((((InFightRule_Fields *)((long)local_58.fields._current + 0x10))->super).
           _BDDBFNHFMBC_k__BackingField != false) &&
         (((iVar1 = ((InFightRule_Fields *)((long)local_58.fields._current + 0x10))->JGJNBILDCHK,
           iVar1 == HEHMPFLAEGE || (HEHMPFLAEGE == 3)) || (iVar1 == 3)))) {
        method_01 = (((InFightRule_c *)(local_58.fields._current)->klass)->vtable)._10_DGCODECJJCC.
                    method;
        uVar3 = (*(((InFightRule_c *)(local_58.fields._current)->klass)->vtable)._10_DGCODECJJCC.
                  methodPtr)(local_58.fields._current,IMMNELPBGIF);
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 035c1e48 to 036c1e4f has its CatchHandler @ 035c201c */
          RulesInspector__MPKILCKIELF(__this,(InFightRule_o *)pIVar4,method_01);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035c1f14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<NoPerksRule> EBBCPALFLHB()  [RVA 0x34C2694]
// RulesInspector$$EBBCPALFLHB @ RVA 0x34C2694

System_Collections_Generic_List_CCAEOJMALLA__o *
RulesInspector__EBBCPALFLHB(RulesInspector_o *__this,MethodInfo *method)

{
  return (__this->fields).JJPFOPGHLOD;
}


// ===== public void MBNDHAPLBCC(NoButtonRule GOAHBPBJCKC)  [RVA 0x34C0DC8]
// RulesInspector$$MBNDHAPLBCC @ RVA 0x34C0DC8

void RulesInspector__MBNDHAPLBCC(RulesInspector_o *__this,NoButtonRule_o *GOAHBPBJCKC,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar1;
  
  if (GOAHBPBJCKC != (NoButtonRule_o *)0x0) {
    switch((GOAHBPBJCKC->fields).NDDGEANDADE) {
    case 0:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (RulesInspector_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsPunchEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 1:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (RulesInspector_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsKickEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 2:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (RulesInspector_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsRangedEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 3:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (RulesInspector_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsMagicEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    case 4:
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar1 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      __this = (RulesInspector_o *)0x0;
      if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_GameController__set_IsRaidChargeEnabled
                  (pNVar1,false,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== protected void FPCMFPEOABH(int PKLFFPEBBDA)  [RVA 0x34C269C]
// RulesInspector$$FPCMFPEOABH @ RVA 0x34C269C

void RulesInspector__FPCMFPEOABH(RulesInspector_o *__this,int32_t PKLFFPEBBDA,MethodInfo *method)

{
  (__this->fields).KOANEAEMOOP = PKLFFPEBBDA;
  return;
}


// ===== public void NBAKIBEGKDJ(ModelParameters NDOMOKBINFD, List<NoPerksRule> MGOIJOLLNEG)  [RVA 0x34C26A4]
// RulesInspector$$NBAKIBEGKDJ @ RVA 0x34C26A4

void RulesInspector__NBAKIBEGKDJ
               (RulesInspector_o *__this,ModelParameters_o *NDOMOKBINFD,
               System_Collections_Generic_List_CCAEOJMALLA__o *MGOIJOLLNEG,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppClass *item;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456860d & 1) == 0) {
                    /* try { // try from 035c26d0 to 036c26df has its CatchHandler @ 035c2820 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoPerksRule>_Dispose__);
                    /* try { // try from 035c26e0 to 036c2807 has its CatchHandler @ 035c2390 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoPerksRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoPerksRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoPerksRule>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11465/*"RulesInspector::applyNoPerksRules ERROR - modelParameters is NULL"*/);
    DAT_0456860d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD == (ModelParameters_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11465/*"RulesInspector::applyNoPerksRules ERROR - modelParameters is NULL"*/,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (NDOMOKBINFD->fields).NJDOELJOLLB;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (MGOIJOLLNEG != (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)MGOIJOLLNEG,
                 Method_System_Collections_Generic_List<NoPerksRule>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<NoPerksRule>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        if (!bVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2674 with catch @ 035c2828
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2618 with catch @ 035c282c
                        */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<NoPerksRule>_Dispose__);
                    /* try { // try from 035c2844 to 036c2847 has its CatchHandler @ 035c2858 */
          ModelParameters__PBNHNHLEPEJ
                    (NDOMOKBINFD,(NDOMOKBINFD->fields).INGEFFGPJPB,(NDOMOKBINFD->fields).NJDOELJOLLB
                     ,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c2844 with catch @ 035c2858 */
          return;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035c2860 to 036c28c7 has its CatchHandler @ 035c28dc */
          FUN_01bab8c8();
        }
        pSVar4 = (NDOMOKBINFD->fields).NJDOELJOLLB;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_50.fields._current[7].klass;
        pSVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pSVar5 == (System_String_array *)0x0) break;
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = (System_String_o *)item;
                    /* try { // try from 035c2808 to 036c280b has its CatchHandler @ 035c2824 */
                    /* try { // try from 035c280c to 036c280f has its CatchHandler @ 035c2390 */
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1);
                    /* try { // try from 035c2810 to 036c2813 has its CatchHandler @ 035c281c */
        }
        else {
                    /* try { // try from 035c2814 to 036c2843 has its CatchHandler @ 035c2390 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2810 with catch @ 035c281c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c26d0 with catch @ 035c2820
                        */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2808 with catch @ 035c2824
                        */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NLIEEJMHDKF(Rule KEFILECBPMF)  [RVA 0x34C2908]
// RulesInspector$$NLIEEJMHDKF @ RVA 0x34C2908

void RulesInspector__NLIEEJMHDKF(RulesInspector_o *__this,Rule_o *KEFILECBPMF,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  bool GKAFKJNCMFJ;
  MethodInfo_26E62D4 *method_00;
  MethodInfo *in_x3;
  undefined8 *puVar4;
  
  if ((DAT_045685fc & 1) == 0) {
    FUN_01bab630(&InFightRule_TypeInfo);
    FUN_01bab630(&ECGPIFIJMFF_TypeInfo);
    FUN_01bab630(&EFNDJJDBNFN_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&JFAGMCHGOEH_TypeInfo);
    FUN_01bab630(&NoButtonRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>_Remove__);
    FUN_01bab630(&ONMBPNGKBBO_TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_045685fc = 1;
  }
  if (KEFILECBPMF == (Rule_o *)0x0) goto LAB_035be5ac;
  iVar2 = Rule__NHGGBEACKBD(KEFILECBPMF,(MethodInfo *)0x0);
  switch(iVar2) {
  case 0:
  case 1:
  case 2:
    pSVar3 = (__this->fields).DKGFCNANCMN;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035be5b0;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)KEFILECBPMF,
               Method_System_Collections_Generic_List<ItemRule>_Remove__);
    pSVar3 = (__this->fields).LNHNEEKANMO;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035be5b0;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)KEFILECBPMF,
               Method_System_Collections_Generic_List<ItemRule>_Remove__);
    pSVar3 = (__this->fields).FPKAGJKKCIN;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       (method_00 = Method_System_Collections_Generic_List<ItemRule>_Remove__,
       (KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035be5b0;
    goto LAB_035be538;
  case 3:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).BJCIIJEPGFL;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (NoButtonRule_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)NoButtonRule_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<NoButtonRule>_Remove__;
    break;
  case 4:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).DABLKOLPECH;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (JFAGMCHGOEH_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JFAGMCHGOEH_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<JFAGMCHGOEH>_Remove__;
    break;
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x22:
  case 0x24:
  case 0x28:
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)InFightRule_TypeInfo)) goto LAB_035be5b0;
    GKAFKJNCMFJ = false;
    goto LAB_035be274;
  case 6:
  case 0x12:
  case 0x1f:
  case 0x20:
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)InFightRule_TypeInfo)) goto LAB_035be5b0;
    GKAFKJNCMFJ = true;
LAB_035be274:
    RulesInspector__DNKKBDLAGHG(__this,(InFightRule_o *)KEFILECBPMF,GKAFKJNCMFJ,in_x3);
  default:
    goto switchD_035be238_caseD_15;
  case 0x16:
    bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (KEFILECBPMF->klass->_2).naturalAligment) &&
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)PNEKMHMACLG_TypeInfo)) {
      RulesInspector__ACOIAOCFPKA(__this,(PNEKMHMACLG_o *)KEFILECBPMF,method);
      return;
    }
LAB_035be5b0:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(KEFILECBPMF);
  case 0x1d:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).DCJDAHONBJI;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ECGPIFIJMFF_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ECGPIFIJMFF_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<ECGPIFIJMFF>_Remove__;
    break;
  case 0x26:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).BMHBDANJFFJ;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (EFNDJJDBNFN_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)EFNDJJDBNFN_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<EFNDJJDBNFN>_Remove__;
    break;
  case 0x27:
    pSVar3 = (System_Collections_Generic_List_JCHNBADDBGO__o *)(__this->fields).DPAPFKANFNK;
    if (pSVar3 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) goto LAB_035be5ac;
    bVar1 = (ONMBPNGKBBO_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ONMBPNGKBBO_TypeInfo)) goto LAB_035be5b0;
    puVar4 = &Method_System_Collections_Generic_List<ONMBPNGKBBO>_Remove__;
    break;
  case 0x29:
    bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
    if (((KEFILECBPMF->klass->_2).naturalAligment < bVar1) ||
       ((KEFILECBPMF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_035be5b0;
    RulesInspector__ACOIAOCFPKA(__this,(PNEKMHMACLG_o *)KEFILECBPMF,method);
    goto switchD_035be238_caseD_15;
  }
  method_00 = (MethodInfo_26E62D4 *)*puVar4;
LAB_035be538:
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)KEFILECBPMF,
             method_00);
switchD_035be238_caseD_15:
  __this_00 = (__this->fields).LJNCACBBIBD;
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)KEFILECBPMF,
               Method_System_Collections_Generic_List<Rule>_Remove__);
    return;
  }
LAB_035be5ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ(Fight MHOFCOHFCGL, FightList FBFPLEFCDOK)  [RVA 0x34C063C]
// RulesInspector$$GIENGNEGHPJ @ RVA 0x34C063C

void RulesInspector__GIENGNEGHPJ
               (RulesInspector_o *__this,Fight_o *MHOFCOHFCGL,FightList_o *FBFPLEFCDOK,
               MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  PAMEPBLOLPB_o *pPVar3;
  Fight_o **ppFVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456860e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    DAT_0456860e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  ppFVar4 = &(__this->fields).HPKHMGLOLPJ;
  *ppFVar4 = MHOFCOHFCGL;
  thunk_FUN_01c20e04(ppFVar4,MHOFCOHFCGL);
  (__this->fields).JIKKMEONEDH = false;
  if (FBFPLEFCDOK != (FightList_o *)0x0) {
    pPVar3 = (FBFPLEFCDOK->fields).JPBIBBBMCCD;
    if ((pPVar3 != (PAMEPBLOLPB_o *)0x0) && ((pPVar3->fields).DCNLAEJAKIE != false)) {
      iVar1 = (pPVar3->fields).KOANEAEMOOP;
      (__this->fields).CCMCDKDBNON = true;
      (__this->fields).KOANEAEMOOP = iVar1;
    }
    __this_00 = FightList__HKNMJCKPHHC(FBFPLEFCDOK,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                               ), bVar2) {
        RulesInspector__ANCGCCEOBAA(__this,(Rule_o *)local_48.fields._current,false,method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void JAFLDLGLANF()  [RVA 0x34BFD88]
// RulesInspector$$JAFLDLGLANF @ RVA 0x34BFD88

void RulesInspector__JAFLDLGLANF(RulesInspector_o *__this,MethodInfo *method)

{
  uint length;
  byte bVar1;
  Il2CppObject *GOAHBPBJCKC;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456860f & 1) == 0) {
    FUN_01bab630(&NoPerksRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&PerkRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    DAT_0456860f = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).EOFEIIFFHCN;
  if (pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).PFFILFBOODM;
    if (pSVar4 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      length = (pSVar4->fields)._size;
      method_00 = (MethodInfo *)(ulong)length;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).LJNCACBBIBD;
      if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                            );
          GOAHBPBJCKC = local_60.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
            return;
          }
          if ((NoPerksRule_o *)local_60.fields._current == (NoPerksRule_o *)0x0) break;
          if ((((NoPerksRule_Fields *)((long)local_60.fields._current + 0x10))->super).super.
              _BDDBFNHFMBC_k__BackingField != false) {
            iVar3 = Rule__NHGGBEACKBD
                              ((Rule_o *)local_60.fields._current,(MethodInfo *)0x0);
            if (iVar3 == 0x18) {
              bVar1 = (PerkRule_TypeInfo->_2).naturalAligment;
              if (((((NoPerksRule_c *)GOAHBPBJCKC->klass)->_2).naturalAligment < bVar1) ||
                 ((((NoPerksRule_c *)GOAHBPBJCKC->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)PerkRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(GOAHBPBJCKC);
              }
              RulesInspector__FPNABLENJEN(__this,(PerkRule_o *)GOAHBPBJCKC,method_00);
            }
            else {
              iVar3 = Rule__NHGGBEACKBD((Rule_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
              if (iVar3 == 0x19) {
                bVar1 = (NoPerksRule_TypeInfo->_2).naturalAligment;
                if (((((NoPerksRule_c *)GOAHBPBJCKC->klass)->_2).naturalAligment < bVar1) ||
                   ((((NoPerksRule_c *)GOAHBPBJCKC->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)NoPerksRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(GOAHBPBJCKC);
                }
                RulesInspector__MAHDPEFBCOJ(__this,(NoPerksRule_o *)GOAHBPBJCKC,method_00);
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void IHMCGLPINDP(List<JFAGMCHGOEH> IHBIFBPJFCL)  [RVA 0x34C2B60]
// RulesInspector$$IHMCGLPINDP @ RVA 0x34C2B60

void RulesInspector__IHMCGLPINDP
               (RulesInspector_o *__this,System_Collections_Generic_List_JFAGMCHGOEH__o *IHBIFBPJFCL,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_JFAGMCHGOEH__o *pSVar4;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  Rule_array *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2ac0 with catch @ 035c2b60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2aac with catch @ 035c2b6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2a90 with catch @ 035c2b70
                        */
  if ((DAT_04568610 & 1) == 0) {
                    /* try { // try from 035c2b88 to 036c2b8b has its CatchHandler @ 035c2bac */
                    /* try { // try from 035c2b8c to 036c2bb3 has its CatchHandler @ 035c28e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_get_Current__);
                    /* catch() { ... } // from try @ 035c2b88 with catch @ 035c2bac */
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_AddRange__);
                    /* try { // try from 035c2bb4 to 036c2bbb has its CatchHandler @ 035c2bd0 */
                    /* try { // try from 035c2bbc to 036c2bc7 has its CatchHandler @ 035c28e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Add__);
                    /* try { // try from 035c2bc8 to 036c2bcf has its CatchHandler @ 035c2bd0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c2bb4 with catch @ 035c2bd0
                       catch(type#2 @ 00000000) { ... } // from try @ 035c2bc8 with catch @ 035c2bd0
                        */
    DAT_04568610 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).DABLKOLPECH;
  if (pSVar4 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)IHBIFBPJFCL,
               Method_System_Collections_Generic_List<JFAGMCHGOEH>_AddRange__);
    pSVar4 = (__this->fields).DABLKOLPECH;
    if (pSVar4 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<Rule>_Add__;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
          return;
        }
        __this_00 = (__this->fields).LJNCACBBIBD;
        if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) break;
        pAVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pAVar5 == (Rule_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pAVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pAVar5->m_Items[(int)uVar1] = (Rule_o *)local_48.fields._current;
          thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,local_48.fields._current
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void AIGBLKJEMNA(PNEKMHMACLG GOAHBPBJCKC)  [RVA 0x34C2D44]
// RulesInspector$$AIGBLKJEMNA @ RVA 0x34C2D44

void RulesInspector__AIGBLKJEMNA(RulesInspector_o *__this,PNEKMHMACLG_o *GOAHBPBJCKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568611 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    DAT_04568611 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((GOAHBPBJCKC != (PNEKMHMACLG_o *)0x0) &&
     (__this_00 = (GOAHBPBJCKC->fields).LJNCACBBIBD,
     __this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                             ), bVar1) {
      RulesInspector__ANCGCCEOBAA(__this,(Rule_o *)local_48.fields._current,false,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).LJNCACBBIBD,
               (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void NCAGMLCJACN(bool CJNHFNHJHPE)  [RVA 0x34C2EBC]
// RulesInspector$$NCAGMLCJACN @ RVA 0x34C2EBC

void RulesInspector__NCAGMLCJACN(RulesInspector_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CCMCDKDBNON = CJNHFNHJHPE;
  return;
}


// ===== public List<ItemRule> CCDEMMEAGAF()  [RVA 0x34C2EC8]
// RulesInspector$$CCDEMMEAGAF @ RVA 0x34C2EC8

System_Collections_Generic_List_JCHNBADDBGO__o *
RulesInspector__CCDEMMEAGAF(RulesInspector_o *__this,MethodInfo *method)

{
  return (__this->fields).LNHNEEKANMO;
}


// ===== protected void MPKILCKIELF(InFightRule GOAHBPBJCKC)  [RVA 0x34C23B8]
// RulesInspector$$MPKILCKIELF @ RVA 0x34C23B8

void RulesInspector__MPKILCKIELF(RulesInspector_o *__this,InFightRule_o *GOAHBPBJCKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Fight_o *pFVar4;
  float fVar5;
  
  if ((DAT_04568612 & 1) == 0) {
    FUN_01bab630(&RandomAreaRule_TypeInfo);
    FUN_01bab630(&LifeStealRule_TypeInfo);
    FUN_01bab630(&RegenerationRule_TypeInfo);
    FUN_01bab630(&PointsRule_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04568612 = 1;
  }
  if (GOAHBPBJCKC == (InFightRule_o *)0x0) goto LAB_035c2690;
  iVar3 = Rule__NHGGBEACKBD((Rule_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
  switch(iVar3) {
  case 5:
  case 7:
    if ((GOAHBPBJCKC->fields).EJNOHBNPCGC != false) {
      pFVar4 = (__this->fields).HPKHMGLOLPJ;
      if (pFVar4 == (Fight_o *)0x0) goto LAB_035c2690;
      Fight__AGEFBLEDMBG(pFVar4,(GOAHBPBJCKC->fields).JGJNBILDCHK,(MethodInfo *)0x0);
    }
    break;
  case 6:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
    goto switchD_035c244c_caseD_6;
  case 8:
  case 0x11:
    break;
  case 9:
    bVar1 = (RegenerationRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)RegenerationRule_TypeInfo)) {
LAB_035c2684:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(GOAHBPBJCKC);
    }
    fVar5 = *(float *)((long)&GOAHBPBJCKC[1].klass + 4);
    goto LAB_035c251c;
  case 0xd:
  case 0x10:
    RulesInspector__ELANNLDAPMK(__this,(GOAHBPBJCKC->fields).JGJNBILDCHK,method);
    return;
  case 0xe:
    bVar1 = (LifeStealRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)LifeStealRule_TypeInfo)) goto LAB_035c2684;
    fVar5 = *(float *)&GOAHBPBJCKC[1].klass;
LAB_035c251c:
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = GameUtils__PCJHAMFGJLP((MethodInfo *)0x0);
    pFVar4 = (__this->fields).HPKHMGLOLPJ;
    if (pFVar4 == (Fight_o *)0x0) goto LAB_035c2690;
    bVar2 = Fight__IKKHECKCEJC
                      (pFVar4,(GOAHBPBJCKC->fields).JGJNBILDCHK,fVar5 / (float)iVar3,
                       (MethodInfo *)0x0);
    if (!bVar2) {
switchD_035c244c_caseD_6:
      return;
    }
    break;
  case 0x12:
    bVar1 = (PointsRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)PointsRule_TypeInfo)) goto LAB_035c2684;
    pFVar4 = (__this->fields).HPKHMGLOLPJ;
    if (pFVar4 == (Fight_o *)0x0) goto LAB_035c2690;
    Fight__ECIPOHEPGDC
              (pFVar4,*(int32_t *)((long)&GOAHBPBJCKC[1].klass + 4),
               *(int32_t *)&GOAHBPBJCKC[1].monitor,(MethodInfo *)0x0);
    bVar1 = (PointsRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)PointsRule_TypeInfo)) goto LAB_035c2684;
    if (*(char *)&GOAHBPBJCKC[1].fields.super.super.GMPFJFBFHCH == '\0') {
      return;
    }
    break;
  default:
    if (2 < iVar3 - 0x1aU) {
      if (iVar3 != 0x20) {
        return;
      }
      bVar1 = (RandomAreaRule_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) {
                    /* try { // try from 035c2618 to 036c263f has its CatchHandler @ 035c282c */
        pFVar4 = (__this->fields).HPKHMGLOLPJ;
        if ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)RandomAreaRule_TypeInfo) {
          GOAHBPBJCKC = (InFightRule_o *)0x0;
        }
        if ((pFVar4 != (Fight_o *)0x0) &&
           ((RandomAreaRule_o *)GOAHBPBJCKC != (RandomAreaRule_o *)0x0)) {
          RandomAreaRule__GEJLNIHIFPC
                    ((RandomAreaRule_o *)GOAHBPBJCKC,(pFVar4->fields).LAMENNMGPBN,(MethodInfo *)0x0);
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 != (Fight_o *)0x0) {
            RandomAreaRule__GEJLNIHIFPC
                      ((RandomAreaRule_o *)GOAHBPBJCKC,(pFVar4->fields).CLEKIBBCAOJ,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_035c2690;
    }
  }
  pFVar4 = (__this->fields).HPKHMGLOLPJ;
  if (pFVar4 != (Fight_o *)0x0) {
                    /* try { // try from 035c2674 to 036c269f has its CatchHandler @ 035c2828 */
    Fight__CJLHJNADPAN(pFVar4,GOAHBPBJCKC,(MethodInfo *)0x0);
    return;
  }
LAB_035c2690:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void IGGBDADJOJA(List<ItemRule> HNHFCBOGGAO)  [RVA 0x34C2ED0]
// RulesInspector$$IGGBDADJOJA @ RVA 0x34C2ED0

void RulesInspector__IGGBDADJOJA
               (RulesInspector_o *__this,System_Collections_Generic_List_JCHNBADDBGO__o *HNHFCBOGGAO,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar4;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  Rule_array *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568613 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
                    /* try { // try from 035c2f00 to 036c2fcb has its CatchHandler @ 035c2f00
                       catch() { ... } // from try @ 035c2f00 with catch @ 035c2f00
                       catch() { ... } // from try @ 035c30d8 with catch @ 035c2f00
                       catch() { ... } // from try @ 035c317c with catch @ 035c2f00
                       catch() { ... } // from try @ 035c3184 with catch @ 035c2f00
                       catch() { ... } // from try @ 035c3248 with catch @ 035c2f00 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    DAT_04568613 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).DKGFCNANCMN;
  if (pSVar4 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)HNHFCBOGGAO,
               Method_System_Collections_Generic_List<ItemRule>_AddRange__);
    pSVar4 = (__this->fields).DKGFCNANCMN;
    if (pSVar4 != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<Rule>_Add__;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
                    /* try { // try from 035c3028 to 036c3053 has its CatchHandler @ 035c31ac */
          return;
        }
        __this_00 = (__this->fields).LJNCACBBIBD;
        if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) break;
        pAVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* try { // try from 035c2fcc to 036c2ff3 has its CatchHandler @ 035c31b0 */
        if (pAVar5 == (Rule_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pAVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pAVar5->m_Items[(int)uVar1] = (Rule_o *)local_48.fields._current;
          thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,local_48.fields._current
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ItemRule> ELDMNCEODJL()  [RVA 0x34C30B4]
// RulesInspector$$ELDMNCEODJL @ RVA 0x34C30B4

System_Collections_Generic_List_JCHNBADDBGO__o *
RulesInspector__ELDMNCEODJL(RulesInspector_o *__this,MethodInfo *method)

{
                    /* try { // try from 035c30b8 to 036c30c3 has its CatchHandler @ 035c31a0 */
  return (__this->fields).DKGFCNANCMN;
}


// ===== protected void ANCGCCEOBAA(Rule GOAHBPBJCKC, bool NJDMEGOFJFO = False)  [RVA 0x34C0F70]
// RulesInspector$$ANCGCCEOBAA @ RVA 0x34C0F70

void RulesInspector__ANCGCCEOBAA
               (RulesInspector_o *__this,Rule_o *GOAHBPBJCKC,bool NJDMEGOFJFO,MethodInfo *method
               )

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_AGCDKMOOJGI__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  long lVar7;
  undefined8 uVar8;
  MethodInfo *pMVar9;
  RandomRule_array *pAVar10;
  long *plVar11;
  int32_t local_24;
  
  pMVar9 = (MethodInfo *)(ulong)NJDMEGOFJFO;
  if ((DAT_04568614 & 1) == 0) {
    FUN_01bab630(&RandomRule_TypeInfo);
    FUN_01bab630(&InFightRule_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECGPIFIJMFF_TypeInfo);
    FUN_01bab630(&EFNDJJDBNFN_TypeInfo);
    FUN_01bab630(&HIJGJNFACPG_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&JFAGMCHGOEH_TypeInfo);
    FUN_01bab630(&NoButtonRule_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ONMBPNGKBBO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFNDJJDBNFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RandomRule>_Add__);
    FUN_01bab630(&Rule_NJHOEHEJNPH_TypeInfo);
    FUN_01bab630(&ONMBPNGKBBO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    FUN_01bab630(&StringLiteral_11468/*"RulesInspector::putRule ERROR - wrong rule type {0}"*/);
    DAT_04568614 = 1;
  }
  if (GOAHBPBJCKC == (Rule_o *)0x0) goto LAB_035c1594;
  iVar4 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  switch(iVar4) {
  case 0:
  case 1:
  case 2:
    bVar1 = (ItemRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ItemRule_TypeInfo)) goto LAB_035c158c;
    RulesInspector__IEPLAMBNBJN(__this,(ItemRule_o *)GOAHBPBJCKC,pMVar9);
    goto LAB_035c1548;
  case 3:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).BJCIIJEPGFL;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (NoButtonRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)NoButtonRule_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<NoButtonRule>_Add__;
    break;
  case 4:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).DABLKOLPECH;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (JFAGMCHGOEH_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JFAGMCHGOEH_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<JFAGMCHGOEH>_Add__;
    break;
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x22:
  case 0x24:
  case 0x28:
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)InFightRule_TypeInfo)) {
      RulesInspector__CPOOGAMMCEB(__this,(InFightRule_o *)GOAHBPBJCKC,false,method);
      return;
    }
    goto LAB_035c158c;
  case 6:
  case 0x12:
  case 0x2a:
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)InFightRule_TypeInfo)) {
      RulesInspector__JDMMBLAGLKD(__this,(InFightRule_o *)GOAHBPBJCKC,pMVar9);
      return;
    }
    goto LAB_035c158c;
  case 0x15:
    __this_00 = (__this->fields).POPEMFAKCLL;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (RandomRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)RandomRule_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<RandomRule>_Add__;
    break;
  case 0x16:
    bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (GOAHBPBJCKC->klass->_2).naturalAligment) &&
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)PNEKMHMACLG_TypeInfo)) {
      RulesInspector__AIGBLKJEMNA(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,pMVar9);
      return;
    }
LAB_035c158c:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(GOAHBPBJCKC);
  case 0x17:
  case 0x21:
  case 0x23:
  case 0x25:
    goto switchD_035c10cc_caseD_17;
  case 0x1d:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).DCJDAHONBJI;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (ECGPIFIJMFF_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ECGPIFIJMFF_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<ECGPIFIJMFF>_Add__;
    break;
  case 0x1f:
  case 0x20:
    bVar1 = (InFightRule_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)InFightRule_TypeInfo)) goto LAB_035c158c;
    RulesInspector__JDMMBLAGLKD(__this,(InFightRule_o *)GOAHBPBJCKC,pMVar9);
    goto LAB_035c1548;
  case 0x26:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).BMHBDANJFFJ;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (EFNDJJDBNFN_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)EFNDJJDBNFN_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<EFNDJJDBNFN>_Add__;
    break;
  case 0x27:
    __this_00 = (System_Collections_Generic_List_AGCDKMOOJGI__o *)(__this->fields).DPAPFKANFNK;
    if (__this_00 == (System_Collections_Generic_List_AGCDKMOOJGI__o *)0x0) goto LAB_035c1594;
    bVar1 = (ONMBPNGKBBO_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)ONMBPNGKBBO_TypeInfo)) goto LAB_035c158c;
    plVar11 = &Method_System_Collections_Generic_List<ONMBPNGKBBO>_Add__;
    break;
  case 0x29:
    bVar1 = (HIJGJNFACPG_TypeInfo->_2).naturalAligment;
    if (((GOAHBPBJCKC->klass->_2).naturalAligment < bVar1) ||
       ((GOAHBPBJCKC->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HIJGJNFACPG_TypeInfo)) goto LAB_035c158c;
    pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar5 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_035c1594;
    pMVar9 = (MethodInfo *)0x0;
    bVar3 = HIJGJNFACPG__DGCODECJJCC
                      ((HIJGJNFACPG_o *)GOAHBPBJCKC,(pNVar5->fields).QuestParameters,
                       (MethodInfo *)0x0);
    if (!bVar3) {
      *(undefined1 *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH = 0;
      return;
    }
    *(undefined1 *)&GOAHBPBJCKC[1].fields.super.GMPFJFBFHCH = 1;
    RulesInspector__AIGBLKJEMNA(__this,(PNEKMHMACLG_o *)GOAHBPBJCKC,pMVar9);
    goto LAB_035c1548;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
    pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(Rule_NJHOEHEJNPH_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) goto LAB_035c1594;
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class), lVar7 == 0)) {
      uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar8,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar6;
    thunk_FUN_01c20e04(args->m_Items,pIVar6);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_11468/*"RulesInspector::putRule ERROR - wrong rule type {0}"*/,args,(MethodInfo *)0x0);
    goto LAB_035c1548;
  }
  pAVar10 = (__this_00->fields)._items;
  lVar7 = *plVar11;
  (__this_00->fields)._version = (__this_00->fields)._version + 1;
  if (pAVar10 == (RandomRule_array *)0x0) {
LAB_035c1594:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (__this_00->fields)._size;
  if (uVar2 < (uint)pAVar10->max_length) {
    (__this_00->fields)._size = uVar2 + 1;
    pAVar10->m_Items[(int)uVar2] = (RandomRule_o *)GOAHBPBJCKC;
    thunk_FUN_01c20e04(pAVar10->m_Items + (int)uVar2,GOAHBPBJCKC);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)GOAHBPBJCKC,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
LAB_035c1548:
  iVar4 = Rule__NHGGBEACKBD(GOAHBPBJCKC,(MethodInfo *)0x0);
  if (iVar4 != 0x15) {
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).LJNCACBBIBD,
               (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<Rule>__);
  }
switchD_035c10cc_caseD_17:
  return;
}


// ===== public List<NoPerksRule> OKANMALKEGD()  [RVA 0x34C30BC]
// RulesInspector$$OKANMALKEGD @ RVA 0x34C30BC

System_Collections_Generic_List_CCAEOJMALLA__o *
RulesInspector__OKANMALKEGD(RulesInspector_o *__this,MethodInfo *method)

{
  return (__this->fields).OHDBJEGKGLL;
}


// ===== protected void DNKKBDLAGHG(InFightRule GOAHBPBJCKC, bool GKAFKJNCMFJ = False)  [RVA 0x34BE730]
// RulesInspector$$DNKKBDLAGHG @ RVA 0x34BE730

void RulesInspector__DNKKBDLAGHG
               (RulesInspector_o *__this,InFightRule_o *GOAHBPBJCKC,bool GKAFKJNCMFJ,MethodInfo *method
               )

{
  System_Collections_Generic_List_CNIGOFCKBGI__o *pSVar1;
  InFightRule_o *pCVar2;
  MethodInfo *pMVar3;
  int iVar4;
  
  if ((DAT_04568615 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_get_Item__);
    DAT_04568615 = 1;
  }
  if (!GKAFKJNCMFJ) {
    if (GOAHBPBJCKC == (InFightRule_o *)0x0) goto LAB_035be8a4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035be6fc with catch @ 035be79c
                        */
    if ((GOAHBPBJCKC->fields).JGJNBILDCHK == 3) {
      pSVar1 = (__this->fields).OIJDFMHDHHK;
      if (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
        iVar4 = 0;
        do {
          while( true ) {
                    /* try { // try from 035be7b4 to 036be7cb has its CatchHandler @ 035be890 */
            if ((pSVar1->fields)._size <= iVar4) {
              return;
            }
            pCVar2 = (InFightRule_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                                Method_System_Collections_Generic_List<InFightRule>_get_Item__);
                    /* try { // try from 035be7cc to 036be87f has its CatchHandler @ 035be6a8 */
            if (pCVar2 == (InFightRule_o *)0x0) goto LAB_035be8a4;
            if ((InFightRule_o *)(pCVar2->fields).super.LKKBHIEHNAM == GOAHBPBJCKC) break;
            pSVar1 = (__this->fields).OIJDFMHDHHK;
            iVar4 = iVar4 + 1;
            if (pSVar1 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) goto LAB_035be8a4;
          }
          pSVar1 = (__this->fields).OIJDFMHDHHK;
          if (pSVar1 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) break;
          pMVar3 = Method_System_Collections_Generic_List<InFightRule>_Remove__;
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)pCVar2,
                     (MethodInfo_26E62D4 *)
                     Method_System_Collections_Generic_List<InFightRule>_Remove__);
          RulesInspector__LMBIDDJLDDJ(__this,pCVar2,pMVar3);
          pSVar1 = (__this->fields).OIJDFMHDHHK;
        } while (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0);
      }
      goto LAB_035be8a4;
    }
  }
  pSVar1 = (__this->fields).OIJDFMHDHHK;
  if (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    iVar4 = 0;
    do {
      if ((pSVar1->fields)._size <= iVar4) {
        return;
      }
      pCVar2 = (InFightRule_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,iVar4,
                          Method_System_Collections_Generic_List<InFightRule>_get_Item__);
      if (pCVar2 == GOAHBPBJCKC) {
        pSVar1 = (__this->fields).OIJDFMHDHHK;
        if (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
          pMVar3 = Method_System_Collections_Generic_List<InFightRule>_Remove__;
                    /* try { // try from 035be880 to 036be88f has its CatchHandler @ 035be890 */
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)pCVar2,
                     (MethodInfo_26E62D4 *)
                     Method_System_Collections_Generic_List<InFightRule>_Remove__);
                    /* catch() { ... } // from try @ 035be7b4 with catch @ 035be890
                       catch() { ... } // from try @ 035be880 with catch @ 035be890 */
                    /* try { // try from 035be894 to 036be897 has its CatchHandler @ 035be8a0 */
                    /* try { // try from 035be898 to 036be8a3 has its CatchHandler @ 035be6a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035be894 with catch @ 035be8a0
                        */
          RulesInspector__LMBIDDJLDDJ(__this,GOAHBPBJCKC,pMVar3);
          return;
        }
        break;
      }
      pSVar1 = (__this->fields).OIJDFMHDHHK;
      iVar4 = iVar4 + 1;
    } while (pSVar1 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0);
  }
LAB_035be8a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void LLNDEKACMIL()  [RVA 0x34BEB14]
// RulesInspector$$LLNDEKACMIL @ RVA 0x34BEB14

void RulesInspector__LLNDEKACMIL(RulesInspector_o *__this,MethodInfo *method)

{
  System_Predicate_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  System_Predicate_AJNNHGGLGIF__o *match;
  
  if ((DAT_04568616 & 1) == 0) {
    FUN_01bab630(&System_Action<Rule>_TypeInfo);
    FUN_01bab630(&Method_KAHMAJKJMBK_NLIEEJMHDKF__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_ForEach__);
    FUN_01bab630(&System_Predicate<Rule>_TypeInfo);
    FUN_01bab630(&Method_KAHMAJKJMBK_<>c_GLENJCEFHDP__);
    FUN_01bab630(&RulesInspector_<>c_TypeInfo);
    DAT_04568616 = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).LJNCACBBIBD;
  if ((RulesInspector_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(RulesInspector_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = RulesInspector_<>c_TypeInfo->static_fields->__9__74_0;
  if (match == (System_Predicate_AJNNHGGLGIF__o *)0x0) {
    if ((RulesInspector_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(RulesInspector_<>c_TypeInfo,method);
    }
    match = (System_Predicate_AJNNHGGLGIF__o *)
            thunk_FUN_01bda818(System_Predicate<Rule>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &RulesInspector_<>c_TypeInfo->static_fields->__9__74_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_01 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_List<object>__FindAll
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (System_Predicate_T__o *)match,
                           Method_System_Collections_Generic_List<Rule>_FindAll__);
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<Rule>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                (__this_00,action,Method_System_Collections_Generic_List<Rule>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void ACOIAOCFPKA(PNEKMHMACLG JMADECMMMIE)  [RVA 0x34BE5B8]
// RulesInspector$$ACOIAOCFPKA @ RVA 0x34BE5B8

void RulesInspector__ACOIAOCFPKA(RulesInspector_o *__this,PNEKMHMACLG_o *JMADECMMMIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568617 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Rule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Remove__);
    DAT_04568617 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((JMADECMMMIE != (PNEKMHMACLG_o *)0x0) &&
     (pSVar2 = (JMADECMMMIE->fields).LJNCACBBIBD,
     pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Rule>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<Rule>_MoveNext__
                             ), bVar1) {
      RulesInspector__JIPKIDBNLAD(__this,(Rule_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<Rule>_Dispose__);
    pSVar2 = (__this->fields).LJNCACBBIBD;
    if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)JMADECMMMIE,
                 Method_System_Collections_Generic_List<Rule>_Remove__);
                    /* try { // try from 035be6a8 to 036be6fb has its CatchHandler @ 035be6a8
                       catch() { ... } // from try @ 035be6a8 with catch @ 035be6a8
                       catch() { ... } // from try @ 035be704 with catch @ 035be6a8
                       catch() { ... } // from try @ 035be7cc with catch @ 035be6a8
                       catch() { ... } // from try @ 035be898 with catch @ 035be6a8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void JHIKFGHPAOF()  [RVA 0x34C1F98]
// RulesInspector$$JHIKFGHPAOF @ RVA 0x34C1F98

void RulesInspector__JHIKFGHPAOF(RulesInspector_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  MethodInfo *extraout_x1;
  Fight_o *pFVar4;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568618 & 1) == 0) {
    FUN_01bab630(&RandomAreaRule_TypeInfo);
                    /* try { // try from 035c1fd0 to 036c1fd7 has its CatchHandler @ 035c2034 */
    FUN_01bab630(&HotGroundRule_TypeInfo);
                    /* try { // try from 035c1fdc to 036c1fdf has its CatchHandler @ 035c2018 */
                    /* try { // try from 035c1fe4 to 036c1fe7 has its CatchHandler @ 035c2014 */
    FUN_01bab630(&DarknessRule_TypeInfo);
                    /* try { // try from 035c1fec to 036c1fef has its CatchHandler @ 035c2004 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
                    /* try { // try from 035c1ff4 to 036c1fff has its CatchHandler @ 035c2008 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
                    /* try { // try from 035c2000 to 036c204f has its CatchHandler @ 035c1b90 */
                    /* catch() { ... } // from try @ 035c1fec with catch @ 035c2004 */
                    /* catch() { ... } // from try @ 035c1ebc with catch @ 035c2008
                       catch() { ... } // from try @ 035c1ff4 with catch @ 035c2008 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
                    /* catch() { ... } // from try @ 035c1e9c with catch @ 035c200c */
                    /* catch() { ... } // from try @ 035c1e8c with catch @ 035c2010 */
                    /* catch() { ... } // from try @ 035c1fe4 with catch @ 035c2014 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
                    /* catch() { ... } // from try @ 035c1fdc with catch @ 035c2018 */
                    /* catch() { ... } // from try @ 035c1e48 with catch @ 035c201c */
                    /* catch() { ... } // from try @ 035c1e60 with catch @ 035c2020 */
    FUN_01bab630(&RuleLightInTheDarkness_TypeInfo);
                    /* catch() { ... } // from try @ 035c1e70 with catch @ 035c2024 */
                    /* catch() { ... } // from try @ 035c1e7c with catch @ 035c2028 */
                    /* catch() { ... } // from try @ 035c1de0 with catch @ 035c202c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 035c1d84 with catch @ 035c2030 */
                    /* catch() { ... } // from try @ 035c1fd0 with catch @ 035c2034 */
    DAT_04568618 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).AJIJMKENBMO;
  if (__this_01 == (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 035c2050 to 036c2053 has its CatchHandler @ 035c212c */
                    /* try { // try from 035c2054 to 036c209b has its CatchHandler @ 035c1b90 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
                    /* try { // try from 035c209c to 036c2117 has its CatchHandler @ 035c21c4 */
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    do {
      do {
        while( true ) {
          while( true ) {
            do {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_80,
                                 Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__
                                );
              __this_00 = local_80.fields._current;
              if (!bVar2) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__)
                ;
                return;
              }
              if ((RandomAreaRule_o *)local_80.fields._current == (RandomAreaRule_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            } while ((((RandomAreaRule_Fields *)((long)local_80.fields._current + 0x10))->super).super.
                     _BDDBFNHFMBC_k__BackingField == false);
            iVar3 = Rule__NHGGBEACKBD
                              ((Rule_o *)local_80.fields._current,(MethodInfo *)0x0);
            if (iVar3 < 8) break;
            if (iVar3 == 0x20) {
              bVar1 = (RandomAreaRule_TypeInfo->_2).naturalAligment;
              if (((((RandomAreaRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
                 ((((RandomAreaRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)RandomAreaRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(__this_00);
              }
              RandomAreaRule__KFJHHLPBEAO((RandomAreaRule_o *)__this_00,(MethodInfo *)0x0);
            }
            else if (iVar3 == 0x2a) {
              bVar1 = (RuleLightInTheDarkness_TypeInfo->_2).naturalAligment;
              if (((((RandomAreaRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
                 ((((RandomAreaRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)RuleLightInTheDarkness_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(__this_00);
              }
                    /* try { // try from 035c2118 to 036c211b has its CatchHandler @ 035c2144 */
                    /* try { // try from 035c211c to 036c211f has its CatchHandler @ 035c2140 */
              RuleLightInTheDarkness__LLCONNGHGKD((RuleLightInTheDarkness_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 035c2120 to 036c2127 has its CatchHandler @ 035c213c */
            }
          }
                    /* try { // try from 035c2128 to 036c216b has its CatchHandler @ 035c1b90 */
          if (iVar3 != 6) break;
          bVar1 = (DarknessRule_TypeInfo->_2).naturalAligment;
          if (((((RandomAreaRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((RandomAreaRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)DarknessRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_00);
          }
          pFVar4 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar4 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Fight__GHCGOFHFBGO
                    (pFVar4,*(float *)&((RandomAreaRule_Fields *)((long)__this_00 + 0x10))->DEKCPPOJFEH
                     ,(MethodInfo *)0x0);
        }
                    /* catch() { ... } // from try @ 035c2050 with catch @ 035c212c */
      } while (iVar3 != 7);
                    /* catch() { ... } // from try @ 035c1d34 with catch @ 035c2138 */
                    /* catch() { ... } // from try @ 035c2120 with catch @ 035c213c */
                    /* catch() { ... } // from try @ 035c211c with catch @ 035c2140 */
      bVar1 = (HotGroundRule_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035c2118 with catch @ 035c2144 */
                    /* catch() { ... } // from try @ 035c1d48 with catch @ 035c2148 */
                    /* catch() { ... } // from try @ 035c1d14 with catch @ 035c214c */
                    /* catch() { ... } // from try @ 035c1f58 with catch @ 035c2150 */
      if (((((RandomAreaRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((RandomAreaRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HotGroundRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_00);
      }
    } while (*(char *)&((RandomAreaRule_Fields *)((long)__this_00 + 0x10))->APBICPEOMOM == '\0');
    pFVar4 = (__this->fields).HPKHMGLOLPJ;
                    /* try { // try from 035c216c to 036c216f has its CatchHandler @ 035c2198 */
    if (pFVar4 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 035c2170 to 036c21a7 has its CatchHandler @ 035c1b90 */
    pNVar5 = (pFVar4->fields).HIBPKNAIPLH;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
                    /* catch() { ... } // from try @ 035c216c with catch @ 035c2198 */
      pFVar4 = (__this->fields).HPKHMGLOLPJ;
      if (pFVar4 == (Fight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 035c21a8 to 036c21af has its CatchHandler @ 035c21c4 */
      bVar1 = (HotGroundRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035c21b0 to 036c21bb has its CatchHandler @ 035c1b90 */
                    /* try { // try from 035c21bc to 036c21c3 has its CatchHandler @ 035c21c4 */
                    /* catch() { ... } // from try @ 035c209c with catch @ 035c21c4
                       catch() { ... } // from try @ 035c21a8 with catch @ 035c21c4
                       catch() { ... } // from try @ 035c21bc with catch @ 035c21c4 */
      if (((((RandomAreaRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((RandomAreaRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)HotGroundRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_00);
      }
      pNVar5 = (pFVar4->fields).HIBPKNAIPLH;
      if (pNVar5 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_PreFight__ViewerUpdateHotGroundTimer
                (pNVar5,*(int32_t *)
                         ((long)&((RandomAreaRule_Fields *)((long)__this_00 + 0x10))->APBICPEOMOM + 4),
                 (((RandomAreaRule_Fields *)((long)__this_00 + 0x10))->super).JGJNBILDCHK,
                 (MethodInfo *)0x0);
    }
    bVar1 = (HotGroundRule_TypeInfo->_2).naturalAligment;
    if (((((RandomAreaRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
       ((((RandomAreaRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HotGroundRule_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    *(undefined1 *)&((RandomAreaRule_Fields *)((long)__this_00 + 0x10))->APBICPEOMOM = 0;
  } while( true );
}


// ===== public void ANABFMECNKN(ModelParameters NDOMOKBINFD)  [RVA 0x34C30C4]
// RulesInspector$$ANABFMECNKN @ RVA 0x34C30C4

void RulesInspector__ANABFMECNKN(RulesInspector_o *__this,ModelParameters_o *NDOMOKBINFD,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_JFAGMCHGOEH__o *__this_00;
  System_String_o *item;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 035c30c8 to 036c30d7 has its CatchHandler @ 035c3190 */
                    /* try { // try from 035c30d8 to 036c3167 has its CatchHandler @ 035c2f00 */
  if ((DAT_04568619 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11464/*"RulesInspector::applyNoAnimationRules ERROR - modelParameters is NULL"*/);
    DAT_04568619 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (NDOMOKBINFD == (ModelParameters_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11464/*"RulesInspector::applyNoAnimationRules ERROR - modelParameters is NULL"*/,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (NDOMOKBINFD->fields).ODHIGGJOPEK;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar4->fields)._size;
                    /* try { // try from 035c3168 to 036c316f has its CatchHandler @ 035c31b4 */
                    /* try { // try from 035c3170 to 036c3173 has its CatchHandler @ 035c31a8 */
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
                    /* try { // try from 035c3174 to 036c3177 has its CatchHandler @ 035c319c */
    if (0 < length) {
                    /* try { // try from 035c3178 to 036c317b has its CatchHandler @ 035c3198 */
                    /* try { // try from 035c317c to 036c317f has its CatchHandler @ 035c2f00 */
                    /* try { // try from 035c3180 to 036c3183 has its CatchHandler @ 035c318c */
                    /* try { // try from 035c3184 to 036c31c3 has its CatchHandler @ 035c2f00 */
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).DABLKOLPECH;
                    /* catch() { ... } // from try @ 035c3180 with catch @ 035c318c */
    if (__this_00 != (System_Collections_Generic_List_JFAGMCHGOEH__o *)0x0) {
                    /* catch() { ... } // from try @ 035c30c8 with catch @ 035c3190 */
                    /* catch() { ... } // from try @ 035c30ac with catch @ 035c3194 */
                    /* catch() { ... } // from try @ 035c3178 with catch @ 035c3198 */
                    /* catch() { ... } // from try @ 035c3174 with catch @ 035c319c */
                    /* catch() { ... } // from try @ 035c30b8 with catch @ 035c31a0 */
                    /* catch() { ... } // from try @ 035c3090 with catch @ 035c31a4 */
                    /* catch() { ... } // from try @ 035c3170 with catch @ 035c31a8 */
                    /* catch() { ... } // from try @ 035c3028 with catch @ 035c31ac */
                    /* catch() { ... } // from try @ 035c2fcc with catch @ 035c31b0 */
                    /* catch() { ... } // from try @ 035c3168 with catch @ 035c31b4 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JFAGMCHGOEH>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035c31c4 to 036c31c7 has its CatchHandler @ 035c31d8 */
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_MoveNext__
                            );
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    /* catch() { ... } // from try @ 035c31c4 with catch @ 035c31d8 */
          if (!bVar3) {
                    /* try { // try from 035c3254 to 036c325b has its CatchHandler @ 035c325c */
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<JFAGMCHGOEH>_Dispose__);
                    /* catch() { ... } // from try @ 035c31e0 with catch @ 035c325c
                       catch() { ... } // from try @ 035c3254 with catch @ 035c325c */
                    /* try { // try from 035c3260 to 036c33d3 has its CatchHandler @ 035c3260
                       catch() { ... } // from try @ 035c3260 with catch @ 035c3260
                       catch() { ... } // from try @ 035c34a0 with catch @ 035c3260
                       catch() { ... } // from try @ 035c3554 with catch @ 035c3260
                       catch() { ... } // from try @ 035c355c with catch @ 035c3260
                       catch() { ... } // from try @ 035c3614 with catch @ 035c3260 */
            return;
          }
                    /* try { // try from 035c31e0 to 036c3247 has its CatchHandler @ 035c325c */
          if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(char *)((long)&local_50.fields._current[3].monitor + 4) == '\0');
        pSVar4 = (NDOMOKBINFD->fields).ODHIGGJOPEK;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_50.fields._current[5].monitor;
        pSVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pSVar5 == (System_String_array *)0x0) break;
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = item;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1);
        }
        else {
                    /* try { // try from 035c3248 to 036c3253 has its CatchHandler @ 035c2f00 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LDAMCMHMNOA(List<ItemRule> FAAMECCDGJM)  [RVA 0x34C3330]
// RulesInspector$$LDAMCMHMNOA @ RVA 0x34C3330

void RulesInspector__LDAMCMHMNOA
               (RulesInspector_o *__this,System_Collections_Generic_List_JCHNBADDBGO__o *FAAMECCDGJM,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456861a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ItemRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    __this = (RulesInspector_o *)FUN_01bab630(&RandomAquiredItemRule_TypeInfo);
    DAT_0456861a = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (FAAMECCDGJM != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)FAAMECCDGJM,
               Method_System_Collections_Generic_List<ItemRule>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035c33d4 to 036c33fb has its CatchHandler @ 035c3574 */
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<ItemRule>_MoveNext__
                          );
        __this_00 = local_50.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<ItemRule>_Dispose__);
          return;
        }
      } while (((RandomAquiredItemRule_o *)local_50.fields._current == (RandomAquiredItemRule_o *)0x0) ||
              (iVar3 = Rule__NHGGBEACKBD
                                 ((Rule_o *)local_50.fields._current,(MethodInfo *)0x0),
              iVar3 != 2));
      bVar1 = (RandomAquiredItemRule_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035c3430 to 036c345b has its CatchHandler @ 035c3570 */
      if (((((RandomAquiredItemRule_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((RandomAquiredItemRule_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)RandomAquiredItemRule_TypeInfo)) break;
      RandomAquiredItemRule__KFPIKBGFKBC((RandomAquiredItemRule_o *)__this_00,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_00);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== protected void NIELOMFPJNN(List<NoButtonRule> MHPOMBEOGCD)  [RVA 0x34C34EC]
// RulesInspector$$NIELOMFPJNN @ RVA 0x34C34EC

void RulesInspector__NIELOMFPJNN
               (RulesInspector_o *__this,System_Collections_Generic_List_KMFIGBGAKNL__o *MHPOMBEOGCD,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_KMFIGBGAKNL__o *pSVar4;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  Rule_array *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456861b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Rule>_Add__);
                    /* try { // try from 035c354c to 036c3553 has its CatchHandler @ 035c356c */
                    /* try { // try from 035c3554 to 036c3557 has its CatchHandler @ 035c3260 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NoButtonRule>_GetEnumerator__);
                    /* try { // try from 035c3558 to 036c355b has its CatchHandler @ 035c3564 */
                    /* try { // try from 035c355c to 036c358b has its CatchHandler @ 035c3260 */
    DAT_0456861b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3558 with catch @ 035c3564
                        */
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3490 with catch @ 035c3568
                        */
  pSVar4 = (__this->fields).BJCIIJEPGFL;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c354c with catch @ 035c356c
                        */
  if (pSVar4 != (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3430 with catch @ 035c3570
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c33d4 with catch @ 035c3574
                        */
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)MHPOMBEOGCD,
               Method_System_Collections_Generic_List<NoButtonRule>_AddRange__);
    pSVar4 = (__this->fields).BJCIIJEPGFL;
    if (pSVar4 != (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
                    /* try { // try from 035c358c to 036c358f has its CatchHandler @ 035c359c */
                    /* catch() { ... } // from try @ 035c358c with catch @ 035c359c */
                    /* try { // try from 035c35ac to 036c3613 has its CatchHandler @ 035c3628 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<NoButtonRule>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<Rule>_Add__;
        if (!bVar3) {
                    /* try { // try from 035c362c to 036c37bf has its CatchHandler @ 035c362c
                       catch() { ... } // from try @ 035c362c with catch @ 035c362c
                       catch() { ... } // from try @ 035c3afc with catch @ 035c362c
                       catch() { ... } // from try @ 035c3b44 with catch @ 035c362c
                       catch() { ... } // from try @ 035c3c80 with catch @ 035c362c
                       catch() { ... } // from try @ 035c3c88 with catch @ 035c362c
                       catch() { ... } // from try @ 035c3d6c with catch @ 035c362c */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<NoButtonRule>_Dispose__);
          return;
        }
        __this_00 = (__this->fields).LJNCACBBIBD;
        if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) break;
        pAVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pAVar5 == (Rule_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pAVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pAVar5->m_Items[(int)uVar1] = (Rule_o *)local_48.fields._current;
          thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1);
                    /* try { // try from 035c3614 to 036c361f has its CatchHandler @ 035c3260 */
        }
        else {
                    /* try { // try from 035c3620 to 036c3627 has its CatchHandler @ 035c3628 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,local_48.fields._current
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c35ac with catch @ 035c3628
                       catch(type#2 @ 00000000) { ... } // from try @ 035c3620 with catch @ 035c3628
                        */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<PerkInfoItem> DNCABAKOIHG()  [RVA 0x34C36D0]
// RulesInspector$$DNCABAKOIHG @ RVA 0x34C36D0

System_Collections_Generic_List_HEFOANCOHDC__o *
RulesInspector__DNCABAKOIHG(RulesInspector_o *__this,MethodInfo *method)

{
  return (__this->fields).PFFILFBOODM;
}


// ===== protected void ELANNLDAPMK(HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x34C1808]
// RulesInspector$$ELANNLDAPMK @ RVA 0x34C1808

void RulesInspector__ELANNLDAPMK(RulesInspector_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  Fight_o *__this_01;
  Model_o *__this_02;
  byte bVar3;
  int32_t HEHMPFLAEGE_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456861c & 1) == 0) {
    FUN_01bab630(&DGCPNJOFKON_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InFightRule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    DAT_0456861c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (HEHMPFLAEGE == 3) {
    RulesInspector__ELANNLDAPMK(__this,1,method);
    RulesInspector__ELANNLDAPMK(__this,2,method);
    return;
  }
  __this_00 = (__this->fields).AJOJJAMODCB;
  if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<InFightRule>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    bVar1 = true;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<InFightRule>_MoveNext__
                             ), bVar2) {
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((*(char *)((long)&local_50.fields._current[3].monitor + 4) != '\0') &&
         (*(int *)&local_50.fields._current[5].monitor == HEHMPFLAEGE)) {
        if (bVar1) {
          bVar3 = (DGCPNJOFKON_TypeInfo->_2).naturalAligment;
          if ((((local_50.fields._current)->klass->_2).naturalAligment < bVar3) ||
             (((local_50.fields._current)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)DGCPNJOFKON_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(local_50.fields._current);
          }
          bVar3 = *(byte *)((long)&local_50.fields._current[6].monitor + 2) ^ 1;
        }
        else {
          bVar3 = 0;
        }
        bVar1 = bVar3 != 0;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<InFightRule>_Dispose__);
    __this_01 = (__this->fields).HPKHMGLOLPJ;
    if (__this_01 != (Fight_o *)0x0) {
      HEHMPFLAEGE_00 = 1;
      if (HEHMPFLAEGE == 1) {
        HEHMPFLAEGE_00 = 2;
      }
      __this_02 = Fight__HJFOLPOINNH(__this_01,HEHMPFLAEGE_00,(MethodInfo *)0x0);
      if (__this_02 != (Model_o *)0x0) {
        Model__GGAOJKDEHIN(__this_02,(bool)~bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void MAHDPEFBCOJ(NoPerksRule GOAHBPBJCKC)  [RVA 0x34C290C]
// RulesInspector$$MAHDPEFBCOJ @ RVA 0x34C290C

void RulesInspector__MAHDPEFBCOJ(RulesInspector_o *__this,NoPerksRule_o *GOAHBPBJCKC,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_List_CCAEOJMALLA__o *pSVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  NoPerksRule_array *pCVar7;
  int32_t iVar8;
  int32_t local_24;
  
  if ((DAT_0456861d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NoPerksRule>_Add__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11467/*"RulesInspector::putPerkFromRule ERROR - wrong rule appliance {0}"*/);
    DAT_0456861d = 1;
  }
  lVar5 = Method_System_Collections_Generic_List<NoPerksRule>_Add__;
  if (GOAHBPBJCKC == (NoPerksRule_o *)0x0) goto LAB_035c2b4c;
  iVar1 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
  if (iVar1 == 3) {
    pSVar3 = (__this->fields).JJPFOPGHLOD;
    if (pSVar3 == (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) goto LAB_035c2b4c;
    pCVar7 = (pSVar3->fields)._items;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (pCVar7 == (NoPerksRule_array *)0x0) goto LAB_035c2b4c;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pCVar7->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pCVar7->m_Items[(int)uVar2] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar7->m_Items + (int)uVar2,GOAHBPBJCKC);
    }
    else {
                    /* try { // try from 035c2ac0 to 036c2ac7 has its CatchHandler @ 035c2b60 */
                    /* try { // try from 035c2ac8 to 036c2b57 has its CatchHandler @ 035c28e0 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    pSVar3 = (__this->fields).OHDBJEGKGLL;
    if (pSVar3 == (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) goto LAB_035c2b4c;
    iVar8 = (pSVar3->fields)._version;
    pCVar7 = (pSVar3->fields)._items;
  }
  else {
    if (iVar1 == 2) {
      pSVar3 = (__this->fields).OHDBJEGKGLL;
    }
    else {
      if (iVar1 != 1) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        local_24 = (GOAHBPBJCKC->fields).super.JGJNBILDCHK;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
        if (args != (System_Object_array *)0x0) {
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
            uVar6 = thunk_FUN_01be8e1c();
                    /* try { // try from 035c2b58 to 036c2b5b has its CatchHandler @ 035c2b5c */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c2b58 with catch @ 035c2b5c
                       try { // try from 035c2b5c to 036c2b87 has its CatchHandler @ 035c28e0 */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(args->m_Items,pIVar4);
                    /* try { // try from 035c2a90 to 036c2a97 has its CatchHandler @ 035c2b70 */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 035c2aac to 036c2ab7 has its CatchHandler @ 035c2b6c */
            UnityEngine_Debug__LogErrorFormat(StringLiteral_11467/*"RulesInspector::putPerkFromRule ERROR - wrong rule appliance {0}"*/,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_035c2b4c;
      }
      pSVar3 = (__this->fields).JJPFOPGHLOD;
    }
    if (pSVar3 == (System_Collections_Generic_List_CCAEOJMALLA__o *)0x0) goto LAB_035c2b4c;
    iVar8 = (pSVar3->fields)._version;
    pCVar7 = (pSVar3->fields)._items;
  }
  lVar5 = Method_System_Collections_Generic_List<NoPerksRule>_Add__;
  (pSVar3->fields)._version = iVar8 + 1;
  if (pCVar7 != (NoPerksRule_array *)0x0) {
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pCVar7->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pCVar7->m_Items[(int)uVar2] = GOAHBPBJCKC;
      thunk_FUN_01c20e04(pCVar7->m_Items + (int)uVar2,GOAHBPBJCKC);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)GOAHBPBJCKC,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_035c2b4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

