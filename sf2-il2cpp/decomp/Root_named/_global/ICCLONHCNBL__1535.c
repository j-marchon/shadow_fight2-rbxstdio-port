// TypeDefIndex 1535
// Namespace: 
// public class ICCLONHCNBL : Rule
// Fields:
//   private string FHPNAJENHNG; // 0x58

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31A6550]
// ICCLONHCNBL$$HNIHOIAMDPC @ RVA 0x31A6550

void ICCLONHCNBL__HNIHOIAMDPC
               (ICCLONHCNBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566b10 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2799/*"Alias"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b10 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 032a65bc to 033a65bf has its CatchHandler @ 032a65e8 */
                    /* try { // try from 032a65c0 to 033a65c7 has its CatchHandler @ 032a65e4 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_2799/*"Alias"*/,(MethodInfo *)0x0);
                    /* try { // try from 032a65c8 to 033a65cb has its CatchHandler @ 032a6320 */
                    /* try { // try from 032a65cc to 033a65cf has its CatchHandler @ 032a65d8 */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).FHPNAJENHNG;
                    /* try { // try from 032a65d0 to 033a65ff has its CatchHandler @ 032a6320 */
      *ppSVar2 = pSVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a65cc with catch @ 032a65d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a6514 with catch @ 032a65dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a64c4 with catch @ 032a65e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a65c0 with catch @ 032a65e4
                        */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a65bc with catch @ 032a65e8
                        */
  FUN_01bab8c8();
}


// ===== public string GIMBGOMDHOH()  [RVA 0x31A65EC]
// ICCLONHCNBL$$GIMBGOMDHOH @ RVA 0x31A65EC

System_String_o * ICCLONHCNBL__GIMBGOMDHOH(ICCLONHCNBL_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a6468 with catch @ 032a65ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a640c with catch @ 032a65f0
                        */
  return (__this->fields).FHPNAJENHNG;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31A65F4]
// ICCLONHCNBL$$.ctor @ RVA 0x31A65F4

void ICCLONHCNBL___ctor(ICCLONHCNBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
                    /* try { // try from 032a6600 to 033a6603 has its CatchHandler @ 032a6614 */
                    /* catch() { ... } // from try @ 032a6600 with catch @ 032a6614 */
  if ((DAT_04566b11 & 1) == 0) {
                    /* try { // try from 032a661c to 033a6683 has its CatchHandler @ 032a6698 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b11 = 1;
  }
  (__this->fields).FHPNAJENHNG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  Rule___ctor((Rule_o *)__this,0x17,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032a6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

