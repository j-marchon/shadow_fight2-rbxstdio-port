// TypeDefIndex 1074
// Namespace: 
// public abstract class KIHIPAJGNBF : CIOBNDOOGIM
// Fields:
//   private const string GGJKJBPMIOJ = "WatchedVideo";
//   protected XmlNode HJKLIDCAEOE; // 0x18
//   protected string GEONGCPLLFJ; // 0x20
//   protected int BBOPCFFCNIA; // 0x28
//   protected float ECAPNIBOPKP; // 0x2C
//   protected int BJGOCKADFEB; // 0x30
//   protected int MNPJJPBJCCO; // 0x34
//   protected List<long> LLDABLJEMBM; // 0x38

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x30DE0C0]
// KIHIPAJGNBF$$.ctor @ RVA 0x30DE0C0

void KIHIPAJGNBF___ctor(KIHIPAJGNBF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_long__o *__this_00;
  System_Collections_Generic_List_long__o **ppSVar3;
  System_Xml_XmlNode_o **ppSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  LPKCAMIJFOP_o *__this_01;
  System_String_o *EHNFGMGKCHO;
  MethodInfo *pMVar7;
  float fVar8;
  System_DateTime_Fields local_48;
  
  if ((DAT_0456637f & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&LPKCAMIJFOP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<long>_TypeInfo);
    FUN_01bab630(&StringLiteral_13893/*"TotalPaymentSum"*/);
    FUN_01bab630(&StringLiteral_10190/*"PaymentCount"*/);
    FUN_01bab630(&StringLiteral_14865/*"WatchedVideo"*/);
    FUN_01bab630(&StringLiteral_11703/*"SaveSlot"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_7575/*"InstallID"*/);
    DAT_0456637f = 1;
  }
  local_48._dateData = 0;
  (__this->fields).GEONGCPLLFJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_long__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<long>_TypeInfo);
  System_Collections_Generic_List<long>___ctor
            (__this_00,Method_System_Collections_Generic_List<long>__ctor__);
  ppSVar3 = &(__this->fields).LLDABLJEMBM;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CIOBNDOOGIM___ctor((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).HJKLIDCAEOE;
  *ppSVar4 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar4,AHDGNOJPPIB);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_7575/*"InstallID"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
      (__this->fields).BBOPCFFCNIA = iVar1;
      if (iVar1 == 0) {
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
        uVar2 = System_DateTime__get_Millisecond((System_DateTime_o)&local_48,(MethodInfo *)0x0);
        __this_01 = (LPKCAMIJFOP_o *)thunk_FUN_01bda818(LPKCAMIJFOP_TypeInfo);
        pMVar7 = (MethodInfo *)0x0;
        LPKCAMIJFOP___ctor(__this_01,uVar2,(MethodInfo *)0x0);
        if (__this_01 == (LPKCAMIJFOP_o *)0x0) goto LAB_031de3c0;
        uVar2 = LPKCAMIJFOP__PKJEMJJCPAL(__this_01,(MethodInfo *)0x0);
        KIHIPAJGNBF__IHNDJDDBHNG(__this,uVar2,pMVar7);
      }
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_13893/*"TotalPaymentSum"*/,(MethodInfo *)0x0);
        fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
        (__this->fields).ECAPNIBOPKP = fVar8;
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_10190/*"PaymentCount"*/,(MethodInfo *)0x0);
          iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
          (__this->fields).BJGOCKADFEB = iVar1;
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_11703/*"SaveSlot"*/,(MethodInfo *)0x0);
            iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
            (__this->fields).MNPJJPBJCCO = iVar1;
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_14865/*"WatchedVideo"*/,(MethodInfo *)0x0);
              pMVar7 = (MethodInfo *)0x0;
              EHNFGMGKCHO = EIABCPKDEBD__JPKEHIBGOEM
                                      (pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
              KIHIPAJGNBF__PLHJPEHILIJ(__this,EHNFGMGKCHO,pMVar7);
              return;
            }
          }
        }
      }
    }
  }
LAB_031de3c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void MLDEHFFGJDP(string KGLJICLJHEL, int CJNHFNHJHPE)  [RVA 0x30DE610]
// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DE610

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  int32_t local_14;
  
  local_14 = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,method);
  return;
}


