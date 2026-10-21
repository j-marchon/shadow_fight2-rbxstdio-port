// Original name: Nekki.SF2.Core.Fights.Rules.ItemRule  (obfuscated JCHNBADDBGO)
// TypeDefIndex 2258
// Namespace: 
// public class ItemRule : Rule
// Fields:
//   protected static readonly string[] AMAMBMDFBOF; // 0x0
//   protected IGFGDDANEPE DPCOEJPACKA; // 0x58
//   protected bool MPIICPLOKLF; // 0x60
//   protected bool HHCHGNIMDJK; // 0x61
//   protected HEDFKJBDBFN IDNBELKLCEL; // 0x64

// ===== public HEDFKJBDBFN KBFFJFLAMAN()  [RVA 0x32FE840]
// ItemRule$$KBFFJFLAMAN @ RVA 0x32FE840

int32_t ItemRule__KBFFJFLAMAN(ItemRule_o *__this,MethodInfo *method)

{
  return (__this->fields).IDNBELKLCEL;
}


// ===== public void EODHHFEAIGP(HEDFKJBDBFN KFLAAIMLKOE)  [RVA 0x32FE848]
// ItemRule$$EODHHFEAIGP @ RVA 0x32FE848

void ItemRule__EODHHFEAIGP(ItemRule_o *__this,int32_t KFLAAIMLKOE,MethodInfo *method)

{
  (__this->fields).IDNBELKLCEL = KFLAAIMLKOE;
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, bool EJMPGMPNCJE = True)  [RVA 0x32FE850]
// ItemRule$$.ctor @ RVA 0x32FE850

