// TypeDefIndex 1021
// Namespace: 
// public class ADAHHFAPLLM : IDisposable, MDHCGLMBHIG, COFJGMCPLCC, PGHPINHICIC, POLKDIBEHFH, PILIGDMGJOI, MDNILNIEMEM, GBMABNPFHLG, FKIHKPEEMKG, ALFGOMLMGDI
// Fields:
//   private const string EMCAHJKINLL = "push_retention";
//   private const string JDECMGCPOOP = "push_periodic";
//   private const string AAOHDOCEJGE = "push_energy_to_fight";
//   private const string GHGCDAMHKEK = "push_full_energy";
//   private const string INBNAOOKJDI = "SeasonEndPush";
//   private const string DMOJBDCPNBE = "push_raid_daily_update";
//   private readonly CompositeDisposable BNAIPPCOGPE; // 0x10
//   private LNADBMOHMKN IOPFMDCMMLD; // 0x18
//   private EAPFCMCJBAG <EDHEHKIEMGP>k__BackingField; // 0x20
//   private bool <IOLEJLFICGM>k__BackingField; // 0x28
//   private bool <PBBKBJEHADE>k__BackingField; // 0x29
//   private static ADAHHFAPLLM CBDMFFMCJBK; // 0x0

// ===== private static string DDIBCCLLJLP()  [RVA 0x30C7DB4]
// ADAHHFAPLLM$$DDIBCCLLJLP @ RVA 0x30C7DB4

System_String_o * ADAHHFAPLLM__DDIBCCLLJLP(MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* catch() { ... } // from try @ 031c7bb8 with catch @ 031c7dc0 */
  if ((DAT_045662b9 & 1) == 0) {
                    /* catch() { ... } // from try @ 031c7c4c with catch @ 031c7dd0
                       catch() { ... } // from try @ 031c7d04 with catch @ 031c7dd0 */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    DAT_045662b9 = 1;
  }
                    /* try { // try from 031c7dec to 032c7def has its CatchHandler @ 031c7dfc */
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031c7dec with catch @ 031c7dfc */
  pSVar1 = UnityEngine_Application__get_productName((MethodInfo *)0x0);
  return pSVar1;
}


// ===== private bool NBFDEJPFNPO()  [RVA 0x30C7E04]
// ADAHHFAPLLM$$NBFDEJPFNPO @ RVA 0x30C7E04

bool ADAHHFAPLLM__NBFDEJPFNPO(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t GMGGINDHNPI;
  
  if ((__this->fields)._PBBKBJEHADE_k__BackingField != false) {
    return true;
  }
  GMGGINDHNPI = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar1 = GNAFJMPJNKI__KHIBBBCNMCJ(GMGGINDHNPI,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void MELBOCOFPGN()  [RVA 0x30C7E30]
// ADAHHFAPLLM$$MELBOCOFPGN @ RVA 0x30C7E30

void ADAHHFAPLLM__MELBOCOFPGN(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
                    /* try { // try from 031c7e34 to 032c7e5b has its CatchHandler @ 031c7e70 */
  ADAHHFAPLLM__JHDKCCOBBED(__this,0x20,in_x2);
  return;
}


// ===== public void IMCOANKDGKK(int JJCOHJLOBAI)  [RVA 0x30C7EF0]
// ADAHHFAPLLM$$IMCOANKDGKK @ RVA 0x30C7EF0

void ADAHHFAPLLM__IMCOANKDGKK(ADAHHFAPLLM_o *__this,int32_t JJCOHJLOBAI,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *arg0;
  System_String_o *NONPLOOOOAG;
  MethodInfo *in_x5;
  int32_t local_34;
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662ba & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_12876/*"Test1 notification, delaySeconds={0}"*/);
    DAT_045662ba = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  local_34 = JJCOHJLOBAI;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  NONPLOOOOAG = System_String__Format(StringLiteral_12876/*"Test1 notification, delaySeconds={0}"*/,arg0,(MethodInfo *)0x0);
  ADAHHFAPLLM__NFMANKNGJLM(__this,0x40,JEHFOBHMGJM,NONPLOOOOAG,JJCOHJLOBAI,in_x5);
  return;
}


// ===== public void MJJCEGIHEEG(string NONPLOOOOAG, int KDNLAOJBFMH)  [RVA 0x30C80F0]
// ADAHHFAPLLM$$MJJCEGIHEEG @ RVA 0x30C80F0

void ADAHHFAPLLM__MJJCEGIHEEG
               (ADAHHFAPLLM_o *__this,System_String_o *NONPLOOOOAG,int32_t KDNLAOJBFMH,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *JEHFOBHMGJM;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP((MethodInfo *)__this);
  bVar1 = ADAHHFAPLLM__NBFDEJPFNPO(__this,method_00);
  if (bVar1) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,0x20,JEHFOBHMGJM,NONPLOOOOAG,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}


// ===== public void JIOKHKDAFMN(int KDNLAOJBFMH)  [RVA 0x30C81AC]
// ADAHHFAPLLM$$JIOKHKDAFMN @ RVA 0x30C81AC

void ADAHHFAPLLM__JIOKHKDAFMN(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *NONPLOOOOAG;
  MethodInfo *in_x5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662bb & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_20346/*"push_periodic"*/);
    DAT_045662bb = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar2 = StringLiteral_20346/*"push_periodic"*/;
  if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = pIVar3->klass;
  uVar10 = **(undefined8 **)(lVar4 + 0xb8);
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar5 = pIVar7->vtable + (*piVar9 + 0xc);
        goto LAB_031c82e8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c82e8:
  NONPLOOOOAG = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar10,pVVar5->method);
  ADAHHFAPLLM__NFMANKNGJLM(__this,2,JEHFOBHMGJM,NONPLOOOOAG,KDNLAOJBFMH,in_x5);
  return;
}


