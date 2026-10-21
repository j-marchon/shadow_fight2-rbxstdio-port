// HFLNADKHFLG$$BOEHFFCDAJO @ RVA 0x33C2F00

/* WARNING: Removing unreachable block (ram,0x034c3184) */

void HFLNADKHFLG__BOEHFFCDAJO
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttribute_o *JOHFLOEABJL;
  System_String_o *name;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
                    /* try { // try from 034c2f1c to 035c2f43 has its CatchHandler @ 034c3184 */
  if ((DAT_04567ddf & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_04567ddf = 1;
  }
  if ((AELAFOPLMOP == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(AELAFOPLMOP->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AELAFOPLMOP,(AELAFOPLMOP->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034c2f78 to 035c2fb3 has its CatchHandler @ 034c3188 */
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 034c2fbc to 035c2fd7 has its CatchHandler @ 034c30c0 */
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034c2fe8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c2fe8:
                    /* try { // try from 034c2ff0 to 035c2ffb has its CatchHandler @ 034c30d8 */
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 034c2c84 with catch @ 034c30dc */
                    /* catch() { ... } // from try @ 034c2ce0 with catch @ 034c30e0 */
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
                    /* try { // try from 034c30f8 to 035c30fb has its CatchHandler @ 034c3110 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_034c3124;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
                    /* try { // try from 034c2ffc to 035c3087 has its CatchHandler @ 034c2980 */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_034c3048;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3048:
    JOHFLOEABJL = (System_Xml_XmlAttribute_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
                    /* try { // try from 034c3088 to 035c308b has its CatchHandler @ 034c30d4 */
                    /* try { // try from 034c308c to 035c308f has its CatchHandler @ 034c30d0 */
                    /* try { // try from 034c3090 to 035c3093 has its CatchHandler @ 034c30c8 */
                    /* try { // try from 034c3094 to 035c3097 has its CatchHandler @ 034c30c4 */
    name = (System_String_o *)
           (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                     (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
                    /* try { // try from 034c3098 to 035c309b has its CatchHandler @ 034c2980 */
    if (NMONNKBNOCM == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034c309c to 035c309f has its CatchHandler @ 034c30b8 */
                    /* try { // try from 034c30a0 to 035c30a7 has its CatchHandler @ 034c2980 */
                    /* try { // try from 034c30a8 to 035c30ab has its CatchHandler @ 034c30b4 */
                    /* try { // try from 034c30ac to 035c30f7 has its CatchHandler @ 034c2980 */
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(NMONNKBNOCM->klass->vtable)._16_get_Attributes.methodPtr)
                       (NMONNKBNOCM,(NMONNKBNOCM->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 034c30a8 with catch @ 034c30b4 */
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 034c309c with catch @ 034c30b8 */
                    /* catch() { ... } // from try @ 034c2d24 with catch @ 034c30bc */
                    /* catch() { ... } // from try @ 034c2fbc with catch @ 034c30c0 */
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034c3094 with catch @ 034c30c4 */
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 034c3090 with catch @ 034c30c8 */
                    /* catch() { ... } // from try @ 034c2d5c with catch @ 034c30cc */
                    /* catch() { ... } // from try @ 034c308c with catch @ 034c30d0 */
                    /* catch() { ... } // from try @ 034c3088 with catch @ 034c30d4 */
      EIABCPKDEBD__DGPOFACHGMP(NMONNKBNOCM,JOHFLOEABJL,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034c2ff0 with catch @ 034c30d8 */
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
                    /* catch() { ... } // from try @ 034c30f8 with catch @ 034c3110 */
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034c3140;
    }
  }
LAB_034c3124:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034c3140:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* try { // try from 034c3150 to 035c3183 has its CatchHandler @ 034c322c */
  return;
}

