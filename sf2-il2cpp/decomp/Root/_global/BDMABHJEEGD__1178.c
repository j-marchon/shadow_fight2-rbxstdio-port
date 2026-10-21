// TypeDefIndex 1178
// Namespace: 
// public sealed class BDMABHJEEGD : IMessage<BDMABHJEEGD>, IMessage, IEquatable<BDMABHJEEGD>, IDeepCloneable<BDMABHJEEGD>
// Fields:
//   private static readonly MessageParser<BDMABHJEEGD> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DENAGDCDHOL = 1;
//   private int OHMDCKEDOGH; // 0x18
//   public const int IDIONDNLDAA = 2;
//   private PGICCMFLDPI LBKLNIPHGMM; // 0x20
//   public const int IHKKAOBBNID = 3;
//   private PGICCMFLDPI IMNALGKNMNP; // 0x28
//   public const int LGFAHBAINCH = 4;
//   private int OOCPIHHNOBO; // 0x30
//   public const int HEKMPJFIJIL = 5;
//   private int CLLIINPOPHO; // 0x34
//   public const int EAGIFHOLNEL = 6;
//   private BECIPDJBAOG MJIIHOLHNCK; // 0x38
//   public const int GNIFPDLPFIM = 7;
//   private PGICCMFLDPI GMHNOGKNFNB; // 0x40

// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x310BAC0]
// BDMABHJEEGD$$WriteTo @ RVA 0x310BAC0

void BDMABHJEEGD__WriteTo
               (BDMABHJEEGD_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).OHMDCKEDOGH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320bc2c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).OHMDCKEDOGH,(MethodInfo *)0x0);
  }
  if ((__this->fields).LBKLNIPHGMM != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320bc2c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LBKLNIPHGMM,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320bc2c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IMNALGKNMNP,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OOCPIHHNOBO != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320bc2c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).OOCPIHHNOBO,(MethodInfo *)0x0);
  }
  if ((__this->fields).CLLIINPOPHO != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320bc2c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CLLIINPOPHO,(MethodInfo *)0x0);
  }
  if ((__this->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320bc2c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x32,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MJIIHOLHNCK,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).GMHNOGKNFNB != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0320bc2c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).GMHNOGKNFNB,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int CalculateSize()  [RVA 0x310BC30]
// BDMABHJEEGD$$CalculateSize @ RVA 0x310BC30

