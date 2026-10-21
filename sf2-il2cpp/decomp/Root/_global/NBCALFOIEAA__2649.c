// TypeDefIndex 2649
// Namespace: 
// public class NBCALFOIEAA : CNIGOFCKBGI
// Fields:
//   public const float EICKEDMAOJK = 100000;
//   public const float LPCGJAPPBGF = -100000;
//   public const float LCOBOGHNAPC = 3;
//   public const string JABAFONEPAE = "ringout";
//   private float EAMLBCJEKDF; // 0x6C
//   private float DLJPCGPGONK; // 0x70
//   private string PCNGAEBMNDH; // 0x78
//   private string JIODFODFHNC; // 0x80
//   private IEFEBEDLHNN HJKLIDCAEOE; // 0x88
//   private float HNJEMFFEBBH; // 0x90
//   private float GJPJBEBEFDA; // 0x94
//   private float EMCONLBCHAB; // 0x98
//   private float ODJMFPBPLNH; // 0x9C
//   private float NJCALEBCLKL; // 0xA0

// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x33B8324]
// NBCALFOIEAA$$.ctor @ RVA 0x33B8324

void NBCALFOIEAA___ctor(NBCALFOIEAA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  IEFEBEDLHNN_o **ppIVar1;
  
  if ((DAT_04567d88 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567d88 = 1;
  }
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,5,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (__this->fields).PCNGAEBMNDH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).EMCONLBCHAB = 100000.0;
  (__this->fields).ODJMFPBPLNH = -100000.0;
  (__this->fields).HNJEMFFEBBH = -100000.0;
  (__this->fields).GJPJBEBEFDA = 100000.0;
  ppIVar1 = &(__this->fields).HJKLIDCAEOE;
  *ppIVar1 = (IEFEBEDLHNN_o *)0x0;
  thunk_FUN_01c20e04(ppIVar1,0);
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
  (__this->fields).NJCALEBCLKL = 3.0;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034b83e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x33B83E8]
// NBCALFOIEAA$$DFBPBPPNIBC @ RVA 0x33B83E8

bool NBCALFOIEAA__DFBPBPPNIBC(NBCALFOIEAA_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  JMIFGHKOLCL_o *extraout_x1;
  IEFEBEDLHNN_o *pIVar1;
  CNDPAJOLKFN_o *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_04567d89 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04567d89 = 1;
    LDOOMGABFME = extraout_x1;
  }
  pIVar1 = (__this->fields).HJKLIDCAEOE;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    pCVar2 = (pIVar1->fields).CNMHHKAMGPI;
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      fVar4 = (pCVar2->fields).super.OHHDBINAJCB;
      fVar5 = (pCVar2->fields).super.JOLEIODMLFL;
      fVar6 = *(float *)&(__this->fields).super.field_0x5c;
      fVar7 = (__this->fields).EAMLBCJEKDF;
      fVar3 = (pCVar2->fields).PPOPAMHBMGG;
                    /* try { // try from 034b8444 to 035b844b has its CatchHandler @ 034b852c */
      pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,LDOOMGABFME);
                    /* try { // try from 034b8454 to 035b845f has its CatchHandler @ 034b8524 */
      CNDPAJOLKFN___ctor(pCVar2,fVar4 + fVar6,fVar7 - fVar5,fVar3,(MethodInfo *)0x0);
      if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
        fVar3 = (pCVar2->fields).super.OHHDBINAJCB;
                    /* try { // try from 034b8470 to 035b8473 has its CatchHandler @ 034b8518 */
                    /* try { // try from 034b8474 to 035b8483 has its CatchHandler @ 034b8528 */
        if ((((fVar3 <= (__this->fields).GJPJBEBEFDA) && ((__this->fields).HNJEMFFEBBH <= fVar3)) &&
            (fVar3 = (pCVar2->fields).super.JOLEIODMLFL, fVar3 <= (__this->fields).EMCONLBCHAB)) &&
           ((__this->fields).ODJMFPBPLNH <= fVar3)) {
          return false;
        }
        (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
                  (__this,0,(__this->klass->vtable)._9_AFBEEALKOPE.method);
        return true;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034b84c0 to 035b84e3 has its CatchHandler @ 034b8520 */
  return false;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33B84DC]
