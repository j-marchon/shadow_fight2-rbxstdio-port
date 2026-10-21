// TypeDefIndex 597
// Namespace: 
// public sealed class OLCBPIHLPEC : IMessage<OLCBPIHLPEC>, IMessage, IEquatable<OLCBPIHLPEC>, IDeepCloneable<OLCBPIHLPEC>
// Fields:
//   private static readonly MessageParser<OLCBPIHLPEC> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KINAJLKDFIB = 1;
//   private long NGODFBDEMLE; // 0x18
//   public const int BGABKDPGHMI = 2;
//   private string IAEBJKOPDAO; // 0x20
//   public const int KBFHJCMJINK = 3;
//   private CKLIGNAPKFO EMDNDLOODLG; // 0x28
//   public const int KPJHOMEKKMH = 4;
//   private string EGELDFKMOCJ; // 0x30
//   public const int IGDMLFCJJOM = 5;
//   private PGICCMFLDPI MIINPPOCPCN; // 0x38

// ===== public void GNLPNKGBAFL(CKLIGNAPKFO CJNHFNHJHPE)  [RVA 0x35BA9D8]
// OLCBPIHLPEC$$GNLPNKGBAFL @ RVA 0x35BA9D8

void OLCBPIHLPEC__GNLPNKGBAFL(OLCBPIHLPEC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMDNDLOODLG = CJNHFNHJHPE;
  return;
}


// ===== public PGICCMFLDPI MLFJHBIJMAA()  [RVA 0x35BA9E0]
// OLCBPIHLPEC$$MLFJHBIJMAA @ RVA 0x35BA9E0

PGICCMFLDPI_o * OLCBPIHLPEC__MLFJHBIJMAA(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).MIINPPOCPCN;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x35BA9E8]
// OLCBPIHLPEC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35BA9E8

Google_Protobuf_Reflection_MessageDescriptor_o *
OLCBPIHLPEC__pb__Google_Protobuf_IMessage_get_Descriptor(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  OLCBPIHLPEC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ec9 & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568ec9 = 1;
    method = extraout_x1;
  }
  method_00 = OLCBPIHLPEC_TypeInfo;
  if ((OLCBPIHLPEC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OLCBPIHLPEC_c *)thunk_FUN_01ba7564(OLCBPIHLPEC_TypeInfo,method);
  }
  pGVar1 = OLCBPIHLPEC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35BAB38]
// OLCBPIHLPEC$$Equals @ RVA 0x35BAB38

bool OLCBPIHLPEC__Equals(OLCBPIHLPEC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568eca & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568eca = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OLCBPIHLPEC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OLCBPIHLPEC__Equals(__this,(OLCBPIHLPEC_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x35BAC44]
// OLCBPIHLPEC$$MergeFrom @ RVA 0x35BAC44

void OLCBPIHLPEC__MergeFrom
               (OLCBPIHLPEC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  OLCBPIHLPEC_Fields *pOVar2;
  uint uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int64_t iVar7;
  PGICCMFLDPI_o *pPVar8;
  
  if ((DAT_04568ecb & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568ecb = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar3 != 0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pOVar2 = &__this->fields;
    do {
      if (uVar3 < 0x13) {
        if (uVar3 == 8) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).NGODFBDEMLE = iVar7;
        }
        else if (uVar3 == 0x12) {
          pSVar5 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          OLCBPIHLPEC__EEMGLBFKELA(__this,pSVar5,method);
        }
        else {
LAB_036bad2c:
          method = (MethodInfo *)0x0;
          pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pOVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pOVar2->CKFPENBPNML = pGVar6;
          thunk_FUN_01c20e04(pOVar2,pGVar6);
        }
      }
      else if (uVar3 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMDNDLOODLG = iVar4;
      }
      else if (uVar3 == 0x22) {
        pSVar5 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        OLCBPIHLPEC__IPNMMELEIJE(__this,pSVar5,method);
      }
      else {
        if (uVar3 != 0x2a) goto LAB_036bad2c;
        pPVar8 = *ppPVar1;
        if (pPVar8 == (PGICCMFLDPI_o *)0x0) {
          pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
          PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
          *ppPVar1 = pPVar8;
          thunk_FUN_01c20e04(ppPVar1,pPVar8);
          pPVar8 = *ppPVar1;
        }
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar8,(MethodInfo *)0x0);
      }
      uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar3 != 0);
  }
  return;
}


