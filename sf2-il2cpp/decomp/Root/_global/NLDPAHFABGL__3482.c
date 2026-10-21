// TypeDefIndex 3482
// Namespace: 
// public sealed class NLDPAHFABGL : IMessage<NLDPAHFABGL>, IMessage, IEquatable<NLDPAHFABGL>, IDeepCloneable<NLDPAHFABGL>
// Fields:
//   private static readonly MessageParser<NLDPAHFABGL> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JFPJBGGMCLH = 1;
//   private long ADEIKPGDIPM; // 0x18
//   public const int LCMBNNMDINJ = 2;
//   private long IFDGNOKADMK; // 0x20
//   public const int IGDMLFCJJOM = 3;
//   private PGICCMFLDPI MIINPPOCPCN; // 0x28

// ===== public NLDPAHFABGL Clone()  [RVA 0x356FC68]
// NLDPAHFABGL$$Clone @ RVA 0x356FC68

NLDPAHFABGL_o * NLDPAHFABGL__Clone(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  NLDPAHFABGL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0366fc80 to 0376fc83 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366fc84 to 0376fc87 has its CatchHandler @ 03672aec */
  if ((DAT_04568c56 & 1) == 0) {
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
                    /* try { // try from 0366fc98 to 0376fc9f has its CatchHandler @ 03672af0 */
    DAT_04568c56 = 1;
    method = extraout_x1;
  }
  __this_00 = (NLDPAHFABGL_o *)thunk_FUN_01bda818(NLDPAHFABGL_TypeInfo,method);
  NLDPAHFABGL___ctor(__this_00,__this,in_x2);
                    /* try { // try from 0366fcb0 to 0376fcb7 has its CatchHandler @ 03672ae8 */
  return __this_00;
}


// ===== public void .ctor(NLDPAHFABGL IBKIPBJJCPG)  [RVA 0x356FCC0]
// NLDPAHFABGL$$.ctor @ RVA 0x356FCC0

void NLDPAHFABGL___ctor(NLDPAHFABGL_o *__this,NLDPAHFABGL_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  int64_t iVar3;
  
                    /* try { // try from 0366fcc4 to 0376fccb has its CatchHandler @ 03672ae4 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NLDPAHFABGL_o *)0x0) {
                    /* try { // try from 0366fcdc to 0376fce3 has its CatchHandler @ 03672ae0 */
    iVar3 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
    (__this->fields).IFDGNOKADMK = (IBKIPBJJCPG->fields).IFDGNOKADMK;
    (__this->fields).ADEIKPGDIPM = iVar3;
                    /* try { // try from 0366fce4 to 0376fcf7 has its CatchHandler @ 03672adc */
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366fcf8 to 0376fd03 has its CatchHandler @ 03672ad8 */
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
    thunk_FUN_01c20e04();
                    /* try { // try from 0366fd14 to 0376fd1b has its CatchHandler @ 03672a98 */
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
                    /* try { // try from 0366fd2c to 0376fd33 has its CatchHandler @ 03672a94 */
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(NLDPAHFABGL IBKIPBJJCPG)  [RVA 0x356FD3C]
// NLDPAHFABGL$$MergeFrom @ RVA 0x356FD3C

void NLDPAHFABGL__MergeFrom(NLDPAHFABGL_o *__this,NLDPAHFABGL_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  NLDPAHFABGL_Fields *pNVar4;
  PGICCMFLDPI_o **ppPVar5;
  
                    /* try { // try from 0366fd40 to 0376fd47 has its CatchHandler @ 03672a90 */
                    /* try { // try from 0366fd58 to 0376fd5f has its CatchHandler @ 03672a8c */
  if ((DAT_04568c57 & 1) == 0) {
                    /* try { // try from 0366fd60 to 0376fd73 has its CatchHandler @ 03672a88 */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568c57 = 1;
  }
  if (IBKIPBJJCPG != (NLDPAHFABGL_o *)0x0) {
                    /* try { // try from 0366fd74 to 0376fd7f has its CatchHandler @ 03672a84 */
    lVar3 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
    if (lVar3 != 0) {
      (__this->fields).ADEIKPGDIPM = lVar3;
    }
    lVar3 = (IBKIPBJJCPG->fields).IFDGNOKADMK;
    if (lVar3 != 0) {
      (__this->fields).IFDGNOKADMK = lVar3;
    }
                    /* try { // try from 0366fd90 to 0376fd97 has its CatchHandler @ 03672a4c */
    if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).MIINPPOCPCN;
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 0366fda8 to 0376fdaf has its CatchHandler @ 03672a48 */
        pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
                    /* try { // try from 0366fdbc to 0376fdc3 has its CatchHandler @ 03672a44 */
        *ppPVar5 = pPVar1;
        thunk_FUN_01c20e04(ppPVar5,pPVar1);
        pPVar1 = *ppPVar5;
        if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
                    /* try { // try from 0366fdd4 to 0376fddb has its CatchHandler @ 03672a40 */
                    /* try { // try from 0366fddc to 0376fdef has its CatchHandler @ 03672a3c */
      PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    }
    pNVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 0366fdf0 to 0376fdfb has its CatchHandler @ 03672a38 */
    pNVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pNVar4,pGVar2);
    return;
  }
                    /* try { // try from 0366fe14 to 0376fe17 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366fe18 to 0376fe1b has its CatchHandler @ 03672ad0 */
  return;
}


