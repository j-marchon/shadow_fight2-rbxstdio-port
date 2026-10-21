// TypeDefIndex 505
// Namespace: 
// public class PADDODJLLFJ : COFFJADEMJF
// Fields:
//   public const float EICKEDMAOJK = -100000;
//   public const float LPCGJAPPBGF = 100000;
//   private float EAMLBCJEKDF; // 0x78
//   private float DLJPCGPGONK; // 0x7C
//   private string PCNGAEBMNDH; // 0x80
//   private IEFEBEDLHNN HJKLIDCAEOE; // 0x88
//   private float HNJEMFFEBBH; // 0x90
//   private float GJPJBEBEFDA; // 0x94
//   private float EMCONLBCHAB; // 0x98
//   private float ODJMFPBPLNH; // 0x9C
//   private bool LNEKPOAMMDK; // 0xA0

// ===== public override void DGLJCGNHLIG()  [RVA 0x358BB40]
// PADDODJLLFJ$$DGLJCGNHLIG @ RVA 0x358BB40

void PADDODJLLFJ__DGLJCGNHLIG(PADDODJLLFJ_o *__this,MethodInfo *method)

{
  (__this->fields).LNEKPOAMMDK = false;
  return;
}


// ===== public float AOIHJOCMACG()  [RVA 0x358BB48]
// PADDODJLLFJ$$AOIHJOCMACG @ RVA 0x358BB48

float PADDODJLLFJ__AOIHJOCMACG(PADDODJLLFJ_o *__this,MethodInfo *method)

{
  return (__this->fields).GJPJBEBEFDA;
}


// ===== public bool BCEJCCGFMOP()  [RVA 0x358BB50]
// PADDODJLLFJ$$BCEJCCGFMOP @ RVA 0x358BB50

bool PADDODJLLFJ__BCEJCCGFMOP(PADDODJLLFJ_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  IEFEBEDLHNN_o *pIVar1;
  CNDPAJOLKFN_o *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_04568d46 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04568d46 = 1;
    method = extraout_x1;
  }
  pIVar1 = (__this->fields).HJKLIDCAEOE;
  if ((pIVar1 != (IEFEBEDLHNN_o *)0x0) && ((__this->fields).LNEKPOAMMDK != false)) {
    pCVar2 = (pIVar1->fields).CNMHHKAMGPI;
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      fVar4 = (pCVar2->fields).super.OHHDBINAJCB;
      fVar5 = (pCVar2->fields).super.JOLEIODMLFL;
      fVar3 = (pCVar2->fields).PPOPAMHBMGG;
      fVar6 = (__this->fields).EAMLBCJEKDF;
      fVar7 = (__this->fields).DLJPCGPGONK;
      pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,method);
      CNDPAJOLKFN___ctor(pCVar2,fVar4 + fVar6,fVar7 - fVar5,fVar3,(MethodInfo *)0x0);
      if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
        fVar3 = (pCVar2->fields).super.OHHDBINAJCB;
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
  return false;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x358BC4C]
// PADDODJLLFJ$$DFBPBPPNIBC @ RVA 0x358BC4C

bool PADDODJLLFJ__DFBPBPPNIBC(PADDODJLLFJ_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (LDOOMGABFME->fields).ELCBIMMGAFJ;
  if (iVar1 != 1) {
    if (iVar1 == 7) {
      bVar2 = true;
    }
    else {
      if (iVar1 != 4) {
        return false;
      }
      bVar2 = COFFJADEMJF__EFLLMOAINGJ
                        ((COFFJADEMJF_o *)__this,(LDOOMGABFME->fields).CLHGGBABJPG,(MethodInfo *)0x0
                        );
      LDOOMGABFME = (JMIFGHKOLCL_o *)extraout_x1;
    }
    (__this->fields).LNEKPOAMMDK = bVar2;
  }
  bVar2 = PADDODJLLFJ__BCEJCCGFMOP(__this,(MethodInfo *)LDOOMGABFME);
  return bVar2;
}


// ===== public override void NDNPGAKJLHM()  [RVA 0x358BCB0]
// PADDODJLLFJ$$NDNPGAKJLHM @ RVA 0x358BCB0

void PADDODJLLFJ__NDNPGAKJLHM(PADDODJLLFJ_o *__this,MethodInfo *method)

{
  (__this->fields).LNEKPOAMMDK = false;
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x358BCB8]
// PADDODJLLFJ$$.ctor @ RVA 0x358BCB8

