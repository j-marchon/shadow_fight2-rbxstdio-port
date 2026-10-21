// TypeDefIndex 2858
// Namespace: 
// public sealed class AADKBCFCLKK : IMessage<AADKBCFCLKK>, IMessage, IEquatable<AADKBCFCLKK>, IDeepCloneable<AADKBCFCLKK>
// Fields:
//   private static readonly MessageParser<AADKBCFCLKK> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MFHBOEGJADL = 1;
//   private long AMKHEHFFAKJ; // 0x18
//   public const int GDEPILLKJDA = 2;
//   private KDADMJGPAOM LHFLMBNKPHF; // 0x20
//   public const int IDIONDNLDAA = 3;
//   private PGICCMFLDPI LBKLNIPHGMM; // 0x28
//   public const int OKHDPNAGCPD = 4;
//   private long IKNCNGMNPPK; // 0x30
//   public const int PLBDKICHNKJ = 5;
//   private bool IOLELGMBJFL; // 0x38
//   public const int IPMOIIPMNAJ = 6;
//   private static readonly FieldCodec<NODLJPNGNBG> CHLJPKPACJB; // 0x8
//   private readonly RepeatedField<NODLJPNGNBG> MPAIPMANDEO; // 0x40
//   public const int AEMLDIOCGKK = 7;
//   private PGICCMFLDPI FAEDHKAJJNK; // 0x48

// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34394EC]
// AADKBCFCLKK$$MergeFrom @ RVA 0x34394EC