// ===== public int CalculateSize()  [RVA 0x356FE20]
// NLDPAHFABGL$$CalculateSize @ RVA 0x356FE20

int32_t NLDPAHFABGL__CalculateSize(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long lVar3;
  PGICCMFLDPI_o *value;
  
                    /* try { // try from 0366fe20 to 0376fe2b has its CatchHandler @ 03672c98 */
  if ((DAT_04568c58 & 1) == 0) {
                    /* try { // try from 0366fe44 to 0376fe4f has its CatchHandler @ 03672e14 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568c58 = 1;
    method = extraout_x1;
  }
  lVar3 = (__this->fields).ADEIKPGDIPM;
  iVar2 = 0;
  if (lVar3 != 0) {
                    /* try { // try from 0366fe60 to 0376fe6f has its CatchHandler @ 0367325c */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
                    /* try { // try from 0366fe7c to 0376fe83 has its CatchHandler @ 03673054 */
    iVar2 = iVar1 + 1;
  }
  lVar3 = (__this->fields).IFDGNOKADMK;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366fe94 to 0376fe9b has its CatchHandler @ 03673050 */
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
                    /* try { // try from 0366fea8 to 0376feaf has its CatchHandler @ 0367304c */
    iVar2 = iVar2 + iVar1 + 1;
  }
  value = (__this->fields).MIINPPOCPCN;
  if (value != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366fec0 to 0376fec7 has its CatchHandler @ 03673048 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366fec8 to 0376fed7 has its CatchHandler @ 03673044 */
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0366fee8 to 0376feef has its CatchHandler @ 03673040 */
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== private static void .cctor()  [RVA 0x356FF00]
// NLDPAHFABGL$$.cctor @ RVA 0x356FF00

void NLDPAHFABGL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NLDPAHFABGL__o *__this;
  
                    /* try { // try from 0366ff00 to 0376ff07 has its CatchHandler @ 0367303c */
                    /* try { // try from 0366ff14 to 0376ff1b has its CatchHandler @ 03673038 */
  if ((DAT_04568c59 & 1) == 0) {
                    /* try { // try from 0366ff2c to 0376ff33 has its CatchHandler @ 03673034 */
    FUN_01bab630(&System_Func<NLDPAHFABGL>_TypeInfo);
                    /* try { // try from 0366ff34 to 0376ff5f has its CatchHandler @ 036731b8 */
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NLDPAHFABGL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NLDPAHFABGL>_TypeInfo);
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
    FUN_01bab630(&Method_NLDPAHFABGL_<>c_OEFEKGDDHPN__);
                    /* try { // try from 0366ff60 to 0376ff87 has its CatchHandler @ 036732f8 */
    FUN_01bab630(&NLDPAHFABGL_<>c_TypeInfo);
    DAT_04568c59 = 1;
  }
                    /* try { // try from 0366ff94 to 0376ff9b has its CatchHandler @ 03673030 */
  if ((NLDPAHFABGL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0366ffac to 0376ffb3 has its CatchHandler @ 0367302c */
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NLDPAHFABGL>_TypeInfo);
                    /* try { // try from 0366ffc0 to 0376ffc7 has its CatchHandler @ 03673028 */
  System_Func<object>___ctor();
                    /* try { // try from 0366ffd8 to 0376ffdf has its CatchHandler @ 03673024 */
  __this = (Google_Protobuf_MessageParser_NLDPAHFABGL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NLDPAHFABGL>_TypeInfo);
                    /* try { // try from 0366ffe0 to 0376ffef has its CatchHandler @ 03673020 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NLDPAHFABGL>__ctor__);
  NLDPAHFABGL_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 03670004 to 0377000b has its CatchHandler @ 03672c94 */
  thunk_FUN_01c20e04(NLDPAHFABGL_TypeInfo->static_fields,__this);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3570018]