// ===== private void GIMAJOGGBHM()  [RVA 0x30C8328]
// ADAHHFAPLLM$$GIMAJOGGBHM @ RVA 0x30C8328

void ADAHHFAPLLM__GIMAJOGGBHM(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  ADAHHFAPLLM_o *__this_00;
  EAPFCMCJBAG_o *pEVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  LNADBMOHMKN_o *pLVar7;
  MethodInfo *method_00;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  EAPFCMCJBAG_c *pEVar8;
  LNADBMOHMKN_c *pLVar9;
  ulong uVar10;
  int32_t *piVar11;
  EAPFCMCJBAG_o **ppEVar12;
  LNADBMOHMKN_o **ppLVar13;
  undefined1 auVar14 [16];
  
  if ((DAT_045662bc & 1) == 0) {
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<EAPFCMCJBAG>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<LNADBMOHMKN>__);
    FUN_01bab630(&EAPFCMCJBAG_TypeInfo);
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    FUN_01bab630(&StringLiteral_7529/*"Initialize"*/);
    DAT_045662bc = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529/*"Initialize"*/,(MethodInfo *)0x0);
  pEVar4 = ADAHHFAPLLM__MIJJAMJMNBD(__this_00,method_00);
  ppEVar12 = &(__this->fields)._EDHEHKIEMGP_k__BackingField;
  *ppEVar12 = pEVar4;
  thunk_FUN_01c20e04(ppEVar12,pEVar4);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x1;
  auVar14 = auVar3 << 0x40;
  if ((Il2CppObject *)*ppEVar12 != (Il2CppObject *)0x0) {
    pIVar5 = UniRx_DisposableExtensions__AddTo<object>
                       ((Il2CppObject *)*ppEVar12,
                        (System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                        Method_UniRx_DisposableExtensions_AddTo<EAPFCMCJBAG>__);
    auVar14._8_8_ = extraout_x1_00;
    auVar14._0_8_ = pIVar5;
    pEVar4 = (__this->fields)._EDHEHKIEMGP_k__BackingField;
    if (pEVar4 != (EAPFCMCJBAG_o *)0x0) {
      pEVar8 = pEVar4->klass;
      uVar1._0_1_ = (pEVar8->_2).rank;
      uVar1._1_1_ = (pEVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pEVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)EAPFCMCJBAG_TypeInfo) {
            pVVar6 = pEVar8->vtable + (*piVar11 + 2);
            goto LAB_031c8430;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pEVar4,EAPFCMCJBAG_TypeInfo,2);
LAB_031c8430:
      auVar14 = (*pVVar6->methodPtr)(pEVar4,pVVar6->method);
    }
  }
  pLVar7 = ADAHHFAPLLM__BOBEFJCOAIM(auVar14._0_8_,auVar14._8_8_);
  ppLVar13 = &(__this->fields).IOPFMDCMMLD;
  *ppLVar13 = pLVar7;
  thunk_FUN_01c20e04(ppLVar13,pLVar7);
  pLVar7 = *ppLVar13;
  if (pLVar7 != (LNADBMOHMKN_o *)0x0) {
    pLVar9 = pLVar7->klass;
    uVar2._0_1_ = (pLVar9->_2).rank;
    uVar2._1_1_ = (pLVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pLVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
          pVVar6 = pLVar9->vtable + (*piVar11 + 2);
          goto LAB_031c84b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pLVar7,LNADBMOHMKN_TypeInfo,2);
LAB_031c84b4:
    (*pVVar6->methodPtr)(pLVar7,pVVar6->method);
    if ((Il2CppObject *)*ppLVar13 != (Il2CppObject *)0x0) {
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)*ppLVar13,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).BNAIPPCOGPE,Method_UniRx_DisposableExtensions_AddTo<LNADBMOHMKN>__
                );
      return;
    }
  }
  return;
}