// NBCALFOIEAA$$HNIHOIAMDPC @ RVA 0x33B84DC

void NBCALFOIEAA__HNIHOIAMDPC
               (NBCALFOIEAA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  MGNDHCBAPEN_float__float__o *pMVar5;
  System_String_o **ppSVar6;
  float fVar7;
  undefined8 uVar8;
  
                    /* try { // try from 034b84e4 to 035b850f has its CatchHandler @ 034b8310 */
  if ((DAT_04567d8a & 1) == 0) {
    FUN_01bab630(&StringLiteral_20588/*"ringout"*/);
                    /* try { // try from 034b8510 to 035b8513 has its CatchHandler @ 034b851c */
    FUN_01bab630(&StringLiteral_9544/*"Node"*/);
                    /* try { // try from 034b8514 to 035b8543 has its CatchHandler @ 034b8310 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8470 with catch @ 034b8518
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8510 with catch @ 034b851c
                        */
    FUN_01bab630(&StringLiteral_11820/*"Sequence"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b84c0 with catch @ 034b8520
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8454 with catch @ 034b8524
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8474 with catch @ 034b8528
                        */
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b8444 with catch @ 034b852c
                        */
    FUN_01bab630(&StringLiteral_11833/*"SequentionSpeed"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
                    /* try { // try from 034b8544 to 035b8547 has its CatchHandler @ 034b8568 */
                    /* try { // try from 034b8548 to 035b856f has its CatchHandler @ 034b8310 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_3270/*"Axis"*/);
    DAT_04567d8a = 1;
  }
                    /* catch() { ... } // from try @ 034b8544 with catch @ 034b8568 */
                    /* try { // try from 034b8570 to 035b8577 has its CatchHandler @ 034b858c */
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034b8578 to 035b8583 has its CatchHandler @ 034b8310 */
                    /* try { // try from 034b8584 to 035b858b has its CatchHandler @ 034b858c */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034b8570 with catch @ 034b858c
                       catch(type#2 @ 00000000) { ... } // from try @ 034b8584 with catch @ 034b858c
                        */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9544/*"Node"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).PCNGAEBMNDH = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3270/*"Axis"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pMVar5 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,-100000.0,100000.0,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (pMVar5 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_034b8710;
          fVar7 = (pMVar5->fields).DOKHHBGJICA;
          (__this->fields).HNJEMFFEBBH = (pMVar5->fields).PHPELPFMOII;
          (__this->fields).GJPJBEBEFDA = fVar7;
        }
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (pMVar5 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_034b8710;
          uVar8 = NEON_rev64(pMVar5->fields,4);
          (__this->fields).EMCONLBCHAB = (float)(int)uVar8;
          (__this->fields).ODJMFPBPLNH = (float)(int)((ulong)uVar8 >> 0x20);
        }
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_11833/*"SequentionSpeed"*/,(MethodInfo *)0x0);
          fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,3.0,(MethodInfo *)0x0);
          (__this->fields).NJCALEBCLKL = fVar7;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_11820/*"Sequence"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_20588/*"ringout"*/,(MethodInfo *)0x0);
            ppSVar6 = &(__this->fields).JIODFODFHNC;
            *ppSVar6 = pSVar4;
            thunk_FUN_01c20e04(ppSVar6,pSVar4);
            return;
          }
        }
      }
    }
  }
LAB_034b8710:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float AOIHJOCMACG()  [RVA 0x33B8714]
// NBCALFOIEAA$$AOIHJOCMACG @ RVA 0x33B8714

float NBCALFOIEAA__AOIHJOCMACG(NBCALFOIEAA_o *__this,MethodInfo *method)

{
  return (__this->fields).GJPJBEBEFDA;
}


// ===== public float EJPHKHCDOKJ()  [RVA 0x33B871C]
// NBCALFOIEAA$$EJPHKHCDOKJ @ RVA 0x33B871C

float NBCALFOIEAA__EJPHKHCDOKJ(NBCALFOIEAA_o *__this,MethodInfo *method)

{
  return (__this->fields).NJCALEBCLKL;
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x33B8724]
// NBCALFOIEAA$$DIGLGKAPOAB @ RVA 0x33B8724