// ===== public static MessageParser<OLCBPIHLPEC> PGCAHPDCJBC()  [RVA 0x35BAEB0]
// OLCBPIHLPEC$$PGCAHPDCJBC @ RVA 0x35BAEB0

Google_Protobuf_MessageParser_OLCBPIHLPEC__o * OLCBPIHLPEC__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568ecc & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568ecc = 1;
  }
  if ((OLCBPIHLPEC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OLCBPIHLPEC_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public long IBIFMLHLMIP()  [RVA 0x35BAF08]
// OLCBPIHLPEC$$IBIFMLHLMIP @ RVA 0x35BAF08

int64_t OLCBPIHLPEC__IBIFMLHLMIP(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).NGODFBDEMLE;
}


// ===== public void MergeFrom(OLCBPIHLPEC IBKIPBJJCPG)  [RVA 0x35BAF10]
// OLCBPIHLPEC$$MergeFrom @ RVA 0x35BAF10

void OLCBPIHLPEC__MergeFrom(OLCBPIHLPEC_o *__this,OLCBPIHLPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  long lVar5;
  OLCBPIHLPEC_Fields *pOVar6;
  PGICCMFLDPI_o **ppPVar7;
  
  if ((DAT_04568ecd & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568ecd = 1;
  }
  if (IBKIPBJJCPG == (OLCBPIHLPEC_o *)0x0) {
    return;
  }
  lVar5 = (IBKIPBJJCPG->fields).NGODFBDEMLE;
  if (lVar5 != 0) {
    (__this->fields).NGODFBDEMLE = lVar5;
  }
  pSVar4 = (IBKIPBJJCPG->fields).IAEBJKOPDAO;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      OLCBPIHLPEC__EEMGLBFKELA(__this,pSVar4,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      (__this->fields).EMDNDLOODLG = iVar1;
    }
    pSVar4 = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        OLCBPIHLPEC__IPNMMELEIJE(__this,pSVar4,method);
      }
      if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
        ppPVar7 = &(__this->fields).MIINPPOCPCN;
        pPVar2 = *ppPVar7;
        if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
          pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
          PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
          *ppPVar7 = pPVar2;
          thunk_FUN_01c20e04(ppPVar7,pPVar2);
          pPVar2 = *ppPVar7;
          if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_036bb020;
        }
        PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
      }
      pOVar6 = &__this->fields;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pOVar6->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pOVar6->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pOVar6,pGVar3);
      return;
    }
  }
LAB_036bb020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35BB024]
// OLCBPIHLPEC$$.cctor @ RVA 0x35BB024