void AADKBCFCLKK__MergeFrom
               (AADKBCFCLKK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  PGICCMFLDPI_o **ppPVar2;
  KDADMJGPAOM_o **ppKVar3;
  AADKBCFCLKK_Fields *pAVar4;
  bool bVar5;
  uint uVar6;
  PGICCMFLDPI_o *pPVar7;
  Google_Protobuf_UnknownFieldSet_o *pGVar8;
  int64_t iVar9;
  KDADMJGPAOM_o *pKVar10;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  
                    /* try { // try from 035394ec to 036394fb has its CatchHandler @ 035396a8 */
  if ((DAT_045681b8 & 1) == 0) {
                    /* try { // try from 03539518 to 0363952f has its CatchHandler @ 03539680 */
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_AddEntriesFrom__);
    DAT_045681b8 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0353974c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03539558 to 03639567 has its CatchHandler @ 03539688 */
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 != 0) {
                    /* try { // try from 03539578 to 0363957f has its CatchHandler @ 03539674 */
    ppPVar1 = &(__this->fields).FAEDHKAJJNK;
    ppPVar2 = &(__this->fields).LBKLNIPHGMM;
    ppKVar3 = &(__this->fields).LHFLMBNKPHF;
                    /* try { // try from 03539590 to 036395ef has its CatchHandler @ 035396bc */
    pAVar4 = &__this->fields;
    do {
      if (uVar6 < 0x1b) {
        if (uVar6 == 8) {
                    /* catch() { ... } // from try @ 03539518 with catch @ 03539680 */
                    /* catch() { ... } // from try @ 035394ac with catch @ 03539684 */
                    /* catch() { ... } // from try @ 03539558 with catch @ 03539688 */
          iVar9 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03539650 with catch @ 0353968c */
          (__this->fields).AMKHEHFFAKJ = iVar9;
                    /* catch() { ... } // from try @ 0353964c with catch @ 03539690 */
        }
        else {
          if (uVar6 == 0x12) {
                    /* catch() { ... } // from try @ 03539648 with catch @ 03539694 */
            pKVar10 = *ppKVar3;
                    /* catch() { ... } // from try @ 03539644 with catch @ 03539698 */
            if (pKVar10 == (KDADMJGPAOM_o *)0x0) {
                    /* catch() { ... } // from try @ 0353963c with catch @ 0353969c */
                    /* catch() { ... } // from try @ 03539638 with catch @ 035396a0 */
              pKVar10 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
                    /* catch() { ... } // from try @ 03539634 with catch @ 035396a4 */
                    /* catch() { ... } // from try @ 035394ec with catch @ 035396a8 */
                    /* catch() { ... } // from try @ 03539630 with catch @ 035396ac */
              KDADMJGPAOM___ctor(pKVar10,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0353962c with catch @ 035396b0
                       catch() { ... } // from try @ 03539640 with catch @ 035396b0
                       catch() { ... } // from try @ 0353965c with catch @ 035396b0 */
                    /* catch() { ... } // from try @ 03539470 with catch @ 035396b4 */
                    /* catch() { ... } // from try @ 03539450 with catch @ 035396b8 */
              *ppKVar3 = pKVar10;
                    /* catch() { ... } // from try @ 03539590 with catch @ 035396bc */
              thunk_FUN_01c20e04(ppKVar3,pKVar10);
              pKVar10 = *ppKVar3;
            }
          }
          else {
            if (uVar6 != 0x1a) goto LAB_0353965c;
            pKVar10 = (KDADMJGPAOM_o *)*ppPVar2;
            if (pKVar10 == (KDADMJGPAOM_o *)0x0) {
              pPVar7 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar7,(MethodInfo *)0x0);
              *ppPVar2 = pPVar7;
              thunk_FUN_01c20e04(ppPVar2,pPVar7);
              pKVar10 = (KDADMJGPAOM_o *)*ppPVar2;
            }
          }
LAB_035396c4:
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar10,(MethodInfo *)0x0);
        }
      }
      else if (uVar6 < 0x29) {
                    /* try { // try from 035395f0 to 0363962b has its CatchHandler @ 035392d8 */
        if (uVar6 == 0x20) {
          iVar9 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IKNCNGMNPPK = iVar9;
        }
        else if (uVar6 == 0x28) {
          bVar5 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IOLELGMBJFL = bVar5;
        }
        else {
LAB_0353965c:
                    /* try { // try from 0353965c to 03639667 has its CatchHandler @ 035396b0 */
                    /* try { // try from 03539668 to 036396d3 has its CatchHandler @ 035392d8 */
          pGVar8 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pAVar4->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pAVar4->CKFPENBPNML = pGVar8;
                    /* catch() { ... } // from try @ 03539578 with catch @ 03539674 */
                    /* catch() { ... } // from try @ 03539658 with catch @ 03539678 */
          thunk_FUN_01c20e04(pAVar4,pGVar8);
                    /* catch() { ... } // from try @ 03539654 with catch @ 0353967c */
        }
      }
      else {
        if (uVar6 != 0x32) {
          if (uVar6 != 0x3a) goto LAB_0353965c;
          pKVar10 = (KDADMJGPAOM_o *)*ppPVar1;
                    /* try { // try from 0353962c to 0363962f has its CatchHandler @ 035396b0 */
          if (pKVar10 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 03539630 to 03639633 has its CatchHandler @ 035396ac */
                    /* try { // try from 03539634 to 03639637 has its CatchHandler @ 035396a4 */
            pPVar7 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* try { // try from 03539638 to 0363963b has its CatchHandler @ 035396a0 */
                    /* try { // try from 0353963c to 0363963f has its CatchHandler @ 0353969c */
                    /* try { // try from 03539640 to 03639643 has its CatchHandler @ 035396b0 */
            PGICCMFLDPI___ctor(pPVar7,(MethodInfo *)0x0);
                    /* try { // try from 03539644 to 03639647 has its CatchHandler @ 03539698 */
                    /* try { // try from 03539648 to 0363964b has its CatchHandler @ 03539694 */
                    /* try { // try from 0353964c to 0363964f has its CatchHandler @ 03539690 */
            *ppPVar1 = pPVar7;
                    /* try { // try from 03539650 to 03639653 has its CatchHandler @ 0353968c */
            thunk_FUN_01c20e04(ppPVar1,pPVar7);
                    /* try { // try from 03539654 to 03639657 has its CatchHandler @ 0353967c */
            pKVar10 = (KDADMJGPAOM_o *)*ppPVar1;
                    /* try { // try from 03539658 to 0363965b has its CatchHandler @ 03539678 */
          }
          goto LAB_035396c4;
        }
        __this_00 = (__this->fields).MPAIPMANDEO;
                    /* catch() { ... } // from try @ 035396d4 with catch @ 03539700 */
        if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)
        goto LAB_0353974c;
                    /* try { // try from 03539710 to 03639717 has its CatchHandler @ 0353972c */
                    /* try { // try from 03539718 to 03639723 has its CatchHandler @ 035392d8 */
                    /* try { // try from 03539724 to 0363972b has its CatchHandler @ 0353972c */
        Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                   (Google_Protobuf_FieldCodec_T__o *)
                   AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB,
                   Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_AddEntriesFrom__);
                    /* catch() { ... } // from try @ 03539710 with catch @ 0353972c
                       catch() { ... } // from try @ 03539724 with catch @ 0353972c */
      }
                    /* try { // try from 035396d4 to 036396d7 has its CatchHandler @ 03539700 */
                    /* try { // try from 035396d8 to 0363970f has its CatchHandler @ 035392d8 */
      uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar6 != 0);
  }
  return;
}


// ===== public KDADMJGPAOM KJBIABLOHLF()  [RVA 0x3439750]
// AADKBCFCLKK$$KJBIABLOHLF @ RVA 0x3439750

KDADMJGPAOM_o * AADKBCFCLKK__KJBIABLOHLF(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  return (__this->fields).LHFLMBNKPHF;
}


// ===== public long HGBMGKFPMEJ()  [RVA 0x3439758]
// AADKBCFCLKK$$HGBMGKFPMEJ @ RVA 0x3439758

int64_t AADKBCFCLKK__HGBMGKFPMEJ(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  return (__this->fields).IKNCNGMNPPK;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3439760]
// AADKBCFCLKK$$Equals @ RVA 0x3439760

