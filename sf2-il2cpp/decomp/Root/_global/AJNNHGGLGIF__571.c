// TypeDefIndex 571
// Namespace: 
// public class AJNNHGGLGIF : OMLLDCIMLBB<object>
// Fields:
//   public AJNNHGGLGIF LKKBHIEHNAM; // 0x18
//   protected DPDDOKKMMOM HIJMBHIMFBB; // 0x20
//   private ObscuredInt JDNKKGPNHPB; // 0x28
//   public AJNNHGGLGIF.IMIJKMBAFKA PJEIFMBEAKH; // 0x38
//   private bool <BDDBFNHFMBC>k__BackingField; // 0x3C
//   protected bool AIPKOAMHBBP; // 0x3D
//   public bool KHKEGAKGNCN; // 0x3E
//   protected List<int> GMPFJFBFHCH; // 0x40
//   protected List<int> BPPCPHCDICD; // 0x48
//   public int ONDDFBGIOPJ; // 0x50
//   public int AGBDJNHBLNM; // 0x54

// ===== public bool GDPAJEGDOEK()  [RVA 0x35AD660]
// AJNNHGGLGIF$$GDPAJEGDOEK @ RVA 0x35AD660

bool AJNNHGGLGIF__GDPAJEGDOEK(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  return (__this->fields).AIPKOAMHBBP;
}


// ===== protected void GAJGEHFDCJE(XmlNode AHDGNOJPPIB)  [RVA 0x35AD668]
// AJNNHGGLGIF$$GAJGEHFDCJE @ RVA 0x35AD668