int32_t BDMABHJEEGD__CalculateSize(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  PGICCMFLDPI_o *pPVar4;
  BECIPDJBAOG_o *value;
  
  if ((DAT_04566546 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566546 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).OHMDCKEDOGH;
  iVar3 = 0;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  pPVar4 = (__this->fields).LBKLNIPHGMM;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  pPVar4 = (__this->fields).IMNALGKNMNP;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).OOCPIHHNOBO;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).CLLIINPOPHO;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  value = (__this->fields).MJIIHOLHNCK;
  if (value != (BECIPDJBAOG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  pPVar4 = (__this->fields).GMHNOGKNFNB;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public PGICCMFLDPI LFNBOGPIBLJ()  [RVA 0x310BDC0]
// BDMABHJEEGD$$LFNBOGPIBLJ @ RVA 0x310BDC0

PGICCMFLDPI_o * BDMABHJEEGD__LFNBOGPIBLJ(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).IMNALGKNMNP;
}


// ===== public override int GetHashCode()  [RVA 0x310BDC8]
// BDMABHJEEGD$$GetHashCode @ RVA 0x310BDC8

int32_t BDMABHJEEGD__GetHashCode(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  PGICCMFLDPI_o *pPVar4;
  BECIPDJBAOG_o *pBVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).OHMDCKEDOGH;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pPVar4 = (__this->fields).LBKLNIPHGMM;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pPVar4 = (__this->fields).IMNALGKNMNP;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).OOCPIHHNOBO;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).CLLIINPOPHO;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pBVar5 = (__this->fields).MJIIHOLHNCK;
  if (pBVar5 != (BECIPDJBAOG_o *)0x0) {
    uVar3 = (*(pBVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar5,(pBVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pPVar4 = (__this->fields).GMHNOGKNFNB;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
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


// ===== public int NOJELIALAIO()  [RVA 0x310BEBC]
// BDMABHJEEGD$$NOJELIALAIO @ RVA 0x310BEBC

int32_t BDMABHJEEGD__NOJELIALAIO(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).OHMDCKEDOGH;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x310BEC4]
// BDMABHJEEGD$$MergeFrom @ RVA 0x310BEC4

void BDMABHJEEGD__MergeFrom
               (BDMABHJEEGD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  BECIPDJBAOG_o **ppBVar2;
  PGICCMFLDPI_o **ppPVar3;
  PGICCMFLDPI_o **ppPVar4;
  BDMABHJEEGD_Fields *pBVar5;
  uint uVar6;
  int32_t iVar7;
  PGICCMFLDPI_o *pPVar8;
  Google_Protobuf_UnknownFieldSet_o *pGVar9;
  BECIPDJBAOG_o *pBVar10;
  
  if ((DAT_04566547 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566547 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 != 0) {
    ppPVar1 = &(__this->fields).GMHNOGKNFNB;
    ppBVar2 = &(__this->fields).MJIIHOLHNCK;
    ppPVar3 = &(__this->fields).IMNALGKNMNP;
    ppPVar4 = &(__this->fields).LBKLNIPHGMM;
    pBVar5 = &__this->fields;
    do {
      if (uVar6 < 0x1b) {
        if (uVar6 == 8) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OHMDCKEDOGH = iVar7;
        }
        else {
          if (uVar6 == 0x12) {
            pBVar10 = (BECIPDJBAOG_o *)*ppPVar4;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
              *ppPVar4 = pPVar8;
              thunk_FUN_01c20e04(ppPVar4,pPVar8);
              pBVar10 = (BECIPDJBAOG_o *)*ppPVar4;
            }
          }
          else {
            if (uVar6 != 0x1a) goto LAB_0320c00c;
            pBVar10 = (BECIPDJBAOG_o *)*ppPVar3;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
              *ppPVar3 = pPVar8;
              thunk_FUN_01c20e04(ppPVar3,pPVar8);
              pBVar10 = (BECIPDJBAOG_o *)*ppPVar3;
            }
          }
LAB_0320c0bc:
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pBVar10,(MethodInfo *)0x0);
        }
      }
      else {
        if (0x28 < uVar6) {
          if (uVar6 == 0x32) {
            pBVar10 = *ppBVar2;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pBVar10 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
              BECIPDJBAOG___ctor(pBVar10,(MethodInfo *)0x0);
              *ppBVar2 = pBVar10;
              thunk_FUN_01c20e04(ppBVar2,pBVar10);
              pBVar10 = *ppBVar2;
            }
          }
          else {
            if (uVar6 != 0x3a) goto LAB_0320c00c;
            pBVar10 = (BECIPDJBAOG_o *)*ppPVar1;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
              *ppPVar1 = pPVar8;
              thunk_FUN_01c20e04(ppPVar1,pPVar8);
              pBVar10 = (BECIPDJBAOG_o *)*ppPVar1;
            }
          }
          goto LAB_0320c0bc;
        }
        if (uVar6 == 0x20) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OOCPIHHNOBO = iVar7;
        }
        else if (uVar6 == 0x28) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).CLLIINPOPHO = iVar7;
        }
        else {
LAB_0320c00c:
          pGVar9 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pBVar5->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pBVar5->CKFPENBPNML = pGVar9;
          thunk_FUN_01c20e04(pBVar5,pGVar9);
        }
      }
      uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar6 != 0);
  }
  return;
}


// ===== public void FFNNHKOKGEH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x310C0F8]
// BDMABHJEEGD$$FFNNHKOKGEH @ RVA 0x310C0F8

