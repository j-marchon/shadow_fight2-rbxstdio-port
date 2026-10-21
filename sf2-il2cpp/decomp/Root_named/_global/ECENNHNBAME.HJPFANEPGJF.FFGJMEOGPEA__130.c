// TypeDefIndex 130
// Namespace: 
// public class InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA
// Fields:
//   public bool OKONAOJIODE; // 0x10
//   public DistancePoint DBNCGNGNGNM; // 0x18
//   public DistancePoint OCNJNIOMPMJ; // 0x20
//   public DistancePoint.CGPCABPNNCB GDPIIGNJCLE; // 0x28

// ===== public void RandomizeObscuredVars()  [RVA 0x301AA70]
// InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA$$RandomizeObscuredVars @ RVA 0x301AA70

void InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA__RandomizeObscuredVars
               (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *__this,MethodInfo *method)

{
  DistancePoint_o *pPVar1;
  
  pPVar1 = (__this->fields).DBNCGNGNGNM;
  if (pPVar1 != (DistancePoint_o *)0x0) {
    DistancePoint__RandomizeObscuredVars(pPVar1,(MethodInfo *)0x0);
  }
  pPVar1 = (__this->fields).OCNJNIOMPMJ;
  if (pPVar1 != (DistancePoint_o *)0x0) {
    DistancePoint__RandomizeObscuredVars(pPVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public static DistancePoint.CGPCABPNNCB HMCBPDICONH(XmlNode AHDGNOJPPIB)  [RVA 0x301AB9C]
// InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA$$HMCBPDICONH @ RVA 0x301AB9C

int32_t InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA__HMCBPDICONH
                  (System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04565c07 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7357/*"Impulse"*/);
    FUN_01bab630(&StringLiteral_11366/*"Reverse"*/);
    DAT_04565c07 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    a = (System_String_o *)
        (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                  (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    bVar1 = System_String__op_Equality(a,StringLiteral_7357/*"Impulse"*/,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_11366/*"Reverse"*/,(MethodInfo *)0x0);
      iVar2 = GIAMPEGMNHE__NANCFCIGNEE(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      if (iVar2 < 1) {
        return 1;
      }
      return 2;
    }
  }
  return 0;
}


// ===== public void .ctor()  [RVA 0x301AB0C]
// InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA$$.ctor @ RVA 0x301AB0C

void InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA___ctor
               (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *__this,MethodInfo *method)

{
  DistancePoint_o *pPVar1;
  DistancePoint_o **ppPVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c08 & 1) == 0) {
    FUN_01bab630(&DistancePoint_TypeInfo);
    DAT_04565c08 = 1;
    method = extraout_x1;
  }
  pPVar1 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo,method);
  DistancePoint___ctor(pPVar1,(MethodInfo *)0x0);
  ppPVar2 = &(__this->fields).DBNCGNGNGNM;
  *ppPVar2 = pPVar1;
  thunk_FUN_01c20e04(ppPVar2,pPVar1);
  pPVar1 = (DistancePoint_o *)thunk_FUN_01bda818(DistancePoint_TypeInfo);
  DistancePoint___ctor(pPVar1,(MethodInfo *)0x0);
  ppPVar2 = &(__this->fields).OCNJNIOMPMJ;
  *ppPVar2 = pPVar1;
  thunk_FUN_01c20e04(ppPVar2,pPVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int MKONAIENMCI(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x30155B0]
// InfoAnimation.HJPFANEPGJF.FFGJMEOGPEA$$MKONAIENMCI @ RVA 0x30155B0

int32_t InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA__MKONAIENMCI
                  (InfoAnimation_HJPFANEPGJF_FFGJMEOGPEA_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
                  MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  DistancePoint_o *pPVar4;
  int32_t iVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = (__this->fields).GDPIIGNJCLE;
  if (iVar2 == 0) {
    pPVar4 = (__this->fields).OCNJNIOMPMJ;
    if (pPVar4 != (DistancePoint_o *)0x0) {
      fVar6 = (float)(*(pPVar4->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                               (pPVar4,AHEFOIOKDOK,(pPVar4->klass->vtable)._8_CJHJMGGINHP.method);
      pPVar4 = (__this->fields).DBNCGNGNGNM;
      if (pPVar4 != (DistancePoint_o *)0x0) {
        fVar7 = (float)(*(pPVar4->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                                 (pPVar4,AHEFOIOKDOK,(pPVar4->klass->vtable)._8_CJHJMGGINHP.method);
        fVar6 = fVar6 - fVar7;
        goto LAB_0311561c;
      }
    }
  }
  else if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    iVar3 = (AHEFOIOKDOK->fields).OODLJOMIOIB;
    iVar1 = -iVar3;
    if (iVar2 == 1) {
      iVar1 = iVar3;
    }
    fVar6 = (float)iVar1;
LAB_0311561c:
    iVar5 = -1;
    if (0.0 <= fVar6) {
      iVar5 = 1;
    }
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

