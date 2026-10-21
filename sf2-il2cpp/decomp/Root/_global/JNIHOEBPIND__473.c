// TypeDefIndex 473
// Namespace: 
// public class JNIHOEBPIND : IIMNGGHGKOD
// Fields:
//   private int HCNMEPDPNKC; // 0x44
//   private string GGENMIKNBFA; // 0x48

// ===== public string HKGAHCHCJDL()  [RVA 0x3580508]
// JNIHOEBPIND$$HKGAHCHCJDL @ RVA 0x3580508

System_String_o * JNIHOEBPIND__HKGAHCHCJDL(JNIHOEBPIND_o *__this,MethodInfo *method)

{
  return *(System_String_o **)&(__this->fields).HCNMEPDPNKC;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3580510]
// JNIHOEBPIND$$.ctor @ RVA 0x3580510

void JNIHOEBPIND___ctor(JNIHOEBPIND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,0xc,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03680544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3580548]
// JNIHOEBPIND$$DPGIIHOJJDE @ RVA 0x3580548

void JNIHOEBPIND__DPGIIHOJJDE(JNIHOEBPIND_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CNFMNJGPIAH()  [RVA 0x3580568]
// JNIHOEBPIND$$CNFMNJGPIAH @ RVA 0x3580568

int32_t JNIHOEBPIND__CNFMNJGPIAH(JNIHOEBPIND_o *__this,MethodInfo *method)

{
  return *(int32_t *)&(__this->fields).super.field_0x34;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3580570]
// JNIHOEBPIND$$HNIHOIAMDPC @ RVA 0x3580570

void JNIHOEBPIND__HNIHOIAMDPC
               (JNIHOEBPIND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t *piVar5;
  
  if ((DAT_04568cca & 1) == 0) {
    FUN_01bab630(&StringLiteral_5511/*"Duration"*/);
    FUN_01bab630(&StringLiteral_3606/*"Button"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568cca = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5511/*"Duration"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
      *(int32_t *)&(__this->fields).super.field_0x34 = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3606/*"Button"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        piVar5 = &(__this->fields).HCNMEPDPNKC;
        *(System_String_o **)piVar5 = pSVar4;
        thunk_FUN_01c20e04(piVar5,pSVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

