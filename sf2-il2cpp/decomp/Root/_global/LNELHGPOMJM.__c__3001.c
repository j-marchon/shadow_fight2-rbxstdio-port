// TypeDefIndex 3001
// Namespace: 
// [Serializable]
// private sealed class LNELHGPOMJM.<>c
// Fields:
//   public static readonly LNELHGPOMJM.<>c <>9; // 0x0
//   public static Func<XmlNode, bool> <>9__0_0; // 0x8

// ===== internal bool NDKGAMBJAKG(XmlNode x)  [RVA 0x34A7744]
// LNELHGPOMJM.<>c$$NDKGAMBJAKG @ RVA 0x34A7744

bool LNELHGPOMJM_<>c__NDKGAMBJAKG
               (LNELHGPOMJM___c_o *__this,System_Xml_XmlNode_o *x,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if ((DAT_045684fc & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    __this = (LNELHGPOMJM___c_o *)FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_045684fc = 1;
  }
  if (x != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(x->klass->vtable)._16_get_Attributes.methodPtr)
                       (x,(x->klass->vtable)._16_get_Attributes.method);
    __this = (LNELHGPOMJM___c_o *)0x0;
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      bVar1 = false;
      if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 035a77b0 to 036a77d7 has its CatchHandler @ 035a7eb8 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(x->klass->vtable)._16_get_Attributes.methodPtr)
                           (x,(x->klass->vtable)._16_get_Attributes.method);
        __this = (LNELHGPOMJM___c_o *)0x0;
        if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_035a77f0;
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        bVar1 = pSVar3 != (System_Xml_XmlAttribute_o *)0x0;
      }
      return bVar1;
    }
  }
LAB_035a77f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x34A77F4]
// LNELHGPOMJM.<>c$$.cctor @ RVA 0x34A77F4

void LNELHGPOMJM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
                    /* try { // try from 035a780c to 036a7837 has its CatchHandler @ 035a7eb0 */
  if ((DAT_045684fd & 1) == 0) {
    FUN_01bab630(&LNELHGPOMJM_<>c_TypeInfo);
    DAT_045684fd = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(LNELHGPOMJM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  LNELHGPOMJM_<>c_TypeInfo->static_fields->__9 = (LNELHGPOMJM___c_o *)__this;
  thunk_FUN_01c20e04(LNELHGPOMJM_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x34A785C]
// LNELHGPOMJM.<>c$$.ctor @ RVA 0x34A785C

void LNELHGPOMJM_<>c___ctor(LNELHGPOMJM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

