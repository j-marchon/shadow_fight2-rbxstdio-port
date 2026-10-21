// TypeDefIndex 203
// Namespace: 
// public class NAKKKCKOHGH : CNIGOFCKBGI
// Fields:
//   private JADGCGOJLJB.IMLPLLLPALI EDODHDCFGGD; // 0x6C

// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x311BFD0]
// NAKKKCKOHGH$$.ctor @ RVA 0x311BFD0

void NAKKKCKOHGH___ctor(NAKKKCKOHGH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  NAKKKCKOHGH_c *pNVar1;
  
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0xc,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar1 = __this->klass;
  *(undefined4 *)&(__this->fields).super.field_0x5c = 0;
                    /* WARNING: Could not recover jumptable at 0x0321c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(pNVar1->vtable)._12_HNIHOIAMDPC.method);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x311C014]
// NAKKKCKOHGH$$HNIHOIAMDPC @ RVA 0x311C014

void NAKKKCKOHGH__HNIHOIAMDPC
               (NAKKKCKOHGH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  undefined4 uVar2;
  
  if ((DAT_045665f0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_9568/*"None"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_11798/*"SelfUninterrupt"*/);
    FUN_01bab630(&StringLiteral_14411/*"Uninterrupt"*/);
    FUN_01bab630(&StringLiteral_7903/*"Invulnerable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_14546/*"Unstable"*/);
    DAT_045665f0 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_3160/*"Attack"*/,(MethodInfo *)0x0);
    if (bVar1) {
      uVar2 = 4;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
      if (bVar1) {
        uVar2 = 5;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7903/*"Invulnerable"*/,(MethodInfo *)0x0);
        if (bVar1) {
          uVar2 = 6;
        }
        else {
          bVar1 = System_String__op_Equality(a,StringLiteral_9568/*"None"*/,(MethodInfo *)0x0);
          if (bVar1) {
            uVar2 = 0;
          }
          else {
            bVar1 = System_String__op_Equality(a,StringLiteral_11798/*"SelfUninterrupt"*/,(MethodInfo *)0x0);
            if (bVar1) {
              uVar2 = 3;
            }
            else {
              bVar1 = System_String__op_Equality(a,StringLiteral_14411/*"Uninterrupt"*/,(MethodInfo *)0x0);
              if (bVar1) {
                uVar2 = 2;
              }
              else {
                bVar1 = System_String__op_Equality(a,StringLiteral_14546/*"Unstable"*/,(MethodInfo *)0x0);
                if (!bVar1) {
                  return;
                }
                uVar2 = 1;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)&(__this->fields).super.field_0x5c = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x311C204]
// NAKKKCKOHGH$$DIGLGKAPOAB @ RVA 0x311C204

void NAKKKCKOHGH__DIGLGKAPOAB(NAKKKCKOHGH_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  Il2CppClass *__this_00;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  int32_t local_24;
  
  if ((DAT_045665f1 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11203/*"RemoveIntervalRule::initRule - wrong player appliance - {0}"*/);
    DAT_045665f1 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  iVar1 = (__this->fields).super.JGJNBILDCHK;
  if (iVar1 == 2) {
    if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0321c394;
    __this_00 = IMMNELPBGIF[1].klass;
  }
  else {
    if (iVar1 != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).super.JGJNBILDCHK;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(HEDFKJBDBFN_TypeInfo,&local_24);
      if (args != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pIVar3,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        {
          uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar5,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar3;
          thunk_FUN_01c20e04(args->m_Items,pIVar3);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_11203/*"RemoveIntervalRule::initRule - wrong player appliance - {0}"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0321c394;
    }
    if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_0321c394;
    __this_00 = IMMNELPBGIF[1].monitor;
  }
  if (__this_00 != (Il2CppClass *)0x0) {
    OLKKAIFGGAK__BGJNOONKFCH
              ((OLKKAIFGGAK_o *)__this_00,*(int32_t *)&(__this->fields).super.field_0x5c,
               (MethodInfo *)0x0);
    return;
  }
LAB_0321c394:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x311C3B0]
// NAKKKCKOHGH$$GOGPCNMIJOB @ RVA 0x311C3B0

CNIGOFCKBGI_o * NAKKKCKOHGH__GOGPCNMIJOB(NAKKKCKOHGH_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CNIGOFCKBGI_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  CNIGOFCKBGI_c *pCVar2;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045665f2 & 1) == 0) {
    auVar3 = FUN_01bab630(&NAKKKCKOHGH_TypeInfo);
    DAT_045665f2 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    __this_00 = (CNIGOFCKBGI_o *)thunk_FUN_01bda818(NAKKKCKOHGH_TypeInfo);
    CNIGOFCKBGI___ctor(__this_00,0xc,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,(MethodInfo *)0x0)
    ;
    pCVar2 = __this_00->klass;
    *(undefined4 *)&(__this_00->fields).field_0x5c = 0;
    (*(pCVar2->vtable)._12_HNIHOIAMDPC.methodPtr)
              (__this_00,AHDGNOJPPIB,(pCVar2->vtable)._12_HNIHOIAMDPC.method);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x311C454]
// NAKKKCKOHGH$$DFBPBPPNIBC @ RVA 0x311C454

bool NAKKKCKOHGH__DFBPBPPNIBC(NAKKKCKOHGH_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return false;
}

