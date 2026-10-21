// TypeDefIndex 614
// Namespace: 
// public class FFKCANJCNJM : BOFEMGGNODC
// Fields:
//   private string DEKCPPOJFEH; // 0x68
//   private int GCHDBFJPGFJ; // 0x70

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x35C2254]
// FFKCANJCNJM$$HNIHOIAMDPC @ RVA 0x35C2254

void FFKCANJCNJM__HNIHOIAMDPC
               (FFKCANJCNJM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568f3a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
                    /* try { // try from 036c228c to 037c2293 has its CatchHandler @ 036c2334 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 036c2294 to 037c22c3 has its CatchHandler @ 036c1f98 */
    DAT_04568f3a = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 036c22c4 to 037c22c7 has its CatchHandler @ 036c2350 */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 036c22c8 to 037c22cf has its CatchHandler @ 036c2348 */
                    /* try { // try from 036c22d0 to 037c22d7 has its CatchHandler @ 036c2344 */
                    /* try { // try from 036c22d8 to 037c22df has its CatchHandler @ 036c2340 */
                    /* try { // try from 036c22e0 to 037c22e7 has its CatchHandler @ 036c233c */
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 036c22e8 to 037c22ef has its CatchHandler @ 036c2338 */
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 036c22f0 to 037c22f3 has its CatchHandler @ 036c2330 */
                    /* try { // try from 036c22f4 to 037c22fb has its CatchHandler @ 036c2324 */
      (__this->fields).DEKCPPOJFEH = pSVar4;
                    /* try { // try from 036c22fc to 037c22ff has its CatchHandler @ 036c231c */
      thunk_FUN_01c20e04();
                    /* try { // try from 036c2300 to 037c2303 has its CatchHandler @ 036c2318 */
                    /* try { // try from 036c2304 to 037c2307 has its CatchHandler @ 036c2314 */
                    /* try { // try from 036c2308 to 037c236b has its CatchHandler @ 036c1f98 */
                    /* catch() { ... } // from try @ 036c2180 with catch @ 036c230c */
                    /* catch() { ... } // from try @ 036c21dc with catch @ 036c2310 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 036c2304 with catch @ 036c2314 */
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 036c2300 with catch @ 036c2318 */
                    /* catch() { ... } // from try @ 036c22fc with catch @ 036c231c */
                    /* catch() { ... } // from try @ 036c2184 with catch @ 036c2320 */
                    /* catch() { ... } // from try @ 036c22f4 with catch @ 036c2324 */
                    /* catch() { ... } // from try @ 036c2114 with catch @ 036c2328 */
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036c2244 with catch @ 036c232c */
                    /* catch() { ... } // from try @ 036c22f0 with catch @ 036c2330 */
                    /* catch() { ... } // from try @ 036c228c with catch @ 036c2334 */
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036c22e8 with catch @ 036c2338 */
        (__this->fields).GCHDBFJPGFJ = iVar1;
                    /* catch() { ... } // from try @ 036c22e0 with catch @ 036c233c */
                    /* catch() { ... } // from try @ 036c22d8 with catch @ 036c2340 */
                    /* catch() { ... } // from try @ 036c22d0 with catch @ 036c2344 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036c22c8 with catch @ 036c2348 */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x35C234C]
// FFKCANJCNJM$$MAHFCKJGBPP @ RVA 0x35C234C

void FFKCANJCNJM__MAHFCKJGBPP(FFKCANJCNJM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Map_MapScene_o *__this_00;
  
                    /* catch() { ... } // from try @ 036c20c4 with catch @ 036c234c */
                    /* catch() { ... } // from try @ 036c22c4 with catch @ 036c2350 */
                    /* catch() { ... } // from try @ 036c20a8 with catch @ 036c2354 */
                    /* try { // try from 036c236c to 037c236f has its CatchHandler @ 036c2390 */
                    /* try { // try from 036c2370 to 037c2397 has its CatchHandler @ 036c1f98 */
  if ((DAT_04568f3b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
                    /* catch() { ... } // from try @ 036c236c with catch @ 036c2390 */
    DAT_04568f3b = 1;
  }
                    /* try { // try from 036c2398 to 037c239f has its CatchHandler @ 036c23b4 */
                    /* try { // try from 036c23a0 to 037c23ab has its CatchHandler @ 036c1f98 */
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
                    /* try { // try from 036c23ac to 037c23b3 has its CatchHandler @ 036c23b4 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 036c2398 with catch @ 036c23b4
                       catch() { ... } // from try @ 036c23ac with catch @ 036c23b4 */
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapScene__GotoZoneByName
              (__this_00,(__this->fields).DEKCPPOJFEH,(__this->fields).GCHDBFJPGFJ,(MethodInfo *)0x0
              );
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x35C2438]
// FFKCANJCNJM$$.ctor @ RVA 0x35C2438

void FFKCANJCNJM___ctor(FFKCANJCNJM_o *__this,MethodInfo *method)

{
  if ((DAT_04568f3c & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568f3c = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

