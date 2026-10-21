// TypeDefIndex 1696
// Namespace: 
// public class AOPBMPIONHI : OMNMIEMIMKC
// Fields:
//   private string AKJFBKIHLFO; // 0x18

// ===== public override bool PPBANLLIGDK(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x31D2FB0]
// AOPBMPIONHI$$PPBANLLIGDK @ RVA 0x31D2FB0

bool AOPBMPIONHI__PPBANLLIGDK
               (AOPBMPIONHI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  
                    /* try { // try from 032d2fb0 to 033d2fd3 has its CatchHandler @ 032d4158 */
  if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) &&
     (pHVar2 = (NKCMBEFHFII->fields).PCBECBEFJOI, pHVar2 != (HOOAAGABMBL_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,(__this->fields).AKJFBKIHLFO,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== internal void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x31D2FD8]
// AOPBMPIONHI$$.ctor @ RVA 0x31D2FD8

void AOPBMPIONHI___ctor(AOPBMPIONHI_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566cbd & 1) == 0) {
                    /* try { // try from 032d2ff8 to 033d3003 has its CatchHandler @ 032d4130 */
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_04566cbd = 1;
  }
                    /* try { // try from 032d3010 to 033d301b has its CatchHandler @ 032d410c */
  OMNMIEMIMKC___ctor((OMNMIEMIMKC_o *)__this,1,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                    /* try { // try from 032d304c to 033d3057 has its CatchHandler @ 032d4094 */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).AKJFBKIHLFO;
      *ppSVar2 = pSVar1;
                    /* try { // try from 032d3068 to 033d3093 has its CatchHandler @ 032d4100 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