bool AADKBCFCLKK__Equals(AADKBCFCLKK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045681b9 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    DAT_045681b9 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)AADKBCFCLKK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 035397b4 to 03639957 has its CatchHandler @ 035397b4
                       catch() { ... } // from try @ 035397b4 with catch @ 035397b4
                       catch() { ... } // from try @ 03539d30 with catch @ 035397b4
                       catch() { ... } // from try @ 03539d6c with catch @ 035397b4
                       catch() { ... } // from try @ 03539e5c with catch @ 035397b4
                       catch() { ... } // from try @ 03539e68 with catch @ 035397b4
                       catch() { ... } // from try @ 03539e78 with catch @ 035397b4
                       catch() { ... } // from try @ 03539fbc with catch @ 035397b4 */
  bVar1 = AADKBCFCLKK__Equals(__this,(AADKBCFCLKK_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MNHJNOLDJEO(long CJNHFNHJHPE)  [RVA 0x34398D0]
// AADKBCFCLKK$$MNHJNOLDJEO @ RVA 0x34398D0

void AADKBCFCLKK__MNHJNOLDJEO(AADKBCFCLKK_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).AMKHEHFFAKJ = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x34398D8]
// AADKBCFCLKK$$.ctor @ RVA 0x34398D8

void AADKBCFCLKK___ctor(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681ba & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_TypeInfo);
    DAT_045681ba = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>__ctor__);
  ppGVar1 = &(__this->fields).MPAIPMANDEO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
                    /* try { // try from 03539958 to 0363997f has its CatchHandler @ 03539f08 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MGALHCGHPNO(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x3439960]
// AADKBCFCLKK$$MGALHCGHPNO @ RVA 0x3439960

void AADKBCFCLKK__MGALHCGHPNO(AADKBCFCLKK_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LBKLNIPHGMM = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void FAKHLIIBEBA(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x3439968]
// AADKBCFCLKK$$FAKHLIIBEBA @ RVA 0x3439968

void AADKBCFCLKK__FAKHLIIBEBA(AADKBCFCLKK_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FAEDHKAJJNK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override string ToString()  [RVA 0x3439970]
// AADKBCFCLKK$$ToString @ RVA 0x3439970

System_String_o * AADKBCFCLKK__ToString(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681bb & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045681bb = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 035399b4 to 036399df has its CatchHandler @ 03539f04 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(AADKBCFCLKK IBKIPBJJCPG)  [RVA 0x34399C8]
// AADKBCFCLKK$$MergeFrom @ RVA 0x34399C8

void AADKBCFCLKK__MergeFrom(AADKBCFCLKK_o *__this,AADKBCFCLKK_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  AADKBCFCLKK_Fields *pAVar5;
  KDADMJGPAOM_o **ppKVar6;
  PGICCMFLDPI_o **ppPVar7;
  
  if ((DAT_045681bc & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Add__);
    DAT_045681bc = 1;
  }
  if (IBKIPBJJCPG == (AADKBCFCLKK_o *)0x0) {
                    /* try { // try from 03539b8c to 03639b9b has its CatchHandler @ 03539ea8 */
    return;
  }
  lVar4 = (IBKIPBJJCPG->fields).AMKHEHFFAKJ;
  if (lVar4 != 0) {
    (__this->fields).AMKHEHFFAKJ = lVar4;
  }
                    /* try { // try from 03539a24 to 03639a2b has its CatchHandler @ 03539efc */
  if ((IBKIPBJJCPG->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    ppKVar6 = &(__this->fields).LHFLMBNKPHF;
                    /* try { // try from 03539a30 to 03639a37 has its CatchHandler @ 03539f00 */
    pKVar1 = *ppKVar6;
    if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 03539a44 to 03639a4b has its CatchHandler @ 03539eec */
      pKVar1 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
      KDADMJGPAOM___ctor(pKVar1,(MethodInfo *)0x0);
                    /* try { // try from 03539a58 to 03639a5f has its CatchHandler @ 03539ee8 */
      *ppKVar6 = pKVar1;
      thunk_FUN_01c20e04(ppKVar6,pKVar1);
      pKVar1 = *ppKVar6;
      if (pKVar1 == (KDADMJGPAOM_o *)0x0) goto LAB_03539b94;
    }
                    /* try { // try from 03539a6c to 03639a73 has its CatchHandler @ 03539ed4 */
    KDADMJGPAOM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).LBKLNIPHGMM != (PGICCMFLDPI_o *)0x0) {
    ppPVar7 = &(__this->fields).LBKLNIPHGMM;
                    /* try { // try from 03539a80 to 03639a87 has its CatchHandler @ 03539ed0 */
    pPVar2 = *ppPVar7;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 03539a94 to 03639a9b has its CatchHandler @ 03539ec4 */
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* try { // try from 03539aa0 to 03639aa7 has its CatchHandler @ 03539ec8 */
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar7 = pPVar2;
      thunk_FUN_01c20e04(ppPVar7,pPVar2);
                    /* try { // try from 03539ab8 to 03639ac3 has its CatchHandler @ 03539ec0 */
      pPVar2 = *ppPVar7;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_03539b94;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0);
  }
  lVar4 = (IBKIPBJJCPG->fields).IKNCNGMNPPK;
  if (lVar4 != 0) {
                    /* try { // try from 03539ad4 to 03639adb has its CatchHandler @ 03539ebc */
    (__this->fields).IKNCNGMNPPK = lVar4;
  }
  if ((IBKIPBJJCPG->fields).IOLELGMBJFL != false) {
    (__this->fields).IOLELGMBJFL = true;
  }
  __this_00 = (__this->fields).MPAIPMANDEO;
                    /* try { // try from 03539aec to 03639af3 has its CatchHandler @ 03539e8c */
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
                    /* try { // try from 03539b00 to 03639b0f has its CatchHandler @ 03539ea4 */
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MPAIPMANDEO,
               Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Add__);
    if ((IBKIPBJJCPG->fields).FAEDHKAJJNK != (PGICCMFLDPI_o *)0x0) {
      ppPVar7 = &(__this->fields).FAEDHKAJJNK;
      pPVar2 = *ppPVar7;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 03539b20 to 03639b2b has its CatchHandler @ 03539eb0 */
        pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* try { // try from 03539b30 to 03639b3f has its CatchHandler @ 03539e88 */
        PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
        *ppPVar7 = pPVar2;
        thunk_FUN_01c20e04(ppPVar7,pPVar2);
                    /* try { // try from 03539b44 to 03639b4f has its CatchHandler @ 03539ea0 */
        pPVar2 = *ppPVar7;
        if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_03539b94;
      }
      PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).FAEDHKAJJNK,(MethodInfo *)0x0);
    }
    pAVar5 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pAVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 03539b6c to 03639b7b has its CatchHandler @ 03539eac */
    pAVar5->CKFPENBPNML = pGVar3;
                    /* try { // try from 03539b80 to 03639b87 has its CatchHandler @ 03539e94 */
    thunk_FUN_01c20e04(pAVar5,pGVar3);
    return;
  }
