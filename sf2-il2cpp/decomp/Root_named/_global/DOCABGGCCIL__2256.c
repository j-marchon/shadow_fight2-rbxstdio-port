// TypeDefIndex 2256
// Namespace: 
// public class DOCABGGCCIL
// Fields:
//   public DOCABGGCCIL.CMPODLBABAB NOBEFHEECKJ; // 0x10
//   public bool EDCFFINCGFA; // 0x14
//   public bool JGPCHLGAPJD; // 0x15

// ===== public virtual void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32FDFFC]
// DOCABGGCCIL$$HNIHOIAMDPC @ RVA 0x32FDFFC

void DOCABGGCCIL__HNIHOIAMDPC
               (DOCABGGCCIL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
                    /* try { // try from 033fe00c to 034fe013 has its CatchHandler @ 033fe148 */
                    /* try { // try from 033fe014 to 034fe023 has its CatchHandler @ 033fe144 */
  if ((DAT_04567706 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12114/*"ShowReward"*/);
                    /* try { // try from 033fe02c to 034fe033 has its CatchHandler @ 033fe140 */
    FUN_01bab630(&StringLiteral_5485/*"Drop"*/);
    DAT_04567706 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033fe044 to 034fe04b has its CatchHandler @ 033fe13c */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 033fe050 to 034fe057 has its CatchHandler @ 033fe138 */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_5485/*"Drop"*/,(MethodInfo *)0x0);
                    /* try { // try from 033fe068 to 034fe06f has its CatchHandler @ 033fe134 */
                    /* try { // try from 033fe070 to 034fe09f has its CatchHandler @ 033fe164 */
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
      (__this->fields).EDCFFINCGFA = bVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_12114/*"ShowReward"*/,(MethodInfo *)0x0);
                    /* try { // try from 033fe0ac to 034fe0ef has its CatchHandler @ 033fe160 */
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
        (__this->fields).JGPCHLGAPJD = bVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32FE0CC]
// DOCABGGCCIL$$.ctor @ RVA 0x32FE0CC

void DOCABGGCCIL___ctor(DOCABGGCCIL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

