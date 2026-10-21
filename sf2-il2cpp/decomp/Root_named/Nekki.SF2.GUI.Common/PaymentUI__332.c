// TypeDefIndex 332
// Namespace: Nekki.SF2.GUI.Common
// public class PaymentUI : UIModule
// Fields:
//   private UnityEvent _OnProductsUpdateEvent; // 0x28
//   private IEnumerator IDLPBFLLOJK; // 0x30

// ===== protected override void GIENGNEGHPJ()  [RVA 0x334B1C0]
// Nekki.SF2.GUI.Common.PaymentUI$$GIENGNEGHPJ @ RVA 0x334B1C0

void Nekki_SF2_GUI_Common_PaymentUI__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_045679f7 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045679f7 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_Common_PaymentUI__EBLDMGLBNIC(__this,method_00);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_0344b268;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0344b268:
  pSVar3 = (System_Collections_IEnumerator_o *)(*pVVar4->methodPtr)(pPVar2,pSVar3,0,pVVar4->method);
  ppSVar8 = &(__this->fields).IDLPBFLLOJK;
  *ppSVar8 = pSVar3;
  thunk_FUN_01c20e04(ppSVar8,pSVar3);
  return;
}


// ===== public bool get_IsRestorePurchasesAvailable()  [RVA 0x334B304]
// Nekki.SF2.GUI.Common.PaymentUI$$get_IsRestorePurchasesAvailable @ RVA 0x334B304

bool Nekki_SF2_GUI_Common_PaymentUI__get_IsRestorePurchasesAvailable
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  DGGBFKNKEAH_o *__this_00;
  
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
  }
  __this_00 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (__this_00 != (DGGBFKNKEAH_o *)0x0) {
    bVar1 = DGGBFKNKEAH__JMECPHKNEEG(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private void JCLPLBEJHGM(CFEFALDOEMD PODMLLJBEKK)  [RVA 0x334B354]
// Nekki.SF2.GUI.Common.PaymentUI$$JCLPLBEJHGM @ RVA 0x334B354

void Nekki_SF2_GUI_Common_PaymentUI__JCLPLBEJHGM
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,CFEFALDOEMD_o *PODMLLJBEKK,
               MethodInfo *method)

{
  HOOAAGABMBL_o *IKKAMAMLIKA;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  System_String_o *CJNPBEJHHLF;
  
  if ((DAT_045679f8 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045679f8 = 1;
  }
  if (PODMLLJBEKK != (CFEFALDOEMD_o *)0x0) {
    CJNPBEJHHLF = (PODMLLJBEKK->fields)._CIEBCKIBJHL_k__BackingField;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    IKKAMAMLIKA = NLPJLHOEAOE__FEHJLBEGAPO(CJNPBEJHHLF,(MethodInfo *)0x0);
    AMIINPEKKFB__AMGIHEOPMEK(IKKAMAMLIKA,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public UnityEvent get_OnProductsUpdateEvent()  [RVA 0x334B418]
// Nekki.SF2.GUI.Common.PaymentUI$$get_OnProductsUpdateEvent @ RVA 0x334B418

UnityEngine_Events_UnityEvent_o *
Nekki_SF2_GUI_Common_PaymentUI__get_OnProductsUpdateEvent
          (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnProductsUpdateEvent;
}


// ===== private void FNFLNGJNONP()  [RVA 0x334B420]
// Nekki.SF2.GUI.Common.PaymentUI$$FNFLNGJNONP @ RVA 0x334B420

void Nekki_SF2_GUI_Common_PaymentUI__FNFLNGJNONP
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_045679f9 & 1) == 0) {
    __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)FUN_01bab630(&StringLiteral_4592/*"Connection"*/);
    DAT_045679f9 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
            (__this,0x14,(HOOAAGABMBL_o *)0x0,StringLiteral_4592/*"Connection"*/,in_x4);
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method_00);
  return;
}


// ===== private void HJAIGFGKNBM(string KKDELPFMDFM)  [RVA 0x334B568]
// Nekki.SF2.GUI.Common.PaymentUI$$HJAIGFGKNBM @ RVA 0x334B568

void Nekki_SF2_GUI_Common_PaymentUI__HJAIGFGKNBM
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,System_String_o *KKDELPFMDFM,
               MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *NONPLOOOOAG;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_045679fa & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1607);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1608);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045679fa = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1607,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1608,(MethodInfo *)0x0);
  NONPLOOOOAG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  OCLJMFBDKOA__HKGFEJGHMGM(NONPLOOOOAG,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method_00);
  return;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x334B670]
