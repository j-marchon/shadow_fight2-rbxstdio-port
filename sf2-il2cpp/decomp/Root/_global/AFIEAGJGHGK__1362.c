// TypeDefIndex 1362
// Namespace: 
// public class AFIEAGJGHGK : COFFJADEMJF
// Fields:
//   public const int BCDAKMDGHHF = 60;
//   private List<AFIEAGJGHGK.PACFKHPIMAP> DIMDJNDKCBG; // 0x78
//   private string DMKIFMOPHEC; // 0x80
//   private bool EGEBPLAKCCK; // 0x88
//   private float MHHHFGONJGG; // 0x8C
//   public bool CDGJHNFHJDI; // 0x90
//   private bool DJILDJOHNGE; // 0x91
//   private bool AECJDMDHFAO; // 0x92
//   private int GKGHELAOIBG; // 0x94
//   private int PNIFHAMKLFF; // 0x98
//   private float GCHDBFJPGFJ; // 0x9C
//   private float BOHAGGJMOJN; // 0xA0
//   private float EAMLBCJEKDF; // 0xA4
//   private float DLJPCGPGONK; // 0xA8
//   private int KKANPDICHBI; // 0xAC

// ===== protected bool ANHKDPEGLLF()  [RVA 0x31689EC]
// AFIEAGJGHGK$$ANHKDPEGLLF @ RVA 0x31689EC

bool AFIEAGJGHGK__ANHKDPEGLLF(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_00;
  CNDPAJOLKFN_o *__this_01;
  MethodInfo *extraout_x1;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045668d4 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
    DAT_045668d4 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIMDJNDKCBG;
  if (__this_00 == (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                      );
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      iVar4 = 7;
      goto LAB_03268b54;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_80.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar3 = *(long *)&((local_80.fields._current[1].klass)->_1).this_arg.bits;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar6 = (__this->fields).EAMLBCJEKDF;
    fVar8 = *(float *)(lVar3 + 0x10);
    fVar7 = *(float *)(lVar3 + 0x14);
    fVar5 = *(float *)(lVar3 + 0x18);
    __this_01 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
    CNDPAJOLKFN___ctor(__this_01,fVar8 + fVar6,-fVar7,fVar5,(MethodInfo *)0x0);
    if (__this_01 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar5 = (__this_01->fields).super.OHHDBINAJCB;
  } while ((((*(float *)&pIVar1[2].klass <= fVar5) || (fVar5 <= *(float *)&pIVar1[2].monitor)) ||
           (fVar5 = (__this_01->fields).super.JOLEIODMLFL,
           *(float *)((long)&pIVar1[2].klass + 4) <= fVar5)) ||
          (fVar5 <= *(float *)((long)&pIVar1[2].monitor + 4)));
  iVar4 = 6;
LAB_03268b54:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,
             Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__);
  return iVar4 != 6;
}


// ===== public float JLAOPIBAHMF()  [RVA 0x3168C1C]
// AFIEAGJGHGK$$JLAOPIBAHMF @ RVA 0x3168C1C

float AFIEAGJGHGK__JLAOPIBAHMF(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  return (__this->fields).MHHHFGONJGG;
}


// ===== public int OKJGBKPCGLN()  [RVA 0x3168C24]
// AFIEAGJGHGK$$OKJGBKPCGLN @ RVA 0x3168C24

int32_t AFIEAGJGHGK__OKJGBKPCGLN(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  return (__this->fields).PNIFHAMKLFF;
}


// ===== public override void DGLJCGNHLIG()  [RVA 0x3168C2C]
// AFIEAGJGHGK$$DGLJCGNHLIG @ RVA 0x3168C2C

void AFIEAGJGHGK__DGLJCGNHLIG(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  (__this->fields).GCHDBFJPGFJ = 0.0;
  (__this->fields).CDGJHNFHJDI = true;
  (__this->fields).GKGHELAOIBG = (__this->fields).PNIFHAMKLFF;
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3168C44]
// AFIEAGJGHGK$$HNIHOIAMDPC @ RVA 0x3168C44

