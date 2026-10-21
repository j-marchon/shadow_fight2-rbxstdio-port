// TypeDefIndex 1728
// Namespace: 
// public class HBNENINHPGF
// Fields:
//   public HBNENINHPGF.GKFAEIJNFED EAJKEHPLGMP; // 0x10
//   private string <COIPKAKHDFP>k__BackingField; // 0x18
//   private string <PGCEKJLODEJ>k__BackingField; // 0x20

// ===== public void .ctor(string CLNOGPBAICL, string GCMMJLHFGOC, HBNENINHPGF.GKFAEIJNFED FJHJMCDCAIN = 0)  [RVA 0x31D89A4]
// HBNENINHPGF$$.ctor @ RVA 0x31D89A4

void HBNENINHPGF___ctor(HBNENINHPGF_o *__this,System_String_o *CLNOGPBAICL,
                       System_String_o *GCMMJLHFGOC,int32_t FJHJMCDCAIN,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar1 = CLNOGPBAICL;
  thunk_FUN_01c20e04(ppSVar1,CLNOGPBAICL);
  pSVar2 = OFFIONDOEPM__CNLBHLNMCCI(GCMMJLHFGOC,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._PGCEKJLODEJ_k__BackingField;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  (__this->fields).EAJKEHPLGMP = FJHJMCDCAIN;
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x31D8A08]
// HBNENINHPGF$$HCOCAAIGNNL @ RVA 0x31D8A08

void HBNENINHPGF__HCOCAAIGNNL(HBNENINHPGF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x31D8A10]
// HBNENINHPGF$$FFHJDGPNCKJ @ RVA 0x31D8A10

void HBNENINHPGF__FFHJDGPNCKJ(HBNENINHPGF_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PGCEKJLODEJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x31D8A18]
// HBNENINHPGF$$KCHJCGEMCGE @ RVA 0x31D8A18

System_String_o * HBNENINHPGF__KCHJCGEMCGE(HBNENINHPGF_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public string DNOMHOGFIFO()  [RVA 0x31D8A20]
// HBNENINHPGF$$DNOMHOGFIFO @ RVA 0x31D8A20

System_String_o * HBNENINHPGF__DNOMHOGFIFO(HBNENINHPGF_o *__this,MethodInfo *method)

{
  return (__this->fields)._PGCEKJLODEJ_k__BackingField;
}


// ===== public void FMOHGOEPAPH(HBNENINHPGF OAOLCGAIILM)  [RVA 0x31D8A28]
// HBNENINHPGF$$FMOHGOEPAPH @ RVA 0x31D8A28

void HBNENINHPGF__FMOHGOEPAPH(HBNENINHPGF_o *__this,HBNENINHPGF_o *OAOLCGAIILM,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if (OAOLCGAIILM != (HBNENINHPGF_o *)0x0) {
    (__this->fields)._COIPKAKHDFP_k__BackingField =
         (OAOLCGAIILM->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
    pSVar1 = OFFIONDOEPM__CNLBHLNMCCI
                       ((OAOLCGAIILM->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields)._PGCEKJLODEJ_k__BackingField;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    if ((__this->fields).EAJKEHPLGMP != 1) {
      (__this->fields).EAJKEHPLGMP = (OAOLCGAIILM->fields).EAJKEHPLGMP;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31D8A8C]
// HBNENINHPGF$$.ctor @ RVA 0x31D8A8C

void HBNENINHPGF___ctor(HBNENINHPGF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  
  if ((DAT_04566cff & 1) == 0) {
    FUN_01bab630(&StringLiteral_10794/*"Raid"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_6544/*"Forge"*/);
    FUN_01bab630(&StringLiteral_6922/*"Group"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566cff = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      pSVar4 = OFFIONDOEPM__CNLBHLNMCCI(pSVar4,(MethodInfo *)0x0);
      (__this->fields)._PGCEKJLODEJ_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6922/*"Group"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6544/*"Forge"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar5 = 1;
        }
        else {
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_10794/*"Raid"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            (__this->fields).EAJKEHPLGMP = 0;
            return;
          }
          iVar5 = 2;
        }
        (__this->fields).EAJKEHPLGMP = iVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