void BDMABHJEEGD__FFNNHKOKGEH(BDMABHJEEGD_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IMNALGKNMNP = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static MessageParser<BDMABHJEEGD> PGCAHPDCJBC()  [RVA 0x310C100]
// BDMABHJEEGD$$PGCAHPDCJBC @ RVA 0x310C100

Google_Protobuf_MessageParser_BDMABHJEEGD__o * BDMABHJEEGD__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566548 & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_04566548 = 1;
  }
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return BDMABHJEEGD_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void JMCAIMBHNEL(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x310C158]
// BDMABHJEEGD$$JMCAIMBHNEL @ RVA 0x310C158

void BDMABHJEEGD__JMCAIMBHNEL(BDMABHJEEGD_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GMHNOGKNFNB = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void EAAABDOJHNI(BECIPDJBAOG CJNHFNHJHPE)  [RVA 0x310C160]
// BDMABHJEEGD$$EAAABDOJHNI @ RVA 0x310C160

void BDMABHJEEGD__EAAABDOJHNI(BDMABHJEEGD_o *__this,BECIPDJBAOG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MJIIHOLHNCK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public PGICCMFLDPI DHNJAEIIMKC()  [RVA 0x310C168]
// BDMABHJEEGD$$DHNJAEIIMKC @ RVA 0x310C168

PGICCMFLDPI_o * BDMABHJEEGD__DHNJAEIIMKC(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).GMHNOGKNFNB;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x310C170]
// BDMABHJEEGD$$Equals @ RVA 0x310C170

bool BDMABHJEEGD__Equals(BDMABHJEEGD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566549 & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_04566549 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BDMABHJEEGD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BDMABHJEEGD__Equals(__this,(BDMABHJEEGD_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void PEMJOKFFAMO(int CJNHFNHJHPE)  [RVA 0x310C2A0]
// BDMABHJEEGD$$PEMJOKFFAMO @ RVA 0x310C2A0

void BDMABHJEEGD__PEMJOKFFAMO(BDMABHJEEGD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OHMDCKEDOGH = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x310C2A8]
// BDMABHJEEGD$$ToString @ RVA 0x310C2A8

System_String_o * BDMABHJEEGD__ToString(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456654a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456654a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int LEOGDKPOKAJ()  [RVA 0x310C300]
// BDMABHJEEGD$$LEOGDKPOKAJ @ RVA 0x310C300

int32_t BDMABHJEEGD__LEOGDKPOKAJ(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).OOCPIHHNOBO;
}


// ===== public bool Equals(BDMABHJEEGD IBKIPBJJCPG)  [RVA 0x310C1D4]
// BDMABHJEEGD$$Equals @ RVA 0x310C1D4

bool BDMABHJEEGD__Equals(BDMABHJEEGD_o *__this,BDMABHJEEGD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BDMABHJEEGD_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).OHMDCKEDOGH == (IBKIPBJJCPG->fields).OHMDCKEDOGH) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).LBKLNIPHGMM,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0),
         bVar1)) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).IMNALGKNMNP,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0),
        bVar1)) &&
       ((((__this->fields).OOCPIHHNOBO == (IBKIPBJJCPG->fields).OOCPIHHNOBO &&
         ((__this->fields).CLLIINPOPHO == (IBKIPBJJCPG->fields).CLLIINPOPHO)) &&
        ((bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0),
         bVar1 && (bVar1 = System_Object__Equals
                                     ((Il2CppObject *)(__this->fields).GMHNOGKNFNB,
                                      (Il2CppObject *)(IBKIPBJJCPG->fields).GMHNOGKNFNB,
                                      (MethodInfo *)0x0), bVar1)))))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private static void .cctor()  [RVA 0x310C308]
// BDMABHJEEGD$$.cctor @ RVA 0x310C308