void ItemRule___ctor(ItemRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,bool EJMPGMPNCJE,
                       MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o **ppIVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *method_00;
  
  if ((DAT_04567708 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14616/*"UseDefaultItem"*/);
    DAT_04567708 = 1;
  }
  Rule___ctor((Rule_o *)__this,0,AHDGNOJPPIB,(MethodInfo *)0x0);
  ppIVar2 = &(__this->fields).DPCOEJPACKA;
  *ppIVar2 = (IGFGDDANEPE_o *)0x0;
  thunk_FUN_01c20e04(ppIVar2,0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14616/*"UseDefaultItem"*/,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).MPIICPLOKLF = false;
      (__this->fields).HHCHGNIMDJK = bVar1;
      (__this->fields).IDNBELKLCEL = 1;
      if (EJMPGMPNCJE) {
        method_00 = (__this->klass->vtable)._13_GKJKNKCEMPN.method;
        (*(__this->klass->vtable)._13_GKJKNKCEMPN.methodPtr)(__this,AHDGNOJPPIB);
      }
      ItemRule__OOCAAJLDADI(__this,AHDGNOJPPIB,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC(object IMMNELPBGIF)  [RVA 0x32FEA58]
// ItemRule$$DGCODECJJCC @ RVA 0x32FEA58

bool ItemRule__DGCODECJJCC(ItemRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  IGFGDDANEPE_o *pIVar5;
  HOOAAGABMBL_o *pHVar6;
  HOOAAGABMBL_o *pHVar7;
  
  if ((DAT_04567709 & 1) == 0) {
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567709 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    return true;
  }
  bVar2 = (IGFGDDANEPE_TypeInfo->_2).naturalAligment;
  if ((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) {
    return true;
  }
  if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)IGFGDDANEPE_TypeInfo) {
    return true;
  }
  pIVar5 = (__this->fields).DPCOEJPACKA;
  if (((pIVar5 != (IGFGDDANEPE_o *)0x0) && (IMMNELPBGIF != (Il2CppObject *)0x0)) &&
     (pHVar7 = (pIVar5->fields).PCBECBEFJOI, pHVar7 != (HOOAAGABMBL_o *)0x0)) {
    pHVar6 = IMMNELPBGIF[1].monitor;
    bVar3 = System_String__op_Inequality
                      ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_1/*""*/,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_033febe0;
      bVar3 = System_String__op_Equality
                        ((pHVar7->fields)._COIPKAKHDFP_k__BackingField,
                         (pHVar6->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    bVar3 = System_String__op_Inequality
                      ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_1/*""*/,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_033febe0;
      bVar3 = System_String__op_Equality
                        ((pHVar7->fields)._GMPAEDFIIHF_k__BackingField,
                         (pHVar6->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    bVar3 = System_String__op_Inequality
                      ((pHVar7->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_1/*""*/,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (pHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_033febe0;
      bVar3 = System_String__op_Equality
                        ((pHVar7->fields)._DKODBGOHKGH_k__BackingField,
                         (pHVar6->fields)._DKODBGOHKGH_k__BackingField,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
    }
    pHVar7 = IGFGDDANEPE__JGBDIHJDIHD((IGFGDDANEPE_o *)IMMNELPBGIF,(MethodInfo *)0x0);
    if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
      pHVar6 = IGFGDDANEPE__JGBDIHJDIHD((IGFGDDANEPE_o *)IMMNELPBGIF,(MethodInfo *)0x0);
    }
    if ((pHVar6 != (HOOAAGABMBL_o *)0x0) &&
       (pIVar5 = (__this->fields).DPCOEJPACKA, pIVar5 != (IGFGDDANEPE_o *)0x0)) {
      iVar1 = (pHVar6->fields)._JDEHPJEIOCI_k__BackingField;
      iVar4 = IGFGDDANEPE__LGIMDOAMCNG(pIVar5,(MethodInfo *)0x0);
      return iVar4 <= iVar1;
    }
  }
LAB_033febe0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool FKJFDOODBMJ()  [RVA 0x32FEBE4]
// ItemRule$$FKJFDOODBMJ @ RVA 0x32FEBE4

bool ItemRule__FKJFDOODBMJ(ItemRule_o *__this,MethodInfo *method)

{
  return (__this->fields).HHCHGNIMDJK;
}


// ===== protected void OOCAAJLDADI(XmlNode AHDGNOJPPIB)  [RVA 0x32FE934]
// ItemRule$$OOCAAJLDADI @ RVA 0x32FE934

void ItemRule__OOCAAJLDADI
               (ItemRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  int32_t iVar2;
  
  if ((DAT_0456770a & 1) == 0) {
    FUN_01bab630(&StringLiteral_3023/*"ApplyTo"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_2810/*"All"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_3550/*"Bot"*/);
    DAT_0456770a = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_3023/*"ApplyTo"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3550/*"Bot"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 2;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_2810/*"All"*/,(MethodInfo *)0x0);
        iVar2 = 3;
        if (!bVar1) {
          iVar2 = 1;
        }
      }
    }
    (__this->fields).IDNBELKLCEL = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IBAPBGPKPEL()  [RVA 0x32FEBEC]
// ItemRule$$IBAPBGPKPEL @ RVA 0x32FEBEC

bool ItemRule__IBAPBGPKPEL(ItemRule_o *__this,MethodInfo *method)

{
  return (__this->fields).MPIICPLOKLF;
}


// ===== public IGFGDDANEPE IDADGMDDNAK()  [RVA 0x32FEBF4]
// ItemRule$$IDADGMDDNAK @ RVA 0x32FEBF4

IGFGDDANEPE_o * ItemRule__IDADGMDDNAK(ItemRule_o *__this,MethodInfo *method)

{
  return (__this->fields).DPCOEJPACKA;
}


// ===== private static void .cctor()  [RVA 0x32FEBFC]
// ItemRule$$.cctor @ RVA 0x32FEBFC

void ItemRule___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if ((DAT_0456770b & 1) == 0) {
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9537/*"NoMagic"*/);
    FUN_01bab630(&StringLiteral_3529/*"Body"*/);
    FUN_01bab630(&StringLiteral_7045/*"Head"*/);
    FUN_01bab630(&StringLiteral_9540/*"NoRaidCharge"*/);
    FUN_01bab630(&StringLiteral_9541/*"NoRanged"*/);
    FUN_01bab630(&StringLiteral_6489/*"Fists"*/);
    DAT_0456770b = 1;
  }
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_3529/*"Body"*/;
      thunk_FUN_01c20e04(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = StringLiteral_7045/*"Head"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = StringLiteral_6489/*"Fists"*/;
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = StringLiteral_9541/*"NoRanged"*/;
            thunk_FUN_01c20e04(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = StringLiteral_9537/*"NoMagic"*/;
              thunk_FUN_01c20e04(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = StringLiteral_9540/*"NoRaidCharge"*/;
                thunk_FUN_01c20e04();
                ItemRule_TypeInfo->static_fields->AMAMBMDFBOF = pSVar1;
                thunk_FUN_01c20e04(ItemRule_TypeInfo->static_fields,pSVar1);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void GKJKNKCEMPN(XmlNode AHDGNOJPPIB)  [RVA 0x32FEDB0]
// ItemRule$$GKJKNKCEMPN @ RVA 0x32FEDB0

void ItemRule__GKJKNKCEMPN
               (ItemRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t EBDDELGICGB;
  int32_t JLAFGLDIFOC;
  HOOAAGABMBL_o *__this_00;
  Roster_o *__this_01;
  System_Xml_XmlAttributeCollection_o *__this_02;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  IGFGDDANEPE_o *__this_03;
  IGFGDDANEPE_o **ppIVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456770c & 1) == 0) {
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&ItemRule_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_9067/*"MinLevel"*/);
    DAT_0456770c = 1;
  }
  __this_00 = (HOOAAGABMBL_o *)thunk_FUN_01bda818(HOOAAGABMBL_TypeInfo);
  HOOAAGABMBL___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (Roster_o *)0x0) {
    EBDDELGICGB = Roster__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
    if ((__this_00 != (HOOAAGABMBL_o *)0x0) && (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
      pSVar3 = (__this_00->fields)._COIPKAKHDFP_k__BackingField;
      __this_02 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (__this_02 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_02,StringLiteral_9067/*"MinLevel"*/,(MethodInfo *)0x0);
        JLAFGLDIFOC = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
        __this_03 = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
        IGFGDDANEPE___ctor(__this_03,EBDDELGICGB,AHDGNOJPPIB,pSVar3,false,1,JLAFGLDIFOC,0,0,true,
                           StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        ppIVar2 = &(__this->fields).DPCOEJPACKA;
        *ppIVar2 = __this_03;
        thunk_FUN_01c20e04(ppIVar2,__this_03);
        if (*ppIVar2 != (IGFGDDANEPE_o *)0x0) {
          IGFGDDANEPE__CLIDHHJIGOC(*ppIVar2,__this_00,(MethodInfo *)0x0);
          if (((__this->fields).HHCHGNIMDJK == false) && (*ppIVar2 != (IGFGDDANEPE_o *)0x0)) {
            pSVar3 = ((*ppIVar2)->fields).NPFMOEOIEKM;
            if ((ItemRule_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 033fefb8 to 034ff47b has its CatchHandler @ 033fefb8
                       catch() { ... } // from try @ 033fefb8 with catch @ 033fefb8
                       catch() { ... } // from try @ 033ff68c with catch @ 033fefb8
                       catch() { ... } // from try @ 033ff9c4 with catch @ 033fefb8
                       catch() { ... } // from try @ 033ff9d0 with catch @ 033fefb8
                       catch() { ... } // from try @ 033ffa1c with catch @ 033fefb8
                       catch() { ... } // from try @ 033ffb4c with catch @ 033fefb8 */
            bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                              (pSVar3,(System_Collections_Generic_IEnumerable_string__o *)
                                      ItemRule_TypeInfo->static_fields->AMAMBMDFBOF,
                               (MethodInfo *)0x0);
            if (bVar1) {
              (__this->fields).HHCHGNIMDJK = true;
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