// ===== protected void MLDEHFFGJDP(string KGLJICLJHEL, long CJNHFNHJHPE)  [RVA 0x30DE6FC]
// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DE6FC

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,int64_t CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  int64_t local_18;
  
  local_18 = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int64__ToString((int64_t)&local_18,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,method);
  return;
}


// ===== public string CHPFIEPINDB()  [RVA 0x30DE738]
// KIHIPAJGNBF$$CHPFIEPINDB @ RVA 0x30DE738

System_String_o * KIHIPAJGNBF__CHPFIEPINDB(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  return (__this->fields).GEONGCPLLFJ;
}


// ===== protected void MLDEHFFGJDP(string KGLJICLJHEL, uint CJNHFNHJHPE)  [RVA 0x30DE740]
// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DE740

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,uint32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  uint32_t local_14;
  
  local_14 = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_UInt32__ToString((uint32_t)&local_14,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,method);
  return;
}


// ===== public int LLFFDDOOLDP()  [RVA 0x30DE77C]
// KIHIPAJGNBF$$LLFFDDOOLDP @ RVA 0x30DE77C

int32_t KIHIPAJGNBF__LLFFDDOOLDP(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  return (__this->fields).BJGOCKADFEB;
}


// ===== public void CAKKOJIHMCM()  [RVA 0x30DE784]
// KIHIPAJGNBF$$CAKKOJIHMCM @ RVA 0x30DE784

void KIHIPAJGNBF__CAKKOJIHMCM(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_Utils_GlobalTimer_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Int64_array *pSVar3;
  System_Collections_Generic_List_long__o *__this_01;
  
  if ((DAT_04566380 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    DAT_04566380 = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).LLDABLJEMBM;
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if ((__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) &&
     (method_00 = (MethodInfo *)
                  Nekki_Utils_GlobalTimer__GetTimeMilliseconds(__this_00,(MethodInfo *)0x0),
     lVar2 = Method_System_Collections_Generic_List<long>_Add__,
     __this_01 != (System_Collections_Generic_List_long__o *)0x0)) {
    pSVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pSVar3 != (System_Int64_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (int64_t)method_00;
      }
      else {
        System_Collections_Generic_List<long>__AddWithResize
                  (__this_01,(int64_t)method_00,
                   *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        method_00 = extraout_x1_00;
      }
      KIHIPAJGNBF__LEEIGJNPOKM(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JDAMFAMMNKM(int CJNHFNHJHPE)  [RVA 0x30DEB1C]
// KIHIPAJGNBF$$JDAMFAMMNKM @ RVA 0x30DEB1C

void KIHIPAJGNBF__JDAMFAMMNKM(KIHIPAJGNBF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_04566381 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11703/*"SaveSlot"*/);
    DAT_04566381 = 1;
  }
  (__this->fields).MNPJJPBJCCO = CJNHFNHJHPE;
  KGLJICLJHEL = StringLiteral_11703/*"SaveSlot"*/;
  local_24 = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,in_x3);
  return;
}


// ===== protected void MLDEHFFGJDP(string KGLJICLJHEL, string CJNHFNHJHPE)  [RVA 0x30DE64C]
// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DE64C

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if ((pSVar1 != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,KGLJICLJHEL,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).HJKLIDCAEOE;
    if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
      pSVar3 = EIABCPKDEBD__HBGAGFJBGKD(pSVar1,KGLJICLJHEL,(MethodInfo *)0x0);
    }
    else {
      if ((pSVar1 == (System_Xml_XmlNode_o *)0x0) ||
         (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method),
         pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031de6f8;
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,KGLJICLJHEL,(MethodInfo *)0x0);
    }
    if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                (pSVar3,CJNHFNHJHPE,(pSVar3->klass->vtable)._10_set_Value.method);
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031de6f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CHAJNCDGODG()  [RVA 0x30DEB90]
// KIHIPAJGNBF$$CHAJNCDGODG @ RVA 0x30DEB90

int32_t KIHIPAJGNBF__CHAJNCDGODG(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  return (__this->fields).MNPJJPBJCCO;
}


// ===== public List<long> AAFGLOOENGA()  [RVA 0x30DEB98]
// KIHIPAJGNBF$$AAFGLOOENGA @ RVA 0x30DEB98

System_Collections_Generic_List_long__o *
KIHIPAJGNBF__AAFGLOOENGA(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  return (__this->fields).LLDABLJEMBM;
}


// ===== protected void MLDEHFFGJDP(string KGLJICLJHEL, float CJNHFNHJHPE)  [RVA 0x30DEBA0]
// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DEBA0

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,float CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  float local_14;
  
                    /* try { // try from 031deba4 to 032debcb has its CatchHandler @ 031dedb4 */
  local_14 = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Single__ToString(CJNHFNHJHPE,(MethodInfo *)&local_14);
  KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,in_x3);
  return;
}