void BDMABHJEEGD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BDMABHJEEGD__o *__this;
  
  if ((DAT_0456654b & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    FUN_01bab630(&System_Func<BDMABHJEEGD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BDMABHJEEGD>_TypeInfo);
    FUN_01bab630(&Method_BDMABHJEEGD_<>c_KPFEPLDDLCD__);
    FUN_01bab630(&BDMABHJEEGD_<>c_TypeInfo);
    DAT_0456654b = 1;
  }
  if ((BDMABHJEEGD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BDMABHJEEGD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BDMABHJEEGD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BDMABHJEEGD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BDMABHJEEGD>__ctor__);
  BDMABHJEEGD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BDMABHJEEGD_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x310C420]
// BDMABHJEEGD$$.ctor @ RVA 0x310C420

void BDMABHJEEGD___ctor(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x310C428]
// BDMABHJEEGD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x310C428

Google_Protobuf_Reflection_MessageDescriptor_o *
BDMABHJEEGD__pb__Google_Protobuf_IMessage_get_Descriptor(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  BDMABHJEEGD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456654c & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_0456654c = 1;
    method = extraout_x1;
  }
  method_00 = BDMABHJEEGD_TypeInfo;
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BDMABHJEEGD_c *)thunk_FUN_01ba7564(BDMABHJEEGD_TypeInfo,method);
  }
  pGVar1 = BDMABHJEEGD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void MGALHCGHPNO(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x310C578]
// BDMABHJEEGD$$MGALHCGHPNO @ RVA 0x310C578

void BDMABHJEEGD__MGALHCGHPNO(BDMABHJEEGD_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LBKLNIPHGMM = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public BDMABHJEEGD Clone()  [RVA 0x310C580]
// BDMABHJEEGD$$Clone @ RVA 0x310C580

BDMABHJEEGD_o * BDMABHJEEGD__Clone(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  BDMABHJEEGD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456654d & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_0456654d = 1;
    method = extraout_x1;
  }
  __this_00 = (BDMABHJEEGD_o *)thunk_FUN_01bda818(BDMABHJEEGD_TypeInfo,method);
  BDMABHJEEGD___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x310C474]
// BDMABHJEEGD$$FFHIHGCDGAK @ RVA 0x310C474