// ===== public static void EOHMFJFFFIN()  [RVA 0x30C8690]
// ADAHHFAPLLM$$EOHMFJFFFIN @ RVA 0x30C8690

void ADAHHFAPLLM__EOHMFJFFFIN(MethodInfo *method)

{
  ADAHHFAPLLM_o *pAVar1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_045662bd & 1) == 0) {
                    /* try { // try from 031c86ac to 032c86bf has its CatchHandler @ 031c87a0 */
    FUN_01bab630(&ADAHHFAPLLM_TypeInfo);
    DAT_045662bd = 1;
  }
                    /* try { // try from 031c86c4 to 032c86d3 has its CatchHandler @ 031c879c */
  if (ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK != (ADAHHFAPLLM_o *)0x0) {
    return;
  }
  auVar2 = thunk_FUN_01bda818();
  pAVar1 = auVar2._0_8_;
                    /* try { // try from 031c86e0 to 032c86ef has its CatchHandler @ 031c8798 */
  ADAHHFAPLLM___ctor(pAVar1,auVar2._8_8_);
  ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK = pAVar1;
                    /* try { // try from 031c86fc to 032c8703 has its CatchHandler @ 031c8790 */
  thunk_FUN_01c20e04(ADAHHFAPLLM_TypeInfo->static_fields,pAVar1);
                    /* try { // try from 031c8704 to 032c8787 has its CatchHandler @ 031c85f0 */
  pAVar1 = ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pAVar1 != (ADAHHFAPLLM_o *)0x0) {
    ADAHHFAPLLM__GIMAJOGGBHM(pAVar1,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PHHCOEIABJP()  [RVA 0x30C8798]
// ADAHHFAPLLM$$PHHCOEIABJP @ RVA 0x30C8798

void ADAHHFAPLLM__PHHCOEIABJP(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c86e0 with catch @ 031c8798
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c86c4 with catch @ 031c879c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031c8788 with catch @ 031c879c
                        */
  ADAHHFAPLLM__JHDKCCOBBED(__this,0x80,in_x2);
  return;
}


// ===== private void GILPCGGNBKI(EAPFCMCJBAG CJNHFNHJHPE)  [RVA 0x30C87A0]
// ADAHHFAPLLM$$GILPCGGNBKI @ RVA 0x30C87A0

void ADAHHFAPLLM__GILPCGGNBKI(ADAHHFAPLLM_o *__this,EAPFCMCJBAG_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c86ac with catch @ 031c87a0
                        */
  (__this->fields)._EDHEHKIEMGP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void Dispose()  [RVA 0x30C87A8]
// ADAHHFAPLLM$$Dispose @ RVA 0x30C87A8

void ADAHHFAPLLM__Dispose(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  LNADBMOHMKN_o **ppLVar1;
  
                    /* try { // try from 031c87b8 to 032c87bb has its CatchHandler @ 031c87d0 */
  if ((DAT_045662be & 1) == 0) {
                    /* catch() { ... } // from try @ 031c87b8 with catch @ 031c87d0 */
    FUN_01bab630(&StringLiteral_5422/*"Dispose"*/);
    DAT_045662be = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422/*"Dispose"*/,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    ppLVar1 = &(__this->fields).IOPFMDCMMLD;
    *ppLVar1 = (LNADBMOHMKN_o *)0x0;
                    /* try { // try from 031c8808 to 032c882f has its CatchHandler @ 031c8844 */
    thunk_FUN_01c20e04(ppLVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EAPFCMCJBAG ODAEAIGEOEB()  [RVA 0x30C8818]
// ADAHHFAPLLM$$ODAEAIGEOEB @ RVA 0x30C8818

EAPFCMCJBAG_o * ADAHHFAPLLM__ODAEAIGEOEB(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  return (__this->fields)._EDHEHKIEMGP_k__BackingField;
}


// ===== public void FJLPLLIFPHJ()  [RVA 0x30C8820]
// ADAHHFAPLLM$$FJLPLLIFPHJ @ RVA 0x30C8820

void ADAHHFAPLLM__FJLPLLIFPHJ(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,0x40,in_x2);
  return;
}


// ===== public void EJNEOPIGPEM(int KDNLAOJBFMH)  [RVA 0x30C8828]
// ADAHHFAPLLM$$EJNEOPIGPEM @ RVA 0x30C8828

void ADAHHFAPLLM__EJNEOPIGPEM(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *in_x5;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
                    /* try { // try from 031c8830 to 032c883b has its CatchHandler @ 031c85f0 */
                    /* try { // try from 031c883c to 032c8843 has its CatchHandler @ 031c8844 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c8808 with catch @ 031c8844
                       catch(type#2 @ 00000000) { ... } // from try @ 031c883c with catch @ 031c8844
                        */
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662bf & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_20347/*"push_raid_daily_update"*/);
    DAT_045662bf = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar5 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar2 = StringLiteral_20347/*"push_raid_daily_update"*/;
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar8 = pIVar4->klass;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  uVar1._0_1_ = (pIVar8->_2).rank;
  uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
        goto LAB_031c8964;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c8964:
  auVar12 = (*pVVar6->methodPtr)(pIVar4,uVar2,uVar11,pVVar6->method);
  bVar3 = ADAHHFAPLLM__NBFDEJPFNPO(__this,auVar12._8_8_);
  if (bVar3) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,0x200,JEHFOBHMGJM,auVar12._0_8_,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}


// ===== public void NKLLGDDNKNE(bool CJNHFNHJHPE)  [RVA 0x30C89C8]
// ADAHHFAPLLM$$NKLLGDDNKNE @ RVA 0x30C89C8

void ADAHHFAPLLM__NKLLGDDNKNE(ADAHHFAPLLM_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IOLEJLFICGM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void ALDOBGPGOJK(string NONPLOOOOAG, int KDNLAOJBFMH)  [RVA 0x30C89D4]
// ADAHHFAPLLM$$ALDOBGPGOJK @ RVA 0x30C89D4

void ADAHHFAPLLM__ALDOBGPGOJK
               (ADAHHFAPLLM_o *__this,System_String_o *NONPLOOOOAG,int32_t KDNLAOJBFMH,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *JEHFOBHMGJM;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP((MethodInfo *)__this);
  bVar1 = ADAHHFAPLLM__NBFDEJPFNPO(__this,method_00);
  if (bVar1) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,0x10,JEHFOBHMGJM,NONPLOOOOAG,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}


// ===== public static MDHCGLMBHIG AIHNLLGNBLC()  [RVA 0x30C8A34]
// ADAHHFAPLLM$$AIHNLLGNBLC @ RVA 0x30C8A34

MDHCGLMBHIG_o * ADAHHFAPLLM__AIHNLLGNBLC(MethodInfo *method)

{
  if ((DAT_045662c0 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&ADAHHFAPLLM_TypeInfo);
    DAT_045662c0 = 1;
  }
  ADAHHFAPLLM__EOHMFJFFFIN(method);
  return (MDHCGLMBHIG_o *)ADAHHFAPLLM_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public bool DBAPDFIILLA()  [RVA 0x30C8A80]
// ADAHHFAPLLM$$DBAPDFIILLA @ RVA 0x30C8A80

bool ADAHHFAPLLM__DBAPDFIILLA(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  return (__this->fields)._PBBKBJEHADE_k__BackingField;
}


// ===== public void DCIFPFIPGFD()  [RVA 0x30C8A88]
// ADAHHFAPLLM$$DCIFPFIPGFD @ RVA 0x30C8A88

void ADAHHFAPLLM__DCIFPFIPGFD(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LNADBMOHMKN_c *pLVar3;
  ulong uVar4;
  int32_t *piVar5;
  LNADBMOHMKN_o *pLVar6;
  
  if ((DAT_045662c1 & 1) == 0) {
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    DAT_045662c1 = 1;
  }
  if (((__this->fields)._IOLEJLFICGM_k__BackingField == false) ||
     (pLVar6 = (__this->fields).IOPFMDCMMLD, pLVar6 == (LNADBMOHMKN_o *)0x0)) {
    return;
  }
  pLVar3 = pLVar6->klass;
  uVar1._0_1_ = (pLVar3->_2).rank;
  uVar1._1_1_ = (pLVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pLVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
        pVVar2 = pLVar3->vtable + (*piVar5 + 3);
        goto LAB_031c8b28;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pLVar6,LNADBMOHMKN_TypeInfo,3);
LAB_031c8b28:
                    /* WARNING: Could not recover jumptable at 0x031c8b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pLVar6,pVVar2->method);
  return;
}


// ===== private void JHDKCCOBBED(int OGPGLGPMEPD)  [RVA 0x30C7E38]
// ADAHHFAPLLM$$JHDKCCOBBED @ RVA 0x30C7E38

void ADAHHFAPLLM__JHDKCCOBBED(ADAHHFAPLLM_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  LNADBMOHMKN_c *pLVar3;
  ulong uVar4;
  int32_t *piVar5;
  LNADBMOHMKN_o *pLVar6;
  
  if ((DAT_045662c2 & 1) == 0) {
                    /* try { // try from 031c7e5c to 032c7e67 has its CatchHandler @ 031c7af8 */
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    DAT_045662c2 = 1;
  }
                    /* try { // try from 031c7e68 to 032c7e6f has its CatchHandler @ 031c7e70 */
                    /* catch() { ... } // from try @ 031c7d7c with catch @ 031c7e70
                       catch() { ... } // from try @ 031c7e34 with catch @ 031c7e70
                       catch() { ... } // from try @ 031c7e68 with catch @ 031c7e70 */
  if (((__this->fields)._IOLEJLFICGM_k__BackingField == false) ||
     (pLVar6 = (__this->fields).IOPFMDCMMLD, pLVar6 == (LNADBMOHMKN_o *)0x0)) {
    return;
  }
  pLVar3 = pLVar6->klass;
  uVar1._0_1_ = (pLVar3->_2).rank;
  uVar1._1_1_ = (pLVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pLVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
        pVVar2 = pLVar3->vtable + *piVar5;
        goto LAB_031c7ed8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pLVar6,LNADBMOHMKN_TypeInfo,0);
LAB_031c7ed8:
                    /* WARNING: Could not recover jumptable at 0x031c7eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pLVar6,(ulong)(uint)OGPGLGPMEPD,pVVar2->method);
  return;
}


// ===== public void PDBOOKOFGDG(int KDNLAOJBFMH)  [RVA 0x30C8B3C]
// ADAHHFAPLLM$$PDBOOKOFGDG @ RVA 0x30C8B3C

void ADAHHFAPLLM__PDBOOKOFGDG(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *in_x5;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662c3 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_11758/*"SeasonEndPush"*/);
    DAT_045662c3 = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar5 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar2 = StringLiteral_11758/*"SeasonEndPush"*/;
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar8 = pIVar4->klass;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  uVar1._0_1_ = (pIVar8->_2).rank;
  uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
        goto LAB_031c8c78;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c8c78:
  auVar12 = (*pVVar6->methodPtr)(pIVar4,uVar2,uVar11,pVVar6->method);
  bVar3 = ADAHHFAPLLM__NBFDEJPFNPO(__this,auVar12._8_8_);
  if (bVar3) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,0x80,JEHFOBHMGJM,auVar12._0_8_,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}


// ===== public void DMNEKAHOKLK()  [RVA 0x30C8CDC]
// ADAHHFAPLLM$$DMNEKAHOKLK @ RVA 0x30C8CDC

void ADAHHFAPLLM__DMNEKAHOKLK(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,1,in_x2);
  return;
}


// ===== public void BNGCPBNDGAE()  [RVA 0x30C8CE4]
// ADAHHFAPLLM$$BNGCPBNDGAE @ RVA 0x30C8CE4

void ADAHHFAPLLM__BNGCPBNDGAE(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,8,in_x2);
  return;
}


// ===== public void FBJBJPFPNFE()  [RVA 0x30C8CEC]
// ADAHHFAPLLM$$FBJBJPFPNFE @ RVA 0x30C8CEC

void ADAHHFAPLLM__FBJBJPFPNFE(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,0x200,in_x2);
  return;
}


// ===== public static void DGLJCGNHLIG()  [RVA 0x30C8CF4]
// ADAHHFAPLLM$$DGLJCGNHLIG @ RVA 0x30C8CF4

void ADAHHFAPLLM__DGLJCGNHLIG(MethodInfo *method)

{
  MethodInfo *in_x1;
  MethodInfo *extraout_x1;
  ADAHHFAPLLM_StaticFields *pAVar1;
  
  if ((DAT_045662c4 & 1) == 0) {
    FUN_01bab630(&ADAHHFAPLLM_TypeInfo);
    DAT_045662c4 = 1;
    in_x1 = extraout_x1;
  }
  pAVar1 = ADAHHFAPLLM_TypeInfo->static_fields;
  if (pAVar1->CBDMFFMCJBK != (ADAHHFAPLLM_o *)0x0) {
    ADAHHFAPLLM__Dispose(pAVar1->CBDMFFMCJBK,in_x1);
    pAVar1 = ADAHHFAPLLM_TypeInfo->static_fields;
  }
  pAVar1->CBDMFFMCJBK = (ADAHHFAPLLM_o *)0x0;
  thunk_FUN_01c20e04(ADAHHFAPLLM_TypeInfo->static_fields,0);
  return;
}


// ===== public void OAAOPHNOEJG(bool CJNHFNHJHPE)  [RVA 0x30C8D5C]
// ADAHHFAPLLM$$OAAOPHNOEJG @ RVA 0x30C8D5C

void ADAHHFAPLLM__OAAOPHNOEJG(ADAHHFAPLLM_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PBBKBJEHADE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void CPFOGHBPECP(int KDNLAOJBFMH)  [RVA 0x30C8D68]
// ADAHHFAPLLM$$CPFOGHBPECP @ RVA 0x30C8D68

void ADAHHFAPLLM__CPFOGHBPECP(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *in_x5;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662c5 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_20344/*"push_energy_to_fight"*/);
    DAT_045662c5 = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar5 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar2 = StringLiteral_20344/*"push_energy_to_fight"*/;
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar8 = pIVar4->klass;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  uVar1._0_1_ = (pIVar8->_2).rank;
  uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
        goto LAB_031c8ea4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c8ea4:
  auVar12 = (*pVVar6->methodPtr)(pIVar4,uVar2,uVar11,pVVar6->method);
  bVar3 = ADAHHFAPLLM__NBFDEJPFNPO(__this,auVar12._8_8_);
  if (bVar3) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,4,JEHFOBHMGJM,auVar12._0_8_,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}


// ===== public void CEFCLMADFOK(int KDNLAOJBFMH)  [RVA 0x30C8F08]
// ADAHHFAPLLM$$CEFCLMADFOK @ RVA 0x30C8F08

void ADAHHFAPLLM__CEFCLMADFOK(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *NONPLOOOOAG;
  MethodInfo *in_x5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_20348/*"push_retention"*/);
    DAT_045662c6 = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar2 = StringLiteral_20348/*"push_retention"*/;
  if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = pIVar3->klass;
  uVar10 = **(undefined8 **)(lVar4 + 0xb8);
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar5 = pIVar7->vtable + (*piVar9 + 0xc);
        goto LAB_031c9044;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c9044:
  NONPLOOOOAG = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,uVar10,pVVar5->method);
  ADAHHFAPLLM__NFMANKNGJLM(__this,1,JEHFOBHMGJM,NONPLOOOOAG,KDNLAOJBFMH,in_x5);
  return;
}