// ===== public int FOCCACFNMLH()  [RVA 0x30DEBDC]
// KIHIPAJGNBF$$FOCCACFNMLH @ RVA 0x30DEBDC

int32_t KIHIPAJGNBF__FOCCACFNMLH(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  return (__this->fields).BBOPCFFCNIA;
}


// ===== protected void PLHJPEHILIJ(string EHNFGMGKCHO)  [RVA 0x30DE438]
// KIHIPAJGNBF$$PLHJPEHILIJ @ RVA 0x30DE438

void KIHIPAJGNBF__PLHJPEHILIJ(KIHIPAJGNBF_o *__this,System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Byte_array *NMIFKBCCFAE;
  System_Text_Encoding_o *pSVar4;
  System_String_o *__this_00;
  System_String_array *pSVar5;
  System_Collections_Generic_List_long__o *pSVar6;
  ulong uVar7;
  System_Int64_array *pSVar8;
  ulong uVar9;
  int64_t local_38;
  
  if ((DAT_04566382 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Clear__);
    DAT_04566382 = 1;
  }
  local_38 = 0;
  pSVar6 = (__this->fields).LLDABLJEMBM;
  if (pSVar6 != (System_Collections_Generic_List_long__o *)0x0) {
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    bVar3 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NMIFKBCCFAE = System_Convert__FromBase64String(EHNFGMGKCHO,(MethodInfo *)0x0);
    if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
    }
    EGFFLEKJFGN__OPAMPJJKLGE(NMIFKBCCFAE,(System_Byte_array *)0x0,(MethodInfo *)0x0);
    pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (((pSVar4 != (System_Text_Encoding_o *)0x0) &&
        (__this_00 = (System_String_o *)
                     (*(pSVar4->klass->vtable)._37_GetString.methodPtr)
                               (pSVar4,NMIFKBCCFAE,(pSVar4->klass->vtable)._37_GetString.method),
        __this_00 != (System_String_o *)0x0)) &&
       (pSVar5 = System_String__Split(__this_00,0x2c,0,(MethodInfo *)0x0),
       pSVar5 != (System_String_array *)0x0)) {
      if ((int)pSVar5->max_length < 1) {
        return;
      }
      uVar9 = 0;
      uVar7 = pSVar5->max_length & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        local_38 = 0;
        bVar3 = System_Int64__TryParse(pSVar5->m_Items[uVar9],&local_38,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<long>_Add__;
        if (bVar3) {
          pSVar6 = (__this->fields).LLDABLJEMBM;
          if (pSVar6 == (System_Collections_Generic_List_long__o *)0x0) break;
          pSVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pSVar8 == (System_Int64_array *)0x0) break;
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pSVar8->max_length) {
            (pSVar6->fields)._size = uVar1 + 1;
            pSVar8->m_Items[(int)uVar1] = local_38;
          }
          else {
            System_Collections_Generic_List<long>__AddWithResize
                      (pSVar6,local_38,
                       *(MethodInfo_26CC7E4 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = (uint)pSVar5->max_length;
        uVar7 = (ulong)uVar1;
        uVar9 = uVar9 + 1;
        if ((long)(int)uVar1 <= (long)uVar9) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IHNDJDDBHNG(int CJNHFNHJHPE)  [RVA 0x30DE3C4]
// KIHIPAJGNBF$$IHNDJDDBHNG @ RVA 0x30DE3C4

void KIHIPAJGNBF__IHNDJDDBHNG(KIHIPAJGNBF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  int32_t local_24;
  
  if ((DAT_04566383 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7575/*"InstallID"*/);
    DAT_04566383 = 1;
  }
  (__this->fields).BBOPCFFCNIA = CJNHFNHJHPE;
  KGLJICLJHEL = StringLiteral_7575/*"InstallID"*/;
  local_24 = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,in_x3);
  return;
}


// ===== public void KMLGNCEKHGN(int CJNHFNHJHPE)  [RVA 0x30DEBE4]
// KIHIPAJGNBF$$KMLGNCEKHGN @ RVA 0x30DEBE4

void KIHIPAJGNBF__KMLGNCEKHGN(KIHIPAJGNBF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  int32_t local_24;
  
                    /* try { // try from 031dec00 to 032dec2b has its CatchHandler @ 031dedb0 */
  if ((DAT_04566384 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10190/*"PaymentCount"*/);
    DAT_04566384 = 1;
  }
  if ((__this->fields).BJGOCKADFEB < CJNHFNHJHPE) {
    (__this->fields).BJGOCKADFEB = CJNHFNHJHPE;
    KGLJICLJHEL = StringLiteral_10190/*"PaymentCount"*/;
    local_24 = CJNHFNHJHPE;
    CJNHFNHJHPE_00 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,in_x3);
  }
                    /* try { // try from 031dec60 to 032decbf has its CatchHandler @ 031dedbc */
  return;
}


// ===== public void DIEMJAMJLNB(string CJNHFNHJHPE)  [RVA 0x30DEC64]
// KIHIPAJGNBF$$DIEMJAMJLNB @ RVA 0x30DEC64

void KIHIPAJGNBF__DIEMJAMJLNB(KIHIPAJGNBF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x3;
  System_String_o **ppSVar1;
  
  if ((DAT_04566385 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11867/*"ServerUserID"*/);
    DAT_04566385 = 1;
  }
  ppSVar1 = &(__this->fields).GEONGCPLLFJ;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
                    /* try { // try from 031decc0 to 032ded8b has its CatchHandler @ 031dea20 */
  KIHIPAJGNBF__MLDEHFFGJDP(__this,StringLiteral_11867/*"ServerUserID"*/,*ppSVar1,in_x3);
  IBILBKNKKDG__HBFCADLMGIN(*ppSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public void EIDOHIPCDDD(float CJNHFNHJHPE)  [RVA 0x30DECDC]
// KIHIPAJGNBF$$EIDOHIPCDDD @ RVA 0x30DECDC

void KIHIPAJGNBF__EIDOHIPCDDD(KIHIPAJGNBF_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  System_String_o *CJNHFNHJHPE_00;
  MethodInfo *in_x3;
  float __this_00;
  float local_24;
  
  if ((DAT_04566386 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13893/*"TotalPaymentSum"*/);
    DAT_04566386 = 1;
  }
  __this_00 = (__this->fields).ECAPNIBOPKP;
  if (__this_00 < CJNHFNHJHPE) {
    (__this->fields).ECAPNIBOPKP = CJNHFNHJHPE;
    KGLJICLJHEL = StringLiteral_13893/*"TotalPaymentSum"*/;
    local_24 = CJNHFNHJHPE;
    CJNHFNHJHPE_00 = System_Single__ToString(__this_00,(MethodInfo *)&local_24);
    KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,CJNHFNHJHPE_00,in_x3);
  }
  return;
}


// ===== public void FPEHFKPMIHK()  [RVA 0x30DED64]
// KIHIPAJGNBF$$FPEHFKPMIHK @ RVA 0x30DED64

void KIHIPAJGNBF__FPEHFKPMIHK(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_long__o *pSVar1;
  
  if ((DAT_04566387 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_Clear__);
                    /* try { // try from 031ded8c to 032ded8f has its CatchHandler @ 031dedac */
    DAT_04566387 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031ded90 to 032ded97 has its CatchHandler @ 031dedb8 */
  pSVar1 = (__this->fields).LLDABLJEMBM;
  if (pSVar1 != (System_Collections_Generic_List_long__o *)0x0) {
                    /* try { // try from 031ded98 to 032ded9b has its CatchHandler @ 031dea20 */
                    /* try { // try from 031ded9c to 032ded9f has its CatchHandler @ 031deda8 */
                    /* try { // try from 031deda0 to 032dedd3 has its CatchHandler @ 031dea20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ded9c with catch @ 031deda8
                        */
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ded8c with catch @ 031dedac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dec00 with catch @ 031dedb0
                        */
    KIHIPAJGNBF__LEEIGJNPOKM(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031deba4 with catch @ 031dedb4
                        */
  FUN_01bab8c8();
}


// ===== protected void MLDEHFFGJDP(string KGLJICLJHEL, bool CJNHFNHJHPE)  [RVA 0x30DEDB8]
// KIHIPAJGNBF$$MLDEHFFGJDP @ RVA 0x30DEDB8

void KIHIPAJGNBF__MLDEHFFGJDP
               (KIHIPAJGNBF_o *__this,System_String_o *KGLJICLJHEL,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 *puVar1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031ded90 with catch @ 031dedb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031dec60 with catch @ 031dedbc
                        */
                    /* try { // try from 031dedd4 to 032dedd7 has its CatchHandler @ 031dede4 */
  if ((DAT_04566388 & 1) == 0) {
                    /* catch() { ... } // from try @ 031dedd4 with catch @ 031dede4 */
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 031dedf4 to 032dee5b has its CatchHandler @ 031dee70 */
    DAT_04566388 = 1;
  }
  if (__this != (KIHIPAJGNBF_o *)0x0) {
    puVar1 = &StringLiteral_1606/*"1"*/;
    if (!CJNHFNHJHPE) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
    KIHIPAJGNBF__MLDEHFFGJDP(__this,KGLJICLJHEL,(System_String_o *)*puVar1,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void LEEIGJNPOKM()  [RVA 0x30DE860]
// KIHIPAJGNBF$$LEEIGJNPOKM @ RVA 0x30DE860

void KIHIPAJGNBF__LEEIGJNPOKM(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  bool bVar1;
  int32_t iVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_long__o *__this_01;
  System_Text_Encoding_o *pSVar3;
  undefined8 uVar4;
  System_Byte_array *NMIFKBCCFAE;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566389 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<long>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<long>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_14865/*"WatchedVideo"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566389 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).LLDABLJEMBM;
  if (__this_01 != (System_Collections_Generic_List_long__o *)0x0) {
    System_Collections_Generic_List<long>__GetEnumerator
              (&local_88,__this_01,Method_System_Collections_Generic_List<long>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<long>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<long>_MoveNext__),
          value = local_70.fields._current, bVar1) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      if (iVar2 != 0) {
        System_Text_StringBuilder__Append(__this_00,0x2c,(MethodInfo *)0x0);
      }
      System_Text_StringBuilder__Append(__this_00,(int64_t)value,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<long>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<long>_Dispose__);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      iVar2 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
      CJNHFNHJHPE = StringLiteral_1/*""*/;
      if (0 < iVar2) {
        pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
        uVar4 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if (pSVar3 == (System_Text_Encoding_o *)0x0) goto LAB_031deaa0;
        NMIFKBCCFAE = (System_Byte_array *)
                      (*(pSVar3->klass->vtable)._19_GetBytes.methodPtr)
                                (pSVar3,uVar4,(pSVar3->klass->vtable)._19_GetBytes.method);
                    /* try { // try from 031dea20 to 032deba3 has its CatchHandler @ 031dea20
                       catch() { ... } // from try @ 031dea20 with catch @ 031dea20
                       catch() { ... } // from try @ 031decc0 with catch @ 031dea20
                       catch() { ... } // from try @ 031ded98 with catch @ 031dea20
                       catch() { ... } // from try @ 031deda0 with catch @ 031dea20
                       catch() { ... } // from try @ 031dee5c with catch @ 031dea20 */
        if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
        }
        EGFFLEKJFGN__OPAMPJJKLGE(NMIFKBCCFAE,(System_Byte_array *)0x0,(MethodInfo *)0x0);
        if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CJNHFNHJHPE = System_Convert__ToBase64String(NMIFKBCCFAE,(MethodInfo *)0x0);
      }
      KIHIPAJGNBF__MLDEHFFGJDP(__this,StringLiteral_14865/*"WatchedVideo"*/,CJNHFNHJHPE,in_x3);
      return;
    }
  }
LAB_031deaa0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float PMAMLIKGHOP()  [RVA 0x30DEE38]
// KIHIPAJGNBF$$PMAMLIKGHOP @ RVA 0x30DEE38

float KIHIPAJGNBF__PMAMLIKGHOP(KIHIPAJGNBF_o *__this,MethodInfo *method)

{
  return (__this->fields).ECAPNIBOPKP;
}

