// TypeDefIndex 3406
// Namespace: 
// public class FPLOLKHJIAF : NIAFDKHDBMA
// Fields:
//   private string GMILEGDKKPL; // 0x68

// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3554BB4]
// FPLOLKHJIAF$$HNIHOIAMDPC @ RVA 0x3554BB4

void FPLOLKHJIAF__HNIHOIAMDPC
               (FPLOLKHJIAF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 03654bb4 to 03754bbf has its CatchHandler @ 03654dc4 */
  if ((DAT_04568b60 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10072/*"PackName"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b60 = 1;
  }
  NIAFDKHDBMA__HNIHOIAMDPC((NIAFDKHDBMA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03654c0c to 03754c13 has its CatchHandler @ 03654dfc */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03654c28 to 03754c2b has its CatchHandler @ 03654de8 */
                    /* try { // try from 03654c2c to 03754c37 has its CatchHandler @ 03654df8 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10072/*"PackName"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).GMILEGDKKPL;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03654c48 to 03754c4b has its CatchHandler @ 03654de4 */
                    /* try { // try from 03654c4c to 03754c53 has its CatchHandler @ 03654df4 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string DEHDBCBILKK()  [RVA 0x3554C60]
// FPLOLKHJIAF$$DEHDBCBILKK @ RVA 0x3554C60

System_String_o * FPLOLKHJIAF__DEHDBCBILKK(FPLOLKHJIAF_o *__this,MethodInfo *method)

{
                    /* try { // try from 03654c64 to 03754c6b has its CatchHandler @ 03654dec */
  return (__this->fields).GMILEGDKKPL;
}


// ===== public void .ctor(FPLOLKHJIAF GOAHBPBJCKC)  [RVA 0x3554C68]
// FPLOLKHJIAF$$.ctor @ RVA 0x3554C68

void FPLOLKHJIAF___ctor(FPLOLKHJIAF_o *__this,FPLOLKHJIAF_o *GOAHBPBJCKC,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  NIAFDKHDBMA___ctor((NIAFDKHDBMA_o *)__this,(NIAFDKHDBMA_o *)GOAHBPBJCKC,(MethodInfo *)0x0);
  if (GOAHBPBJCKC != (FPLOLKHJIAF_o *)0x0) {
    ppSVar1 = &(__this->fields).GMILEGDKKPL;
                    /* try { // try from 03654c88 to 03754c8f has its CatchHandler @ 03654dbc */
    *ppSVar1 = (GOAHBPBJCKC->fields).GMILEGDKKPL;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3554CA0]
// FPLOLKHJIAF$$.ctor @ RVA 0x3554CA0

void FPLOLKHJIAF___ctor(FPLOLKHJIAF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
                    /* try { // try from 03654ca0 to 03754ca7 has its CatchHandler @ 03654db8 */
                    /* try { // try from 03654cac to 03754cb3 has its CatchHandler @ 03654db4 */
  NIAFDKHDBMA___ctor((NIAFDKHDBMA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 03654cc4 to 03754ccb has its CatchHandler @ 03654db0 */
  Rule__GNLPNKGBAFL((Rule_o *)__this,0x25,(MethodInfo *)0x0);
                    /* try { // try from 03654ccc to 03754cfb has its CatchHandler @ 03654dcc */
                    /* WARNING: Could not recover jumptable at 0x03654ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

