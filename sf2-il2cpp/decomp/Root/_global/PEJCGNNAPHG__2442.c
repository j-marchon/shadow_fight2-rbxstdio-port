// TypeDefIndex 2442
// Namespace: 
// public class PEJCGNNAPHG : IIMNGGHGKOD
// Fields:
//   private float GHDKCEAMEHP; // 0x44
//   private float NKILLLENJMM; // 0x48
//   private float BJIKPLGMOMI; // 0x4C
//   private float DFOJKFFDFAH; // 0x50

// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x335FA10]
// PEJCGNNAPHG$$DPGIIHOJJDE @ RVA 0x335FA10

void PEJCGNNAPHG__DPGIIHOJJDE(PEJCGNNAPHG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04567a7a & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567a7a = 1;
  }
  if (0.01 <= (__this->fields).BJIKPLGMOMI) {
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = PEJCGNNAPHG__KDGLDODMFGO(__this,BCKBBGCOMJD,method);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_0345fae4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0345fae4:
                    /* WARNING: Could not recover jumptable at 0x0345fafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      return;
    }
  }
  else if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float IMAKPJNJIJF()  [RVA 0x335FB8C]
// PEJCGNNAPHG$$IMAKPJNJIJF @ RVA 0x335FB8C

float PEJCGNNAPHG__IMAKPJNJIJF(PEJCGNNAPHG_o *__this,MethodInfo *method)

{
  return (__this->fields).NKILLLENJMM;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x335FB94]
// PEJCGNNAPHG$$HNIHOIAMDPC @ RVA 0x335FB94

void PEJCGNNAPHG__HNIHOIAMDPC
               (PEJCGNNAPHG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  
  if ((DAT_04567a7b & 1) == 0) {
    FUN_01bab630(&StringLiteral_5271/*"Delay"*/);
    FUN_01bab630(&StringLiteral_13776/*"Time"*/);
    FUN_01bab630(&StringLiteral_5769/*"EnemyWeight"*/);
    FUN_01bab630(&StringLiteral_8908/*"MeWeight"*/);
    DAT_04567a7b = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8908/*"MeWeight"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
      *(float *)&(__this->fields).super.field_0x34 = fVar3;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5769/*"EnemyWeight"*/,(MethodInfo *)0x0);
        fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).GHDKCEAMEHP = fVar3;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_13776/*"Time"*/,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).NKILLLENJMM = fVar3;
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_5271/*"Delay"*/,(MethodInfo *)0x0);
            fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
            (__this->fields).BJIKPLGMOMI = fVar3;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float OJKMDPACBBB()  [RVA 0x335FCFC]
// PEJCGNNAPHG$$OJKMDPACBBB @ RVA 0x335FCFC

float PEJCGNNAPHG__OJKMDPACBBB(PEJCGNNAPHG_o *__this,MethodInfo *method)

{
  return *(float *)&(__this->fields).super.field_0x34;
}


// ===== public float LLAIJKMKMHO()  [RVA 0x335FD04]
// PEJCGNNAPHG$$LLAIJKMKMHO @ RVA 0x335FD04

float PEJCGNNAPHG__LLAIJKMKMHO(PEJCGNNAPHG_o *__this,MethodInfo *method)

{
  return (__this->fields).GHDKCEAMEHP;
}


// ===== private IEnumerator KDGLDODMFGO(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x335FB04]
// PEJCGNNAPHG$$KDGLDODMFGO @ RVA 0x335FB04

System_Collections_IEnumerator_o *
PEJCGNNAPHG__KDGLDODMFGO(PEJCGNNAPHG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04567a7c & 1) == 0) {
    FUN_01bab630(&PEJCGNNAPHG_NFAPJCNAOGN_TypeInfo);
    DAT_04567a7c = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PEJCGNNAPHG_NFAPJCNAOGN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  __this_00[2].monitor = BCKBBGCOMJD;
  thunk_FUN_01c20e04(&__this_00[2].monitor,BCKBBGCOMJD);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x335FD34]
// PEJCGNNAPHG$$.ctor @ RVA 0x335FD34

void PEJCGNNAPHG___ctor(PEJCGNNAPHG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,0xd,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0345fd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