// NLDPAHFABGL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3570018

Google_Protobuf_Reflection_MessageDescriptor_o *
NLDPAHFABGL__pb__Google_Protobuf_IMessage_get_Descriptor(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  NLDPAHFABGL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0367001c to 03770023 has its CatchHandler @ 03672c90 */
                    /* try { // try from 03670030 to 03770037 has its CatchHandler @ 03672c8c */
  if ((DAT_04568c5a & 1) == 0) {
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
    DAT_04568c5a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03670048 to 0377004f has its CatchHandler @ 03672c88 */
                    /* try { // try from 03670050 to 0377005f has its CatchHandler @ 03672c84 */
  method_00 = NLDPAHFABGL_TypeInfo;
  if ((NLDPAHFABGL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NLDPAHFABGL_c *)thunk_FUN_01ba7564(NLDPAHFABGL_TypeInfo,method);
  }
  pGVar1 = NLDPAHFABGL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x356FD34]
// NLDPAHFABGL$$.ctor @ RVA 0x356FD34

void NLDPAHFABGL___ctor(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void KAIDLBNPCJH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x3570168]
// NLDPAHFABGL$$KAIDLBNPCJH @ RVA 0x3570168

void NLDPAHFABGL__KAIDLBNPCJH(NLDPAHFABGL_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MIINPPOCPCN = CJNHFNHJHPE;
                    /* try { // try from 0367016c to 03770173 has its CatchHandler @ 03672c74 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public long MMAEDHGALLM()  [RVA 0x3570170]
// NLDPAHFABGL$$MMAEDHGALLM @ RVA 0x3570170

int64_t NLDPAHFABGL__MMAEDHGALLM(NLDPAHFABGL_o *__this,MethodInfo *method)

{
                    /* try { // try from 03670174 to 03770183 has its CatchHandler @ 03672c70 */
  return (__this->fields).IFDGNOKADMK;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3570178]
// NLDPAHFABGL$$MergeFrom @ RVA 0x3570178

void NLDPAHFABGL__MergeFrom
               (NLDPAHFABGL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  NLDPAHFABGL_Fields *pNVar2;
  uint32_t uVar3;
  int64_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04568c5b & 1) == 0) {
                    /* try { // try from 0367019c to 0377019f has its CatchHandler @ 03673328 */
                    /* try { // try from 036701a0 to 037701c3 has its CatchHandler @ 03673254 */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568c5b = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03670294 to 0377029b has its CatchHandler @ 03672ffc */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).MIINPPOCPCN;
  pNVar2 = &__this->fields;
  do {
                    /* try { // try from 036701d4 to 037701db has its CatchHandler @ 03672c6c */
    while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0xf < (int)uVar3) {
      if (uVar3 == 0x10) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IFDGNOKADMK = iVar4;
                    /* try { // try from 03670254 to 0377025b has its CatchHandler @ 03672ff8 */
      }
      else if (uVar3 == 0x1a) {
        pPVar6 = *ppPVar1;
                    /* try { // try from 036701ec to 037701f3 has its CatchHandler @ 03672c68 */
        if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
          pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* try { // try from 03670200 to 03770207 has its CatchHandler @ 03672c64 */
          PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
          *ppPVar1 = pPVar6;
          thunk_FUN_01c20e04(ppPVar1,pPVar6);
          pPVar6 = *ppPVar1;
        }
                    /* try { // try from 03670218 to 0377021f has its CatchHandler @ 03672c60 */
                    /* try { // try from 03670220 to 03770233 has its CatchHandler @ 03672c5c */
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar6,(MethodInfo *)0x0);
      }
      else {
LAB_0367025c:
                    /* try { // try from 03670268 to 0377026f has its CatchHandler @ 03673004 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pNVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pNVar2->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pNVar2,pGVar5);
      }
    }
    if (uVar3 != 8) {
      if (uVar3 == 0) {
                    /* try { // try from 03670280 to 03770287 has its CatchHandler @ 03673000 */
        return;
      }
      goto LAB_0367025c;
    }
    iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 0367023c to 03770243 has its CatchHandler @ 03672c58 */
    (__this->fields).ADEIKPGDIPM = iVar4;
  } while( true );
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3570064]
// NLDPAHFABGL$$FFHIHGCDGAK @ RVA 0x3570064