void NBCALFOIEAA__DIGLGKAPOAB(NBCALFOIEAA_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  GBJGJEGPHKD_o *__this_00;
  IEFEBEDLHNN_o *pIVar3;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  Il2CppClass *pIVar6;
  System_String_o *pSVar7;
  
  if ((DAT_04567d8b & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11394/*"RingoutRule::initRule error - no ModelNode found with name {0}"*/);
    DAT_04567d8b = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_034b88c4;
  bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
  if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  pIVar6 = IMMNELPBGIF[3].klass;
  if (pIVar6 != (Il2CppClass *)0x0) {
    *(float *)&(__this->fields).super.field_0x5c = *(float *)&(pIVar6->_1).element_class * -0.5;
    (__this->fields).EAMLBCJEKDF = -*(float *)((long)&(pIVar6->_1).this_arg.data + 4);
  }
  iVar1 = (__this->fields).super.JGJNBILDCHK;
  if (iVar1 == 2) {
    pIVar6 = IMMNELPBGIF[1].klass;
joined_r0x034b87f8:
    if (pIVar6 != (Il2CppClass *)0x0) {
      __this_00 = (GBJGJEGPHKD_o *)pIVar6->vtable[0x11].method;
      if (__this_00 == (GBJGJEGPHKD_o *)0x0) goto LAB_034b88c4;
                    /* try { // try from 034b8804 to 035b8993 has its CatchHandler @ 034b8804
                       catch() { ... } // from try @ 034b8804 with catch @ 034b8804
                       catch() { ... } // from try @ 034b8a80 with catch @ 034b8804
                       catch() { ... } // from try @ 034b8ae8 with catch @ 034b8804
                       catch() { ... } // from try @ 034b8b2c with catch @ 034b8804
                       catch() { ... } // from try @ 034b8b6c with catch @ 034b8804 */
      pIVar3 = GBJGJEGPHKD__OCJAHBKIFNO(__this_00,(__this->fields).PCNGAEBMNDH,(MethodInfo *)0x0);
      (__this->fields).HJKLIDCAEOE = pIVar3;
      thunk_FUN_01c20e04();
    }
  }
  else if (iVar1 == 1) {
    pIVar6 = IMMNELPBGIF[1].monitor;
    goto joined_r0x034b87f8;
  }
  if ((__this->fields).HJKLIDCAEOE != (IEFEBEDLHNN_o *)0x0) {
    return;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    pSVar7 = (__this->fields).PCNGAEBMNDH;
    if ((pSVar7 != (System_String_o *)0x0) &&
       (lVar4 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar7;
      thunk_FUN_01c20e04(args->m_Items,pSVar7);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_11394/*"RingoutRule::initRule error - no ModelNode found with name {0}"*/,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_034b88c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x33B88D8]
// NBCALFOIEAA$$GOGPCNMIJOB @ RVA 0x33B88D8

CNIGOFCKBGI_o * NBCALFOIEAA__GOGPCNMIJOB(NBCALFOIEAA_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  NBCALFOIEAA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
  if ((DAT_04567d8c & 1) == 0) {
    FUN_01bab630(&NBCALFOIEAA_TypeInfo);
    DAT_04567d8c = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (NBCALFOIEAA_o *)thunk_FUN_01bda818(NBCALFOIEAA_TypeInfo,method);
    NBCALFOIEAA___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
    if (__this_00 != (NBCALFOIEAA_o *)0x0) {
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float JDFPFINCIOC()  [RVA 0x33B895C]
// NBCALFOIEAA$$JDFPFINCIOC @ RVA 0x33B895C

float NBCALFOIEAA__JDFPFINCIOC(NBCALFOIEAA_o *__this,MethodInfo *method)

{
  return (__this->fields).HNJEMFFEBBH;
}


// ===== public string AJLHCMGCKNC()  [RVA 0x33B8964]
// NBCALFOIEAA$$AJLHCMGCKNC @ RVA 0x33B8964

System_String_o * NBCALFOIEAA__AJLHCMGCKNC(NBCALFOIEAA_o *__this,MethodInfo *method)

{
  return (__this->fields).JIODFODFHNC;
}

