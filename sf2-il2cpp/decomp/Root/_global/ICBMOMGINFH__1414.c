// TypeDefIndex 1414
// Namespace: 
// public sealed class ICBMOMGINFH : IMessage<ICBMOMGINFH>, IMessage, IEquatable<ICBMOMGINFH>, IDeepCloneable<ICBMOMGINFH>
// Fields:
//   private static readonly MessageParser<ICBMOMGINFH> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EAGIFHOLNEL = 1;
//   private BECIPDJBAOG MJIIHOLHNCK; // 0x18
//   public const int CHANKBHCIDE = 2;
//   private int DHNAEFBMBEG; // 0x20
//   public const int JEMGACIHFGN = 3;
//   private int FBKKMKKHPBC; // 0x24
//   public const int PFDONLFBHDK = 4;
//   private int EJKCJCAPKKG; // 0x28

// ===== public void .ctor(ICBMOMGINFH IBKIPBJJCPG)  [RVA 0x317DB70]
// ICBMOMGINFH$$.ctor @ RVA 0x317DB70

void ICBMOMGINFH___ctor(ICBMOMGINFH_o *__this,ICBMOMGINFH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  BECIPDJBAOG_o *pBVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ICBMOMGINFH_o *)0x0) {
    pBVar2 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar2 == (BECIPDJBAOG_o *)0x0) {
      pBVar2 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar2 = BECIPDJBAOG__Clone(pBVar2,(MethodInfo *)0x0);
    }
    if (__this != (ICBMOMGINFH_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar2;
      thunk_FUN_01c20e04();
      iVar1 = (IBKIPBJJCPG->fields).FBKKMKKHPBC;
      (__this->fields).DHNAEFBMBEG = (IBKIPBJJCPG->fields).DHNAEFBMBEG;
      (__this->fields).FBKKMKKHPBC = iVar1;
      (__this->fields).EJKCJCAPKKG = (IBKIPBJJCPG->fields).EJKCJCAPKKG;
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int BGLHBLLFCAI()  [RVA 0x317DBF8]
// ICBMOMGINFH$$BGLHBLLFCAI @ RVA 0x317DBF8

int32_t ICBMOMGINFH__BGLHBLLFCAI(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  return (__this->fields).DHNAEFBMBEG;
}


// ===== public bool Equals(ICBMOMGINFH IBKIPBJJCPG)  [RVA 0x317DC00]
// ICBMOMGINFH$$Equals @ RVA 0x317DC00

bool ICBMOMGINFH__Equals(ICBMOMGINFH_o *__this,ICBMOMGINFH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (ICBMOMGINFH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    if ((((bVar1) && ((__this->fields).DHNAEFBMBEG == (IBKIPBJJCPG->fields).DHNAEFBMBEG)) &&
        ((__this->fields).FBKKMKKHPBC == (IBKIPBJJCPG->fields).FBKKMKKHPBC)) &&
       ((__this->fields).EJKCJCAPKKG == (IBKIPBJJCPG->fields).EJKCJCAPKKG)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void JNJINPLGBKI(int CJNHFNHJHPE)  [RVA 0x317DC90]
// ICBMOMGINFH$$JNJINPLGBKI @ RVA 0x317DC90

void ICBMOMGINFH__JNJINPLGBKI(ICBMOMGINFH_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DHNAEFBMBEG = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x317DC98]
// ICBMOMGINFH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x317DC98

Google_Protobuf_Reflection_MessageDescriptor_o *
ICBMOMGINFH__pb__Google_Protobuf_IMessage_get_Descriptor(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  ICBMOMGINFH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0327dc98 to 0337f9d7 has its CatchHandler @ 0327dc98
                       catch() { ... } // from try @ 0327dc98 with catch @ 0327dc98
                       catch() { ... } // from try @ 0327fa7c with catch @ 0327dc98
                       catch() { ... } // from try @ 0327ff50 with catch @ 0327dc98
                       catch() { ... } // from try @ 032801a4 with catch @ 0327dc98
                       catch() { ... } // from try @ 03280338 with catch @ 0327dc98
                       catch() { ... } // from try @ 0328034c with catch @ 0327dc98
                       catch() { ... } // from try @ 03280424 with catch @ 0327dc98
                       catch() { ... } // from try @ 032804cc with catch @ 0327dc98
                       catch() { ... } // from try @ 03280568 with catch @ 0327dc98 */
  if ((DAT_0456699a & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_0456699a = 1;
    method = extraout_x1;
  }
  method_00 = ICBMOMGINFH_TypeInfo;
  if ((ICBMOMGINFH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ICBMOMGINFH_c *)thunk_FUN_01ba7564(ICBMOMGINFH_TypeInfo,method);
  }
  pGVar1 = ICBMOMGINFH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void EFEGGPNEJKH(int CJNHFNHJHPE)  [RVA 0x317DDE8]
// ICBMOMGINFH$$EFEGGPNEJKH @ RVA 0x317DDE8

void ICBMOMGINFH__EFEGGPNEJKH(ICBMOMGINFH_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EJKCJCAPKKG = CJNHFNHJHPE;
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x317DDF0]
// ICBMOMGINFH$$Equals @ RVA 0x317DDF0

bool ICBMOMGINFH__Equals(ICBMOMGINFH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456699b & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_0456699b = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ICBMOMGINFH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ICBMOMGINFH__Equals(__this,(ICBMOMGINFH_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void FPDDGLENCPA(int CJNHFNHJHPE)  [RVA 0x317DE54]
// ICBMOMGINFH$$FPDDGLENCPA @ RVA 0x317DE54

void ICBMOMGINFH__FPDDGLENCPA(ICBMOMGINFH_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FBKKMKKHPBC = CJNHFNHJHPE;
  return;
}


// ===== private static void .cctor()  [RVA 0x317DE5C]
// ICBMOMGINFH$$.cctor @ RVA 0x317DE5C

void ICBMOMGINFH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ICBMOMGINFH__o *__this;
  
  if ((DAT_0456699c & 1) == 0) {
    FUN_01bab630(&System_Func<ICBMOMGINFH>_TypeInfo);
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ICBMOMGINFH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ICBMOMGINFH>_TypeInfo);
    FUN_01bab630(&Method_ICBMOMGINFH_<>c_LNJPIHAONCC__);
    FUN_01bab630(&ICBMOMGINFH_<>c_TypeInfo);
    DAT_0456699c = 1;
  }
  if ((ICBMOMGINFH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ICBMOMGINFH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ICBMOMGINFH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ICBMOMGINFH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ICBMOMGINFH>__ctor__);
  ICBMOMGINFH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ICBMOMGINFH_TypeInfo->static_fields,__this);
  return;
}


// ===== public int POCIPAHJDKP()  [RVA 0x317DF74]
// ICBMOMGINFH$$POCIPAHJDKP @ RVA 0x317DF74

int32_t ICBMOMGINFH__POCIPAHJDKP(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  return (__this->fields).EJKCJCAPKKG;
}


// ===== public BECIPDJBAOG NNAKKCHDFAN()  [RVA 0x317DF7C]
// ICBMOMGINFH$$NNAKKCHDFAN @ RVA 0x317DF7C

BECIPDJBAOG_o * ICBMOMGINFH__NNAKKCHDFAN(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  return (__this->fields).MJIIHOLHNCK;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x317DF84]
// ICBMOMGINFH$$MergeFrom @ RVA 0x317DF84

void ICBMOMGINFH__MergeFrom
               (ICBMOMGINFH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BECIPDJBAOG_o **ppBVar1;
  ICBMOMGINFH_Fields *pIVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *pBVar6;
  
  if ((DAT_0456699d & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_0456699d = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar3 != 0) {
    ppBVar1 = &(__this->fields).MJIIHOLHNCK;
    pIVar2 = &__this->fields;
    do {
      if (uVar3 < 0x11) {
        if (uVar3 == 10) {
          pBVar6 = *ppBVar1;
          if (pBVar6 == (BECIPDJBAOG_o *)0x0) {
            pBVar6 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
            BECIPDJBAOG___ctor(pBVar6,(MethodInfo *)0x0);
            *ppBVar1 = pBVar6;
            thunk_FUN_01c20e04(ppBVar1,pBVar6);
            pBVar6 = *ppBVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pBVar6,(MethodInfo *)0x0);
        }
        else if (uVar3 == 0x10) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).DHNAEFBMBEG = iVar4;
        }
        else {
LAB_0327e030:
          pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pIVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pIVar2->CKFPENBPNML = pGVar5;
          thunk_FUN_01c20e04(pIVar2,pGVar5);
        }
      }
      else if (uVar3 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FBKKMKKHPBC = iVar4;
      }
      else {
        if (uVar3 != 0x20) goto LAB_0327e030;
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EJKCJCAPKKG = iVar4;
      }
      uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar3 != 0);
  }
  return;
}


// ===== public override int GetHashCode()  [RVA 0x317E0CC]
// ICBMOMGINFH$$GetHashCode @ RVA 0x317E0CC

int32_t ICBMOMGINFH__GetHashCode(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  BECIPDJBAOG_o *pBVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  pBVar4 = (__this->fields).MJIIHOLHNCK;
  if (pBVar4 == (BECIPDJBAOG_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pBVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar4,(pBVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).DHNAEFBMBEG;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).FBKKMKKHPBC;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).EJKCJCAPKKG;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x317E178]
// ICBMOMGINFH$$WriteTo @ RVA 0x317E178

void ICBMOMGINFH__WriteTo
               (ICBMOMGINFH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0327e260;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MJIIHOLHNCK,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).DHNAEFBMBEG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0327e260;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).DHNAEFBMBEG,(MethodInfo *)0x0);
  }
  if ((__this->fields).FBKKMKKHPBC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0327e260;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).FBKKMKKHPBC,(MethodInfo *)0x0);
  }
  if ((__this->fields).EJKCJCAPKKG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0327e260:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).EJKCJCAPKKG,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void MergeFrom(ICBMOMGINFH IBKIPBJJCPG)  [RVA 0x317E264]
// ICBMOMGINFH$$MergeFrom @ RVA 0x317E264

void ICBMOMGINFH__MergeFrom(ICBMOMGINFH_o *__this,ICBMOMGINFH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  BECIPDJBAOG_o *pBVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  ICBMOMGINFH_Fields *pIVar4;
  BECIPDJBAOG_o **ppBVar5;
  
  if ((DAT_0456699e & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_0456699e = 1;
  }
  if (IBKIPBJJCPG != (ICBMOMGINFH_o *)0x0) {
    if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
      ppBVar5 = &(__this->fields).MJIIHOLHNCK;
      pBVar2 = *ppBVar5;
      if (pBVar2 == (BECIPDJBAOG_o *)0x0) {
        pBVar2 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
        BECIPDJBAOG___ctor(pBVar2,(MethodInfo *)0x0);
        *ppBVar5 = pBVar2;
        thunk_FUN_01c20e04(ppBVar5,pBVar2);
        pBVar2 = *ppBVar5;
        if (pBVar2 == (BECIPDJBAOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      BECIPDJBAOG__MergeFrom(pBVar2,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    }
    iVar1 = (IBKIPBJJCPG->fields).DHNAEFBMBEG;
    if (iVar1 != 0) {
      (__this->fields).DHNAEFBMBEG = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).FBKKMKKHPBC;
    if (iVar1 != 0) {
      (__this->fields).FBKKMKKHPBC = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).EJKCJCAPKKG;
    if (iVar1 != 0) {
      (__this->fields).EJKCJCAPKKG = iVar1;
    }
    pIVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pIVar4,pGVar3);
    return;
  }
  return;
}


// ===== public override string ToString()  [RVA 0x317E354]
// ICBMOMGINFH$$ToString @ RVA 0x317E354

System_String_o * ICBMOMGINFH__ToString(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456699f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456699f = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public ICBMOMGINFH Clone()  [RVA 0x317E3AC]
// ICBMOMGINFH$$Clone @ RVA 0x317E3AC

ICBMOMGINFH_o * ICBMOMGINFH__Clone(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  ICBMOMGINFH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045669a0 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045669a0 = 1;
    method = extraout_x1;
  }
  __this_00 = (ICBMOMGINFH_o *)thunk_FUN_01bda818(ICBMOMGINFH_TypeInfo,method);
  ICBMOMGINFH___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x317DCE4]
// ICBMOMGINFH$$FFHIHGCDGAK @ RVA 0x317DCE4

Google_Protobuf_Reflection_MessageDescriptor_o * ICBMOMGINFH__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045669a1 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045669a1 = 1;
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
        goto LAB_0327ddcc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0327ddcc:
                    /* WARNING: Could not recover jumptable at 0x0327dde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1f,pVVar2->method);
  return pGVar3;
}


// ===== public int LNMGKGKJEOD()  [RVA 0x317E404]
// ICBMOMGINFH$$LNMGKGKJEOD @ RVA 0x317E404

int32_t ICBMOMGINFH__LNMGKGKJEOD(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  return (__this->fields).FBKKMKKHPBC;
}


// ===== public void .ctor()  [RVA 0x317DBF0]
// ICBMOMGINFH$$.ctor @ RVA 0x317DBF0

void ICBMOMGINFH___ctor(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageParser<ICBMOMGINFH> PGCAHPDCJBC()  [RVA 0x317E40C]
// ICBMOMGINFH$$PGCAHPDCJBC @ RVA 0x317E40C

Google_Protobuf_MessageParser_ICBMOMGINFH__o * ICBMOMGINFH__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045669a2 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045669a2 = 1;
  }
  if ((ICBMOMGINFH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ICBMOMGINFH_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public int CalculateSize()  [RVA 0x317E464]
// ICBMOMGINFH$$CalculateSize @ RVA 0x317E464

int32_t ICBMOMGINFH__CalculateSize(ICBMOMGINFH_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  BECIPDJBAOG_o *value;
  
  if ((DAT_045669a3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045669a3 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MJIIHOLHNCK;
  iVar3 = 0;
  if (value != (BECIPDJBAOG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).DHNAEFBMBEG;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).FBKKMKKHPBC;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).EJKCJCAPKKG;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public void EAAABDOJHNI(BECIPDJBAOG CJNHFNHJHPE)  [RVA 0x317E570]
// ICBMOMGINFH$$EAAABDOJHNI @ RVA 0x317E570

void ICBMOMGINFH__EAAABDOJHNI(ICBMOMGINFH_o *__this,BECIPDJBAOG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MJIIHOLHNCK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