void OLCBPIHLPEC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OLCBPIHLPEC__o *__this;
  
  if ((DAT_04568ece & 1) == 0) {
    FUN_01bab630(&System_Func<OLCBPIHLPEC>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OLCBPIHLPEC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OLCBPIHLPEC>_TypeInfo);
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    FUN_01bab630(&Method_OLCBPIHLPEC_<>c_DMLACMHIPML__);
    FUN_01bab630(&OLCBPIHLPEC_<>c_TypeInfo);
    DAT_04568ece = 1;
  }
  if ((OLCBPIHLPEC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OLCBPIHLPEC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OLCBPIHLPEC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OLCBPIHLPEC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OLCBPIHLPEC>__ctor__);
  OLCBPIHLPEC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OLCBPIHLPEC_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor(OLCBPIHLPEC IBKIPBJJCPG)  [RVA 0x35BB13C]
// OLCBPIHLPEC$$.ctor @ RVA 0x35BB13C

void OLCBPIHLPEC___ctor(OLCBPIHLPEC_o *__this,OLCBPIHLPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  OLCBPIHLPEC___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (OLCBPIHLPEC_o *)0x0) {
    (__this->fields).NGODFBDEMLE = (IBKIPBJJCPG->fields).NGODFBDEMLE;
    (__this->fields).IAEBJKOPDAO = (IBKIPBJJCPG->fields).IAEBJKOPDAO;
    thunk_FUN_01c20e04();
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).EGELDFKMOCJ = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
    thunk_FUN_01c20e04();
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string CNNCHPPECHP()  [RVA 0x35BB23C]
// OLCBPIHLPEC$$CNNCHPPECHP @ RVA 0x35BB23C

System_String_o * OLCBPIHLPEC__CNNCHPPECHP(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).EGELDFKMOCJ;
}


// ===== public void EEMGLBFKELA(string CJNHFNHJHPE)  [RVA 0x35BADB8]
// OLCBPIHLPEC$$EEMGLBFKELA @ RVA 0x35BADB8

void OLCBPIHLPEC__EEMGLBFKELA(OLCBPIHLPEC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568ecf & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04568ecf = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).IAEBJKOPDAO;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public override int GetHashCode()  [RVA 0x35BB244]
// OLCBPIHLPEC$$GetHashCode @ RVA 0x35BB244

int32_t OLCBPIHLPEC__GetHashCode(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  PGICCMFLDPI_o *pPVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  long lVar7;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar7 = (__this->fields).NGODFBDEMLE;
  if (lVar7 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar7;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).IAEBJKOPDAO;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      local_24 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).EGELDFKMOCJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      pPVar5 = (__this->fields).MIINPPOCPCN;
      if (pPVar5 != (PGICCMFLDPI_o *)0x0) {
        uVar3 = (*(pPVar5->klass->vtable)._2_GetHashCode.methodPtr)
                          (pPVar5,(pPVar5->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      pGVar6 = (__this->fields).CKFPENBPNML;
      if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar3 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CKLIGNAPKFO NHGGBEACKBD()  [RVA 0x35BB320]
// OLCBPIHLPEC$$NHGGBEACKBD @ RVA 0x35BB320

int32_t OLCBPIHLPEC__NHGGBEACKBD(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDNDLOODLG;
}


// ===== public override string ToString()  [RVA 0x35BB328]
// OLCBPIHLPEC$$ToString @ RVA 0x35BB328

System_String_o * OLCBPIHLPEC__ToString(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ed0 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568ed0 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string MGKPLEHEIHA()  [RVA 0x35BB380]
// OLCBPIHLPEC$$MGKPLEHEIHA @ RVA 0x35BB380

System_String_o * OLCBPIHLPEC__MGKPLEHEIHA(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).IAEBJKOPDAO;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35BB388]
// OLCBPIHLPEC$$WriteTo @ RVA 0x35BB388

void OLCBPIHLPEC__WriteTo
               (OLCBPIHLPEC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).NGODFBDEMLE != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).NGODFBDEMLE,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).IAEBJKOPDAO;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).IAEBJKOPDAO,(MethodInfo *)0x0);
    }
    if ((__this->fields).EMDNDLOODLG != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteEnum
                (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).EGELDFKMOCJ;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).EGELDFKMOCJ,(MethodInfo *)0x0);
      }
      if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036bb4ac;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x2a,(MethodInfo *)0x0);
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
  }
LAB_036bb4ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OLCBPIHLPEC Clone()  [RVA 0x35BB4B0]
// OLCBPIHLPEC$$Clone @ RVA 0x35BB4B0