// Nekki.SF2.GUI.Common.PaymentUI$$CLNAOMIIBLH @ RVA 0x334B670

void Nekki_SF2_GUI_Common_PaymentUI__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Action_string__o *pSVar2;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_00;
  System_Action_o *pSVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  DGGBFKNKEAH_o *pDVar10;
  System_Collections_IEnumerator_o *pSVar11;
  
  if ((DAT_045679fb & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_CPMEAIBFIGK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_FNFLNGJNONP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_HJAIGFGKNBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_IFJLJKGOHJD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_IHKHIJONLCM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_IMJPAHJCLHK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_JCLPLBEJHGM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PaymentUI_JELBFKIFMBO__);
    DAT_045679fb = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
  }
  pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (pDVar10 != (DGGBFKNKEAH_o *)0x0) {
    pSVar2 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    DGGBFKNKEAH__OGLPCOOIGHG(pDVar10,pSVar2,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE = (System_Action_CFEFALDOEMD__o *)
                  thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__MJJEHFDLAHD(pDVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__AHKPBJGPOMH(pDVar10,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    pSVar2 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__HFILKGBFLNP(pDVar10,pSVar2,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    pSVar2 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__DPOEJJMDPHP(pDVar10,pSVar2,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__PIHHAMOGIOJ(pDVar10,pSVar3,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__EDDMLJPGGNG(pDVar10,pSVar3,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar10 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pDVar10 == (DGGBFKNKEAH_o *)0x0) goto LAB_0344bb30;
    DGGBFKNKEAH__CFJKJINFCJJ(pDVar10,pSVar3,(MethodInfo *)0x0);
  }
  ppSVar9 = &(__this->fields).IDLPBFLLOJK;
  if (*ppSVar9 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar4->klass;
    pSVar11 = *ppSVar9;
    uVar1._0_1_ = (pPVar6->_2).rank;
    uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + (*piVar8 + 1);
          goto LAB_0344bafc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_0344bafc:
    (*pVVar5->methodPtr)(pPVar4,pSVar11,pVVar5->method);
    *ppSVar9 = (System_Collections_IEnumerator_o *)0x0;
    thunk_FUN_01c20e04(ppSVar9,0);
    return;
  }
LAB_0344bb30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MakePurchase(HOOAAGABMBL ANMFBABEMFD, Nullable<ObscuredLong> BIEJHAPFIEI)  [RVA 0x334BB34]
// Nekki.SF2.GUI.Common.PaymentUI$$MakePurchase @ RVA 0x334BB34

void Nekki_SF2_GUI_Common_PaymentUI__MakePurchase
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,
               System_Nullable_ObscuredLong__o *BIEJHAPFIEI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *FHJLFJLEBKA;
  System_String_o *CJNHFNHJHPE;
  DGGBFKNKEAH_o *pDVar2;
  Roster_o *__this_00;
  undefined1 auVar3 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_50;
  
  auVar3._8_8_ = ANMFBABEMFD;
  auVar3._0_8_ = __this;
  if ((DAT_045679fc & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>_ToString__);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>__ctor__);
    FUN_01bab630(&Method_System_Nullable<ObscuredLong>_get_HasValue__);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    auVar3 = FUN_01bab630(&StringLiteral_6478/*"FirstGemPurchaseBonus"*/);
    DAT_045679fc = 1;
  }
  Nekki_SF2_GUI_Common_PaymentUI__BBFPCBEFOLN(auVar3._0_8_,auVar3._8_8_);
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((ANMFBABEMFD->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_3535/*"Bonus"*/,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((BIEJHAPFIEI->fields).hasValue == false) {
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        FHJLFJLEBKA = GameUtils__OKJKIOKPKEJ((MethodInfo *)0x0);
        GameUtils__PAADLMOJFJC(&local_50,ANMFBABEMFD,FHJLFJLEBKA,(MethodInfo *)0x0);
        System_Nullable<ObscuredLong>___ctor
                  (BIEJHAPFIEI,&local_50,Method_System_Nullable<ObscuredLong>__ctor__);
      }
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      CJNHFNHJHPE = System_Nullable<ObscuredLong>__ToString
                              (BIEJHAPFIEI,Method_System_Nullable<ObscuredLong>_ToString__);
      if (__this_00 == (Roster_o *)0x0) goto LAB_0344bd24;
      Roster__LMJFPPDAPBF(__this_00,StringLiteral_6478/*"FirstGemPurchaseBonus"*/,CJNHFNHJHPE,0,(MethodInfo *)0x0);
    }
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
      (*(pDVar2->klass->vtable)._13_GCEEJCFAMBP.methodPtr)
                (pDVar2,(ANMFBABEMFD->fields)._CIEBCKIBJHL_k__BackingField,
                 (pDVar2->klass->vtable)._13_GCEEJCFAMBP.method);
      return;
    }
  }
LAB_0344bd24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CPMEAIBFIGK(string KKDELPFMDFM)  [RVA 0x334BD7C]
// Nekki.SF2.GUI.Common.PaymentUI$$CPMEAIBFIGK @ RVA 0x334BD7C

void Nekki_SF2_GUI_Common_PaymentUI__CPMEAIBFIGK
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,System_String_o *KKDELPFMDFM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  if ((DAT_045679fd & 1) == 0) {
    __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)FUN_01bab630(&StringLiteral_11860/*"ServerNoResponse"*/);
    DAT_045679fd = 1;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
            (__this,0x14,(HOOAAGABMBL_o *)0x0,StringLiteral_11860/*"ServerNoResponse"*/,in_x4);
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method_00);
  return;
}


// ===== private void BBFPCBEFOLN()  [RVA 0x334BD28]
// Nekki.SF2.GUI.Common.PaymentUI$$BBFPCBEFOLN @ RVA 0x334BD28

void Nekki_SF2_GUI_Common_PaymentUI__BBFPCBEFOLN
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045679fe & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045679fe = 1;
    method = extraout_x1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
  }
  GameUtils__JEGCBLKOEGN(true,(MethodInfo *)0x0);
  return;
}


