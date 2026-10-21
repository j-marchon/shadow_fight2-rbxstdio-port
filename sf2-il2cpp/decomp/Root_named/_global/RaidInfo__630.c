// TypeDefIndex 630
// Namespace: 
// public class RaidInfo : MonoBehaviour
// Fields:
//   private LabelAlias _shieldName; // 0x20
//   private ResolutionImage _shieldIcon; // 0x28
//   private ProgressBar _shieldBar; // 0x30
//   private LabelAlias _shieldValue; // 0x38
//   private LabelAlias _timeLabel; // 0x40
//   private LabelAlias _raidSizeLabel; // 0x48
//   private LabelAlias _raidRandomRuleLabel; // 0x50

// ===== public void .ctor()  [RVA 0x35C9C70]
// RaidInfo$$.ctor @ RVA 0x35C9C70

void RaidInfo___ctor(RaidInfo_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void UpdateInfo(OHDDKGHEEPA BANHBMINMMP)  [RVA 0x35C9C78]
// RaidInfo$$UpdateInfo @ RVA 0x35C9C78

void RaidInfo__UpdateInfo(RaidInfo_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  FightList_o *__this_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_01;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  int32_t local_24;
  
  if ((DAT_04568f8f & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RandomRule>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelParameters>_get_Item__);
    FUN_01bab630(&StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/);
    FUN_01bab630(&StringLiteral_21624/*"txtShortRandomRule"*/);
    DAT_04568f8f = 1;
  }
  if (BANHBMINMMP == (OHDDKGHEEPA_o *)0x0) {
    return;
  }
  RaidInfo__CPMHIEJENLD(__this,BANHBMINMMP,method);
  pNVar5 = (__this->fields)._raidSizeLabel;
  local_24 = OHDDKGHEEPA__NLMMJCACKPC(BANHBMINMMP,(MethodInfo *)0x0);
  pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(StringLiteral_2436/*"<quad name=RaidMisc.players /> "*/,pSVar3,(MethodInfo *)0x0);
  if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
              (pNVar5,pSVar3,(pNVar5->klass->vtable)._75_set_text.method);
    __this_00 = (FightList_o *)
                (*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                          (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (__this_00 == (FightList_o *)0x0) {
      return;
    }
    iVar2 = FightList__IKDFBAOFNPB(__this_00,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      return;
    }
    __this_01 = (__this_00->fields).MECHOBPGHFJ;
    if ((__this_01 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,0,
                            Method_System_Collections_Generic_List<ModelParameters>_get_Item__),
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
                           Method_DJNBJHPDKDP_OBECCOPBADO<RandomRule>__);
        if (bVar1) {
          return;
        }
        pNVar5 = (__this->fields)._raidRandomRuleLabel;
        if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,StringLiteral_21624/*"txtShortRandomRule"*/,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CPMHIEJENLD(OHDDKGHEEPA BANHBMINMMP)  [RVA 0x35C9E30]
// RaidInfo$$CPMHIEJENLD @ RVA 0x35C9E30

void RaidInfo__CPMHIEJENLD(RaidInfo_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,MethodInfo *method)

{
  int64_t NFBEBOIDJLL;
  System_String_o *str1;
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_04568f90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2432/*"<quad name=RaidMisc.clocks /> "*/);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568f90 = 1;
  }
  pSVar1 = StringLiteral_2432/*"<quad name=RaidMisc.clocks /> "*/;
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    NFBEBOIDJLL = OHDDKGHEEPA__BKDPJMOCMOI(BANHBMINMMP,(MethodInfo *)0x0);
    str1 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                     (NFBEBOIDJLL,true,true,true,false,false,true,StringLiteral_2086/*":"*/,StringLiteral_1/*""*/
                      ,true,true,true,true,true,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,3,
                      (MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._timeLabel;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036c9f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x35C9F44]
// RaidInfo$$Init @ RVA 0x35C9F44

void RaidInfo__Init(RaidInfo_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  ProgressBar_o *pPVar2;
  BHEDGAKGKPO_StaticFields *pBVar3;
  
  if ((DAT_04568f91 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&StringLiteral_11988/*"ShieldName"*/);
    DAT_04568f91 = 1;
  }
  pNVar1 = (__this->fields)._shieldName;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,StringLiteral_11988/*"ShieldName"*/,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._shieldName;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
      (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                 (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                 (pNVar1->klass->vtable)._23_set_color.method);
      pNVar1 = (__this->fields)._shieldValue;
      if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._shieldValue;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                     (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                     (pNVar1->klass->vtable)._23_set_color.method);
          pNVar1 = (__this->fields)._raidSizeLabel;
          if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._raidSizeLabel;
            if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
              (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                        ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                         (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                         (pNVar1->klass->vtable)._23_set_color.method);
              pNVar1 = (__this->fields)._raidRandomRuleLabel;
              if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._raidRandomRuleLabel;
                if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                  (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                            ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                             (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                             (pNVar1->klass->vtable)._23_set_color.method);
                  pNVar1 = (__this->fields)._timeLabel;
                  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pBVar3 = BHEDGAKGKPO_TypeInfo->static_fields;
                    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                              ((pBVar3->FHIAKPJBBCB).fields.r,(pBVar3->FHIAKPJBBCB).fields.g,
                               (pBVar3->FHIAKPJBBCB).fields.b,(pBVar3->FHIAKPJBBCB).fields.a,pNVar1,
                               (pNVar1->klass->vtable)._23_set_color.method);
                    pNVar1 = (__this->fields)._timeLabel;
                    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
                      pPVar2 = (__this->fields)._shieldBar;
                      if (pPVar2 != (ProgressBar_o *)0x0) {
                        (*(pPVar2->klass->vtable)._11_SetValueBorders.methodPtr)
                                  (0,0x3f800000,pPVar2,
                                   (pPVar2->klass->vtable)._11_SetValueBorders.method);
                        pPVar2 = (__this->fields)._shieldBar;
                        if (pPVar2 != (ProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036ca0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(pPVar2->klass->vtable)._8_SetValue.methodPtr)
                                    (0x3f800000,0,pPVar2,0,
                                     (pPVar2->klass->vtable)._8_SetValue.method);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

