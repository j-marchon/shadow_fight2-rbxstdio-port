// TypeDefIndex 1499
// Namespace: 
// public class DGCPNJOFKON : InFightRule
// Fields:
//   protected bool CLBEBKNHHJF; // 0x6A

// ===== protected virtual bool FPEEJMINKBI(bool IAAJOMPLHBK)  [RVA 0x319A9CC]
// DGCPNJOFKON$$FPEEJMINKBI @ RVA 0x319A9CC

bool DGCPNJOFKON__FPEEJMINKBI(DGCPNJOFKON_o *__this,bool IAAJOMPLHBK,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = (__this->fields).super.field_0x5a;
  (__this->fields).super.field_0x5a = IAAJOMPLHBK;
  return (bool)cVar1 != IAAJOMPLHBK;
}


// ===== protected virtual void KNPEAJHDALM()  [RVA 0x319A9E8]
// DGCPNJOFKON$$KNPEAJHDALM @ RVA 0x319A9E8

void DGCPNJOFKON__KNPEAJHDALM(DGCPNJOFKON_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = (__this->fields).super.JGJNBILDCHK;
  if (iVar1 == 1) {
    iVar2 = 2;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    iVar2 = 1;
  }
  (__this->fields).super.JGJNBILDCHK = iVar2;
  return;
}


// ===== public override InFightRule GOGPCNMIJOB()  [RVA 0x319AA10]
// DGCPNJOFKON$$GOGPCNMIJOB @ RVA 0x319AA10

InFightRule_o * DGCPNJOFKON__GOGPCNMIJOB(DGCPNJOFKON_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  int32_t ACCIHBHMFPN;
  InFightRule_o *__this_00;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566aa7 & 1) == 0) {
    auVar2 = FUN_01bab630(&DGCPNJOFKON_TypeInfo);
    DAT_04566aa7 = 1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
    ACCIHBHMFPN = Rule__NHGGBEACKBD((Rule_o *)__this,(MethodInfo *)0x0);
    __this_00 = (InFightRule_o *)thunk_FUN_01bda818(DGCPNJOFKON_TypeInfo);
    InFightRule___ctor(__this_00,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,(InFightRule_o *)0x0,
                       (MethodInfo *)0x0);
                    /* try { // try from 0329aa94 to 0339aac3 has its CatchHandler @ 0329a6d8 */
    (__this_00->fields).field_0x5a = 0;
    InFightRule__DENNGFKNHKO(__this_00,10,(MethodInfo *)0x0);
    (__this_00->fields).super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x319AAFC]
// DGCPNJOFKON$$DFBPBPPNIBC @ RVA 0x319AAFC

bool DGCPNJOFKON__DFBPBPPNIBC(DGCPNJOFKON_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  return false;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE, Rule.NJHOEHEJNPH ACCIHBHMFPN)  [RVA 0x319AAC4]
// DGCPNJOFKON$$.ctor @ RVA 0x319AAC4

void DGCPNJOFKON___ctor(DGCPNJOFKON_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       int32_t ACCIHBHMFPN,MethodInfo *method)

{
                    /* try { // try from 0329aac4 to 0339aac7 has its CatchHandler @ 0329aacc */
                    /* try { // try from 0329aac8 to 0339aaeb has its CatchHandler @ 0329a6d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329aac4 with catch @ 0329aacc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329a9ac with catch @ 0329aad0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0329a9c0 with catch @ 0329aad4
                        */
  InFightRule___ctor((InFightRule_o *)__this,ACCIHBHMFPN,HEHMPFLAEGE,AHDGNOJPPIB,
                     (InFightRule_o *)0x0,(MethodInfo *)0x0);
  (__this->fields).super.field_0x5a = 0;
                    /* try { // try from 0329aaec to 0339aaef has its CatchHandler @ 0329ab18 */
                    /* try { // try from 0329aaf0 to 0339ab27 has its CatchHandler @ 0329a6d8 */
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,10,(MethodInfo *)0x0);
  return;
}


// ===== public bool IFMCIGLGHJE()  [RVA 0x319AB04]
// DGCPNJOFKON$$IFMCIGLGHJE @ RVA 0x319AB04

bool DGCPNJOFKON__IFMCIGLGHJE(DGCPNJOFKON_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x5a;
}


// ===== public override void DIGLGKAPOAB(object IMMNELPBGIF)  [RVA 0x319AB0C]
// DGCPNJOFKON$$DIGLGKAPOAB @ RVA 0x319AB0C

void DGCPNJOFKON__DIGLGKAPOAB(DGCPNJOFKON_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  
                    /* catch() { ... } // from try @ 0329aaec with catch @ 0329ab18 */
  if ((DAT_04566aa8 & 1) == 0) {
                    /* try { // try from 0329ab28 to 0339ab2f has its CatchHandler @ 0329ab44 */
                    /* try { // try from 0329ab30 to 0339ab3b has its CatchHandler @ 0329a6d8 */
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    DAT_04566aa8 = 1;
  }
                    /* try { // try from 0329ab3c to 0339ab43 has its CatchHandler @ 0329ab44 */
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0329ab28 with catch @ 0329ab44
                       catch(type#2 @ 00000000) { ... } // from try @ 0329ab3c with catch @ 0329ab44
                        */
    bVar1 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x0329ab8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._10_DGCODECJJCC.methodPtr)
                (__this,IMMNELPBGIF[3].monitor,(__this->klass->vtable)._10_DGCODECJJCC.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

