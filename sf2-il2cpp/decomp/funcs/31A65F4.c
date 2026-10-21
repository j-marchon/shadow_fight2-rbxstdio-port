// ICCLONHCNBL$$.ctor @ RVA 0x31A65F4

void ICCLONHCNBL___ctor(ICCLONHCNBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
                    /* try { // try from 032a6600 to 033a6603 has its CatchHandler @ 032a6614 */
                    /* catch() { ... } // from try @ 032a6600 with catch @ 032a6614 */
  if ((DAT_04566b11 & 1) == 0) {
                    /* try { // try from 032a661c to 033a6683 has its CatchHandler @ 032a6698 */
    FUN_01bab630(&StringLiteral_1);
    DAT_04566b11 = 1;
  }
  (__this->fields).FHPNAJENHNG = StringLiteral_1;
  thunk_FUN_01c20e04();
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x17,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032a6670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

