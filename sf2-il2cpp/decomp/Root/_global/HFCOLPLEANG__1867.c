// TypeDefIndex 1867
// Namespace: 
// public class HFCOLPLEANG : DOCABGGCCIL
// Fields:
//   private bool LFACAEPBLCM; // 0x16
//   private long PCNEDMAJMOJ; // 0x18
//   private readonly float NBJKKCCFGNM; // 0x20

// ===== private void JEAKAHJDIJM()  [RVA 0x324AB2C]
// HFCOLPLEANG$$JEAKAHJDIJM @ RVA 0x324AB2C

void HFCOLPLEANG__JEAKAHJDIJM(HFCOLPLEANG_o *__this,MethodInfo *method)

{
  long lVar1;
  int32_t PIDMGHLCFAJ;
  ACHLOMELAJE_o *__this_00;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  AGHKMJNGFOB_o *__this_01;
  double dVar3;
  float fVar4;
  double __x;
  double local_28;
  
  if ((DAT_045670ef & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045670ef = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0334ab78 to 0344af5b has its CatchHandler @ 0334ab78
                       catch() { ... } // from try @ 0334ab78 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334af80 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334b0e0 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334b108 with catch @ 0334ab78
                       catch() { ... } // from try @ 0334b148 with catch @ 0334ab78 */
  if ((__this->fields).super.field_0x6 == '\0') {
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->OHJNLLIAANL;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_01;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_02;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 == (ACHLOMELAJE_o *)0x0) ||
     (PIDMGHLCFAJ = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0),
     __this_01 == (AGHKMJNGFOB_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = AGHKMJNGFOB__JPONFNMFHGE(__this_01,PIDMGHLCFAJ,(MethodInfo *)0x0);
  fVar4 = *(float *)&(__this->fields).PCNEDMAJMOJ;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Math_TypeInfo);
  }
  fVar4 = fVar4 * (float)iVar2;
  __x = (double)fVar4;
  dVar3 = modf(__x,&local_28);
  if (0.0 <= fVar4) {
    if (dVar3 != 0.5) {
      local_28 = (double)(long)(__x + 0.5);
      goto LAB_0334acb4;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      local_28 = (double)(long)(__x + -0.5);
      goto LAB_0334acb4;
    }
    dVar3 = -1.0;
  }
  if (((long)local_28 & 1U) != 0) {
    local_28 = local_28 + dVar3;
  }
LAB_0334acb4:
  lVar1 = -0x8000000000000000;
  if (local_28 != INFINITY) {
    lVar1 = (long)local_28;
  }
  *(long *)&(__this->fields).LFACAEPBLCM = lVar1;
  (__this->fields).super.field_0x6 = 0;
  return;
}


// ===== public long AADFFFOLPFN()  [RVA 0x324ACEC]
// HFCOLPLEANG$$AADFFFOLPFN @ RVA 0x324ACEC

int64_t HFCOLPLEANG__AADFFFOLPFN(HFCOLPLEANG_o *__this,MethodInfo *method)

{
  HFCOLPLEANG_o *__this_00;
  int64_t iVar1;
  MethodInfo *in_x2;
  
  HFCOLPLEANG__JEAKAHJDIJM(__this,method);
  iVar1 = HFCOLPLEANG__AIKNOFBLKIM(__this_00,*(int64_t *)&(__this->fields).LFACAEPBLCM,in_x2);
  *(int64_t *)&(__this->fields).LFACAEPBLCM = iVar1;
  return iVar1;
}


// ===== private long AIKNOFBLKIM(long CJNHFNHJHPE)  [RVA 0x324AD0C]
// HFCOLPLEANG$$AIKNOFBLKIM @ RVA 0x324AD0C

int64_t HFCOLPLEANG__AIKNOFBLKIM(HFCOLPLEANG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  if ((DAT_045670f0 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045670f0 = 1;
  }
  if (CJNHFNHJHPE == 0) {
    CJNHFNHJHPE = 1;
  }
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar4 = log10((double)CJNHFNHJHPE);
  dVar4 = dVar4 + 1.0;
  if (dVar4 != 1.0) {
    if (dVar4 <= 2.0) {
      lVar2 = 1;
      lVar3 = CJNHFNHJHPE;
    }
    else {
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      dVar4 = System_Math__Pow(10.0,dVar4 + -2.0,(MethodInfo *)0x0);
      lVar2 = -0x8000000000000000;
      if (dVar4 != INFINITY) {
        lVar2 = (long)dVar4;
      }
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = CJNHFNHJHPE / lVar2;
      }
    }
    lVar1 = lVar3 % 5;
    if (lVar1 != 0) {
      if (lVar1 < 3) {
        lVar3 = lVar3 - lVar1;
      }
      else {
        lVar3 = (lVar3 - lVar1) + 5;
      }
    }
    CJNHFNHJHPE = lVar3 * lVar2;
  }
  return CJNHFNHJHPE;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x324AE1C]
// HFCOLPLEANG$$.ctor @ RVA 0x324AE1C

void HFCOLPLEANG___ctor(HFCOLPLEANG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  int64_t iVar4;
  float fVar5;
  
  if ((DAT_045670f1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_14738/*"ValueMultiplier"*/);
    DAT_045670f1 = 1;
  }
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  (__this->fields).super.NOBEFHEECKJ = 2;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar3,(MethodInfo *)0x0);
      (__this->fields).super.field_0x6 = bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        iVar4 = EIABCPKDEBD__HNIGPBMJJOL(pSVar3,0,(MethodInfo *)0x0);
        *(int64_t *)&(__this->fields).LFACAEPBLCM = iVar4;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14738/*"ValueMultiplier"*/,(MethodInfo *)0x0);
          fVar5 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          *(float *)&(__this->fields).PCNEDMAJMOJ = fVar5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