LAB_03539b94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PGICCMFLDPI EGCHPOOCGPG()  [RVA 0x3439B98]
// AADKBCFCLKK$$EGCHPOOCGPG @ RVA 0x3439B98

PGICCMFLDPI_o * AADKBCFCLKK__EGCHPOOCGPG(AADKBCFCLKK_o *__this,MethodInfo *method)

{
                    /* try { // try from 03539b9c to 03639ba7 has its CatchHandler @ 03539e98 */
  return (__this->fields).LBKLNIPHGMM;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3439BA0]
// AADKBCFCLKK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3439BA0

Google_Protobuf_Reflection_MessageDescriptor_o *
AADKBCFCLKK__pb__Google_Protobuf_IMessage_get_Descriptor(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  AADKBCFCLKK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681bd & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    DAT_045681bd = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03539bd8 to 03639be7 has its CatchHandler @ 03539e84 */
  method_00 = AADKBCFCLKK_TypeInfo;
  if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AADKBCFCLKK_c *)thunk_FUN_01ba7564(AADKBCFCLKK_TypeInfo,method);
  }
  pGVar1 = AADKBCFCLKK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3439CF0]
// AADKBCFCLKK$$GetHashCode @ RVA 0x3439CF0

int32_t AADKBCFCLKK__GetHashCode(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KDADMJGPAOM_o *pKVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  long lVar7;
  undefined1 local_24 [4];
  long local_18;
  
                    /* try { // try from 03539cf0 to 03639cff has its CatchHandler @ 03539d48 */
  if ((DAT_045681be & 1) == 0) {
                    /* try { // try from 03539d14 to 03639d1b has its CatchHandler @ 03539edc */
    FUN_01bab630(&bool_TypeInfo);
    DAT_045681be = 1;
  }
  local_18 = 0;
                    /* try { // try from 03539d24 to 03639d27 has its CatchHandler @ 03539d40 */
  local_24[0] = 0;
  lVar7 = (__this->fields).AMKHEHFFAKJ;
                    /* try { // try from 03539d2c to 03639d2f has its CatchHandler @ 03539d3c */
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 03539cf0 with catch @ 03539d48 */
    uVar1 = 1;
  }
  else {
                    /* try { // try from 03539d30 to 03639d67 has its CatchHandler @ 035397b4 */
    local_18 = lVar7;
                    /* catch() { ... } // from try @ 03539c84 with catch @ 03539d34 */
                    /* catch() { ... } // from try @ 03539ca4 with catch @ 03539d38 */
                    /* catch() { ... } // from try @ 03539d2c with catch @ 03539d3c */
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03539d24 with catch @ 03539d40 */
    uVar1 = uVar1 ^ 1;
                    /* catch() { ... } // from try @ 03539cc8 with catch @ 03539d44 */
  }
                    /* catch() { ... } // from try @ 03539cb4 with catch @ 03539d4c */
  pKVar3 = (__this->fields).LHFLMBNKPHF;
                    /* catch() { ... } // from try @ 03539c60 with catch @ 03539d50 */
  if (pKVar3 != (KDADMJGPAOM_o *)0x0) {
    uVar2 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar4 = (__this->fields).LBKLNIPHGMM;
                    /* try { // try from 03539d68 to 03639d6b has its CatchHandler @ 03539e78 */
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 03539d6c to 03639e23 has its CatchHandler @ 035397b4 */
    uVar2 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  lVar7 = (__this->fields).IKNCNGMNPPK;
  if (lVar7 != 0) {
    local_18 = lVar7;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  if ((__this->fields).IOLELGMBJFL != false) {
    local_24[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar2 = System_Boolean__GetHashCode(SUB81(local_24,0),(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).MPAIPMANDEO;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    pPVar4 = (__this->fields).FAEDHKAJJNK;
    uVar2 = uVar2 ^ uVar1;
    if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
      uVar1 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    pGVar6 = (__this->fields).CKFPENBPNML;
    if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
                    /* try { // try from 03539e24 to 03639e43 has its CatchHandler @ 03539fd0 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EKMGFBCDOOA(KDADMJGPAOM CJNHFNHJHPE)  [RVA 0x3439E34]
// AADKBCFCLKK$$EKMGFBCDOOA @ RVA 0x3439E34

void AADKBCFCLKK__EKMGFBCDOOA(AADKBCFCLKK_o *__this,KDADMJGPAOM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LHFLMBNKPHF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private static void .cctor()  [RVA 0x3439E3C]
// AADKBCFCLKK$$.cctor @ RVA 0x3439E3C

void AADKBCFCLKK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_AADKBCFCLKK__o *__this;
  Google_Protobuf_FieldCodec_NODLJPNGNBG__o *pGVar1;
  Google_Protobuf_FieldCodec_NODLJPNGNBG__o **ppGVar2;
  
                    /* try { // try from 03539e44 to 03639e4b has its CatchHandler @ 03539f0c */
                    /* try { // try from 03539e4c to 03639e4f has its CatchHandler @ 03539ef8 */
                    /* try { // try from 03539e50 to 03639e53 has its CatchHandler @ 03539ee0 */
                    /* try { // try from 03539e54 to 03639e5b has its CatchHandler @ 03539ed8 */
                    /* try { // try from 03539e5c to 03639e5f has its CatchHandler @ 035397b4 */
  if ((DAT_045681bf & 1) == 0) {
                    /* try { // try from 03539e60 to 03639e63 has its CatchHandler @ 03539eb8 */
                    /* try { // try from 03539e64 to 03639e67 has its CatchHandler @ 03539eb4 */
                    /* try { // try from 03539e68 to 03639e6f has its CatchHandler @ 035397b4 */
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
                    /* try { // try from 03539e70 to 03639e73 has its CatchHandler @ 03539e9c */
                    /* try { // try from 03539e74 to 03639e77 has its CatchHandler @ 03539e90 */
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<NODLJPNGNBG>__);
                    /* catch() { ... } // from try @ 03539d68 with catch @ 03539e78
                       try { // try from 03539e78 to 03639f2b has its CatchHandler @ 035397b4 */
    FUN_01bab630(&System_Func<AADKBCFCLKK>_TypeInfo);
                    /* catch() { ... } // from try @ 03539bd8 with catch @ 03539e84 */
                    /* catch() { ... } // from try @ 03539b30 with catch @ 03539e88 */
                    /* catch() { ... } // from try @ 03539aec with catch @ 03539e8c */
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<AADKBCFCLKK>__ctor__);
                    /* catch() { ... } // from try @ 03539e74 with catch @ 03539e90 */
                    /* catch() { ... } // from try @ 03539b80 with catch @ 03539e94 */
                    /* catch() { ... } // from try @ 03539b9c with catch @ 03539e98 */
    FUN_01bab630(&Google_Protobuf_MessageParser<AADKBCFCLKK>_TypeInfo);
                    /* catch() { ... } // from try @ 03539e70 with catch @ 03539e9c */
                    /* catch() { ... } // from try @ 03539b44 with catch @ 03539ea0 */
                    /* catch() { ... } // from try @ 03539b00 with catch @ 03539ea4 */
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
                    /* catch() { ... } // from try @ 03539b8c with catch @ 03539ea8 */
                    /* catch() { ... } // from try @ 03539b6c with catch @ 03539eac */
                    /* catch() { ... } // from try @ 03539b20 with catch @ 03539eb0 */
    FUN_01bab630(&Method_AADKBCFCLKK_<>c_KPFEPLDDLCD__);
                    /* catch() { ... } // from try @ 03539e64 with catch @ 03539eb4 */
                    /* catch() { ... } // from try @ 03539e60 with catch @ 03539eb8 */
                    /* catch() { ... } // from try @ 03539ad4 with catch @ 03539ebc */
    FUN_01bab630(&AADKBCFCLKK_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 03539ab8 with catch @ 03539ec0 */
                    /* catch() { ... } // from try @ 03539a94 with catch @ 03539ec4 */
    DAT_045681bf = 1;
  }
                    /* catch() { ... } // from try @ 03539aa0 with catch @ 03539ec8 */
                    /* catch() { ... } // from try @ 03539c1c with catch @ 03539ecc */
                    /* catch() { ... } // from try @ 03539a80 with catch @ 03539ed0 */
                    /* catch() { ... } // from try @ 03539a6c with catch @ 03539ed4 */
                    /* catch() { ... } // from try @ 03539e54 with catch @ 03539ed8 */
                    /* catch() { ... } // from try @ 03539d14 with catch @ 03539edc */
                    /* catch() { ... } // from try @ 03539e50 with catch @ 03539ee0 */
                    /* catch() { ... } // from try @ 03539c44 with catch @ 03539ee4 */
                    /* catch() { ... } // from try @ 03539a58 with catch @ 03539ee8 */
                    /* catch() { ... } // from try @ 03539a44 with catch @ 03539eec */
                    /* catch() { ... } // from try @ 03539bfc with catch @ 03539ef0 */
                    /* catch() { ... } // from try @ 03539bf0 with catch @ 03539ef4 */
                    /* catch() { ... } // from try @ 03539e4c with catch @ 03539ef8 */
                    /* catch() { ... } // from try @ 03539a24 with catch @ 03539efc */
                    /* catch() { ... } // from try @ 03539a30 with catch @ 03539f00 */
  if ((AADKBCFCLKK_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035399b4 with catch @ 03539f04 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03539958 with catch @ 03539f08 */
  }
                    /* catch() { ... } // from try @ 03539e44 with catch @ 03539f0c */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<AADKBCFCLKK>_TypeInfo);
                    /* try { // try from 03539f2c to 03639f2f has its CatchHandler @ 03539f3c */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_AADKBCFCLKK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<AADKBCFCLKK>_TypeInfo);
                    /* catch() { ... } // from try @ 03539f2c with catch @ 03539f3c */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<AADKBCFCLKK>__ctor__);
                    /* try { // try from 03539f4c to 03639fbb has its CatchHandler @ 03539fd0 */
  AADKBCFCLKK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(AADKBCFCLKK_TypeInfo->static_fields,__this);
  if ((NODLJPNGNBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567f5e == '\0') {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_04567f5e = '\x01';
  }
  if ((NODLJPNGNBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03539fbc to 03639fc7 has its CatchHandler @ 035397b4 */
  pGVar1 = (Google_Protobuf_FieldCodec_NODLJPNGNBG__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x32,(Google_Protobuf_MessageParser_T__o *)
                           NODLJPNGNBG_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<NODLJPNGNBG>__);
                    /* try { // try from 03539fc8 to 03639fcf has its CatchHandler @ 03539fd0 */
                    /* catch() { ... } // from try @ 03539e24 with catch @ 03539fd0
                       catch() { ... } // from try @ 03539f4c with catch @ 03539fd0
                       catch() { ... } // from try @ 03539fc8 with catch @ 03539fd0 */
                    /* try { // try from 03539fd4 to 0363a09b has its CatchHandler @ 03539fd4
                       catch() { ... } // from try @ 03539fd4 with catch @ 03539fd4
                       catch() { ... } // from try @ 0353a0cc with catch @ 03539fd4
                       catch() { ... } // from try @ 0353a114 with catch @ 03539fd4
                       catch() { ... } // from try @ 0353a154 with catch @ 03539fd4 */
  ppGVar2 = &AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public static MessageParser<AADKBCFCLKK> PGCAHPDCJBC()  [RVA 0x3439FEC]
// AADKBCFCLKK$$PGCAHPDCJBC @ RVA 0x3439FEC

Google_Protobuf_MessageParser_AADKBCFCLKK__o * AADKBCFCLKK__PGCAHPDCJBC(MethodInfo *method)

{
  Google_Protobuf_MessageParser_AADKBCFCLKK__o *pGVar1;
  
  pGVar1 = (Google_Protobuf_MessageParser_AADKBCFCLKK__o *)FUN_03f93a40(DAT_045681c0);
  return pGVar1;
}


// ===== public void IAMEDEAIENF(bool CJNHFNHJHPE)  [RVA 0x343A044]
// AADKBCFCLKK$$IAMEDEAIENF @ RVA 0x343A044

void AADKBCFCLKK__IAMEDEAIENF(AADKBCFCLKK_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IOLELGMBJFL = CJNHFNHJHPE;
  return;
}


// ===== public void BNBCBACMMEL(long CJNHFNHJHPE)  [RVA 0x343A050]
// AADKBCFCLKK$$BNBCBACMMEL @ RVA 0x343A050

void AADKBCFCLKK__BNBCBACMMEL(AADKBCFCLKK_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IKNCNGMNPPK = CJNHFNHJHPE;
  return;
}


// ===== public AADKBCFCLKK Clone()  [RVA 0x343A058]
// AADKBCFCLKK$$Clone @ RVA 0x343A058

AADKBCFCLKK_o * AADKBCFCLKK__Clone(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  AADKBCFCLKK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045681c1 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    DAT_045681c1 = 1;
    method = extraout_x1;
  }
  __this_00 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo,method);
                    /* try { // try from 0353a09c to 0363a0a3 has its CatchHandler @ 0353a0f8 */
  AADKBCFCLKK___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3439BEC]
// AADKBCFCLKK$$FFHIHGCDGAK @ RVA 0x3439BEC

Google_Protobuf_Reflection_MessageDescriptor_o * AADKBCFCLKK__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03539bf0 to 03639bf7 has its CatchHandler @ 03539ef4 */
                    /* try { // try from 03539bfc to 03639c03 has its CatchHandler @ 03539ef0 */
  if ((DAT_045681c2 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 03539c1c to 03639c1f has its CatchHandler @ 03539ecc */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045681c2 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 03539c44 to 03639c4b has its CatchHandler @ 03539ee4 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
                    /* try { // try from 03539c60 to 03639c67 has its CatchHandler @ 03539d50 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03539c84 to 03639c93 has its CatchHandler @ 03539d34 */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03539ca4 to 03639caf has its CatchHandler @ 03539d38 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 03539cc8 to 03639cd3 has its CatchHandler @ 03539d44 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03539cd4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 03539cb4 to 03639cc3 has its CatchHandler @ 03539d4c */
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03539cd4:
                    /* WARNING: Could not recover jumptable at 0x03539ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x22,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(AADKBCFCLKK IBKIPBJJCPG)  [RVA 0x34397C4]
// AADKBCFCLKK$$Equals @ RVA 0x34397C4

bool AADKBCFCLKK__Equals(AADKBCFCLKK_o *__this,AADKBCFCLKK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  
  if ((DAT_045681c3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Equals__);
    DAT_045681c3 = 1;
  }
  if (IBKIPBJJCPG != (AADKBCFCLKK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).AMKHEHFFAKJ == (IBKIPBJJCPG->fields).AMKHEHFFAKJ) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).LHFLMBNKPHF,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0),
         bVar1)) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).LBKLNIPHGMM,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0),
        bVar1)) &&
       (((__this->fields).IKNCNGMNPPK == (IBKIPBJJCPG->fields).IKNCNGMNPPK &&
        (((__this->fields).IOLELGMBJFL != false) == ((IBKIPBJJCPG->fields).IOLELGMBJFL != false)))))
    {
      __this_00 = (__this->fields).MPAIPMANDEO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MPAIPMANDEO,
                         Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Equals__);
      if ((bVar1) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).FAEDHKAJJNK,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).FAEDHKAJJNK,(MethodInfo *)0x0),
         bVar1)) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public bool NLKMBBKIIJA()  [RVA 0x343A1D0]
// AADKBCFCLKK$$NLKMBBKIIJA @ RVA 0x343A1D0

bool AADKBCFCLKK__NLKMBBKIIJA(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  return (__this->fields).IOLELGMBJFL;
}


// ===== public RepeatedField<NODLJPNGNBG> DANIGDGDMAA()  [RVA 0x343A1D8]
// AADKBCFCLKK$$DANIGDGDMAA @ RVA 0x343A1D8

Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *
AADKBCFCLKK__DANIGDGDMAA(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  return (__this->fields).MPAIPMANDEO;
}


// ===== public PGICCMFLDPI JENKEEHCNBD()  [RVA 0x343A1E0]
// AADKBCFCLKK$$JENKEEHCNBD @ RVA 0x343A1E0

PGICCMFLDPI_o * AADKBCFCLKK__JENKEEHCNBD(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  return (__this->fields).FAEDHKAJJNK;
}


// ===== public int CalculateSize()  [RVA 0x343A1E8]
// AADKBCFCLKK$$CalculateSize @ RVA 0x343A1E8

int32_t AADKBCFCLKK__CalculateSize(AADKBCFCLKK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  long lVar2;
  KDADMJGPAOM_o *value;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_01;
  int iVar4;
  
  if ((DAT_045681c4 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_CalculateSize__);
    DAT_045681c4 = 1;
    method = extraout_x1;
  }
  lVar2 = (__this->fields).AMKHEHFFAKJ;
  if (lVar2 == 0) {
    iVar4 = 0;
  }
  else {
                    /* try { // try from 0353a248 to 0363a373 has its CatchHandler @ 0353a248
                       catch() { ... } // from try @ 0353a248 with catch @ 0353a248
                       catch() { ... } // from try @ 0353a4b4 with catch @ 0353a248
                       catch() { ... } // from try @ 0353a55c with catch @ 0353a248
                       catch() { ... } // from try @ 0353a564 with catch @ 0353a248
                       catch() { ... } // from try @ 0353a620 with catch @ 0353a248 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar2,(MethodInfo *)0x0);
    iVar4 = iVar1 + 1;
  }
  value = (__this->fields).LHFLMBNKPHF;
  if (value != (KDADMJGPAOM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  pPVar3 = (__this->fields).LBKLNIPHGMM;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar3,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  lVar2 = (__this->fields).IKNCNGMNPPK;
  if (lVar2 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar2,(MethodInfo *)0x0);
    iVar4 = iVar4 + iVar1 + 1;
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((__this->fields).IOLELGMBJFL != false) {
    iVar4 = iVar4 + 2;
  }
  if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB,
                       Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_CalculateSize__
                      );
    pPVar3 = (__this->fields).FAEDHKAJJNK;
    iVar4 = iVar1 + iVar4;
    if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                        ((Google_Protobuf_IMessage_o *)pPVar3,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 0353a374 to 0363a39b has its CatchHandler @ 0353a584 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar4 = iVar1 + iVar4;
    }
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x343A3A0]
// AADKBCFCLKK$$WriteTo @ RVA 0x343A3A0

void AADKBCFCLKK__WriteTo
               (AADKBCFCLKK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_01;
  
  if ((DAT_045681c5 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
                    /* try { // try from 0353a3d0 to 0363a3fb has its CatchHandler @ 0353a580 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_WriteTo__);
    DAT_045681c5 = 1;
  }
  if ((__this->fields).AMKHEHFFAKJ != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).AMKHEHFFAKJ,(MethodInfo *)0x0);
  }
  if ((__this->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
                    /* try { // try from 0353a434 to 0363a443 has its CatchHandler @ 0353a58c */
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LHFLMBNKPHF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).LBKLNIPHGMM != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
                    /* try { // try from 0353a448 to 0363a453 has its CatchHandler @ 0353a578 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LBKLNIPHGMM,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IKNCNGMNPPK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).IKNCNGMNPPK,(MethodInfo *)0x0);
  }
                    /* try { // try from 0353a490 to 0363a4b3 has its CatchHandler @ 0353a574 */
  if ((__this->fields).IOLELGMBJFL != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
                    /* try { // try from 0353a4b4 to 0363a547 has its CatchHandler @ 0353a248 */
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).IOLELGMBJFL,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).MPAIPMANDEO;
  if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB,
               Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_WriteTo__);
    if ((__this->fields).FAEDHKAJJNK != (PGICCMFLDPI_o *)0x0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353a55c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3a,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteMessage
                (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).FAEDHKAJJNK,
                 (MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0353a548 to 0363a54f has its CatchHandler @ 0353a57c */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 0353a550 to 0363a553 has its CatchHandler @ 0353a588 */
                    /* try { // try from 0353a554 to 0363a557 has its CatchHandler @ 0353a570 */
                    /* try { // try from 0353a558 to 0363a55b has its CatchHandler @ 0353a588 */
    return;
  }
LAB_0353a55c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0353a55c to 0363a55f has its CatchHandler @ 0353a248 */
  FUN_01bab8c8();
}


// ===== public void .ctor(AADKBCFCLKK IBKIPBJJCPG)  [RVA 0x343A0B0]
// AADKBCFCLKK$$.ctor @ RVA 0x343A0B0

void AADKBCFCLKK___ctor(AADKBCFCLKK_o *__this,AADKBCFCLKK_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PGICCMFLDPI_o **ppPVar5;
  
                    /* try { // try from 0353a0c0 to 0363a0cb has its CatchHandler @ 0353a0f4 */
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_045681c6 & 1) == 0) {
                    /* try { // try from 0353a0cc to 0363a10f has its CatchHandler @ 03539fd4 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Clone__);
    DAT_045681c6 = 1;
    method_00 = extraout_x1;
  }
  AADKBCFCLKK___ctor(__this,method_00);
  if (IBKIPBJJCPG != (AADKBCFCLKK_o *)0x0) {
    (__this->fields).AMKHEHFFAKJ = (IBKIPBJJCPG->fields).AMKHEHFFAKJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353a0c0 with catch @ 0353a0f4
                        */
    pKVar1 = (IBKIPBJJCPG->fields).LHFLMBNKPHF;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353a09c with catch @ 0353a0f8
                        */
    if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
      pKVar1 = (KDADMJGPAOM_o *)0x0;
    }
    else {
      pKVar1 = KDADMJGPAOM__Clone(pKVar1,(MethodInfo *)0x0);
    }
                    /* try { // try from 0353a110 to 0363a113 has its CatchHandler @ 0353a13c */
                    /* try { // try from 0353a114 to 0363a14b has its CatchHandler @ 03539fd4 */
    (__this->fields).LHFLMBNKPHF = pKVar1;
    thunk_FUN_01c20e04();
    pPVar2 = (IBKIPBJJCPG->fields).LBKLNIPHGMM;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    ppPVar5 = &(__this->fields).LBKLNIPHGMM;
                    /* catch() { ... } // from try @ 0353a110 with catch @ 0353a13c */
    *ppPVar5 = pPVar2;
    thunk_FUN_01c20e04(ppPVar5);
                    /* try { // try from 0353a14c to 0363a153 has its CatchHandler @ 0353a168 */
    (__this->fields).IKNCNGMNPPK = (IBKIPBJJCPG->fields).IKNCNGMNPPK;
                    /* try { // try from 0353a154 to 0363a15f has its CatchHandler @ 03539fd4 */
    (__this->fields).IOLELGMBJFL = (IBKIPBJJCPG->fields).IOLELGMBJFL;
    pGVar3 = (IBKIPBJJCPG->fields).MPAIPMANDEO;
    if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0) {
                    /* try { // try from 0353a160 to 0363a167 has its CatchHandler @ 0353a168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353a14c with catch @ 0353a168
                       catch(type#2 @ 00000000) { ... } // from try @ 0353a160 with catch @ 0353a168
                        */
      pGVar3 = (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                          Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_Clone__);
      (__this->fields).MPAIPMANDEO = pGVar3;
      thunk_FUN_01c20e04();
      pPVar2 = (IBKIPBJJCPG->fields).FAEDHKAJJNK;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
      }
      (__this->fields).FAEDHKAJJNK = pPVar2;
      thunk_FUN_01c20e04();
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long DLGIFDAHEPB()  [RVA 0x343A560]
// AADKBCFCLKK$$DLGIFDAHEPB @ RVA 0x343A560

int64_t AADKBCFCLKK__DLGIFDAHEPB(AADKBCFCLKK_o *__this,MethodInfo *method)

{
                    /* try { // try from 0353a560 to 0363a563 has its CatchHandler @ 0353a56c */
                    /* try { // try from 0353a564 to 0363a59b has its CatchHandler @ 0353a248 */
  return (__this->fields).AMKHEHFFAKJ;
}

