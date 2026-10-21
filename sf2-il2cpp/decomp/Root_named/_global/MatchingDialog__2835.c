// Original name: .MatchingDialog  (obfuscated MatchingDialog)
// TypeDefIndex 2835
// Namespace: 
// public class MatchingDialog : RaidBaseDialog
// Fields:
//   private const string EIGHKOMLLFM = "UI/Atlases/RaidHourGlassDrip";
//   private const string AAMHJGHADEJ = "UI/Atlases/RaidHourGlassRot";
//   private const float HDOFPANNGEE = 0.08;
//   private const float PPLBJOPNEPD = 0.04;
//   private const int BKIBCMKGIHP = 2;
//   private const float HJICMPDFBJN = 0.25;
//   private const string JAAMFAFECGB = "raids_matching";
//   private const string LHBPHKPILNP = "menu";
//   private const int PLLBNKMGADM = 115;
//   private CocosAnimation _hourGlassEffect; // 0xC8
//   private LabelAlias _matchingLabel; // 0xD0
//   private int MDCOHPFPCPE; // 0xD8
//   private readonly List<string> NFJLMMIKCFN; // 0xE0
//   private string AOGMHFBMOLC; // 0xE8
//   private float KAAABFPMLCH; // 0xF0
//   private IEnumerator PHELMNCGAKF; // 0xF8
//   private IEnumerator MMODCAPKNDF; // 0x100
//   private IEnumerator NDMPDEEBOHL; // 0x108
//   private static CBOEGGBIJMD OCDOOJLNNAL; // 0x0
//   private uint NDOHFCNNKFA; // 0x110
//   private uint JBMHJLNACKE; // 0x114
//   private uint BEKILJPCMCH; // 0x118

// ===== private void BCINOFNDIAB()  [RVA 0x342C148]
// MatchingDialog$$BCINOFNDIAB @ RVA 0x342C148

