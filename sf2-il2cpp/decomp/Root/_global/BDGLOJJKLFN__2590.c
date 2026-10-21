// TypeDefIndex 2590
// Namespace: 
// public class BDGLOJJKLFN : CNIGOFCKBGI
// Fields:
//   private float GCHDBFJPGFJ; // 0x6C
//   private float EEKAJGGHMBH; // 0x70
//   private float LCNHNMINKHJ; // 0x74
//   private bool FDGPDNHMDCI; // 0x78

// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x33A4FC0]
// BDGLOJJKLFN$$GOGPCNMIJOB @ RVA 0x33A4FC0

CNIGOFCKBGI_o * BDGLOJJKLFN__GOGPCNMIJOB(BDGLOJJKLFN_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  BDGLOJJKLFN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04567ce7 & 1) == 0) {
    FUN_01bab630(&BDGLOJJKLFN_TypeInfo);
    DAT_04567ce7 = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (BDGLOJJKLFN_o *)thunk_FUN_01bda818(BDGLOJJKLFN_TypeInfo,method);
    BDGLOJJKLFN___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (BDGLOJJKLFN_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33A50C0]
// BDGLOJJKLFN$$HNIHOIAMDPC @ RVA 0x33A50C0

void BDGLOJJKLFN__HNIHOIAMDPC
               (BDGLOJJKLFN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  float fVar4;
  
  if ((DAT_04567ce8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11025/*"Rate"*/);
    FUN_01bab630(&StringLiteral_14875/*"WeaponStrike"*/);
    FUN_01bab630(&StringLiteral_6585/*"FramesAfterHit"*/);
    DAT_04567ce8 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_6585/*"FramesAfterHit"*/,(MethodInfo *)0x0);
      fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
      (__this->fields).GCHDBFJPGFJ = fVar4;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11025/*"Rate"*/,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        (__this->fields).EEKAJGGHMBH = fVar4;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14875/*"WeaponStrike"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          *(bool *)&(__this->fields).LCNHNMINKHJ = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x33A51E4]
// BDGLOJJKLFN$$DIGLGKAPOAB @ RVA 0x33A51E4

void BDGLOJJKLFN__DIGLGKAPOAB(BDGLOJJKLFN_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x33A51EC]
// BDGLOJJKLFN$$DFBPBPPNIBC @ RVA 0x33A51EC

bool BDGLOJJKLFN__DFBPBPPNIBC(BDGLOJJKLFN_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  float fVar3;
  
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (LDOOMGABFME->fields).ELCBIMMGAFJ;
  if (iVar1 == 5) {
    *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  }
  else if (iVar1 == 1) {
    cVar2 = *(char *)&(__this->fields).LCNHNMINKHJ;
    fVar3 = *(float *)&(__this->fields).super.field_0x5c + 1.0;
    *(float *)&(__this->fields).super.field_0x5c = fVar3;
    if (((cVar2 == '\0') || ((LDOOMGABFME->fields).HEHDEDAAOJF == false)) &&
       ((__this->fields).GCHDBFJPGFJ <= fVar3)) {
      return true;
    }
  }
  return false;
}


// ===== public float MFKDBOGPKLE()  [RVA 0x33A5250]
// BDGLOJJKLFN$$MFKDBOGPKLE @ RVA 0x33A5250

float BDGLOJJKLFN__MFKDBOGPKLE(BDGLOJJKLFN_o *__this,MethodInfo *method)

{
  return (__this->fields).EEKAJGGHMBH;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x33A5044]
// BDGLOJJKLFN$$.ctor @ RVA 0x33A5044

void BDGLOJJKLFN___ctor(BDGLOJJKLFN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,9,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  *(undefined8 *)((long)&(__this->fields).GCHDBFJPGFJ + 1) = 0;
  *(undefined8 *)&(__this->fields).super.field_0x5c = 0;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,5,(MethodInfo *)0x0);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
                    /* WARNING: Could not recover jumptable at 0x034a50bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  return;
}