OLCBPIHLPEC_o * OLCBPIHLPEC__Clone(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  OLCBPIHLPEC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568ed1 & 1) == 0) {
    FUN_01bab630(&OLCBPIHLPEC_TypeInfo);
    DAT_04568ed1 = 1;
    method = extraout_x1;
  }
  __this_00 = (OLCBPIHLPEC_o *)thunk_FUN_01bda818(OLCBPIHLPEC_TypeInfo,method);
  OLCBPIHLPEC___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void KAIDLBNPCJH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x35BB508]
// OLCBPIHLPEC$$KAIDLBNPCJH @ RVA 0x35BB508

void OLCBPIHLPEC__KAIDLBNPCJH(OLCBPIHLPEC_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MIINPPOCPCN = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool Equals(OLCBPIHLPEC IBKIPBJJCPG)  [RVA 0x35BAB9C]
// OLCBPIHLPEC$$Equals @ RVA 0x35BAB9C

bool OLCBPIHLPEC__Equals(OLCBPIHLPEC_o *__this,OLCBPIHLPEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (OLCBPIHLPEC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).NGODFBDEMLE == (IBKIPBJJCPG->fields).NGODFBDEMLE) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).IAEBJKOPDAO,(IBKIPBJJCPG->fields).IAEBJKOPDAO,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG)) &&
       ((bVar1 = System_String__op_Inequality
                           ((__this->fields).EGELDFKMOCJ,(IBKIPBJJCPG->fields).EGELDFKMOCJ,
                            (MethodInfo *)0x0), !bVar1 &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
        bVar1)))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x35BAA34]
// OLCBPIHLPEC$$FFHIHGCDGAK @ RVA 0x35BAA34

Google_Protobuf_Reflection_MessageDescriptor_o * OLCBPIHLPEC__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568ed2 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568ed2 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
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
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_036bab1c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_036bab1c:
                    /* WARNING: Could not recover jumptable at 0x036bab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,1,pVVar2->method);
  return pGVar3;
}


// ===== public void IPNMMELEIJE(string CJNHFNHJHPE)  [RVA 0x35BAE34]
// OLCBPIHLPEC$$IPNMMELEIJE @ RVA 0x35BAE34

void OLCBPIHLPEC__IPNMMELEIJE(OLCBPIHLPEC_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568ed3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04568ed3 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).EGELDFKMOCJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void PFADEIOFOJB(long CJNHFNHJHPE)  [RVA 0x35BB510]
// OLCBPIHLPEC$$PFADEIOFOJB @ RVA 0x35BB510

void OLCBPIHLPEC__PFADEIOFOJB(OLCBPIHLPEC_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NGODFBDEMLE = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x35BB1D4]
// OLCBPIHLPEC$$.ctor @ RVA 0x35BB1D4

void OLCBPIHLPEC___ctor(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  if ((DAT_04568ed4 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568ed4 = 1;
  }
  (__this->fields).IAEBJKOPDAO = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).EGELDFKMOCJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int CalculateSize()  [RVA 0x35BB518]
// OLCBPIHLPEC$$CalculateSize @ RVA 0x35BB518

int32_t OLCBPIHLPEC__CalculateSize(OLCBPIHLPEC_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  System_String_o *pSVar3;
  PGICCMFLDPI_o *value_01;
  
  if ((DAT_04568ed5 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568ed5 = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).NGODFBDEMLE;
  iVar2 = 0;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  pSVar3 = (__this->fields).IAEBJKOPDAO;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    value = (__this->fields).EMDNDLOODLG;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    pSVar3 = (__this->fields).EGELDFKMOCJ;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
        iVar2 = iVar2 + iVar1 + 1;
      }
      value_01 = (__this->fields).MIINPPOCPCN;
      if (value_01 != (PGICCMFLDPI_o *)0x0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                          ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
        iVar2 = iVar2 + iVar1 + 1;
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
        iVar2 = iVar1 + iVar2;
      }
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