// ===== private void CBMPCEPMFHP(KFKFNDEJLKK.PCJFAKMBHCE AAJGEHHPMGH, HOOAAGABMBL ANMFBABEMFD, string ENNIFOKKLOA)  [RVA 0x334B470]
// Nekki.SF2.GUI.Common.PaymentUI$$CBMPCEPMFHP @ RVA 0x334B470

void Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,int32_t AAJGEHHPMGH,
               HOOAAGABMBL_o *ANMFBABEMFD,System_String_o *ENNIFOKKLOA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  DNELIPCHKLK_o *pDVar3;
  DNELIPCHKLK_o **ppDVar4;
  DNELIPCHKLK_o *pDVar5;
  PKHMIGFEJCL_o *pPVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_045679ff & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045679ff = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar6 = (pNVar2->fields).QuestParameters, pPVar6 != (PKHMIGFEJCL_o *)0x0)) {
    ppDVar4 = &(pPVar6->fields).NMHCLFFOMJH;
    pDVar5 = *ppDVar4;
    pDVar3 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    *ppDVar4 = pDVar3;
    thunk_FUN_01c20e04(ppDVar4,pDVar3);
    (pPVar6->fields).PNPKEKHEMCD = StringLiteral_1/*""*/;
    thunk_FUN_01c20e04();
    if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
      (pPVar6->fields).CJLNOJMBNPN = ANMFBABEMFD;
      thunk_FUN_01c20e04(&pPVar6->fields,ANMFBABEMFD);
    }
    bVar1 = System_String__IsNullOrEmpty(ENNIFOKKLOA,(MethodInfo *)0x0);
    if (!bVar1) {
      ppSVar7 = &(pPVar6->fields).LPFMHPBACOJ;
      *ppSVar7 = ENNIFOKKLOA;
      thunk_FUN_01c20e04(ppSVar7,ENNIFOKKLOA);
    }
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests
                (pNVar2,AAJGEHHPMGH,(MethodInfo *)0x0);
      *ppDVar4 = pDVar5;
      thunk_FUN_01c20e04(ppDVar4,pDVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IMJPAHJCLHK()  [RVA 0x334BDCC]
// Nekki.SF2.GUI.Common.PaymentUI$$IMJPAHJCLHK @ RVA 0x334BDCC

void Nekki_SF2_GUI_Common_PaymentUI__IMJPAHJCLHK
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields)._OnProductsUpdateEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHEIENCJENJ(bool KMFCEEFAOND)  [RVA 0x334B3C8]
// Nekki.SF2.GUI.Common.PaymentUI$$BHEIENCJENJ @ RVA 0x334B3C8

void Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,bool KMFCEEFAOND,MethodInfo *method)

{
  if ((DAT_04567a00 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo,KMFCEEFAOND);
    DAT_04567a00 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GameUtils__MHNCGDFKIJN((MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator EBLDMGLBNIC()  [RVA 0x334B298]
// Nekki.SF2.GUI.Common.PaymentUI$$EBLDMGLBNIC @ RVA 0x334B298

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Common_PaymentUI__EBLDMGLBNIC
          (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a01 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_PaymentUI_NIAHPLHEIAL_TypeInfo);
    DAT_04567a01 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Common_PaymentUI_NIAHPLHEIAL_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void RestorePurchases()  [RVA 0x334BE10]
// Nekki.SF2.GUI.Common.PaymentUI$$RestorePurchases @ RVA 0x334BE10

void Nekki_SF2_GUI_Common_PaymentUI__RestorePurchases
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  DGGBFKNKEAH_o *pDVar1;
  
  Nekki_SF2_GUI_Common_PaymentUI__BBFPCBEFOLN(__this,method);
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
  }
  pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0344be60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pDVar1->klass->vtable)._23_unknown.methodPtr)
              (pDVar1,(pDVar1->klass->vtable)._23_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JELBFKIFMBO(string KKDELPFMDFM)  [RVA 0x334BE68]
// Nekki.SF2.GUI.Common.PaymentUI$$JELBFKIFMBO @ RVA 0x334BE68

void Nekki_SF2_GUI_Common_PaymentUI__JELBFKIFMBO
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,System_String_o *KKDELPFMDFM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
            (__this,0x14,(HOOAAGABMBL_o *)0x0,(System_String_o *)0x0,in_x4);
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method_00);
  return;
}


// ===== private void IHKHIJONLCM(BKLDKOMCOPN OPAEPDIIOEB)  [RVA 0x334BE88]
// Nekki.SF2.GUI.Common.PaymentUI$$IHKHIJONLCM @ RVA 0x334BE88

void Nekki_SF2_GUI_Common_PaymentUI__IHKHIJONLCM
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,BKLDKOMCOPN_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Common_PaymentUI_o *extraout_x0;
  MethodInfo *in_x4;
  undefined8 *puVar2;
  
  if ((DAT_04567a02 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14639/*"UserCancelled"*/);
    __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)FUN_01bab630(&StringLiteral_4592/*"Connection"*/);
    DAT_04567a02 = 1;
  }
  if (OPAEPDIIOEB == (BKLDKOMCOPN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (OPAEPDIIOEB->fields).MAHOIPBGLJJ;
  if (iVar1 == 4) {
    puVar2 = &StringLiteral_14639/*"UserCancelled"*/;
  }
  else {
    if (iVar1 == 6) goto LAB_0344befc;
    puVar2 = &StringLiteral_4592/*"Connection"*/;
  }
  method = (MethodInfo *)0x0;
  Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
            (__this,0x14,(HOOAAGABMBL_o *)0x0,(System_String_o *)*puVar2,in_x4);
  __this = extraout_x0;
LAB_0344befc:
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this,false,method);
  return;
}


// ===== private void IFJLJKGOHJD()  [RVA 0x334BF10]
// Nekki.SF2.GUI.Common.PaymentUI$$IFJLJKGOHJD @ RVA 0x334BF10

void Nekki_SF2_GUI_Common_PaymentUI__IFJLJKGOHJD
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this,false,in_x2);
  return;
}


// ===== public void .ctor()  [RVA 0x334BF18]
// Nekki.SF2.GUI.Common.PaymentUI$$.ctor @ RVA 0x334BF18

void Nekki_SF2_GUI_Common_PaymentUI___ctor
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a03 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567a03 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

