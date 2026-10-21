// TypeDefIndex 2733
// Namespace: 
// public class HDBNGIBFEBA
// Fields:
//   public bool GBBHFPBFOPI; // 0x10
//   public BNJMMHEHJFI BEMCNJHEADJ; // 0x14
//   private HEFOANCOHDC <MEFGNAIILBJ>k__BackingField; // 0x18

// ===== public int GMINMDIFAIE(string KGLJICLJHEL)  [RVA 0x33E1350]
// HDBNGIBFEBA$$GMINMDIFAIE @ RVA 0x33E1350

int32_t HDBNGIBFEBA__GMINMDIFAIE
                  (HDBNGIBFEBA_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04567ea0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12372/*"StartStance"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_5749/*"EndStance"*/);
    DAT_04567ea0 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_12372/*"StartStance"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_5749/*"EndStance"*/,(MethodInfo *)0x0);
      iVar2 = 3;
      if (!bVar1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


// ===== protected void EJNODBBHHCG(HEFOANCOHDC CJNHFNHJHPE)  [RVA 0x33E140C]
// HDBNGIBFEBA$$EJNODBBHHCG @ RVA 0x33E140C

void HDBNGIBFEBA__EJNODBBHHCG(HDBNGIBFEBA_o *__this,HEFOANCOHDC_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MEFGNAIILBJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public HEFOANCOHDC MEMIEEBIALH()  [RVA 0x33E1414]
// HDBNGIBFEBA$$MEMIEEBIALH @ RVA 0x33E1414

HEFOANCOHDC_o * HDBNGIBFEBA__MEMIEEBIALH(HDBNGIBFEBA_o *__this,MethodInfo *method)

{
  return (__this->fields)._MEFGNAIILBJ_k__BackingField;
}


// ===== protected BNJMMHEHJFI MGGHPGELKIP(string HEHMPFLAEGE)  [RVA 0x33E141C]
// HDBNGIBFEBA$$MGGHPGELKIP @ RVA 0x33E141C

int32_t HDBNGIBFEBA__MGGHPGELKIP
                  (HDBNGIBFEBA_o *__this,System_String_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567ea1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_5759/*"Enemy"*/);
    DAT_04567ea1 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(HEHMPFLAEGE,(MethodInfo *)0x0);
  if (!bVar1) {
    if (HEHMPFLAEGE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals(HEHMPFLAEGE,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals(HEHMPFLAEGE,StringLiteral_5759/*"Enemy"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 2;
      }
      return 0;
    }
  }
  return 1;
}


// ===== public void .ctor(HDBNGIBFEBA IBKIPBJJCPG)  [RVA 0x33E14C0]
// HDBNGIBFEBA$$.ctor @ RVA 0x33E14C0

void HDBNGIBFEBA___ctor(HDBNGIBFEBA_o *__this,HDBNGIBFEBA_o *IBKIPBJJCPG,MethodInfo *method)

{
  HEFOANCOHDC_o **ppHVar1;
  
  (__this->fields).BEMCNJHEADJ = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HDBNGIBFEBA_o *)0x0) {
    (__this->fields).GBBHFPBFOPI = (IBKIPBJJCPG->fields).GBBHFPBFOPI;
    (__this->fields).BEMCNJHEADJ = (IBKIPBJJCPG->fields).BEMCNJHEADJ;
    ppHVar1 = &(__this->fields)._MEFGNAIILBJ_k__BackingField;
    *ppHVar1 = (IBKIPBJJCPG->fields)._MEFGNAIILBJ_k__BackingField;
    thunk_FUN_01c20e04(ppHVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33E1510]
// HDBNGIBFEBA$$.ctor @ RVA 0x33E1510

void HDBNGIBFEBA___ctor(HDBNGIBFEBA_o *__this,MethodInfo *method)

{
  (__this->fields).BEMCNJHEADJ = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public virtual void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33E11E0]
// HDBNGIBFEBA$$HNIHOIAMDPC @ RVA 0x33E11E0

void HDBNGIBFEBA__HNIHOIAMDPC
               (HDBNGIBFEBA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  HDBNGIBFEBA_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04567ea2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_9577/*"Not"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567ea2 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      __this_00 = (HDBNGIBFEBA_o *)
                  EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      iVar1 = HDBNGIBFEBA__MGGHPGELKIP(__this_00,(System_String_o *)__this_00,method_00);
      (__this->fields).BEMCNJHEADJ = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9577/*"Not"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).GBBHFPBFOPI = iVar1 != 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