void PADDODJLLFJ___ctor(PADDODJLLFJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  bool bVar1;
  IEFEBEDLHNN_o **ppIVar2;
  
  if ((DAT_04568d47 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10260/*"Physical"*/);
    DAT_04568d47 = 1;
  }
  COFFJADEMJF___ctor((COFFJADEMJF_o *)__this,8,HEHMPFLAEGE,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).LNEKPOAMMDK = false;
  (__this->fields).EAMLBCJEKDF = 0.0;
  (__this->fields).DLJPCGPGONK = 0.0;
  (__this->fields).EMCONLBCHAB = -100000.0;
  (__this->fields).ODJMFPBPLNH = 100000.0;
  (__this->fields).HNJEMFFEBBH = 100000.0;
  (__this->fields).GJPJBEBEFDA = -100000.0;
  ppIVar2 = &(__this->fields).HJKLIDCAEOE;
  *ppIVar2 = (IEFEBEDLHNN_o *)0x0;
  thunk_FUN_01c20e04(ppIVar2,0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,4,(MethodInfo *)0x0);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
  bVar1 = COFFJADEMJF__EFLLMOAINGJ((COFFJADEMJF_o *)__this,StringLiteral_10260/*"Physical"*/,(MethodInfo *)0x0);
  if (bVar1) {
    CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,7,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public float JDFPFINCIOC()  [RVA 0x358BDA8]
// PADDODJLLFJ$$JDFPFINCIOC @ RVA 0x358BDA8

float PADDODJLLFJ__JDFPFINCIOC(PADDODJLLFJ_o *__this,MethodInfo *method)

{
  return (__this->fields).HNJEMFFEBBH;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x358BDB0]
// PADDODJLLFJ$$HNIHOIAMDPC @ RVA 0x358BDB0

void PADDODJLLFJ__HNIHOIAMDPC
               (PADDODJLLFJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MGNDHCBAPEN_float__float__o *pMVar6;
  undefined8 uVar7;
  
  if ((DAT_04568d48 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9544/*"Node"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_3270/*"Axis"*/);
    DAT_04568d48 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9544/*"Node"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).PCNGAEBMNDH = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_3270/*"Axis"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,100000.0,-100000.0,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
        if (bVar2) {
          if (pMVar6 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_0368bf38;
          fVar1 = (pMVar6->fields).DOKHHBGJICA;
          (__this->fields).HNJEMFFEBBH = (pMVar6->fields).PHPELPFMOII;
          (__this->fields).GJPJBEBEFDA = fVar1;
        }
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
        if (bVar2) {
          if (pMVar6 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_0368bf38;
          uVar7 = NEON_rev64(pMVar6->fields,4);
          (__this->fields).EMCONLBCHAB = (float)(int)uVar7;
          (__this->fields).ODJMFPBPLNH = (float)(int)((ulong)uVar7 >> 0x20);
        }
        return;
      }
    }
  }
LAB_0368bf38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x358BF3C]
// PADDODJLLFJ$$DIGLGKAPOAB @ RVA 0x358BF3C

void PADDODJLLFJ__DIGLGKAPOAB(PADDODJLLFJ_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

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
  
  if ((DAT_04568d49 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8675/*"LoseFallRule::initRule error - no ModelNode found with name {0}"*/);
    DAT_04568d49 = 1;
  }
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0368c0f0;
  bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
  if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
     ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  pIVar6 = IMMNELPBGIF[3].klass;
  if (pIVar6 != (Il2CppClass *)0x0) {
    (__this->fields).EAMLBCJEKDF = *(float *)&(pIVar6->_1).element_class * -0.5;
    (__this->fields).DLJPCGPGONK = -(float)(pIVar6->_1).this_arg.bits;
  }
  iVar1 = (__this->fields).super.super.JGJNBILDCHK;
  if (iVar1 == 2) {
    pIVar6 = IMMNELPBGIF[1].klass;
joined_r0x0368c024:
    if (pIVar6 != (Il2CppClass *)0x0) {
      __this_00 = (GBJGJEGPHKD_o *)pIVar6->vtable[0x11].method;
      if (__this_00 == (GBJGJEGPHKD_o *)0x0) goto LAB_0368c0f0;
      pIVar3 = GBJGJEGPHKD__OCJAHBKIFNO(__this_00,(__this->fields).PCNGAEBMNDH,(MethodInfo *)0x0);
      (__this->fields).HJKLIDCAEOE = pIVar3;
      thunk_FUN_01c20e04();
    }
  }
  else if (iVar1 == 1) {
    pIVar6 = IMMNELPBGIF[1].monitor;
    goto joined_r0x0368c024;
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_8675/*"LoseFallRule::initRule error - no ModelNode found with name {0}"*/,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0368c0f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

