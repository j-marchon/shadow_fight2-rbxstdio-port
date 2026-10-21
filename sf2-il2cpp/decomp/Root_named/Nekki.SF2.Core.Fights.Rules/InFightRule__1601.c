// Original name: Nekki.SF2.Core.Fights.Rules.InFightRule  (obfuscated CNIGOFCKBGI)
// TypeDefIndex 1601
// Namespace: 
// public class InFightRule : Rule
// Fields:
//   protected HEDFKJBDBFN JGJNBILDCHK; // 0x58
//   protected HashSet<OHFNEFFMKIA> ANPLGGBAANL; // 0x60
//   protected bool EJNOHBNPCGC; // 0x68
//   protected bool EGBPMNKKPFI; // 0x69

// ===== public virtual void DGLJCGNHLIG()  [RVA 0x31B545C]
// InFightRule$$DGLJCGNHLIG @ RVA 0x31B545C

void InFightRule__DGLJCGNHLIG(InFightRule_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual HEDFKJBDBFN PKEKLILIONG()  [RVA 0x31B5460]
// InFightRule$$PKEKLILIONG @ RVA 0x31B5460

int32_t InFightRule__PKEKLILIONG(InFightRule_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iVar2;
  System_Enum_o local_38;
  int local_28;
  
  if ((DAT_04566bae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&StringLiteral_7429/*"InFightRule::getWinnerAppliance ERROR  - wrong playerAppliance "*/);
    DAT_04566bae = 1;
  }
  local_28 = (__this->fields).JGJNBILDCHK;
  if (local_28 == 2) {
    iVar2 = 1;
    if ((__this->fields).EGBPMNKKPFI == false) {
      iVar2 = 2;
    }
  }
  else if (local_28 == 1) {
    iVar2 = 1;
    if ((__this->fields).EGBPMNKKPFI != false) {
      iVar2 = 2;
    }
  }
  else {
                    /* try { // try from 032b54e8 to 033b54ef has its CatchHandler @ 032b55b0 */
    local_38.klass = (System_Enum_c *)HEDFKJBDBFN_TypeInfo;
    local_38.monitor = (void *)0xffffffffffffffff;
    pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
                    /* try { // try from 032b5510 to 033b5513 has its CatchHandler @ 032b559c */
                    /* try { // try from 032b5514 to 033b5523 has its CatchHandler @ 032b55ac */
    pSVar1 = System_String__Concat(StringLiteral_7429/*"InFightRule::getWinnerAppliance ERROR  - wrong playerAppliance "*/,pSVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    iVar2 = 3;
  }
                    /* try { // try from 032b5554 to 033b5563 has its CatchHandler @ 032b55a8 */
  return iVar2;
}


// ===== public bool IOIBGKPPPAM()  [RVA 0x31B5564]
// InFightRule$$IOIBGKPPPAM @ RVA 0x31B5564

bool InFightRule__IOIBGKPPPAM(InFightRule_o *__this,MethodInfo *method)

{
                    /* try { // try from 032b5564 to 033b558f has its CatchHandler @ 032b5420 */
  return (__this->fields).EJNOHBNPCGC;
}


// ===== public void .ctor(Rule.NJHOEHEJNPH ACCIHBHMFPN, HEDFKJBDBFN HEHMPFLAEGE, XmlNode AHDGNOJPPIB, InFightRule IIFCMNNGAHG)  [RVA 0x31B556C]
// InFightRule$$.ctor @ RVA 0x31B556C

void InFightRule___ctor(InFightRule_o *__this,int32_t ACCIHBHMFPN,int32_t HEHMPFLAEGE,
                       System_Xml_XmlNode_o *AHDGNOJPPIB,InFightRule_o *IIFCMNNGAHG,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o *__this_00;
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o **ppSVar2;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
                    /* try { // try from 032b5590 to 033b5593 has its CatchHandler @ 032b55a4 */
                    /* try { // try from 032b5594 to 033b5597 has its CatchHandler @ 032b55a0 */
                    /* try { // try from 032b5598 to 033b55c7 has its CatchHandler @ 032b5420 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5510 with catch @ 032b559c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5594 with catch @ 032b55a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5590 with catch @ 032b55a4
                        */
  if ((DAT_04566baf & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5554 with catch @ 032b55a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5514 with catch @ 032b55ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b54e8 with catch @ 032b55b0
                        */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<OHFNEFFMKIA>_TypeInfo);
                    /* try { // try from 032b55c8 to 033b55cb has its CatchHandler @ 032b55ec */
    FUN_01bab630(&StringLiteral_5219/*"Death"*/);
                    /* try { // try from 032b55cc to 033b55f3 has its CatchHandler @ 032b5420 */
    DAT_04566baf = 1;
  }
  Rule___ctor((Rule_o *)__this,ACCIHBHMFPN,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b55c8 with catch @ 032b55ec */
  (__this->fields).JGJNBILDCHK = HEHMPFLAEGE;
  (__this->fields).EJNOHBNPCGC = false;
  (__this->fields).EGBPMNKKPFI = true;
                    /* try { // try from 032b55f4 to 033b55fb has its CatchHandler @ 032b5610 */
  __this_00 = (System_Collections_Generic_HashSet_OHFNEFFMKIA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<OHFNEFFMKIA>_TypeInfo);
                    /* try { // try from 032b55fc to 033b5607 has its CatchHandler @ 032b5420 */
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,
             Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>__ctor__);
  ppSVar2 = &(__this->fields).ANPLGGBAANL;
                    /* try { // try from 032b5608 to 033b560f has its CatchHandler @ 032b5610 */
  *ppSVar2 = __this_00;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b55f4 with catch @ 032b5610
                       catch(type#2 @ 00000000) { ... } // from try @ 032b5608 with catch @ 032b5610
                        */
                    /* try { // try from 032b5614 to 033b56ef has its CatchHandler @ 032b5614
                       catch() { ... } // from try @ 032b5614 with catch @ 032b5614
                       catch() { ... } // from try @ 032b5734 with catch @ 032b5614
                       catch() { ... } // from try @ 032b5790 with catch @ 032b5614
                       catch() { ... } // from try @ 032b57c0 with catch @ 032b5614
                       catch() { ... } // from try @ 032b5800 with catch @ 032b5614 */
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_5219/*"Death"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).EJNOHBNPCGC = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DENNGFKNHKO(OHFNEFFMKIA ELCBIMMGAFJ)  [RVA 0x31B5674]
// InFightRule$$DENNGFKNHKO @ RVA 0x31B5674

void InFightRule__DENNGFKNHKO(InFightRule_o *__this,int32_t ELCBIMMGAFJ,MethodInfo *method)

{
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o *__this_00;
  
  if ((DAT_04566bb0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>_Add__);
    DAT_04566bb0 = 1;
  }
  __this_00 = (__this->fields).ANPLGGBAANL;
  if (__this_00 != (System_Collections_Generic_HashSet_OHFNEFFMKIA__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,ELCBIMMGAFJ,
               Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>_Add__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool LBENGABBGOD()  [RVA 0x31B56CC]
// InFightRule$$LBENGABBGOD @ RVA 0x31B56CC

bool InFightRule__LBENGABBGOD(InFightRule_o *__this,MethodInfo *method)

{
  return (__this->fields).EGBPMNKKPFI;
}


// ===== public void EODHHFEAIGP(HEDFKJBDBFN KFLAAIMLKOE)  [RVA 0x31B56D4]
// InFightRule$$EODHHFEAIGP @ RVA 0x31B56D4

void InFightRule__EODHHFEAIGP(InFightRule_o *__this,int32_t KFLAAIMLKOE,MethodInfo *method)

{
  (__this->fields).JGJNBILDCHK = KFLAAIMLKOE;
  return;
}


// ===== public bool AOJKGAKBCFK(OHFNEFFMKIA ELCBIMMGAFJ)  [RVA 0x31B56DC]
// InFightRule$$AOJKGAKBCFK @ RVA 0x31B56DC

bool InFightRule__AOJKGAKBCFK(InFightRule_o *__this,int32_t ELCBIMMGAFJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_OHFNEFFMKIA__o *__this_00;
  
                    /* try { // try from 032b56f0 to 033b56f7 has its CatchHandler @ 032b57a4 */
  if ((DAT_04566bb1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>_Contains__);
    DAT_04566bb1 = 1;
  }
                    /* try { // try from 032b570c to 033b570f has its CatchHandler @ 032b5794 */
  __this_00 = (__this->fields).ANPLGGBAANL;
                    /* try { // try from 032b5710 to 033b571f has its CatchHandler @ 032b57a0 */
  if (__this_00 != (System_Collections_Generic_HashSet_OHFNEFFMKIA__o *)0x0) {
                    /* try { // try from 032b5728 to 033b5733 has its CatchHandler @ 032b579c */
    bVar1 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,ELCBIMMGAFJ,
                       Method_System_Collections_Generic_HashSet<OHFNEFFMKIA>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HEDFKJBDBFN KBFFJFLAMAN()  [RVA 0x31B5734]
// InFightRule$$KBFFJFLAMAN @ RVA 0x31B5734

int32_t InFightRule__KBFFJFLAMAN(InFightRule_o *__this,MethodInfo *method)

{
                    /* try { // try from 032b5734 to 033b578b has its CatchHandler @ 032b5614 */
  return (__this->fields).JGJNBILDCHK;
}


// ===== public virtual InFightRule GOGPCNMIJOB()  [RVA 0x31B573C]
// InFightRule$$GOGPCNMIJOB @ RVA 0x31B573C

InFightRule_o * InFightRule__GOGPCNMIJOB(InFightRule_o *__this,MethodInfo *method)

{
  return (InFightRule_o *)0x0;
}


// ===== public virtual void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x31B5744]
// InFightRule$$DIGLGKAPOAB @ RVA 0x31B5744

void InFightRule__DIGLGKAPOAB(InFightRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  return;
}


// ===== protected virtual bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x31B5748]
// InFightRule$$DFBPBPPNIBC @ RVA 0x31B5748

bool InFightRule__DFBPBPPNIBC(InFightRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return false;
}


// ===== public virtual void NDNPGAKJLHM()  [RVA 0x31B5750]
// InFightRule$$NDNPGAKJLHM @ RVA 0x31B5750

void InFightRule__NDNPGAKJLHM(InFightRule_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void EABJNHKPJOM()  [RVA 0x31B5754]
// InFightRule$$EABJNHKPJOM @ RVA 0x31B5754

void InFightRule__EABJNHKPJOM(InFightRule_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void BLLEKLPPHBN(object IMMNELPBGIF)  [RVA 0x31B5758]
// InFightRule$$BLLEKLPPHBN @ RVA 0x31B5758

void InFightRule__BLLEKLPPHBN(InFightRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  return;
}


// ===== public override bool DGCODECJJCC(object IMMNELPBGIF)  [RVA 0x31B575C]
// InFightRule$$DGCODECJJCC @ RVA 0x31B575C

bool InFightRule__DGCODECJJCC(InFightRule_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  Il2CppClass *pIVar4;
  InFightRule_c *pCVar5;
  
  if ((DAT_04566bb2 & 1) == 0) {
    FUN_01bab630(&IBCHOCDIMIP_TypeInfo);
    DAT_04566bb2 = 1;
  }
                    /* try { // try from 032b578c to 033b578f has its CatchHandler @ 032b5798 */
                    /* try { // try from 032b5790 to 033b57bb has its CatchHandler @ 032b5614 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b570c with catch @ 032b5794
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b578c with catch @ 032b5798
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5728 with catch @ 032b579c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5710 with catch @ 032b57a0
                        */
  (*(__this->klass->vtable)._20_BLLEKLPPHBN.methodPtr)
            (__this,IMMNELPBGIF,(__this->klass->vtable)._20_BLLEKLPPHBN.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b56f0 with catch @ 032b57a4
                        */
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 032b57bc to 033b57bf has its CatchHandler @ 032b57e8 */
    bVar2 = (IBCHOCDIMIP_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032b57c0 to 033b57f7 has its CatchHandler @ 032b5614 */
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar2) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)IBCHOCDIMIP_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
  }
  iVar1 = (__this->fields).JGJNBILDCHK;
  if (iVar1 == 2) {
                    /* try { // try from 032b5800 to 033b580b has its CatchHandler @ 032b5614 */
    if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_032b583c;
    pCVar5 = __this->klass;
    pIVar4 = IMMNELPBGIF[1].monitor;
  }
  else {
                    /* catch() { ... } // from try @ 032b57bc with catch @ 032b57e8 */
    if (iVar1 != 1) {
      return false;
    }
    if (IMMNELPBGIF == (Il2CppObject *)0x0) {
LAB_032b583c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pCVar5 = __this->klass;
                    /* try { // try from 032b57f8 to 033b57ff has its CatchHandler @ 032b5814 */
    pIVar4 = IMMNELPBGIF[1].klass;
  }
                    /* try { // try from 032b580c to 033b5813 has its CatchHandler @ 032b5814 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b57f8 with catch @ 032b5814
                       catch(type#2 @ 00000000) { ... } // from try @ 032b580c with catch @ 032b5814
                        */
                    /* try { // try from 032b5818 to 033b5957 has its CatchHandler @ 032b5818
                       catch() { ... } // from try @ 032b5818 with catch @ 032b5818
                       catch() { ... } // from try @ 032b5a50 with catch @ 032b5818
                       catch() { ... } // from try @ 032b5a8c with catch @ 032b5818
                       catch() { ... } // from try @ 032b5ac8 with catch @ 032b5818
                       catch() { ... } // from try @ 032b5af8 with catch @ 032b5818 */
                    /* WARNING: Could not recover jumptable at 0x032b5820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(pCVar5->vtable)._17_DFBPBPPNIBC.methodPtr)
                    (__this,pIVar4,(pCVar5->vtable)._17_DFBPBPPNIBC.method);
  return (bool)uVar3;
}