void MatchingDialog__BCINOFNDIAB(MatchingDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Exception_o *__this_00;
  undefined8 uVar4;
  MethodInfo *method_00;
  CocosAnimation_o *pCVar5;
  System_String_o *str1;
  System_String_o **ppSVar6;
  float fVar7;
  
  if ((DAT_04568146 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14095/*"UI/Atlases/RaidHourGlassRot"*/);
    FUN_01bab630(&StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/);
    DAT_04568146 = 1;
  }
  ppSVar6 = &(__this->fields).AOGMHFBMOLC;
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/,(MethodInfo *)0x0);
  puVar1 = &StringLiteral_14095/*"UI/Atlases/RaidHourGlassRot"*/;
  if (!bVar2) {
    puVar1 = &StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/;
  }
  *ppSVar6 = (System_String_o *)*puVar1;
  thunk_FUN_01c20e04(ppSVar6);
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/,(MethodInfo *)0x0);
  pCVar5 = (__this->fields)._hourGlassEffect;
  fVar7 = 0.08;
  if (!bVar2) {
    fVar7 = 0.04;
  }
  (__this->fields).KAAABFPMLCH = fVar7;
  if (pCVar5 != (CocosAnimation_o *)0x0) {
    bVar2 = CocosAnimation__Init(pCVar5,*ppSVar6,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      str1 = *ppSVar6;
      pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5958/*"Error: animation not found: "*/);
      pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      System_Exception___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
      uVar4 = thunk_FUN_01bb9178(&Method_MatchingDialog_EGDHNJGMPLM__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar4);
    }
    pCVar5 = (__this->fields)._hourGlassEffect;
    if (pCVar5 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFramesRange(pCVar5,0,-1,(MethodInfo *)0x0);
      pCVar5 = (__this->fields)._hourGlassEffect;
      if (pCVar5 != (CocosAnimation_o *)0x0) {
        (pCVar5->fields)._PPEGDOHGLJJ_k__BackingField = (__this->fields).KAAABFPMLCH;
        MatchingDialog__KOBMELKNNLE(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Close()  [RVA 0x342C2AC]
// MatchingDialog$$Close @ RVA 0x342C2AC

void MatchingDialog__Close(MatchingDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  RaidManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568141 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19657/*"menu"*/);
    FUN_01bab630(&StringLiteral_20428/*"raids_matching"*/);
    DAT_04568141 = 1;
    method = extraout_x1;
  }
  MatchingDialog__DAKEBOMPALG(__this,method);
  MatchingDialog__DILGDEAECBG(__this,method_00);
  MatchingDialog__OJCPMPCFPJM(__this,method_01);
  MatchingDialog__JCAAAJGAFIH(__this,method_02);
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
  if (bVar1) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_0456647a == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_0456647a = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_String__op_Equality
                      (PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField,
                       StringLiteral_20428/*"raids_matching"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
                    /* try { // try from 0352c3d4 to 0362c3db has its CatchHandler @ 0352c674 */
      PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_19657/*"menu"*/,true,(MethodInfo *)0x0);
    }
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
                    /* try { // try from 0352c408 to 0362c40f has its CatchHandler @ 0352c65c */
                    /* try { // try from 0352c414 to 0362c41b has its CatchHandler @ 0352c654 */
    RaidManager__GMHKJNAIEAG(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OJCPMPCFPJM()  [RVA 0x342C5D4]
// MatchingDialog$$OJCPMPCFPJM @ RVA 0x342C5D4

void MatchingDialog__OJCPMPCFPJM(MatchingDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 0352c5e4 to 0362c5e7 has its CatchHandler @ 0352c670 */
                    /* try { // try from 0352c5e8 to 0362c5eb has its CatchHandler @ 0352c66c */
  if ((DAT_04568142 & 1) == 0) {
                    /* try { // try from 0352c5ec to 0362c5ef has its CatchHandler @ 0352c668 */
                    /* try { // try from 0352c5f0 to 0362c5f3 has its CatchHandler @ 0352c660 */
                    /* try { // try from 0352c5f4 to 0362c5f7 has its CatchHandler @ 0352c658 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0352c5f8 to 0362c5fb has its CatchHandler @ 0352c64c */
                    /* try { // try from 0352c5fc to 0362c5ff has its CatchHandler @ 0352c644 */
    DAT_04568142 = 1;
  }
                    /* try { // try from 0352c600 to 0362c603 has its CatchHandler @ 0352c640 */
                    /* try { // try from 0352c604 to 0362c607 has its CatchHandler @ 0352c634 */
  if ((__this->fields).NDMPDEEBOHL == (System_Collections_IEnumerator_o *)0x0) {
                    /* catch() { ... } // from try @ 0352c5ec with catch @ 0352c668 */
                    /* catch() { ... } // from try @ 0352c5e8 with catch @ 0352c66c */
                    /* catch() { ... } // from try @ 0352c5e4 with catch @ 0352c670 */
    return;
  }
                    /* try { // try from 0352c608 to 0362c60b has its CatchHandler @ 0352c62c */
                    /* try { // try from 0352c60c to 0362c613 has its CatchHandler @ 0352c638 */
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0352c614 to 0362c68b has its CatchHandler @ 0352c2a8 */
                    /* catch() { ... } // from try @ 0352c44c with catch @ 0352c618 */
  pPVar5 = pPVar3->klass;
                    /* catch() { ... } // from try @ 0352c450 with catch @ 0352c61c */
                    /* catch() { ... } // from try @ 0352c510 with catch @ 0352c620 */
  ppSVar1 = &(__this->fields).NDMPDEEBOHL;
                    /* catch() { ... } // from try @ 0352c490 with catch @ 0352c624 */
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0352c4a4 with catch @ 0352c628 */
  uVar6 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 0352c608 with catch @ 0352c62c */
                    /* catch() { ... } // from try @ 0352c4c0 with catch @ 0352c630 */
                    /* catch() { ... } // from try @ 0352c604 with catch @ 0352c634 */
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 0352c60c with catch @ 0352c638 */
                    /* catch() { ... } // from try @ 0352c4b0 with catch @ 0352c63c */
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0352c600 with catch @ 0352c640 */
                    /* catch() { ... } // from try @ 0352c5fc with catch @ 0352c644 */
                    /* catch() { ... } // from try @ 0352c484 with catch @ 0352c648 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 0352c3d4 with catch @ 0352c674 */
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_0352c684;
      }
                    /* catch() { ... } // from try @ 0352c5f8 with catch @ 0352c64c */
      uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 0352c424 with catch @ 0352c650 */
      piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0352c414 with catch @ 0352c654 */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 0352c5f4 with catch @ 0352c658 */
                    /* catch() { ... } // from try @ 0352c408 with catch @ 0352c65c */
                    /* catch() { ... } // from try @ 0352c5f0 with catch @ 0352c660 */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 0352c588 with catch @ 0352c664 */
LAB_0352c684:
                    /* try { // try from 0352c68c to 0362c68f has its CatchHandler @ 0352c6b0 */
                    /* try { // try from 0352c690 to 0362c6b7 has its CatchHandler @ 0352c2a8 */
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== private static void .cctor()  [RVA 0x342C6B4]
// MatchingDialog$$.cctor @ RVA 0x342C6B4

void MatchingDialog___cctor(MethodInfo *method)

{
  CBOEGGBIJMD_o *__this;
  
                    /* try { // try from 0352c6b8 to 0362c6cb has its CatchHandler @ 0352c730 */
                    /* catch() { ... } // from try @ 0352c56c with catch @ 0352c6cc
                       try { // try from 0352c6cc to 0362c6e7 has its CatchHandler @ 0352c2a8 */
                    /* catch() { ... } // from try @ 0352c59c with catch @ 0352c6d0 */
  if ((DAT_04568143 & 1) == 0) {
    FUN_01bab630(&CBOEGGBIJMD_TypeInfo);
                    /* try { // try from 0352c6e8 to 0362c6eb has its CatchHandler @ 0352c70c */
                    /* try { // try from 0352c6ec to 0362c713 has its CatchHandler @ 0352c2a8 */
    FUN_01bab630(&MatchingDialog_TypeInfo);
    DAT_04568143 = 1;
  }
  __this = (CBOEGGBIJMD_o *)thunk_FUN_01bda818(CBOEGGBIJMD_TypeInfo);
  CBOEGGBIJMD___ctor(__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0352c6e8 with catch @ 0352c70c */
                    /* try { // try from 0352c714 to 0362c71b has its CatchHandler @ 0352c730 */
  MatchingDialog_TypeInfo->static_fields->OCDOOJLNNAL = __this;
                    /* try { // try from 0352c71c to 0362c727 has its CatchHandler @ 0352c2a8 */
                    /* try { // try from 0352c728 to 0362c72f has its CatchHandler @ 0352c730 */
  thunk_FUN_01c20e04(MatchingDialog_TypeInfo->static_fields,__this);
  return;
}


// ===== private void KOBMELKNNLE()  [RVA 0x342C730]
// MatchingDialog$$KOBMELKNNLE @ RVA 0x342C730

void MatchingDialog__KOBMELKNNLE(MatchingDialog_o *__this,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  
                    /* catch() { ... } // from try @ 0352c6b8 with catch @ 0352c730
                       catch() { ... } // from try @ 0352c714 with catch @ 0352c730
                       catch() { ... } // from try @ 0352c728 with catch @ 0352c730 */
  pCVar1 = (__this->fields)._hourGlassEffect;
  if (pCVar1 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFirstFrame(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._hourGlassEffect;
    if (pCVar1 != (CocosAnimation_o *)0x0) {
      (pCVar1->fields)._FEBBHCOAEMI_k__BackingField = 1;
      (pCVar1->fields)._NOAJIBNJKPE_k__BackingField = true;
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x342C77C]
// MatchingDialog$$IGDDKJJMDLP @ RVA 0x342C77C

void MatchingDialog__IGDDKJJMDLP(MatchingDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void NACPAPBGMEB(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x342C780]
// MatchingDialog$$NACPAPBGMEB @ RVA 0x342C780

void MatchingDialog__NACPAPBGMEB
               (MatchingDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  return;
}


// ===== public override void OnClose(object IMMNELPBGIF)  [RVA 0x342C784]
// MatchingDialog$$OnClose @ RVA 0x342C784

void MatchingDialog__OnClose(MatchingDialog_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  RaidManager_o *__this_00;
  Il2CppObject *extraout_x1;
  
  if ((DAT_04568144 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568144 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
    RaidManager__GMHKJNAIEAG(__this_00,true,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0352c7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LGMIPDOLEBO()  [RVA 0x342C788]
// MatchingDialog$$LGMIPDOLEBO @ RVA 0x342C788

void MatchingDialog__LGMIPDOLEBO(MatchingDialog_o *__this,MethodInfo *method)

{
  RaidManager_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568144 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568144 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
    RaidManager__GMHKJNAIEAG(__this_00,true,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0352c7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DAKEBOMPALG()  [RVA 0x342C420]
// MatchingDialog$$DAKEBOMPALG @ RVA 0x342C420

void MatchingDialog__DAKEBOMPALG(MatchingDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 0352c424 to 0362c42f has its CatchHandler @ 0352c650 */
  if ((DAT_04568145 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568145 = 1;
  }
  ppSVar7 = &(__this->fields).PHELMNCGAKF;
                    /* try { // try from 0352c44c to 0362c44f has its CatchHandler @ 0352c618 */
                    /* try { // try from 0352c450 to 0362c457 has its CatchHandler @ 0352c61c */
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* try { // try from 0352c4b0 to 0362c4b7 has its CatchHandler @ 0352c63c */
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 0352c484 to 0362c48b has its CatchHandler @ 0352c648 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0352c490 to 0362c497 has its CatchHandler @ 0352c624 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0352c4c0 to 0362c4cf has its CatchHandler @ 0352c630 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0352c4cc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 0352c4a4 to 0362c4ab has its CatchHandler @ 0352c628 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0352c4cc:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void EGDHNJGMPLM()  [RVA 0x342C14C]
// MatchingDialog$$EGDHNJGMPLM @ RVA 0x342C14C

void MatchingDialog__EGDHNJGMPLM(MatchingDialog_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Exception_o *__this_00;
  undefined8 uVar4;
  MethodInfo *method_00;
  CocosAnimation_o *pCVar5;
  System_String_o *str1;
  System_String_o **ppSVar6;
  float fVar7;
  
  if ((DAT_04568146 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14095/*"UI/Atlases/RaidHourGlassRot"*/);
                    /* try { // try from 0352c184 to 0362c187 has its CatchHandler @ 0352c194 */
                    /* try { // try from 0352c188 to 0362c18b has its CatchHandler @ 0352c190 */
                    /* try { // try from 0352c18c to 0362c1af has its CatchHandler @ 0352c070 */
    FUN_01bab630(&StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c188 with catch @ 0352c190
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c184 with catch @ 0352c194
                        */
    DAT_04568146 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c108 with catch @ 0352c198
                        */
  ppSVar6 = &(__this->fields).AOGMHFBMOLC;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0352c124 with catch @ 0352c19c
                        */
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/,(MethodInfo *)0x0);
  puVar1 = &StringLiteral_14095/*"UI/Atlases/RaidHourGlassRot"*/;
                    /* try { // try from 0352c1b0 to 0362c1b3 has its CatchHandler @ 0352c1d8 */
  if (!bVar2) {
    puVar1 = &StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/;
  }
                    /* try { // try from 0352c1b4 to 0362c1df has its CatchHandler @ 0352c070 */
  *ppSVar6 = (System_String_o *)*puVar1;
  thunk_FUN_01c20e04(ppSVar6);
  bVar2 = System_String__op_Equality(*ppSVar6,StringLiteral_14094/*"UI/Atlases/RaidHourGlassDrip"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0352c1b0 with catch @ 0352c1d8 */
                    /* try { // try from 0352c1e0 to 0362c1e7 has its CatchHandler @ 0352c200 */
  pCVar5 = (__this->fields)._hourGlassEffect;
  fVar7 = 0.08;
                    /* try { // try from 0352c1e8 to 0362c1f7 has its CatchHandler @ 0352c070 */
  if (!bVar2) {
    fVar7 = 0.04;
  }
  (__this->fields).KAAABFPMLCH = fVar7;
  if (pCVar5 != (CocosAnimation_o *)0x0) {
                    /* try { // try from 0352c1f8 to 0362c1ff has its CatchHandler @ 0352c200 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0352c1e0 with catch @ 0352c200
                       catch(type#2 @ 00000000) { ... } // from try @ 0352c1f8 with catch @ 0352c200
                        */
    bVar2 = CocosAnimation__Init(pCVar5,*ppSVar6,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      str1 = *ppSVar6;
      pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5958/*"Error: animation not found: "*/);
      pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
      System_Exception___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
      uVar4 = thunk_FUN_01bb9178(&Method_MatchingDialog_EGDHNJGMPLM__);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0352c2a8 to 0362c3d3 has its CatchHandler @ 0352c2a8
                       catch() { ... } // from try @ 0352c2a8 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c534 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c5b0 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c614 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c690 with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c6cc with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c6ec with catch @ 0352c2a8
                       catch() { ... } // from try @ 0352c71c with catch @ 0352c2a8 */
      FUN_01bab798(__this_00,uVar4);
    }
    pCVar5 = (__this->fields)._hourGlassEffect;
    if (pCVar5 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFramesRange(pCVar5,0,-1,(MethodInfo *)0x0);
      pCVar5 = (__this->fields)._hourGlassEffect;
      if (pCVar5 != (CocosAnimation_o *)0x0) {
        (pCVar5->fields)._PPEGDOHGLJJ_k__BackingField = (__this->fields).KAAABFPMLCH;
        MatchingDialog__KOBMELKNNLE(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DILGDEAECBG()  [RVA 0x342C4F8]
// MatchingDialog$$DILGDEAECBG @ RVA 0x342C4F8

void MatchingDialog__DILGDEAECBG(MatchingDialog_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_04568147 & 1) == 0) {
                    /* try { // try from 0352c510 to 0362c533 has its CatchHandler @ 0352c620 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568147 = 1;
  }
  if ((__this->fields).MMODCAPKNDF == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 0352c534 to 0362c56b has its CatchHandler @ 0352c2a8 */
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar5 = pPVar3->klass;
  ppSVar1 = &(__this->fields).MMODCAPKNDF;
  pSVar8 = *ppSVar1;
  uVar2._0_1_ = (pPVar5->_2).rank;
  uVar2._1_1_ = (pPVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar2;
  if (uVar6 != 0) {
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0352c56c to 0362c573 has its CatchHandler @ 0352c6cc */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0352c59c to 0362c5af has its CatchHandler @ 0352c6d0 */
        pVVar4 = pPVar5->vtable + (*piVar7 + 1);
        goto LAB_0352c5a8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
                    /* try { // try from 0352c588 to 0362c58f has its CatchHandler @ 0352c664 */
LAB_0352c5a8:
                    /* try { // try from 0352c5b0 to 0362c5e3 has its CatchHandler @ 0352c2a8 */
  (*pVVar4->methodPtr)(pPVar3,pSVar8,pVVar4->method);
  *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x342C804]
// MatchingDialog$$OnDestroy @ RVA 0x342C804

void MatchingDialog__OnDestroy(MatchingDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  SFRequestSender_o *pKVar1;
  DCHAJIMIFHP_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04568148 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    DAT_04568148 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo,method);
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RaidBattleChatTabEnable
              (__this_00,true,(MethodInfo *)0x0);
    pKVar1 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((pKVar1 != (SFRequestSender_o *)0x0) &&
       (__this_01 = (pKVar1->fields).super.FNHOHLGNHGN, __this_01 != (DCHAJIMIFHP_o *)0x0)) {
      DCHAJIMIFHP__GMNFJKHEJLO(__this_01,(Il2CppObject *)__this,(MethodInfo *)0x0);
      MatchingDialog__DILGDEAECBG(__this,method_00);
      MatchingDialog__DAKEBOMPALG(__this,method_01);
      MatchingDialog__OJCPMPCFPJM(__this,method_02);
      Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
                ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCAAAJGAFIH()  [RVA 0x342C8B0]
// MatchingDialog$$JCAAAJGAFIH @ RVA 0x342C8B0

void MatchingDialog__JCAAAJGAFIH(MatchingDialog_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._hourGlassEffect;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    (__this_00->fields)._NOAJIBNJKPE_k__BackingField = false;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EEEHHJNBPMG()  [RVA 0x342C6B0]
// MatchingDialog$$EEEHHJNBPMG @ RVA 0x342C6B0

void MatchingDialog__EEEHHJNBPMG(MatchingDialog_o *__this,MethodInfo *method)

{
  CocosAnimation_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* catch() { ... } // from try @ 0352c68c with catch @ 0352c6b0 */
  __this_00 = (__this->fields)._hourGlassEffect;
  if (__this_00 != (CocosAnimation_o *)0x0) {
    (__this_00->fields)._NOAJIBNJKPE_k__BackingField = false;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x342C8E0]
// MatchingDialog$$EJHAPHAHMHG @ RVA 0x342C8E0

void MatchingDialog__EJHAPHAHMHG
               (MatchingDialog_o *__this,System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x342C8E4]
// MatchingDialog$$.ctor @ RVA 0x342C8E4

void MatchingDialog___ctor(MatchingDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568149 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04568149 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).NFJLMMIKCFN;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).NDOHFCNNKFA = 1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LKKDMNODHEJ()  [RVA 0x342C974]
// MatchingDialog$$LKKDMNODHEJ @ RVA 0x342C974

void MatchingDialog__LKKDMNODHEJ(MatchingDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_0456814a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_MatchingDialog_FJDBDGPPHNO__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456814a = 1;
    method = extraout_x1;
  }
  MatchingDialog__OJCPMPCFPJM(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0352c9ec to 0362ca9f has its CatchHandler @ 0352c9ec
                       catch() { ... } // from try @ 0352c9ec with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cb74 with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cbc0 with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cc14 with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cc44 with catch @ 0352c9ec */
  System_Action___ctor();
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar2->klass;
    uVar1._0_1_ = (pPVar6->_2).rank;
    uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar6->vtable + (*piVar8 + 3);
          goto LAB_0352ca5c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,3);
LAB_0352ca5c:
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*pVVar4->methodPtr)(0x3e800000,pPVar2,uVar3,0,pVVar4->method);
    (__this->fields).NDMPDEEBOHL = pSVar5;
    thunk_FUN_01c20e04(&(__this->fields).NDMPDEEBOHL);
    __this_00 = (__this->fields)._matchingLabel;
    if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0352caa0 to 0362caa7 has its CatchHandler @ 0352cbf8 */
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      MatchingDialog__DILGDEAECBG(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x342CABC]
// MatchingDialog$$GKPJMHOFIOO @ RVA 0x342CABC

void MatchingDialog__GKPJMHOFIOO(MatchingDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  VirtualInvokeData *pVVar9;
  undefined8 uVar10;
  UnityEngine_Events_UnityAction_o *call;
  PBAKFOBIHEG_o *pPVar11;
  System_Collections_IEnumerator_o *pSVar12;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *pSVar13;
  BHEDGAKGKPO_StaticFields *pBVar14;
  Il2CppClass *pIVar15;
  CocosAnimation_o *pCVar16;
  PBAKFOBIHEG_c *pPVar17;
  ulong uVar18;
  int32_t *piVar19;
  Nekki_SF2_GUI_LabelAlias_o *pNVar20;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
                    /* try { // try from 0352cabc to 0362cac3 has its CatchHandler @ 0352cbf4 */
                    /* try { // try from 0352cacc to 0362cad7 has its CatchHandler @ 0352cbe4 */
  if ((DAT_0456814b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0352caec to 0362caf7 has its CatchHandler @ 0352cbc8 */
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
                    /* try { // try from 0352cafc to 0362cb07 has its CatchHandler @ 0352cbc4 */
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 0352cb14 to 0362cb27 has its CatchHandler @ 0352cbd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 0352cb28 to 0362cb33 has its CatchHandler @ 0352cbdc */
    FUN_01bab630(&Method_MatchingDialog_BCINOFNDIAB__);
    FUN_01bab630(&Method_MatchingDialog_LKKDMNODHEJ__);
                    /* try { // try from 0352cb38 to 0362cb43 has its CatchHandler @ 0352cbe0 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0352cb48 to 0362cb53 has its CatchHandler @ 0352cbd0 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 0352cb58 to 0362cb63 has its CatchHandler @ 0352cbd4 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 0352cb68 to 0362cb73 has its CatchHandler @ 0352cbcc */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0352cb74 to 0362cbb3 has its CatchHandler @ 0352c9ec */
    FUN_01bab630(&StringLiteral_20428/*"raids_matching"*/);
    FUN_01bab630(&StringLiteral_10917/*"RaidMatcherText"*/);
    FUN_01bab630(&StringLiteral_8167/*"JoiningRaid1"*/);
    DAT_0456814b = 1;
  }
  pSVar6 = StringLiteral_8167/*"JoiningRaid1"*/;
  lVar8 = Method_System_Collections_Generic_List<string>_Add__;
  pSVar5 = (__this->fields).NFJLMMIKCFN;
  if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* try { // try from 0352cbb4 to 0362cbb7 has its CatchHandler @ 0352cbf0 */
                    /* try { // try from 0352cbb8 to 0362cbbb has its CatchHandler @ 0352cbec */
                    /* try { // try from 0352cbbc to 0362cbbf has its CatchHandler @ 0352cbe8 */
                    /* try { // try from 0352cbc0 to 0362cc0f has its CatchHandler @ 0352c9ec */
    pSVar13 = (pSVar5->fields)._items;
                    /* catch() { ... } // from try @ 0352cafc with catch @ 0352cbc4 */
                    /* catch() { ... } // from try @ 0352caec with catch @ 0352cbc8 */
                    /* catch() { ... } // from try @ 0352cb68 with catch @ 0352cbcc */
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                    /* catch() { ... } // from try @ 0352cb48 with catch @ 0352cbd0 */
    if (pSVar13 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 0352cb58 with catch @ 0352cbd4 */
      uVar3 = (pSVar5->fields)._size;
                    /* catch() { ... } // from try @ 0352cb14 with catch @ 0352cbd8 */
                    /* catch() { ... } // from try @ 0352cb28 with catch @ 0352cbdc */
                    /* catch() { ... } // from try @ 0352cb38 with catch @ 0352cbe0 */
                    /* catch() { ... } // from try @ 0352cacc with catch @ 0352cbe4 */
                    /* catch() { ... } // from try @ 0352cbbc with catch @ 0352cbe8 */
      if (uVar3 < (uint)pSVar13->max_length) {
                    /* catch() { ... } // from try @ 0352cbb8 with catch @ 0352cbec */
                    /* catch() { ... } // from try @ 0352cbb4 with catch @ 0352cbf0 */
                    /* catch() { ... } // from try @ 0352cabc with catch @ 0352cbf4 */
        (pSVar5->fields)._size = uVar3 + 1;
                    /* catch() { ... } // from try @ 0352caa0 with catch @ 0352cbf8 */
        pSVar13->m_Items[(int)uVar3] = pSVar6;
        thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar3);
      }
      else {
                    /* try { // try from 0352cc10 to 0362cc13 has its CatchHandler @ 0352cc34 */
                    /* try { // try from 0352cc14 to 0362cc3b has its CatchHandler @ 0352c9ec */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pSVar6,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      pNVar20 = (__this->fields).super.super._header;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0352cc10 with catch @ 0352cc34 */
                    /* try { // try from 0352cc3c to 0362cc43 has its CatchHandler @ 0352cc58 */
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar20,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
                    /* try { // try from 0352cc44 to 0362cc4f has its CatchHandler @ 0352c9ec */
      if (bVar4) {
        pNVar20 = (__this->fields).super.super._header;
                    /* try { // try from 0352cc50 to 0362cc57 has its CatchHandler @ 0352cc58 */
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0352cc3c with catch @ 0352cc58
                       catch() { ... } // from try @ 0352cc50 with catch @ 0352cc58 */
          thunk_FUN_01ba7564();
        }
        if (pNVar20 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0352cfd4;
        pBVar14 = BHEDGAKGKPO_TypeInfo->static_fields;
        (*(pNVar20->klass->vtable)._23_set_color.methodPtr)
                  ((pBVar14->FHIAKPJBBCB).fields.r,(pBVar14->FHIAKPJBBCB).fields.g,
                   (pBVar14->FHIAKPJBBCB).fields.b,(pBVar14->FHIAKPJBBCB).fields.a,pNVar20,
                   (pNVar20->klass->vtable)._23_set_color.method);
        pSVar5 = (__this->fields).NFJLMMIKCFN;
        if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0352cfd4;
        pNVar20 = (__this->fields).super.super._header;
        pSVar6 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,0,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        if (pNVar20 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0352cfd4;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar20,pSVar6,(MethodInfo *)0x0);
      }
      pNVar20 = (__this->fields)._matchingLabel;
      if (pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar20,0x73,(MethodInfo *)0x0);
        pNVar20 = (__this->fields)._matchingLabel;
        if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pBVar14 = BHEDGAKGKPO_TypeInfo->static_fields;
          (*(pNVar20->klass->vtable)._23_set_color.methodPtr)
                    ((pBVar14->FHIAKPJBBCB).fields.r,(pBVar14->FHIAKPJBBCB).fields.g,
                     (pBVar14->FHIAKPJBBCB).fields.b,(pBVar14->FHIAKPJBBCB).fields.a,pNVar20,
                     (pNVar20->klass->vtable)._23_set_color.method);
          pNVar20 = (__this->fields)._matchingLabel;
          pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
          lVar8 = FUN_01bab718(string___TypeInfo,2);
          pSVar6 = System_UInt32__ToString((int)__this + 0x110,(MethodInfo *)0x0);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) != 0) {
              *(undefined8 *)(lVar8 + 0x20) = pSVar6;
              thunk_FUN_01c20e04((undefined8 *)(lVar8 + 0x20),pSVar6);
              pSVar6 = System_UInt32__ToString((int)__this + 0x114,(MethodInfo *)0x0);
              if (1 < *(uint *)(lVar8 + 0x18)) {
                *(System_String_o **)(lVar8 + 0x28) = pSVar6;
                thunk_FUN_01c20e04();
                uVar10 = StringLiteral_10917/*"RaidMatcherText"*/;
                if (pIVar7 != (Il2CppObject *)0x0) {
                  pIVar15 = pIVar7->klass;
                  uVar1._0_1_ = (pIVar15->_2).rank;
                  uVar1._1_1_ = (pIVar15->_2).minimumAlignment;
                  uVar18 = (ulong)uVar1;
                  if (uVar18 != 0) {
                    piVar19 = &((pIVar15->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                        pVVar9 = pIVar15->vtable + (*piVar19 + 0xc);
                        goto LAB_0352cdf8;
                      }
                      uVar18 = uVar18 - 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar18 != 0);
                  }
                  pVVar9 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0352cdf8:
                  uVar10 = (*pVVar9->methodPtr)(pIVar7,uVar10,lVar8,pVVar9->method);
                  if (pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar20->klass->vtable)._75_set_text.methodPtr)
                              (pNVar20,uVar10,(pNVar20->klass->vtable)._75_set_text.method);
                    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    bVar4 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
                    if (bVar4) {
                      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      PNLFHHJGDLI__KBEJCDBMEBA((MethodInfo *)0x0);
                    }
                    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_20428/*"raids_matching"*/,true,(MethodInfo *)0x0);
                    pCVar16 = (__this->fields)._hourGlassEffect;
                    if (pCVar16 != (CocosAnimation_o *)0x0) {
                      __this_01 = (pCVar16->fields).OnAnimationComplete;
                      call = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0)
                        ;
                        MatchingDialog__EGDHNJGMPLM(__this,method_00);
                        MatchingDialog__DILGDEAECBG(__this,method_01);
                        pPVar11 = CoroutineManager__get_Current((MethodInfo *)0x0);
                        uVar10 = thunk_FUN_01bda818(System_Action_TypeInfo);
                        System_Action___ctor();
                        if (pPVar11 != (PBAKFOBIHEG_o *)0x0) {
                          pPVar17 = pPVar11->klass;
                          uVar2._0_1_ = (pPVar17->_2).rank;
                          uVar2._1_1_ = (pPVar17->_2).minimumAlignment;
                          uVar18 = (ulong)uVar2;
                          if (uVar18 != 0) {
                            piVar19 = &((pPVar17->_1).interfaceOffsets)->offset;
                            do {
                              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->
                                  interfaceType == (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                                pVVar9 = pPVar17->vtable + (*piVar19 + 3);
                                goto LAB_0352cf80;
                              }
                              uVar18 = uVar18 - 1;
                              piVar19 = piVar19 + 4;
                            } while (uVar18 != 0);
                          }
                          pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar11,PBAKFOBIHEG_TypeInfo,3)
                          ;
LAB_0352cf80:
                          pSVar12 = (System_Collections_IEnumerator_o *)
                                    (*pVVar9->methodPtr)(0x40000000,pPVar11,uVar10,0,pVVar9->method)
                          ;
                          (__this->fields).MMODCAPKNDF = pSVar12;
                          thunk_FUN_01c20e04(&(__this->fields).MMODCAPKNDF);
                          pNVar20 = (__this->fields)._matchingLabel;
                          if ((pNVar20 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                             (__this_00 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pNVar20,
                                                     (MethodInfo *)0x0),
                             __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_0352cfd4;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_0352cfd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x342CFDC]
// MatchingDialog$$Init @ RVA 0x342CFDC

void MatchingDialog__Init(MatchingDialog_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  int32_t OILECKFDMDB;
  uint32_t uVar2;
  RaidManager_o *__this_00;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppClass *__this_02;
  
  if ((DAT_0456814c & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IKJOGLIBGJF_TypeInfo);
    FUN_01bab630(&Method_MatchingDialog_DCNEAIGAIME__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456814c = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,2,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (IKJOGLIBGJF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)IKJOGLIBGJF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    __this_02 = IMMNELPBGIF[1].klass;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_02 != (Il2CppClass *)0x0) {
      OILECKFDMDB = OHDDKGHEEPA__DCAKAGILMOF((OHDDKGHEEPA_o *)__this_02,(MethodInfo *)0x0);
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (RaidManager_o *)0x0) {
        RaidManager__KAKPCFDHFJM(__this_00,OILECKFDMDB,IELDNEAAPBE,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RaidBattleChatTabEnable
                    (__this_01,false,(MethodInfo *)0x0);
          uVar2 = OHDDKGHEEPA__NLMMJCACKPC((OHDDKGHEEPA_o *)__this_02,(MethodInfo *)0x0);
          (__this->fields).JBMHJLNACKE = uVar2;
          MatchingDialog__DILGDEAECBG(__this,method_00);
          MatchingDialog__DAKEBOMPALG(__this,method_01);
          MatchingDialog__OJCPMPCFPJM(__this,method_02);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FJDBDGPPHNO()  [RVA 0x342D1CC]
// MatchingDialog$$FJDBDGPPHNO @ RVA 0x342D1CC

void MatchingDialog__FJDBDGPPHNO(MatchingDialog_o *__this,MethodInfo *method)

{
  uint32_t *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint32_t uVar5;
  CBOEGGBIJMD_o *pCVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  System_String_o *pSVar9;
  VirtualInvokeData *pVVar10;
  undefined8 uVar11;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  
  if ((DAT_0456814d & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MatchingDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_10917/*"RaidMatcherText"*/);
    DAT_0456814d = 1;
    method = extraout_x1;
  }
  uVar5 = (__this->fields).BEKILJPCMCH;
  if (uVar5 != 0) {
    (__this->fields).BEKILJPCMCH = uVar5 - 1;
    return;
  }
  if ((MatchingDialog_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MatchingDialog_TypeInfo,method);
  }
  pCVar6 = MatchingDialog_TypeInfo->static_fields->OCDOOJLNNAL;
  if (pCVar6 != (CBOEGGBIJMD_o *)0x0) {
    uVar5 = CBOEGGBIJMD__HLMBDJOGONJ(pCVar6,2,8,(MethodInfo *)0x0);
    (__this->fields).BEKILJPCMCH = uVar5;
    if ((MatchingDialog_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar6 = MatchingDialog_TypeInfo->static_fields->OCDOOJLNNAL;
    if (pCVar6 != (CBOEGGBIJMD_o *)0x0) {
      uVar5 = CBOEGGBIJMD__HLMBDJOGONJ(pCVar6,0,4,(MethodInfo *)0x0);
      if (uVar5 - 1 == 0) {
        return;
      }
      uVar3 = (__this->fields).JBMHJLNACKE;
      puVar1 = &(__this->fields).NDOHFCNNKFA;
      uVar2 = (__this->fields).NDOHFCNNKFA + (uVar5 - 1);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      (__this->fields).NDOHFCNNKFA = uVar2;
      if (uVar3 <= uVar2) {
        *puVar1 = uVar3 - 1;
      }
      pNVar15 = (__this->fields)._matchingLabel;
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = FUN_01bab718(string___TypeInfo,2);
      pSVar9 = System_UInt32__ToString((uint32_t)puVar1,(MethodInfo *)0x0);
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) != 0) {
          *(undefined8 *)(lVar8 + 0x20) = pSVar9;
          thunk_FUN_01c20e04((undefined8 *)(lVar8 + 0x20),pSVar9);
          pSVar9 = System_UInt32__ToString((int)__this + 0x114,(MethodInfo *)0x0);
          if (1 < *(uint *)(lVar8 + 0x18)) {
            *(System_String_o **)(lVar8 + 0x28) = pSVar9;
            thunk_FUN_01c20e04();
            uVar11 = StringLiteral_10917/*"RaidMatcherText"*/;
            if (pIVar7 != (Il2CppObject *)0x0) {
              pIVar12 = pIVar7->klass;
              uVar4._0_1_ = (pIVar12->_2).rank;
              uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
              uVar13 = (ulong)uVar4;
              if (uVar13 != 0) {
                piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
                    goto LAB_0352d3dc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0352d3dc:
              uVar11 = (*pVVar10->methodPtr)(pIVar7,uVar11,lVar8,pVVar10->method);
              if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0352d414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pNVar15->klass->vtable)._75_set_text.methodPtr)
                          (pNVar15,uVar11,(pNVar15->klass->vtable)._75_set_text.method);
                return;
              }
            }
            goto LAB_0352d418;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_0352d418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DAPAJLBAJPJ()  [RVA 0x342D420]
// MatchingDialog$$DAPAJLBAJPJ @ RVA 0x342D420

void MatchingDialog__DAPAJLBAJPJ(MatchingDialog_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456814e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_5961/*"Error: matching failed"*/);
    DAT_0456814e = 1;
    method = extraout_x1;
  }
  MatchingDialog__DAKEBOMPALG(__this,method);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_5961/*"Error: matching failed"*/,(MethodInfo *)0x0);
  MatchingDialog__LGMIPDOLEBO(__this,method_00);
  return;
}


// ===== private void OMECKMHLPPP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x342D49C]
// MatchingDialog$$OMECKMHLPPP @ RVA 0x342D49C

void MatchingDialog__OMECKMHLPPP
               (MatchingDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    MatchingDialog__DAKEBOMPALG(__this,method_00);
    EDFDANKEBGF__KDKLIPFALGJ((MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0352d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
  MatchingDialog__DAPAJLBAJPJ(__this,method_00);
  return;
}


// ===== private void DCNEAIGAIME(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x342D500]
// MatchingDialog$$DCNEAIGAIME @ RVA 0x342D500

void MatchingDialog__DCNEAIGAIME
               (MatchingDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  SFRequestSender_o *pKVar4;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Collections_IEnumerator_o **ppSVar12;
  DCHAJIMIFHP_o *__this_01;
  int32_t local_24;
  
  if ((DAT_0456814f & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_MatchingDialog_OMECKMHLPPP__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_20405/*"raid_battle_start_event"*/);
    FUN_01bab630(&StringLiteral_8861/*"MatchingDialog::OnJoinedRaidMatcher: onJoinedRaidMatcher failed with code "*/);
    DAT_0456814f = 1;
  }
  local_24 = 0;
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
LAB_0352d790:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar3) {
    if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField == false) {
      pKVar4 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar4 != (SFRequestSender_o *)0x0) {
        __this_01 = (pKVar4->fields).super.FNHOHLGNHGN;
        EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (DCHAJIMIFHP_o *)0x0) {
          DCHAJIMIFHP__MPFFOIIBAKO(__this_01,StringLiteral_20405/*"raid_battle_start_event"*/,EKDIECDFOIO,(MethodInfo *)0x0);
          MatchingDialog__DAKEBOMPALG(__this,method_00);
          pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar6 = MatchingDialog__HBJFPCAIHGO(__this,method_01);
          if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
            pPVar9 = pPVar5->klass;
            uVar2._0_1_ = (pPVar9->_2).rank;
            uVar2._1_1_ = (pPVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar2;
            if (uVar10 != 0) {
              piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar7 = pPVar9->vtable + *piVar11;
                  goto LAB_0352d750;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_0352d750:
            pSVar6 = (System_Collections_IEnumerator_o *)
                     (*pVVar7->methodPtr)(pPVar5,pSVar6,1,pVVar7->method);
            ppSVar12 = &(__this->fields).PHELMNCGAKF;
            *ppSVar12 = pSVar6;
            thunk_FUN_01c20e04(ppSVar12,pSVar6);
            return;
          }
        }
      }
      goto LAB_0352d790;
    }
  }
  else {
    local_24 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
    pSVar8 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    str3 = KEFHDOHHHML__MMKHHPBIDDN(IDCGLBOIAFJ,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat
                       (StringLiteral_8861/*"MatchingDialog::OnJoinedRaidMatcher: onJoinedRaidMatcher failed with code "*/,pSVar8,StringLiteral_167/*" "*/,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField == false) {
      iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (CPNHNIKFGFB_o *)0x0) goto LAB_0352d790;
      if (iVar1 == 0x2716) {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,0x2716,(MethodInfo *)0x0);
      }
      else {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,0x29c3,(MethodInfo *)0x0);
        if ((IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField != 1) {
          MatchingDialog__LGMIPDOLEBO(__this,method_02);
          return;
        }
      }
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
    }
  }
  return;
}


// ===== private IEnumerator HBJFPCAIHGO()  [RVA 0x342D794]
// MatchingDialog$$HBJFPCAIHGO @ RVA 0x342D794

System_Collections_IEnumerator_o *
MatchingDialog__HBJFPCAIHGO(MatchingDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568150 & 1) == 0) {
    FUN_01bab630(&MatchingDialog_IIHAHEEPLAB_TypeInfo);
    DAT_04568150 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MatchingDialog_IIHAHEEPLAB_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}

