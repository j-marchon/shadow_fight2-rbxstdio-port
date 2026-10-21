// TypeDefIndex 1705
// Namespace: 
// public class CIDOIOIEAFF : CNIGOFCKBGI
// Fields:
//   private BKHDDKOEEKP.BGGNJLLOHII EKPCAFFOPOE; // 0x6C

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31D435C]
// CIDOIOIEAFF$$HNIHOIAMDPC @ RVA 0x31D435C

void CIDOIOIEAFF__HNIHOIAMDPC
               (CIDOIOIEAFF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  iVar1 = FCFEFEBAILK__INAPKENHIEC(AHDGNOJPPIB,method_00);
  *(int32_t *)&(__this->fields).super.field_0x5c = iVar1;
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x31D4594]
// CIDOIOIEAFF$$.ctor @ RVA 0x31D4594

void CIDOIOIEAFF___ctor(CIDOIOIEAFF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,0x1a,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  (__this->fields).super.EGBPMNKKPFI = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,8,(MethodInfo *)0x0);
  return;
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x31D45E8]
// CIDOIOIEAFF$$DFBPBPPNIBC @ RVA 0x31D45E8

bool CIDOIOIEAFF__DFBPBPPNIBC(CIDOIOIEAFF_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  if (LDOOMGABFME != (JMIFGHKOLCL_o *)0x0) {
    return *(int *)&(__this->fields).super.field_0x5c <= (LDOOMGABFME->fields).DJCKADHHMAC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override CNIGOFCKBGI GOGPCNMIJOB()  [RVA 0x31D460C]
// CIDOIOIEAFF$$GOGPCNMIJOB @ RVA 0x31D460C

CNIGOFCKBGI_o * CIDOIOIEAFF__GOGPCNMIJOB(CIDOIOIEAFF_o *__this,MethodInfo *method)

{
  int32_t HEHMPFLAEGE;
  CIDOIOIEAFF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  DPDDOKKMMOM_o *pDVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d44c0 with catch @ 032d460c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d44bc with catch @ 032d4610
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d44ac with catch @ 032d4614
                        */
  if ((DAT_04566ccd & 1) == 0) {
                    /* try { // try from 032d462c to 033d462f has its CatchHandler @ 032d4650 */
                    /* try { // try from 032d4630 to 033d4657 has its CatchHandler @ 032d43a4 */
    FUN_01bab630(&CIDOIOIEAFF_TypeInfo);
    DAT_04566ccd = 1;
    method = extraout_x1;
  }
  pDVar1 = (__this->fields).super.super.HIJMBHIMFBB;
  if (pDVar1 != (DPDDOKKMMOM_o *)0x0) {
    HEHMPFLAEGE = (__this->fields).super.JGJNBILDCHK;
                    /* catch() { ... } // from try @ 032d462c with catch @ 032d4650 */
    AHDGNOJPPIB = (pDVar1->fields).DMLGJFCNNJF;
                    /* try { // try from 032d4658 to 033d465f has its CatchHandler @ 032d4674 */
    __this_00 = (CIDOIOIEAFF_o *)thunk_FUN_01bda818(CIDOIOIEAFF_TypeInfo,method);
                    /* try { // try from 032d4660 to 033d466b has its CatchHandler @ 032d43a4 */
    CIDOIOIEAFF___ctor(__this_00,AHDGNOJPPIB,HEHMPFLAEGE,in_x3);
                    /* try { // try from 032d466c to 033d4673 has its CatchHandler @ 032d4674 */
    if (__this_00 != (CIDOIOIEAFF_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d4658 with catch @ 032d4674
                       catch(type#2 @ 00000000) { ... } // from try @ 032d466c with catch @ 032d4674
                        */
      (__this_00->fields).super.super.KHKEGAKGNCN = (__this->fields).super.super.KHKEGAKGNCN;
      return (CNIGOFCKBGI_o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