void AFIEAGJGHGK__HNIHOIAMDPC
               (AFIEAGJGHGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  float fVar6;
  
  if ((DAT_045668d5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11830/*"SequenceWidth"*/);
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
    FUN_01bab630(&StringLiteral_11820/*"Sequence"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045668d5 = 1;
  }
  method_00 = (MethodInfo *)0x0;
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  AFIEAGJGHGK__ABCNILIJHCG(__this,AHDGNOJPPIB,method_00);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
    fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
    (__this->fields).BOHAGGJMOJN = fVar6;
    iVar1 = -0x80000000;
    if (fVar6 / 60.0 != INFINITY) {
      iVar1 = (int)(fVar6 / 60.0);
    }
    (__this->fields).PNIFHAMKLFF = iVar1;
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11820/*"Sequence"*/,(MethodInfo *)0x0);
      bVar2 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      (__this->fields).EGEBPLAKCCK = (bool_conflict)(~bVar2 & 1);
      if (bVar2) {
        return;
      }
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11820/*"Sequence"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).DMKIFMOPHEC = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11830/*"SequenceWidth"*/,(MethodInfo *)0x0);
          fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
          (__this->fields).MHHHFGONJGG = fVar6;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GKCCDDBAAJL()  [RVA 0x31691A4]
// AFIEAGJGHGK$$GKCCDDBAAJL @ RVA 0x31691A4

int32_t AFIEAGJGHGK__GKCCDDBAAJL(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  return (__this->fields).GKGHELAOIBG;
}


// ===== protected override void BLLEKLPPHBN(object IMMNELPBGIF)  [RVA 0x31691AC]
// AFIEAGJGHGK$$BLLEKLPPHBN @ RVA 0x31691AC

void AFIEAGJGHGK__BLLEKLPPHBN(AFIEAGJGHGK_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  
  if ((DAT_045668d6 & 1) == 0) {
    FUN_01bab630(&IBCHOCDIMIP_TypeInfo);
    DAT_045668d6 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (IBCHOCDIMIP_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)IBCHOCDIMIP_TypeInfo)) {
      (__this->fields).KKANPDICHBI = *(int32_t *)&IMMNELPBGIF[2].klass;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x3169234]
// AFIEAGJGHGK$$.ctor @ RVA 0x3169234

void AFIEAGJGHGK___ctor(AFIEAGJGHGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_00;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o **ppSVar1;
  
  if ((DAT_045668d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_TypeInfo);
    DAT_045668d7 = 1;
  }
  __this_00 = (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>__ctor__);
  ppSVar1 = &(__this->fields).DIMDJNDKCBG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  COFFJADEMJF___ctor((COFFJADEMJF_o *)__this,7,HEHMPFLAEGE,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).EAMLBCJEKDF = 0.0;
  (__this->fields).DLJPCGPGONK = 0.0;
  (__this->fields).AECJDMDHFAO = false;
  (__this->fields).MHHHFGONJGG = 0.0;
  (__this->fields).CDGJHNFHJDI = true;
  (__this->fields).DJILDJOHNGE = false;
  (__this->fields).KKANPDICHBI = 1;
  (__this->fields).EGEBPLAKCCK = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,4,(MethodInfo *)0x0);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
                    /* WARNING: Could not recover jumptable at 0x03269338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  return;
}


// ===== public bool JCDLFEMHBEH()  [RVA 0x316933C]
// AFIEAGJGHGK$$JCDLFEMHBEH @ RVA 0x316933C

bool AFIEAGJGHGK__JCDLFEMHBEH(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  return (__this->fields).EGEBPLAKCCK;
}


// ===== public string AJLHCMGCKNC()  [RVA 0x3169344]
// AFIEAGJGHGK$$AJLHCMGCKNC @ RVA 0x3169344

System_String_o * AFIEAGJGHGK__AJLHCMGCKNC(AFIEAGJGHGK_o *__this,MethodInfo *method)

{
  return (__this->fields).DMKIFMOPHEC;
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x316934C]
// AFIEAGJGHGK$$DIGLGKAPOAB @ RVA 0x316934C

void AFIEAGJGHGK__DIGLGKAPOAB(AFIEAGJGHGK_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_00;
  GBJGJEGPHKD_o *__this_01;
  Il2CppClass *pIVar4;
  System_String_o *message;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045668d8 & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_11393/*"RingoutRule::initRule error - no ModelNode found with name "*/);
    DAT_045668d8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar2 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    pIVar5 = IMMNELPBGIF[3].klass;
    if (pIVar5 != (Il2CppClass *)0x0) {
      (__this->fields).EAMLBCJEKDF = *(float *)&(pIVar5->_1).element_class * -0.5;
      (__this->fields).DLJPCGPGONK = -*(float *)((long)&(pIVar5->_1).this_arg.data + 4);
    }
    iVar1 = (__this->fields).super.super.JGJNBILDCHK;
    if (iVar1 == 2) {
      pIVar6 = IMMNELPBGIF + 1;
    }
    else {
      if (iVar1 != 1) goto LAB_03269530;
      pIVar6 = (Il2CppObject *)&IMMNELPBGIF[1].monitor;
    }
    pIVar5 = pIVar6->klass;
    if (pIVar5 != (Il2CppClass *)0x0) {
      __this_00 = (__this->fields).DIMDJNDKCBG;
      if (__this_00 == (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)0x0)
      goto LAB_0326956c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_MoveNext__
                          );
        pIVar6 = local_60.fields._current;
        if (!bVar3) break;
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (GBJGJEGPHKD_o *)pIVar5->vtable[0x11].method;
        if (__this_01 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar4 = (Il2CppClass *)
                 GBJGJEGPHKD__OCJAHBKIFNO
                           (__this_01,local_60.fields._current[1].monitor,(MethodInfo *)0x0);
        pIVar7 = pIVar6 + 1;
        pIVar7->klass = pIVar4;
        thunk_FUN_01c20e04(pIVar7);
        if (pIVar7->klass == (Il2CppClass *)0x0) {
          message = System_String__Concat(StringLiteral_11393/*"RingoutRule::initRule error - no ModelNode found with name "*/,pIVar6[1].monitor,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<AFIEAGJGHGK_PACFKHPIMAP>_Dispose__
                );
    }
LAB_03269530:
    (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
              (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
    return;
  }
LAB_0326956c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void ABCNILIJHCG(XmlNode AHDGNOJPPIB)  [RVA 0x3168DF4]
// AFIEAGJGHGK$$ABCNILIJHCG @ RVA 0x3168DF4

/* WARNING: Removing unreachable block (ram,0x032690dc) */

void AFIEAGJGHGK__ABCNILIJHCG
               (AFIEAGJGHGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Xml_XmlNodeList_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *CMBPNGHLCKH;
  AFIEAGJGHGK_PACFKHPIMAP_o *__this_00;
  MethodInfo *method_00;
  long lVar6;
  AFIEAGJGHGK_PACFKHPIMAP_array *pAVar7;
  ulong uVar8;
  int *piVar9;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_01;
  
  if ((DAT_045668d9 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_Add__);
    FUN_01bab630(&AFIEAGJGHGK_PACFKHPIMAP_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9544/*"Node"*/);
    DAT_045668d9 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar3 = System_Xml_XmlNode__SelectNodes(AHDGNOJPPIB,StringLiteral_9544/*"Node"*/,(MethodInfo *)0x0);
    if (pSVar3 != (System_Xml_XmlNodeList_o *)0x0) {
      plVar4 = (long *)(*(pSVar3->klass->vtable)._8_GetEnumerator.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._8_GetEnumerator.method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03268f18;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03268f18:
        uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar8 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0326907c;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_03269064;
        }
        lVar6 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03268f78;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03268f78:
        CMBPNGHLCKH = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (CMBPNGHLCKH != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((CMBPNGHLCKH->klass->_2).naturalAligment < bVar1) ||
             ((CMBPNGHLCKH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(CMBPNGHLCKH);
          }
        }
        __this_01 = (__this->fields).DIMDJNDKCBG;
        __this_00 = (AFIEAGJGHGK_PACFKHPIMAP_o *)
                    thunk_FUN_01bda818(AFIEAGJGHGK_PACFKHPIMAP_TypeInfo);
        AFIEAGJGHGK_PACFKHPIMAP___ctor(__this_00,CMBPNGHLCKH,method_00);
        lVar6 = Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_Add__;
        if (__this_01 == (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pAVar7 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pAVar7 == (AFIEAGJGHGK_PACFKHPIMAP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pAVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pAVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pAVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,(MethodInfo_26E4DAC *)method_00);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03269064:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03269098;
    }
  }
LAB_0326907c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03269098:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x31697F4]
// AFIEAGJGHGK$$DFBPBPPNIBC @ RVA 0x31697F4

bool AFIEAGJGHGK__DFBPBPPNIBC(AFIEAGJGHGK_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    iVar1 = (LDOOMGABFME->fields).ELCBIMMGAFJ;
    if (iVar1 == 4) {
      (__this->fields).AECJDMDHFAO = false;
      bVar2 = COFFJADEMJF__EFLLMOAINGJ
                        ((COFFJADEMJF_o *)__this,(LDOOMGABFME->fields).CLHGGBABJPG,(MethodInfo *)0x0
                        );
      (__this->fields).DJILDJOHNGE = bVar2;
    }
    else if (iVar1 == 1) {
      if (((__this->fields).DJILDJOHNGE == false) ||
         (bVar2 = AFIEAGJGHGK__ANHKDPEGLLF(__this,(MethodInfo *)LDOOMGABFME), !bVar2)) {
        fVar3 = (__this->fields).GCHDBFJPGFJ + 1.0 / (float)(__this->fields).KKANPDICHBI;
        (__this->fields).GCHDBFJPGFJ = fVar3;
        if (60.0 <= fVar3) {
          iVar1 = (__this->fields).GKGHELAOIBG;
          (__this->fields).GCHDBFJPGFJ = 0.0;
          if (0 < iVar1) {
            (__this->fields).GKGHELAOIBG = iVar1 + -1;
            (__this->fields).CDGJHNFHJDI = true;
          }
        }
      }
      else if ((__this->fields).AECJDMDHFAO == false) {
        (__this->fields).GCHDBFJPGFJ = 0.0;
        (__this->fields).CDGJHNFHJDI = true;
        (__this->fields).GKGHELAOIBG = (__this->fields).PNIFHAMKLFF;
        (__this->fields).AECJDMDHFAO = true;
      }
    }
    return (__this->fields).GKGHELAOIBG < 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