// ===== public void NOKJGALBPBC()  [RVA 0x30C9084]
// ADAHHFAPLLM$$NOKJGALBPBC @ RVA 0x30C9084

void ADAHHFAPLLM__NOKJGALBPBC(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,2,in_x2);
  return;
}


// ===== private void NFMANKNGJLM(int OGPGLGPMEPD, string JEHFOBHMGJM, string NONPLOOOOAG, int KDNLAOJBFMH)  [RVA 0x30C7F9C]
// ADAHHFAPLLM$$NFMANKNGJLM @ RVA 0x30C7F9C

void ADAHHFAPLLM__NFMANKNGJLM
               (ADAHHFAPLLM_o *__this,int32_t OGPGLGPMEPD,System_String_o *JEHFOBHMGJM,
               System_String_o *NONPLOOOOAG,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  LNADBMOHMKN_c *pLVar4;
  ulong uVar5;
  int32_t *piVar6;
  LNADBMOHMKN_o *pLVar7;
  
  if ((DAT_045662c7 & 1) == 0) {
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    DAT_045662c7 = 1;
  }
  if (((__this->fields)._IOLEJLFICGM_k__BackingField != false) &&
     (pLVar7 = (__this->fields).IOPFMDCMMLD, pLVar7 != (LNADBMOHMKN_o *)0x0)) {
    pLVar4 = pLVar7->klass;
    uVar1._0_1_ = (pLVar4->_2).rank;
    uVar1._1_1_ = (pLVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pLVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
          pVVar3 = pLVar4->vtable + *piVar6;
          goto LAB_031c8044;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pLVar7,LNADBMOHMKN_TypeInfo,0);
LAB_031c8044:
    (*pVVar3->methodPtr)(pLVar7,(ulong)(uint)OGPGLGPMEPD,pVVar3->method);
    pLVar7 = (__this->fields).IOPFMDCMMLD;
    if (pLVar7 != (LNADBMOHMKN_o *)0x0) {
      pLVar4 = pLVar7->klass;
      uVar2._0_1_ = (pLVar4->_2).rank;
      uVar2._1_1_ = (pLVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar2;
      if (uVar5 != 0) {
        piVar6 = &((pLVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
            pVVar3 = pLVar4->vtable + (*piVar6 + 1);
            goto LAB_031c80c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pLVar7,LNADBMOHMKN_TypeInfo,1);
LAB_031c80c4:
                    /* WARNING: Could not recover jumptable at 0x031c80ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)
                (pLVar7,(ulong)(uint)OGPGLGPMEPD,JEHFOBHMGJM,NONPLOOOOAG,(long)KDNLAOJBFMH,
                 pVVar3->method);
      return;
    }
  }
  return;
}


// ===== private EAPFCMCJBAG MIJJAMJMNBD()  [RVA 0x30C84F0]
// ADAHHFAPLLM$$MIJJAMJMNBD @ RVA 0x30C84F0

EAPFCMCJBAG_o * ADAHHFAPLLM__MIJJAMJMNBD(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KPLJFEEMAOH_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662c8 & 1) == 0) {
    FUN_01bab630(&AJNFLEPFBJG_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&KPLJFEEMAOH_TypeInfo);
    DAT_045662c8 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 == 0xb) {
    __this_00 = (KPLJFEEMAOH_o *)thunk_FUN_01bda818(KPLJFEEMAOH_TypeInfo);
    KPLJFEEMAOH___ctor(__this_00,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (KPLJFEEMAOH_o *)thunk_FUN_01bda818(AJNFLEPFBJG_TypeInfo);
    AJNFLEPFBJG___ctor((AJNFLEPFBJG_o *)__this_00,(MethodInfo *)0x0);
  }
  return (EAPFCMCJBAG_o *)__this_00;
}


// ===== public void MLMHEMFFIOO()  [RVA 0x30C908C]
// ADAHHFAPLLM$$MLMHEMFFIOO @ RVA 0x30C908C

void ADAHHFAPLLM__MLMHEMFFIOO(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,0x10,in_x2);
  return;
}


// ===== public void JJHEBAGGEFK()  [RVA 0x30C9094]
// ADAHHFAPLLM$$JJHEBAGGEFK @ RVA 0x30C9094

void ADAHHFAPLLM__JJHEBAGGEFK(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  ADAHHFAPLLM__JHDKCCOBBED(__this,8,in_x2);
  return;
}


// ===== public void .ctor()  [RVA 0x30C8724]
// ADAHHFAPLLM$$.ctor @ RVA 0x30C8724

void ADAHHFAPLLM___ctor(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662c9 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_045662c9 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BNAIPPCOGPE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  (__this->fields)._IOLEJLFICGM_k__BackingField = true;
                    /* try { // try from 031c8788 to 032c878b has its CatchHandler @ 031c879c */
                    /* try { // try from 031c878c to 032c878f has its CatchHandler @ 031c8794 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c86fc with catch @ 031c8790
                       try { // try from 031c8790 to 032c87b7 has its CatchHandler @ 031c85f0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031c878c with catch @ 031c8794
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private LNADBMOHMKN BOBEFJCOAIM()  [RVA 0x30C85A8]
// ADAHHFAPLLM$$BOBEFJCOAIM @ RVA 0x30C85A8

LNADBMOHMKN_o * ADAHHFAPLLM__BOBEFJCOAIM(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  FDFGGHMGLIB_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662ca & 1) == 0) {
    FUN_01bab630(&ABIIOMHCLOI_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&FDFGGHMGLIB_TypeInfo);
                    /* try { // try from 031c85f0 to 032c86ab has its CatchHandler @ 031c85f0
                       catch() { ... } // from try @ 031c85f0 with catch @ 031c85f0
                       catch() { ... } // from try @ 031c8704 with catch @ 031c85f0
                       catch() { ... } // from try @ 031c8790 with catch @ 031c85f0
                       catch() { ... } // from try @ 031c8830 with catch @ 031c85f0 */
    FUN_01bab630(&JJHOKPKFIIO_TypeInfo);
    DAT_045662ca = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 == 0xb) {
    __this_00 = (FDFGGHMGLIB_o *)thunk_FUN_01bda818(FDFGGHMGLIB_TypeInfo);
    FDFGGHMGLIB___ctor(__this_00,(MethodInfo *)0x0);
  }
  else if (iVar1 == 8) {
    __this_00 = (FDFGGHMGLIB_o *)thunk_FUN_01bda818(JJHOKPKFIIO_TypeInfo);
    JJHOKPKFIIO___ctor((JJHOKPKFIIO_o *)__this_00,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (FDFGGHMGLIB_o *)thunk_FUN_01bda818(ABIIOMHCLOI_TypeInfo);
    ABIIOMHCLOI___ctor((ABIIOMHCLOI_o *)__this_00,(MethodInfo *)0x0);
  }
  return (LNADBMOHMKN_o *)__this_00;
}


// ===== public void ILJDNMOOHDF(int KDNLAOJBFMH)  [RVA 0x30C909C]
// ADAHHFAPLLM$$ILJDNMOOHDF @ RVA 0x30C909C

void ADAHHFAPLLM__ILJDNMOOHDF(ADAHHFAPLLM_o *__this,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  MethodInfo *method_00;
  System_String_o *JEHFOBHMGJM;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *in_x5;
  long lVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  method_00 = (MethodInfo *)__this;
  if ((DAT_045662cb & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_20345/*"push_full_energy"*/);
    DAT_045662cb = 1;
  }
  JEHFOBHMGJM = ADAHHFAPLLM__DDIBCCLLJLP(method_00);
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  lVar7 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar7 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar7 = *(long *)(lVar5 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01b81620();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01b81620();
  }
  uVar2 = StringLiteral_20345/*"push_full_energy"*/;
  if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar8 = pIVar4->klass;
  uVar11 = **(undefined8 **)(lVar5 + 0xb8);
  uVar1._0_1_ = (pIVar8->_2).rank;
  uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar6 = pIVar8->vtable + (*piVar10 + 0xc);
        goto LAB_031c91d8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031c91d8:
  auVar12 = (*pVVar6->methodPtr)(pIVar4,uVar2,uVar11,pVVar6->method);
  bVar3 = ADAHHFAPLLM__NBFDEJPFNPO(__this,auVar12._8_8_);
  if (bVar3) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,8,JEHFOBHMGJM,auVar12._0_8_,KDNLAOJBFMH,in_x5);
    return;
  }
  return;
}


// ===== public bool HDAIMFCCHBD()  [RVA 0x30C923C]
// ADAHHFAPLLM$$HDAIMFCCHBD @ RVA 0x30C923C

bool ADAHHFAPLLM__HDAIMFCCHBD(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  return (__this->fields)._IOLEJLFICGM_k__BackingField;
}


// ===== private void KGJELJGOBAB(int OGPGLGPMEPD, string JEHFOBHMGJM, string NONPLOOOOAG, int KDNLAOJBFMH)  [RVA 0x30C8150]
// ADAHHFAPLLM$$KGJELJGOBAB @ RVA 0x30C8150

void ADAHHFAPLLM__KGJELJGOBAB
               (ADAHHFAPLLM_o *__this,int32_t OGPGLGPMEPD,System_String_o *JEHFOBHMGJM,
               System_String_o *NONPLOOOOAG,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = ADAHHFAPLLM__NBFDEJPFNPO(__this,(MethodInfo *)(ulong)(uint)OGPGLGPMEPD);
  if (bVar1) {
    ADAHHFAPLLM__NFMANKNGJLM(__this,OGPGLGPMEPD,JEHFOBHMGJM,NONPLOOOOAG,KDNLAOJBFMH,method);
    return;
  }
  return;
}