Google_Protobuf_Reflection_MessageDescriptor_o * NLDPAHFABGL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03670078 to 0377007b has its CatchHandler @ 03673328 */
                    /* try { // try from 0367007c to 0377009f has its CatchHandler @ 03673258 */
  if ((DAT_04568c5c & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568c5c = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036700ac to 037700b3 has its CatchHandler @ 0367301c */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 036700c4 to 037700cb has its CatchHandler @ 03673018 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
                    /* try { // try from 036700d8 to 037700df has its CatchHandler @ 03673014 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 036700f0 to 037700f7 has its CatchHandler @ 03673010 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036700f8 to 03770107 has its CatchHandler @ 0367300c */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
                    /* try { // try from 0367010c to 03770117 has its CatchHandler @ 03673008 */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 03670140 to 03770147 has its CatchHandler @ 03672c7c */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0367014c;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 03670128 to 0377012f has its CatchHandler @ 03672c80 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0367014c:
                    /* try { // try from 03670154 to 0377015b has its CatchHandler @ 03672c78 */
                    /* WARNING: Could not recover jumptable at 0x03670160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x42,pVVar2->method);
  return pGVar3;
}


// ===== public override string ToString()  [RVA 0x3570298]
// NLDPAHFABGL$$ToString @ RVA 0x3570298

System_String_o * NLDPAHFABGL__ToString(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036702ac to 037702b3 has its CatchHandler @ 03672ff4 */
                    /* try { // try from 036702b4 to 037702c7 has its CatchHandler @ 03672ff0 */
  if ((DAT_04568c5d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568c5d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036702d4 to 037702d7 has its CatchHandler @ 03672fec */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 036702e8 to 037702ef has its CatchHandler @ 03673250 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35702F0]
// NLDPAHFABGL$$WriteTo @ RVA 0x35702F0

void NLDPAHFABGL__WriteTo
               (NLDPAHFABGL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 036702fc to 03770303 has its CatchHandler @ 03672fe8 */
  if ((__this->fields).ADEIKPGDIPM != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036703ac;
                    /* try { // try from 03670314 to 0377031b has its CatchHandler @ 03672fe4 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 03670328 to 0377032f has its CatchHandler @ 03672fe0 */
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ADEIKPGDIPM,(MethodInfo *)0x0);
  }
  if ((__this->fields).IFDGNOKADMK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036703ac;
                    /* try { // try from 03670340 to 03770347 has its CatchHandler @ 03672fdc */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
                    /* try { // try from 03670348 to 03770357 has its CatchHandler @ 03672fd8 */
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).IFDGNOKADMK,(MethodInfo *)0x0);
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_036703ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03670370 to 037703ab has its CatchHandler @ 0367321c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public PGICCMFLDPI MLFJHBIJMAA()  [RVA 0x35703B0]
// NLDPAHFABGL$$MLFJHBIJMAA @ RVA 0x35703B0

PGICCMFLDPI_o * NLDPAHFABGL__MLFJHBIJMAA(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  return (__this->fields).MIINPPOCPCN;
}


// ===== public void BBIOHFGNCDO(long CJNHFNHJHPE)  [RVA 0x35703B8]
// NLDPAHFABGL$$BBIOHFGNCDO @ RVA 0x35703B8

void NLDPAHFABGL__BBIOHFGNCDO(NLDPAHFABGL_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IFDGNOKADMK = CJNHFNHJHPE;
  return;
}


// ===== public static MessageParser<NLDPAHFABGL> PGCAHPDCJBC()  [RVA 0x35703C0]
// NLDPAHFABGL$$PGCAHPDCJBC @ RVA 0x35703C0

Google_Protobuf_MessageParser_NLDPAHFABGL__o * NLDPAHFABGL__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 036703c0 to 037703cb has its CatchHandler @ 03672fd4 */
  if ((DAT_04568c5e & 1) == 0) {
                    /* try { // try from 036703dc to 037703eb has its CatchHandler @ 0367324c */
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
    DAT_04568c5e = 1;
  }
                    /* try { // try from 036703f8 to 037703ff has its CatchHandler @ 03672fd0 */
  if ((NLDPAHFABGL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03670410 to 03770417 has its CatchHandler @ 03672fcc */
  return NLDPAHFABGL_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override int GetHashCode()  [RVA 0x3570418]
// NLDPAHFABGL$$GetHashCode @ RVA 0x3570418

int32_t NLDPAHFABGL__GetHashCode(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_18;
  
  local_18 = 0;
                    /* try { // try from 03670424 to 0377042b has its CatchHandler @ 03672fc8 */
  lVar5 = (__this->fields).ADEIKPGDIPM;
  if (lVar5 == 0) {
    uVar1 = 1;
  }
  else {
    local_18 = lVar5;
                    /* try { // try from 0367043c to 03770443 has its CatchHandler @ 03672fc4 */
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
                    /* try { // try from 03670444 to 03770453 has its CatchHandler @ 03672fc0 */
  }
  lVar5 = (__this->fields).IFDGNOKADMK;
  if (lVar5 != 0) {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
                    /* try { // try from 03670464 to 0377046b has its CatchHandler @ 03672fbc */
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar3 = (__this->fields).MIINPPOCPCN;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 0367047c to 03770483 has its CatchHandler @ 03672fb8 */
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03670490 to 03770497 has its CatchHandler @ 03672fb4 */
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public bool Equals(NLDPAHFABGL IBKIPBJJCPG)  [RVA 0x35704A8]
// NLDPAHFABGL$$Equals @ RVA 0x35704A8

bool NLDPAHFABGL__Equals(NLDPAHFABGL_o *__this,NLDPAHFABGL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 036704a8 to 037704af has its CatchHandler @ 03672fb0 */
                    /* try { // try from 036704b0 to 037704db has its CatchHandler @ 036731b4 */
  if (IBKIPBJJCPG != (NLDPAHFABGL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 036704dc to 03770503 has its CatchHandler @ 036732f4 */
    if ((((__this->fields).ADEIKPGDIPM == (IBKIPBJJCPG->fields).ADEIKPGDIPM) &&
        ((__this->fields).IFDGNOKADMK == (IBKIPBJJCPG->fields).IFDGNOKADMK)) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 03670510 to 03770517 has its CatchHandler @ 03672fac */
  return false;
}


// ===== public void PCOFNFAMLGJ(long CJNHFNHJHPE)  [RVA 0x3570528]
// NLDPAHFABGL$$PCOFNFAMLGJ @ RVA 0x3570528

void NLDPAHFABGL__PCOFNFAMLGJ(NLDPAHFABGL_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 03670528 to 0377052f has its CatchHandler @ 03672fa8 */
  (__this->fields).ADEIKPGDIPM = CJNHFNHJHPE;
  return;
}


// ===== public long GICDOGMCBOK()  [RVA 0x3570530]
// NLDPAHFABGL$$GICDOGMCBOK @ RVA 0x3570530

int64_t NLDPAHFABGL__GICDOGMCBOK(NLDPAHFABGL_o *__this,MethodInfo *method)

{
  return (__this->fields).ADEIKPGDIPM;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3570538]
// NLDPAHFABGL$$Equals @ RVA 0x3570538

bool NLDPAHFABGL__Equals(NLDPAHFABGL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0367053c to 03770543 has its CatchHandler @ 03672fa4 */
  if ((DAT_04568c5f & 1) == 0) {
                    /* try { // try from 03670554 to 0377055b has its CatchHandler @ 03672fa0 */
                    /* try { // try from 0367055c to 0377056b has its CatchHandler @ 03672f9c */
    FUN_01bab630(&NLDPAHFABGL_TypeInfo);
    DAT_04568c5f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* try { // try from 0367057c to 03770583 has its CatchHandler @ 03672f98 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)NLDPAHFABGL_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* try { // try from 03670594 to 0377059b has its CatchHandler @ 03672f94 */
  bVar1 = NLDPAHFABGL__Equals(__this,(NLDPAHFABGL_o *)IBKIPBJJCPG,method);
  return bVar1;
}