Google_Protobuf_Reflection_MessageDescriptor_o * BDMABHJEEGD__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456654e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456654e = 1;
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
        goto LAB_0320c55c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0320c55c:
                    /* WARNING: Could not recover jumptable at 0x0320c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x12,pVVar2->method);
  return pGVar3;
}


// ===== public PGICCMFLDPI EGCHPOOCGPG()  [RVA 0x310C6D0]
// BDMABHJEEGD$$EGCHPOOCGPG @ RVA 0x310C6D0

PGICCMFLDPI_o * BDMABHJEEGD__EGCHPOOCGPG(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).LBKLNIPHGMM;
}


// ===== public void CLAKDGNENAO(int CJNHFNHJHPE)  [RVA 0x310C6D8]
// BDMABHJEEGD$$CLAKDGNENAO @ RVA 0x310C6D8

void BDMABHJEEGD__CLAKDGNENAO(BDMABHJEEGD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CLLIINPOPHO = CJNHFNHJHPE;
  return;
}


// ===== public BECIPDJBAOG NNAKKCHDFAN()  [RVA 0x310C6E0]
// BDMABHJEEGD$$NNAKKCHDFAN @ RVA 0x310C6E0

BECIPDJBAOG_o * BDMABHJEEGD__NNAKKCHDFAN(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).MJIIHOLHNCK;
}


// ===== public void .ctor(BDMABHJEEGD IBKIPBJJCPG)  [RVA 0x310C5D8]
// BDMABHJEEGD$$.ctor @ RVA 0x310C5D8

void BDMABHJEEGD___ctor(BDMABHJEEGD_o *__this,BDMABHJEEGD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  PGICCMFLDPI_o *pPVar2;
  BECIPDJBAOG_o *pBVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BDMABHJEEGD_o *)0x0) {
    (__this->fields).OHMDCKEDOGH = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    pPVar2 = (IBKIPBJJCPG->fields).LBKLNIPHGMM;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    (__this->fields).LBKLNIPHGMM = pPVar2;
    thunk_FUN_01c20e04();
    pPVar2 = (IBKIPBJJCPG->fields).IMNALGKNMNP;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    ppPVar5 = &(__this->fields).IMNALGKNMNP;
    *ppPVar5 = pPVar2;
    thunk_FUN_01c20e04(ppPVar5);
    iVar1 = (IBKIPBJJCPG->fields).CLLIINPOPHO;
    (__this->fields).OOCPIHHNOBO = (IBKIPBJJCPG->fields).OOCPIHHNOBO;
    (__this->fields).CLLIINPOPHO = iVar1;
    pBVar3 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
      pBVar3 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar3 = BECIPDJBAOG__Clone(pBVar3,(MethodInfo *)0x0);
    }
    (__this->fields).MJIIHOLHNCK = pBVar3;
    thunk_FUN_01c20e04();
    pPVar2 = (IBKIPBJJCPG->fields).GMHNOGKNFNB;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
    }
    (__this->fields).GMHNOGKNFNB = pPVar2;
    thunk_FUN_01c20e04();
    pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar4;
    thunk_FUN_01c20e04(&__this->fields,pGVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int EALABJBDDCK()  [RVA 0x310C6E8]
// BDMABHJEEGD$$EALABJBDDCK @ RVA 0x310C6E8

int32_t BDMABHJEEGD__EALABJBDDCK(BDMABHJEEGD_o *__this,MethodInfo *method)

{
  return (__this->fields).CLLIINPOPHO;
}


// ===== public void MergeFrom(BDMABHJEEGD IBKIPBJJCPG)  [RVA 0x310C6F0]
// BDMABHJEEGD$$MergeFrom @ RVA 0x310C6F0

void BDMABHJEEGD__MergeFrom(BDMABHJEEGD_o *__this,BDMABHJEEGD_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  BECIPDJBAOG_o *pBVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  BDMABHJEEGD_Fields *pBVar5;
  PGICCMFLDPI_o **ppPVar6;
  BECIPDJBAOG_o **ppBVar7;
  
  if ((DAT_0456654f & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_0456654f = 1;
  }
  if (IBKIPBJJCPG == (BDMABHJEEGD_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
  if (iVar1 != 0) {
    (__this->fields).OHMDCKEDOGH = iVar1;
  }
  if ((IBKIPBJJCPG->fields).LBKLNIPHGMM != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).LBKLNIPHGMM;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_0320c8e4;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).LBKLNIPHGMM,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).IMNALGKNMNP;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_0320c8e4;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0);
  }
  iVar1 = (IBKIPBJJCPG->fields).OOCPIHHNOBO;
  if (iVar1 != 0) {
    (__this->fields).OOCPIHHNOBO = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).CLLIINPOPHO;
  if (iVar1 != 0) {
    (__this->fields).CLLIINPOPHO = iVar1;
  }
  if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    ppBVar7 = &(__this->fields).MJIIHOLHNCK;
    pBVar3 = *ppBVar7;
    if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
      pBVar3 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
      BECIPDJBAOG___ctor(pBVar3,(MethodInfo *)0x0);
      *ppBVar7 = pBVar3;
      thunk_FUN_01c20e04(ppBVar7,pBVar3);
      pBVar3 = *ppBVar7;
      if (pBVar3 == (BECIPDJBAOG_o *)0x0) goto LAB_0320c8e4;
    }
    BECIPDJBAOG__MergeFrom(pBVar3,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).GMHNOGKNFNB != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).GMHNOGKNFNB;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
LAB_0320c8e4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).GMHNOGKNFNB,(MethodInfo *)0x0);
  }
  pBVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pBVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pBVar5->CKFPENBPNML = pGVar4;
  thunk_FUN_01c20e04(pBVar5,pGVar4);
  return;
}


// ===== public void LACBOCPEOML(int CJNHFNHJHPE)  [RVA 0x310C8E8]
// BDMABHJEEGD$$LACBOCPEOML @ RVA 0x310C8E8

void BDMABHJEEGD__LACBOCPEOML(BDMABHJEEGD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OOCPIHHNOBO = CJNHFNHJHPE;
  return;
}