void AJNNHGGLGIF__GAJGEHFDCJE
               (AJNNHGGLGIF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t item;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  ulong uVar6;
  System_Collections_Generic_List_int__o *__this_01;
  System_Int32_array *pSVar7;
  ulong uVar8;
  
  if ((DAT_04568e64 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&StringLiteral_11431/*"Round"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e64 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_11431/*"Round"*/,(MethodInfo *)0x0);
      bVar3 = EIABCPKDEBD__OBECCOPBADO(LBJNDMNEJJB,(MethodInfo *)0x0);
      if (!bVar3) {
        (__this->fields).AIPKOAMHBBP = false;
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if ((pSVar4 == (System_String_o *)0x0) ||
           (pSVar5 = System_String__Split(pSVar4,0x7c,0,(MethodInfo *)0x0),
           pSVar5 == (System_String_array *)0x0)) goto LAB_036ad80c;
        if (0 < (int)pSVar5->max_length) {
          uVar8 = 0;
          uVar6 = pSVar5->max_length & 0xffffffff;
          do {
            if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar4 = pSVar5->m_Items[uVar8];
            if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            item = System_Convert__ToInt32(pSVar4,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<int>_Add__;
            __this_01 = (__this->fields).BPPCPHCDICD;
            if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036ad80c;
            pSVar7 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar7 == (System_Int32_array *)0x0) goto LAB_036ad80c;
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pSVar7->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pSVar7->m_Items[(int)uVar1] = item;
            }
            else {
              System_Collections_Generic_List<int>__AddWithResize
                        (__this_01,item,
                         *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar1 = (uint)pSVar5->max_length;
            uVar6 = (ulong)uVar1;
            uVar8 = uVar8 + 1;
          } while ((long)uVar8 < (long)(int)uVar1);
        }
      }
      return;
    }
  }
LAB_036ad80c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BNNIDPDMOIL()  [RVA 0x35AD814]
// AJNNHGGLGIF$$BNNIDPDMOIL @ RVA 0x35AD814

bool AJNNHGGLGIF__BNNIDPDMOIL(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568e68 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e68 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    if (iVar2 < (__this->fields).ONDDFBGIOPJ) {
      bVar1 = false;
    }
    else {
      bVar1 = iVar2 <= (__this->fields).AGBDJNHBLNM;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(AJNNHGGLGIF GOAHBPBJCKC)  [RVA 0x35AD8D4]
// AJNNHGGLGIF$$.ctor @ RVA 0x35AD8D4

void AJNNHGGLGIF___ctor(AJNNHGGLGIF_o *__this,AJNNHGGLGIF_o *GOAHBPBJCKC,MethodInfo *method)

{
  int32_t iVar1;
  DPDDOKKMMOM_o *__this_00;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_List_int__o **ppSVar3;
  AJNNHGGLGIF_o **ppAVar4;
  DPDDOKKMMOM_o **ppDVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  
  if ((DAT_04568e65 & 1) == 0) {
    FUN_01bab630(&DPDDOKKMMOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_04568e65 = 1;
  }
  __this_00 = (DPDDOKKMMOM_o *)thunk_FUN_01bda818(DPDDOKKMMOM_TypeInfo);
  DPDDOKKMMOM___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar5 = &(__this->fields).HIJMBHIMFBB;
  *ppDVar5 = __this_00;
  thunk_FUN_01c20e04(ppDVar5,__this_00);
  pSVar2 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar2,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar3 = &(__this->fields).GMPFJFBFHCH;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar2 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar2,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar3 = &(__this->fields).BPPCPHCDICD;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  if (GOAHBPBJCKC != (AJNNHGGLGIF_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (GOAHBPBJCKC->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
    CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar6;
    (__this->fields)._BDDBFNHFMBC_k__BackingField =
         (GOAHBPBJCKC->fields)._BDDBFNHFMBC_k__BackingField;
    (__this->fields).AIPKOAMHBBP = (GOAHBPBJCKC->fields).AIPKOAMHBBP;
    ppAVar4 = &(__this->fields).LKKBHIEHNAM;
    *ppAVar4 = (GOAHBPBJCKC->fields).LKKBHIEHNAM;
    thunk_FUN_01c20e04(ppAVar4);
    (__this->fields).KHKEGAKGNCN = (GOAHBPBJCKC->fields).KHKEGAKGNCN;
    (__this->fields).PJEIFMBEAKH = (GOAHBPBJCKC->fields).PJEIFMBEAKH;
    iVar1 = (GOAHBPBJCKC->fields).AGBDJNHBLNM;
    (__this->fields).ONDDFBGIOPJ = (GOAHBPBJCKC->fields).ONDDFBGIOPJ;
    (__this->fields).AGBDJNHBLNM = iVar1;
    (__this->fields).BPPCPHCDICD = (GOAHBPBJCKC->fields).BPPCPHCDICD;
    thunk_FUN_01c20e04(ppSVar3);
    (__this->fields).HIJMBHIMFBB = (GOAHBPBJCKC->fields).HIJMBHIMFBB;
    thunk_FUN_01c20e04(ppDVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected bool OFJLGPDKKNA(int EBDDELGICGB)  [RVA 0x35ADA78]
// AJNNHGGLGIF$$OFJLGPDKKNA @ RVA 0x35ADA78

bool AJNNHGGLGIF__OFJLGPDKKNA(AJNNHGGLGIF_o *__this,int32_t EBDDELGICGB,MethodInfo *method)

{
  if (EBDDELGICGB < (__this->fields).ONDDFBGIOPJ) {
    return false;
  }
  return EBDDELGICGB <= (__this->fields).AGBDJNHBLNM;
}


// ===== public virtual void AFBEEALKOPE(bool CJNHFNHJHPE)  [RVA 0x35ADA9C]
// AJNNHGGLGIF$$AFBEEALKOPE @ RVA 0x35ADA9C

void AJNNHGGLGIF__AFBEEALKOPE(AJNNHGGLGIF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BDDBFNHFMBC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public virtual bool DGCODECJJCC(object IMMNELPBGIF)  [RVA 0x35ADAA8]
// AJNNHGGLGIF$$DGCODECJJCC @ RVA 0x35ADAA8

bool AJNNHGGLGIF__DGCODECJJCC(AJNNHGGLGIF_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  return true;
}


// ===== public AJNNHGGLGIF.NJHOEHEJNPH NHGGBEACKBD()  [RVA 0x35AC66C]
// AJNNHGGLGIF$$NHGGBEACKBD @ RVA 0x35AC66C

int32_t AJNNHGGLGIF__NHGGBEACKBD(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== protected void FEEFOMDIENJ(XmlNode AHDGNOJPPIB)  [RVA 0x35ADAB0]
// AJNNHGGLGIF$$FEEFOMDIENJ @ RVA 0x35ADAB0

void AJNNHGGLGIF__FEEFOMDIENJ
               (AJNNHGGLGIF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  
  if ((DAT_04568e66 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5618/*"Eclipse"*/);
    DAT_04568e66 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_5618/*"Eclipse"*/,(MethodInfo *)0x0);
      bVar2 = EIABCPKDEBD__OBECCOPBADO(pSVar5,(MethodInfo *)0x0);
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5618/*"Eclipse"*/,(MethodInfo *)0x0);
        bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
        uVar1 = 2;
        if (!bVar2) {
          uVar1 = ~(uint)bVar3 & 1;
        }
        (__this->fields).PJEIFMBEAKH = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool DNNHNMPJAIK()  [RVA 0x35ADB7C]
// AJNNHGGLGIF$$DNNHNMPJAIK @ RVA 0x35ADB7C

bool AJNNHGGLGIF__DNNHNMPJAIK(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  return (__this->fields)._BDDBFNHFMBC_k__BackingField;
}


// ===== public virtual void RandomizeObscuredVars()  [RVA 0x35ADB84]
// AJNNHGGLGIF$$RandomizeObscuredVars @ RVA 0x35ADB84

void AJNNHGGLGIF__RandomizeObscuredVars(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).JDNKKGPNHPB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public bool OLKDJEKDIJB(int ODIAFMNGOLA)  [RVA 0x35ADB90]
// AJNNHGGLGIF$$OLKDJEKDIJB @ RVA 0x35ADB90

bool AJNNHGGLGIF__OLKDJEKDIJB(AJNNHGGLGIF_o *__this,int32_t ODIAFMNGOLA,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  if ((DAT_04568e67 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    DAT_04568e67 = 1;
  }
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_4_ = 0;
  local_40._12_4_ = 0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  if ((__this->fields).AIPKOAMHBBP == false) {
    __this_00 = (__this->fields).BPPCPHCDICD;
    if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_58,__this_00,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_40._8_4_ = local_58.fields._index;
    local_40._12_4_ = local_58.fields._version;
    local_40._0_8_ = local_58.fields._list;
    local_30 = local_58.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
                         Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
      if (!bVar1) {
        iVar2 = 6;
        goto LAB_036adc60;
      }
    } while ((int32_t)local_30 != ODIAFMNGOLA);
    iVar2 = 5;
LAB_036adc60:
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_40,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    bVar1 = bVar1 && iVar2 == 5;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== public DPDDOKKMMOM IKPFDDBJABL()  [RVA 0x35ADD10]
// AJNNHGGLGIF$$IKPFDDBJABL @ RVA 0x35ADD10

DPDDOKKMMOM_o * AJNNHGGLGIF__IKPFDDBJABL(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  return (__this->fields).HIJMBHIMFBB;
}


// ===== protected virtual void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35A8A88]
// AJNNHGGLGIF$$HNIHOIAMDPC @ RVA 0x35A8A88

void AJNNHGGLGIF__HNIHOIAMDPC
               (AJNNHGGLGIF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  AJNNHGGLGIF__GAJGEHFDCJE(__this,AHDGNOJPPIB,method);
  AJNNHGGLGIF__FEEFOMDIENJ(__this,AHDGNOJPPIB,method);
  return;
}


// ===== protected bool OFJLGPDKKNA()  [RVA 0x35AD818]
// AJNNHGGLGIF$$OFJLGPDKKNA @ RVA 0x35AD818

bool AJNNHGGLGIF__OFJLGPDKKNA(AJNNHGGLGIF_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568e68 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568e68 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    if (iVar2 < (__this->fields).ONDDFBGIOPJ) {
      bVar1 = false;
    }
    else {
      bVar1 = iVar2 <= (__this->fields).AGBDJNHBLNM;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MOKEDNKDIDP(bool CJNHFNHJHPE)  [RVA 0x35ADD18]
// AJNNHGGLGIF$$MOKEDNKDIDP @ RVA 0x35ADD18

void AJNNHGGLGIF__MOKEDNKDIDP(AJNNHGGLGIF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BDDBFNHFMBC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void GNLPNKGBAFL(AJNNHGGLGIF.NJHOEHEJNPH CJNHFNHJHPE)  [RVA 0x35ADA58]
// AJNNHGGLGIF$$GNLPNKGBAFL @ RVA 0x35ADA58

void AJNNHGGLGIF__GNLPNKGBAFL(AJNNHGGLGIF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public void .ctor(AJNNHGGLGIF.NJHOEHEJNPH ACCIHBHMFPN, XmlNode AHDGNOJPPIB)  [RVA 0x35ADD24]
// AJNNHGGLGIF$$.ctor @ RVA 0x35ADD24

void AJNNHGGLGIF___ctor(AJNNHGGLGIF_o *__this,int32_t ACCIHBHMFPN,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       MethodInfo *method)

{
  DPDDOKKMMOM_o *__this_00;
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  DPDDOKKMMOM_Fields *pDVar3;
  MethodInfo *method_00;
  AJNNHGGLGIF_o **ppAVar4;
  DPDDOKKMMOM_o **ppDVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04568e69 & 1) == 0) {
    FUN_01bab630(&DPDDOKKMMOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_04568e69 = 1;
  }
  __this_00 = (DPDDOKKMMOM_o *)thunk_FUN_01bda818(DPDDOKKMMOM_TypeInfo);
  DPDDOKKMMOM___ctor(__this_00,(MethodInfo *)0x0);
  ppDVar5 = &(__this->fields).HIJMBHIMFBB;
  *ppDVar5 = __this_00;
  thunk_FUN_01c20e04(ppDVar5,__this_00);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).GMPFJFBFHCH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).BPPCPHCDICD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(ACCIHBHMFPN,(MethodInfo *)0x0);
  ppAVar4 = &(__this->fields).LKKBHIEHNAM;
  *ppAVar4 = (AJNNHGGLGIF_o *)0x0;
  (__this->fields).JDNKKGPNHPB.fields = CVar6;
  (__this->fields)._BDDBFNHFMBC_k__BackingField = true;
  (__this->fields).AIPKOAMHBBP = true;
  thunk_FUN_01c20e04(ppAVar4,0);
  (__this->fields).KHKEGAKGNCN = false;
  (__this->fields).PJEIFMBEAKH = 2;
  (__this->fields).ONDDFBGIOPJ = 0;
  (__this->fields).AGBDJNHBLNM = 0x7fffffff;
  if (*ppDVar5 != (DPDDOKKMMOM_o *)0x0) {
    pDVar3 = &(*ppDVar5)->fields;
    pDVar3->DMLGJFCNNJF = AHDGNOJPPIB;
    thunk_FUN_01c20e04(pDVar3,AHDGNOJPPIB);
    AJNNHGGLGIF__GAJGEHFDCJE(__this,AHDGNOJPPIB,method_00);
    AJNNHGGLGIF__FEEFOMDIENJ(__this,AHDGNOJPPIB,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

